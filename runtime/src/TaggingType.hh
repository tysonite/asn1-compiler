#ifndef __TAGGING_TYPE_HH
#define __TAGGING_TYPE_HH

#include <functional>

#include "Type.hh"

namespace asn1
{

// Represents an ASN.1 tagged type.
//
// Consider the following examples:
// Type1 ::= [1] INTEGER
// Type2 ::= EXPLICIT VisibleString
template <typename TypeItemType>
class TaggingType : public Type
{
public:

   typedef typename TypeItemType::ValueType ValueType;
   typedef TypeItemType InnerType;

   // Constructor
   explicit TaggingType(TypeItemType* innerType)
      : _innerType(innerType) {}

   // Destructor
   ~TaggingType() { delete _innerType; }

   // Returns type identifier
   TypeID typeID() const { return _innerType->typeID(); }

   // Returns string representation of type
   std::string toString() const { return _innerType->toString(); }

   // Returns reference to inner type
   TypeItemType& innerType() { return *_innerType; }

   // Reads/Writes the value
   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   TypeItemType* _innerType;

   DISALLOW_COPY_AND_ASSIGN(TaggingType);
};

template <typename TypeItemType>
void TaggingType<TypeItemType>::read(ASN1ValueReader& reader, ValueType& value) const
{
   if (hasImplicitTagging())
   {
      // override inner type definition
      ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, TagType> > > tagRestorer(
         std::bind1st(std::mem_fun(&Type::setTagNumber), _innerType),
         _innerType->tagNumber());

      const_cast<TypeItemType*>(_innerType)->setTagNumber(tagNumber());

      ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, TagClass> > > classRestorer(
         std::bind1st(std::mem_fun(&Type::setTagClass), _innerType),
         _innerType->tagClass());

      const_cast<TypeItemType*>(_innerType)->setTagClass(tagClass());

      ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, Type::TaggingType> > > taggingRestorer(
         std::bind1st(std::mem_fun(&Type::setTagging), _innerType),
         _innerType->tagging());

      if (!_innerType->hasExplicitTagging())
         const_cast<TypeItemType*>(_innerType)->setTagging(tagging());
      else
         taggingRestorer.restoreNotNeeded();

      _innerType->read(reader, value);
   }
   else if (hasExplicitTagging() || hasEmptyTagging())
   {
      reader.readExplicitBegin(*this);
      _innerType->read(reader, value);
      reader.readExplicitEnd(*this);
   }
}

template <typename TypeItemType>
void TaggingType<TypeItemType>::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   if (hasImplicitTagging())
   {
      // override inner type definition
      ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, TagType> > > tagRestorer(
         std::bind1st(std::mem_fun(&Type::setTagNumber), _innerType),
         _innerType->tagNumber());

      const_cast<TypeItemType*>(_innerType)->setTagNumber(tagNumber());

      ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, TagClass> > > classRestorer(
         std::bind1st(std::mem_fun(&Type::setTagClass), _innerType),
         _innerType->tagClass());

      const_cast<TypeItemType*>(_innerType)->setTagClass(tagClass());

      ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, Type::TaggingType> > > taggingRestorer(
         std::bind1st(std::mem_fun(&Type::setTagging), _innerType),
         _innerType->tagging());

      if (!_innerType->hasExplicitTagging())
         const_cast<TypeItemType*>(_innerType)->setTagging(tagging());
      else
         taggingRestorer.restoreNotNeeded();

      _innerType->write(writer, value);
   }
   else if (hasExplicitTagging() || hasEmptyTagging())
   {
      writer.writeExplicitBegin(*this);
      _innerType->write(writer, value);
      writer.writeExplicitEnd();
   }
}

}

#endif // __TAGGING_TYPE_HH
