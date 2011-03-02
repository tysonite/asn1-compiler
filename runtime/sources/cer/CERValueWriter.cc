#include <cer/CERValueWriter.hh>

namespace asn1
{

// Returns prototype (new instance) of the writer
CERValueWriter* CERValueWriter::_prototype()
{
   return new CERValueWriter(_buffer);
}

namespace
{
   // [OCTET|VISIBLE|etc] STRING maximum length when writing in chunked mode
   enum { OCTETSTRING_MAX_LENGTH = 1000 };
}

// Writes content octets of the OCTET STRING value
void CERValueWriter::_doWriteOctetString(const OctetString& value, const BERBuffer::BERType& tagType, const OctetStringType& type)
{
   if (value.size() <= OCTETSTRING_MAX_LENGTH) // write as primitive (as in BER)
      BERValueWriter::_doWriteOctetString(value, tagType, type);
   else // write chunked value
   {
      _buffer.encodeIdentifierOctets(tagType, BERBuffer::CONSTRUCTED_OBJECTYPE);
      _buffer.encodeLengthOctets(-1);

      _writeOctetsContentOfOctetStringByChunks(tagType, value, OCTETSTRING_MAX_LENGTH);
   }
}

// Writes [OCTET|VISIBLE|etc] STRING by chunks
void CERValueWriter::_writeOctetsContentOfOctetStringByChunks(uint8_t tag, const OctetString& value, unsigned int maxLength)
{
   BERBuffer::SizeType off = 0, wlen = 0;
   while (off < value.size())
   {
      wlen = value.size() - off;
      if (wlen > maxLength)
         wlen = maxLength;

      _buffer.encodeIdentifierOctets(tag);
      _buffer.encodeLengthOctets(wlen);
      _buffer.write(reinterpret_cast<const BERBuffer::ValueType*>(value.data() + off), wlen);

      off += wlen;
   }

   _buffer.encodeIdentifierOctets(BERBuffer::EOF_BERTYPE);
   _buffer.encodeLengthOctets(0);
}

}
