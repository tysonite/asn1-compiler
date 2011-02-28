#ifndef __TYPE_HH
#define __TYPE_HH

#include <string>
#include <limits>

#include <type/TypeCommon.hh>
#include <ber/BERBuffer.hh>
#include <common/Utils.hh>

namespace asn1
{

// Forward declarations
class ASN1ValueReader;
class ASN1ValueWriter;

enum TypeID
{
   NULL_TYPE,
   INTEGER_TYPE,
   BOOLEAN_TYPE,
   OBJECT_IDENTIFIER_TYPE,
   OCTET_STRING_TYPE,
   VISIBLE_STRING_TYPE,
   PRINTABLE_STRING_TYPE,
   CHOICE_TYPE,
   SEQUENCE_TYPE,
   SEQUENCE_OF_TYPE
};

class Type
{
public:
   
   // Constructor
   explicit Type()
      : _taggingType(EMPTY_TAGGING), _tagClass(UNIVERSAL), _tagNumber(-1LL) {}
   
   // Destructor
   virtual ~Type() {}

   // Returns type identifier
   virtual TypeID typeID() const = 0;

   // Returns string representation of type identifier
   std::string typeName() const;

   // Returns string representation of tagging type
   std::string taggingName() const;

   // Returns string representation of tag class
   std::string tagClassName() const;

   // Returns string representation of type
   virtual std::string toString() const;

   enum TaggingType
   {
      IMPLICIT_TAGGING,
      EXPLICIT_TAGGING,
      EMPTY_TAGGING
   };

   bool hasImplicitTagging() const { return _taggingType == IMPLICIT_TAGGING; }
   bool hasExplicitTagging() const { return _taggingType == EXPLICIT_TAGGING; }
   bool hasEmptyTagging() const { return _taggingType == EMPTY_TAGGING; }
   TaggingType tagging() const { return _taggingType; }
   void setTagging(TaggingType tagging) { _taggingType = tagging; }

   enum TagClass
   {
      UNIVERSAL = BERBuffer::UNIVERSAL_CLASSTYPE,
      APPLICATION = BERBuffer::APPLICATION_CLASSTYPE,
      CONTEXT_SPECIFIC = BERBuffer::CONTEXT_CLASSTYPE,
      PRIVATE = BERBuffer::PRIVATE_CLASSTYPE,
   };

   bool hasUniversalClassTag() const { return _tagClass == UNIVERSAL; }
   bool hasApplicationClassTag() const { return _tagClass == APPLICATION; }
   bool hasContextSpecificClassTag() const { return _tagClass == CONTEXT_SPECIFIC; }
   bool hasPrivateClassTag() const { return _tagClass == PRIVATE; }
   TagClass tagClass() const { return _tagClass; }
   void setTagClass(TagClass tagClass) { _tagClass = tagClass; }

   TagType tagNumber() const { return _tagNumber; }
   bool hasTagNumber() const { return _tagNumber >= 0; }
   void setTagNumber(TagType tagNumber) { _tagNumber = tagNumber; }

private:

   TaggingType _taggingType;
   TagClass    _tagClass;
   TagType     _tagNumber;

   DISALLOW_COPY_AND_ASSIGN(Type);
};

template <typename TValue>
class ValueRestorer
{
public:

   ValueRestorer(TValue& value)
      : _value(value), _oldValue(value), _needRestore(true) {}

   ~ValueRestorer()
   { 
      if (_needRestore)
         _value = _oldValue;
   }

   void restoreNotNeeded() { _needRestore = false; }

private:

   TValue& _value;
   TValue  _oldValue;
   bool    _needRestore;

   DISALLOW_COPY_AND_ASSIGN(ValueRestorer);
};

template <typename TFunctor>
class ValueRestorerByFunctor
{
public:

   ValueRestorerByFunctor(TFunctor functor, const typename TFunctor::argument_type& value)
      : _functor(functor), _value(value), _needRestore(true) {}

   // _functor must not throw an exception
   ~ValueRestorerByFunctor()
   {
      if (_needRestore)
         _functor(_value);
   }

   void restoreNotNeeded() { _needRestore = false; }

private:

   TFunctor                         _functor;
   typename TFunctor::argument_type _value;
   bool                             _needRestore;

   DISALLOW_COPY_AND_ASSIGN(ValueRestorerByFunctor);
};

}

#endif // __TYPE_HH
