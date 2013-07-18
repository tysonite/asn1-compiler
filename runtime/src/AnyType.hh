#ifndef __ANY_TYPE_HH
#define __ANY_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"

namespace asn1
{

class AnyType : public Type
{
public:

   typedef OctetString ValueType;

   // Constructor
   explicit AnyType() {}

   // Returns type identifier
   TypeID typeID() const { return ANY_TYPE; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const { /* do nothing */ }

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      reader.readAny(value, *this);
      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeAny(value, *this);
   }
};

}

#endif // __ANY_TYPE_HH
