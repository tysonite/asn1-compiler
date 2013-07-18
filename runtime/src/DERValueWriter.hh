#ifndef __DER_VALUE_WRITER_HH
#define __DER_VALUE_WRITER_HH

#include "BERValueWriter.hh"

namespace asn1
{

class DERValueWriter : public BERValueWriter
{
public:

   // Constructor
   explicit DERValueWriter(BERBuffer& buffer)
      : BERValueWriter(buffer) {}

protected:

   // Returns prototype (new instance) of the writer
   DERValueWriter* _prototype() const;

   // Writes OCTET STRING value
   void _doWriteOctetString(const OctetString& value, const BERBuffer::BERType& tagType, const OctetStringType& type);

   // Write BIT STRING value
   void _doWriteBitString(const BitString& value, const BitStringType& type);

private:

   DISALLOW_COPY_AND_ASSIGN(DERValueWriter);
};

}

#endif // __DER_VALUE_WRITER_HH
