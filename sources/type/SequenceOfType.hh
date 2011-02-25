#ifndef __SEQUENCE_OF_TYPE_HH
#define __SEQUENCE_OF_TYPE_HH

#include <vector>

#include <type/SequenceType.hh>
#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>

namespace asn1
{

template <typename TypeItem, typename TypeItemType>
class SequenceOfType : public SequenceType
{
public:

   typedef typename std::vector<TypeItem> ValueType;

   // Constructor
   explicit SequenceOfType(const TypeItemType* innerType, uint64_t minSize = 0, uint64_t maxSize = 0)
      : SequenceType(minSize, maxSize), _innerType(innerType) {}

   // Destructor
   ~SequenceOfType() { delete _innerType; }

   // Returns type identifier
   TypeID typeID() const { return SEQUENCE_OF_TYPE; }

   // Returns string representation of type
   std::string toString() const
   {
      return SequenceType::toString() + " { " + _innerType->toString() + " }";
   }

   const TypeItemType& innerType() const { return *_innerType; }

   // Checks type parameters for validness
   void checkType(const std::vector<TypeItem>& value) const;

   void read(ASN1ValueReader& reader, std::vector<TypeItem>& value) const;
   void write(ASN1ValueWriter& writer, const std::vector<TypeItem>& value) const;

private:

   const TypeItemType* _innerType;

   DISALLOW_COPY_AND_ASSIGN(SequenceOfType);
};

template <typename TypeItem, typename TypeItemType>
void SequenceOfType<TypeItem, TypeItemType>::checkType(const std::vector<TypeItem>& value) const
{
   checkSize(value.size());
   for (std::vector<TypeItem>::const_iterator p = value.begin(); p != value.end(); ++p)
      _innerType->checkType(*p);
}

template <class TypeItem, class TypeItemType>
void SequenceOfType<TypeItem, TypeItemType>::read(ASN1ValueReader& reader, std::vector<TypeItem>& value) const
{
   ValueRestorer<std::vector<TypeItem> > restorer(value);

   value.clear();
   
   reader.readSequenceOfBegin(*this);
   while (!reader.isSequenceOfEnd(*this))
   {
      TypeItem item;
      _innerType->read(reader, item);
      value.push_back(item);
   }
   reader.readSequenceOfEnd(*this);

   restorer.restoreNotNeeded();
}

template <class TypeItem, class TypeItemType>
void SequenceOfType<TypeItem, TypeItemType>::write(ASN1ValueWriter& writer, const std::vector<TypeItem>& value) const
{
   writer.writeSequenceOfBegin(*this);
   for (typename std::vector<TypeItem>::const_iterator p = value.begin(); p != value.end(); ++p)
      _innerType->write(writer, *p);
   writer.writeSequenceOfEnd();
}

}

#endif // __SEQUENCE_OF_TYPE_HH
