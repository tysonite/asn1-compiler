#ifndef __SEQUENCE_OF_TYPE_HH
#define __SEQUENCE_OF_TYPE_HH

#include <vector>

#include <type/SequenceType.hh>
#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>

namespace asn1
{

template <typename TypeItemType>
class SequenceOfType : public SequenceType
{
public:

   typedef std::vector<typename TypeItemType::ValueType> ValueType;

   // Constructor
   explicit SequenceOfType(TypeItemType* innerType, uint64_t minSize = 0, uint64_t maxSize = 0)
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

   // Returns reference to inner type
   TypeItemType& innerType() { return *_innerType; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   TypeItemType* _innerType;

   DISALLOW_COPY_AND_ASSIGN(SequenceOfType);
};

template <typename TypeItemType>
void SequenceOfType<TypeItemType>::checkType(const ValueType& value) const
{
   checkSize(value.size());
   for (typename ValueType::const_iterator p = value.begin(); p != value.end(); ++p)
      _innerType->checkType(*p);
}

template <typename TypeItemType>
void SequenceOfType<TypeItemType>::read(ASN1ValueReader& reader, ValueType& value) const
{
   ValueRestorer<ValueType> restorer(value);

   value.clear();
   
   reader.readSequenceOfBegin(*this);
   while (!reader.isSequenceOfEnd(*this))
   {
      typename TypeItemType::ValueType item;
      _innerType->read(reader, item);
      value.push_back(item);
   }
   reader.readSequenceOfEnd(*this);

   restorer.restoreNotNeeded();
}

template <typename TypeItemType>
void SequenceOfType<TypeItemType>::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceOfBegin(*this);
   for (typename ValueType::const_iterator p = value.begin(); p != value.end(); ++p)
      _innerType->write(writer, *p);
   writer.writeSequenceOfEnd();
}

}

#endif // __SEQUENCE_OF_TYPE_HH
