#ifndef __TAGGING_TYPE_HH
#define __TAGGING_TYPE_HH

#include <type/Type.hh>

namespace asn1
{

template <typename TypeItem, typename TypeItemType>
class TaggingType : public Type
{
public:

   // Constructor
   explicit TaggingType(const TypeItemType* innerType)
      : _innerType(innerType) {}

   // Destructor
   ~TaggingType() { delete _innerType; }

   // Returns type identifier
   TypeID typeID() const { return _innerType->typeID(); }

   // Returns reference to inner type
   const TypeItemType& innerType() const { return *_innerType; }

   void read(ASN1ValueReader& reader, TypeItem& value) const
   {
      if (hasExplicitTagging() || hasEmptyTagging())
         reader.readExplicitBegin(*this);

      _innerType->read(reader, value);

      if (hasExplicitTagging() || hasEmptyTagging())
         reader.readExplicitEnd(*this);
   }

   void write(ASN1ValueWriter& writer, const TypeItem& value) const
   {
      if (hasImplicitTagging())
      {
         // override inner type definition
         const_cast<TypeItemType*>(_innerType)->setTagNumber(tagNumber());
         const_cast<TypeItemType*>(_innerType)->setTagClass(tagClass());
         if (!_innerType->hasExplicitTagging())
            const_cast<TypeItemType*>(_innerType)->setTagging(tagging());

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
