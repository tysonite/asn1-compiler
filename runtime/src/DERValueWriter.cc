#include "DERValueWriter.hh"
#include "OctetStringType.hh"
#include "BitStringType.hh"

namespace asn1
{

// Returns prototype (new instance) of the writer
DERValueWriter* DERValueWriter::_prototype() const
{
   return new DERValueWriter(_buffer);
}

// Writes content octets of the OCTET STRING value
void DERValueWriter::_doWriteOctetString(const OctetString& value, const BERBuffer::BERType& tagType, const OctetStringType& type)
{
   // X.690: 10.2: the constructed form of encoding shall not be used.
   _buffer.encodeIdentifierOctets(type.hasTagNumber() ? type.tagNumber() : tagType,
      BERBuffer::PRIMITIVE_OBJECTYPE, type.tagClass());

   // primitive encoding
   _buffer.encodeLengthOctets(value.size());
   _buffer.reserve(_buffer.size() + value.size());
   _buffer.write(reinterpret_cast<const BERBuffer::ValueType*>(value.data()), value.size());
}

// Write BIT STRING value
void DERValueWriter::_doWriteBitString(const BitString& value, const BitStringType& type)
{
   // X.690: 10.2: the constructed form of encoding shall not be used.
   BERBuffer::SizeType position = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::BITSTRING_BERTYPE,
      BERBuffer::PRIMITIVE_OBJECTYPE, type.tagClass());

   // write actual content bytes
   _doWriteBitStringContent(value);

   // update length of previously written bytes
   _buffer.updateLengthOctets(position);
}

}
