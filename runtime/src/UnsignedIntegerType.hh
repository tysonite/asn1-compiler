#ifndef __UNSIGNED_INTEGER_TYPE_HH
#define __UNSIGNED_INTEGER_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"
#include "ValueConstraintsHolder.hh"

namespace asn1
{

class UnsignedIntegerType : public Type, public ValueConstraintsHolder<UnsignedInteger>
{
public:

   typedef UnsignedInteger ValueType;

   // Constructor
   explicit UnsignedIntegerType(const ValueType& defaultValue = 0, bool hasDefault = false)
      : ValueConstraintsHolder<ValueType>(*this, 0, 0), _defaultValue(defaultValue),
      _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return INTEGER_TYPE; }

   const ValueType& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      reader.readUnsignedInteger(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeUnsignedInteger(value, *this);
   }

private:

   ValueType _defaultValue;
   bool      _hasDefault;

private:

   DISALLOW_COPY_AND_ASSIGN(UnsignedIntegerType);
};

}

#endif // __UNSIGNED_INTEGER_TYPE_HH
