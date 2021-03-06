#ifndef __CER_VALUE_WRITER_HH
#define __CER_VALUE_WRITER_HH

#include "BERValueWriter.hh"

namespace asn1
{

class CERValueWriter : public BERValueWriter
{
public:
   explicit CERValueWriter(BERBuffer& buffer)
      : BERValueWriter(buffer) {}

protected:

   // Returns prototype (new instance) of the writer
   CERValueWriter* _prototype();

   // Writes OCTET STRING value
   void _doWriteOctetString(const OctetString& value, const BERBuffer::BERType& tagType,
      const OctetStringType& type);

private:

   // Writes [OCTET|VISIBLE|etc] STRING by chunks
   void _writeOctetsContentOfOctetStringByChunks(uint8_t tag, const OctetString& value,
      const BERBuffer::SizeType& maxLength);

   DISALLOW_COPY_AND_ASSIGN(CERValueWriter);
};

}

#endif // __CER_VALUE_WRITER_HH
