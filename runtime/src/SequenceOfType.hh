#ifndef __SEQUENCE_OF_TYPE_HH
#define __SEQUENCE_OF_TYPE_HH

#include <vector>

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "BaseSequenceOfType.hh"

namespace asn1
{

template <typename TypeItemType>
class SequenceOfType : public BaseSequenceOfType
{
public:

   typedef std::vector<typename TypeItemType::ValueType> ValueType;
   typedef TypeItemType InnerType;

   // Constructor
   explicit SequenceOfType(TypeItemType* innerType, uint64_t minSize = 0, uint64_t maxSize = 0)
      : BaseSequenceOfType(minSize, maxSize), _innerType(innerType) {}

   // Destructor
   ~SequenceOfType() { delete _innerType; }

   // Returns string representation of type
   std::string toString() const
   {
      return BaseSequenceOfType::toString() + " { " + _innerType->toString() + " }";
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

   // clear previous values
   value.clear();

   // allocate space for value depending on minimal size
   if (hasMinSize())
      value.reserve(static_cast<typename ValueType::size_type>(minSize()));

   // perform read of components
   reader.readSequenceOfBegin(*this);
   while (!reader.isSequenceOfEnd(*this))
   {
      typename TypeItemType::ValueType item;
      _innerType->read(reader, item);
      value.push_back(item);
   }
   reader.readSequenceOfEnd(*this);

   // do not restore value if reading completed without exceptions
   restorer.restoreNotNeeded();
}

template <typename TypeItemType>
void SequenceOfType<TypeItemType>::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceOfBegin(*this);
   for (typename ValueType::const_iterator p = value.begin(); p != value.end(); ++p)
      _innerType->write(writer, *p);
   writer.writeSequenceOfEnd(*this);
}

}

#endif // __SEQUENCE_OF_TYPE_HH
