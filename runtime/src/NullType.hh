#ifndef __NULL_TYPE_HH
#define __NULL_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"

namespace asn1
{

class NullType : public Type
{
public:

   class NullValueType
   {
   public:
      bool operator==(const NullValueType& other) const { return true; }
      bool operator!=(const NullValueType& other) const { return !(*this == other); }
   };

   typedef NullValueType ValueType; // represents NULL type, in fact it is not used anywhere

   // Constructor
   explicit NullType() {}

   // Returns type identifier
   TypeID typeID() const { return NULL_TYPE; }

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType&) const { reader.readNull(*this); }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType&) const { writer.writeNull(*this); }

private:

   DISALLOW_COPY_AND_ASSIGN(NullType);
};

}

#endif // __NULL_TYPE_HH
