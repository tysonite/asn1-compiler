#ifndef __NULL_TYPE_HH
#define __NULL_TYPE_HH

#include <type/Type.hh>
#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>

namespace asn1
{

class NullType : public Type
{
public:

   class NullValueType {};
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
