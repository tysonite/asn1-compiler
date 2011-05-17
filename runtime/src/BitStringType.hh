#ifndef __BIT_STRING_TYPE_HH
#define __BIT_STRING_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"

namespace asn1
{

class BitStringType : public Type
{
public:

   typedef BitString ValueType;

   explicit BitStringType() {}

   // Returns type identifier
   virtual TypeID typeID() const { return BITSTRING_TYPE; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const {}

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);

      reader.readBitString(value, *this);

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeBitString(value, *this);
   }

private:
    
   DISALLOW_COPY_AND_ASSIGN(BitStringType);
};

}

#endif // __BIT_STRING_TYPE_HH
