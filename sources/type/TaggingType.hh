#ifndef __TAGGING_TYPE_HH
#define __TAGGING_TYPE_HH

#include <functional>

#include <type/Type.hh>

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

   // Constructor
   explicit TaggingType(const TypeItemType* innerType)
      : _innerType(innerType) {}

   // Destructor
   ~TaggingType() { delete _innerType; }

   // Returns type identifier
   TypeID typeID() const { return _innerType->typeID(); }

   // Returns reference to inner type
   const TypeItemType& innerType() const { return *_innerType; }

   void read(ASN1ValueReader& reader, ValueType& value) const
   {
      if (hasExplicitTagging() || hasEmptyTagging())
         reader.readExplicitBegin(*this);

      _innerType->read(reader, value);

      if (hasExplicitTagging() || hasEmptyTagging())
         reader.readExplicitEnd(*this);
   }

   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      if (hasImplicitTagging())
      {
         // override inner type definition
         ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, TagType> > > tagRestorer(
            std::bind1st(std::mem_fun(&Type::setTagNumber), const_cast<TaggingType<TypeItemType>*>(this)),
            tagNumber());

         const_cast<TypeItemType*>(_innerType)->setTagNumber(tagNumber());

         ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, TagClass> > > classRestorer(
            std::bind1st(std::mem_fun(&Type::setTagClass), const_cast<TaggingType<TypeItemType>*>(this)),
            tagClass());

         const_cast<TypeItemType*>(_innerType)->setTagClass(tagClass());

         ValueRestorerByFunctor<std::binder1st<std::mem_fun1_t<void, Type, Type::TaggingType> > > taggingRestorer(
            std::bind1st(std::mem_fun(&Type::setTagging), const_cast<TaggingType<TypeItemType>*>(this)),
            tagging());

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
         writer.writeExplicitEnd(*this);
      }
   }

private:

   const TypeItemType* _innerType;

   DISALLOW_COPY_AND_ASSIGN(TaggingType);
};

}

#endif // __TAGGING_TYPE_HH
