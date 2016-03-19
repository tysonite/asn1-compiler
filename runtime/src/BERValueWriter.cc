#include <cassert>

#include "BERValueWriter.hh"
#include "Types.hh"

namespace asn1
{

// Writes BOOLEAN value
void BERValueWriter::writeBoolean(const Boolean& value, const BooleanType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeBoolean(value, type);
   else
   {
      _buffer.encodeIdentifierOctets(type.hasTagNumber() ? type.tagNumber() : BERBuffer::BOOLEAN_BERTYPE,
         ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
         type.tagClass());

      _buffer.encodeLengthOctets(1);
      _buffer.put(value ? 0xFF : 0);
   }
}

// Writes INTEGER value
void BERValueWriter::writeInteger(const Integer& value, const IntegerType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeInteger(value, type);
   else
   {
      BERBuffer::SizeType position = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::INTEGER_BERTYPE,
         ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
         type.tagClass());

      _doWriteInteger(value);
      _buffer.updateLengthOctets(position);
   }
}

void BERValueWriter::writeUnsignedInteger(const UnsignedInteger& value, const UnsignedIntegerType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeUnsignedInteger(value, type);
   else
   {
      BERBuffer::SizeType position = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::INTEGER_BERTYPE,
         ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
         type.tagClass());

      _doWriteInteger(value);
      _buffer.updateLengthOctets(position);
   }
}

#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
void BERValueWriter::writeBigInteger(const BigInteger& value, const BigIntegerType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeBigInteger(value, type);
   else
   {
      BERBuffer::SizeType position = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::INTEGER_BERTYPE,
         ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
         type.tagClass());

      _doWriteInteger(value);
      _buffer.updateLengthOctets(position);
   }
}
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT

// Writes ENUMERATED value
void BERValueWriter::writeEnumerated(const Integer& value, const EnumeratedType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeEnumerated(value, type);
   else
   {
      BERBuffer::SizeType position = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::ENUMERATED_BERTYPE,
         ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
         type.tagClass());

      _doWriteInteger(value);
      _buffer.updateLengthOctets(position);
   }
}

// Writes OBJECT IDENTIFIER value
void BERValueWriter::writeObjectIdentifier(const ObjectIdentifier& value, const ObjectIdentifierType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeObjectIdentifier(value, type);
   else
   {
      BERBuffer::SizeType position = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::OBJECTID_BERTYPE,
         ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
         type.tagClass());

      assert(value.size() >= 2);

      _buffer.reserve(_buffer.size() + value.size());
      _buffer.put((value[0] * 40 + value[1]) & 0x00FF);
      for (ObjectIdentifier::size_type i = 2; i < value.size(); ++i)
         _buffer.encodeUnsignedInteger(value[i]);

      _buffer.updateLengthOctets(position);
   }
}

// Writes BIT STRING value
void BERValueWriter::writeBitString(const BitString& value, const BitStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeBitString(value, type);
   else
      _doWriteBitString(value, type);
}

// Writes NULL value
void BERValueWriter::writeNull(const NullType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeNull(type);
   else
   {
      _buffer.encodeIdentifierOctets(type.hasTagNumber() ? type.tagNumber() : BERBuffer::NULL_BERTYPE,
         ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
         type.tagClass());
      _buffer.encodeLengthOctets(0);
   }
}

// Writes OCTET STRING value
void BERValueWriter::writeOctetString(const OctetString& value, const OctetStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeOctetString(value, type);
   else
      _doWriteOctetString(value, BERBuffer::OCTETSTRING_BERTYPE, type);
}

// Writes VISIBLE STRING value
void BERValueWriter::writeVisibleString(const OctetString& value, const VisibleStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeVisibleString(value, type);
   else
   {
      if (type.typeID() == VISIBLE_STRING_TYPE)
         _doWriteOctetString(value, BERBuffer::VISIBLESTRING_BERTYPE, type);
      else if (type.typeID() == GENERALIZED_TIME_TYPE)
         _doWriteOctetString(value, BERBuffer::GENERALTIME_BERTYPE, type);
      else
         assert(false); // not supported other derived types (not needed at all?)
   }
}

// Writes GRAPHIC STRING value
void BERValueWriter::writeGraphicString(const OctetString& value, const GraphicStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeGraphicString(value, type);
   else
      _doWriteOctetString(value, BERBuffer::GRAPHICSTRING_BERTYPE, type);
}

// Writes PRINTABLE STRING value
void BERValueWriter::writePrintableString(const OctetString& value, const PrintableStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writePrintableString(value, type);
   else
      _doWriteOctetString(value, BERBuffer::PRINTABLESTRING_BERTYPE, type);
}

// Writes TELETEX STRING value
void BERValueWriter::writeTeletexString(const OctetString& value, const TeletexStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeTeletexString(value, type);
   else
      _doWriteOctetString(value, BERBuffer::TELETEXSTRING_BERTYPE, type);
}

// Writes NUMERIC STRING value
void BERValueWriter::writeNumericString(const OctetString& value, const NumericStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeNumericString(value, type);
   else
      _doWriteOctetString(value, BERBuffer::NUMERICSTRING_BERTYPE, type);
}

// Writes IA5 STRING value
void BERValueWriter::writeIA5String(const OctetString& value, const IA5StringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeIA5String(value, type);
   else
      _doWriteOctetString(value, BERBuffer::IA5STRING_BERTYPE, type);
}

// Writes UTC TIME value
void BERValueWriter::writeUtcTime(const OctetString& value, const UTCTimeType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeUtcTime(value, type);
   else
      _doWriteOctetString(value, BERBuffer::UTCTIME_BERTYPE, type);
}

// Writes ANY value
void BERValueWriter::writeAny(const OctetString& value, const AnyType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeAny(value, type);
   else // value must be a valid BER-encoded data
   {
      assert(value.size() >= 2); // simple check for validness of the ANY value.
                                 // i.e.: NULL type value can be represented as 2 octets,
                                 // it is a minimal encoding case
      _buffer.write(reinterpret_cast<const BERBuffer::ValueType*>(value.data()), value.size());
   }
}

// Writes SEQUENCE value
void BERValueWriter::writeSequenceBegin(const SequenceType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeSequenceBegin(type);
   else
   {
      assert(_compositionStart == 0);
      _compositionStart = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::SEQUENCE_BERTYPE,
         BERBuffer::CONSTRUCTED_OBJECTYPE, type.tagClass());

      _nestedWriter = _prototype();
   }
}

void BERValueWriter::writeSequenceEnd(const SequenceType& type)
{
   _writeLastCompositionEnd();
}

void BERValueWriter::writeSequenceOfBegin(const BaseSequenceOfType& type)
{
   writeSequenceBegin(type);
}

void BERValueWriter::writeSequenceOfEnd(const BaseSequenceOfType& type)
{
   writeSequenceEnd(type);
}

// Writes SET value
void BERValueWriter::writeSetBegin(const SetType& type)
{
   if (_nestedWriter)
      _nestedWriter->writeSetBegin(type);
   else
   {
      assert(_compositionStart == 0);
      _compositionStart = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::SET_BERTYPE,
         BERBuffer::CONSTRUCTED_OBJECTYPE, type.tagClass());

      _nestedWriter = _prototype();
   }
}

void BERValueWriter::writeSetEnd(const SetType& type)
{
   _writeLastCompositionEnd();
}

// Writes SET OF value
void BERValueWriter::writeSetOfBegin(const BaseSetOfType& type)
{
   writeSetBegin(type);
}

void BERValueWriter::writeSetOfEnd(const BaseSetOfType& type)
{
   writeSetEnd(type);
}

// Writes EXPLICIT tag
void BERValueWriter::writeExplicitBegin(const Type& type)
{
   if (_nestedWriter)
      _nestedWriter->writeExplicitBegin(type);
   else
   {
      assert(_compositionStart == 0);
      assert(type.hasTagNumber() && (type.hasExplicitTagging() || type.hasEmptyTagging()));

      _compositionStart = _buffer.encodeIL(type.tagNumber(), BERBuffer::CONSTRUCTED_OBJECTYPE, type.tagClass());
      _nestedWriter = _prototype();
   }
}

void BERValueWriter::writeExplicitEnd()
{
   _writeLastCompositionEnd();
}

// Returns prototype (new instance) of the writer
BERValueWriter* BERValueWriter::_prototype() const
{
   return new BERValueWriter(_buffer);
}

// Writes OCTET STRING value
void BERValueWriter::_doWriteOctetString(const OctetString& value, const BERBuffer::BERType& tagType, const OctetStringType& type)
{
   _buffer.encodeIdentifierOctets(type.hasTagNumber() ? type.tagNumber() : tagType,
      ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
      type.tagClass());

   // primitive encoding
   _buffer.encodeLengthOctets(value.size());
   _buffer.reserve(_buffer.size() + value.size());
   _buffer.write(reinterpret_cast<const BERBuffer::ValueType*>(value.data()), value.size());
}

// Write BIT STRING value
void BERValueWriter::_doWriteBitString(const BitString& value, const BitStringType& type)
{
   BERBuffer::SizeType position = _buffer.encodeIL(type.hasTagNumber() ? type.tagNumber() : BERBuffer::BITSTRING_BERTYPE,
      ((type.hasTagNumber() && type.hasEmptyTagging()) || type.hasExplicitTagging()) ? BERBuffer::CONSTRUCTED_OBJECTYPE : BERBuffer::PRIMITIVE_OBJECTYPE,
      type.tagClass());

   // write actual content bytes
   _doWriteBitStringContent(value);

   // update length of previously written bytes
   _buffer.updateLengthOctets(position);
}

// Write BIT STRING value content octets
void BERValueWriter::_doWriteBitStringContent(const BitString& value)
{
   _buffer.put(7 & (8 - value.size()));
   for (BitString::size_type i = 0; i < value.size(); i += 8)
   {
      BERBuffer::ValueType b = 0;
      BERBuffer::SizeType l = value.size() - i;
      if (l > 8)
         l = 8;

      for (BitString::size_type j = 0; j < l; ++j)
      {
         if (value[i + j] == true)
            b |= 0x80 >> j;
      }
      _buffer.put(b);
   }
}

// Writes INTEGER value
template <class NumberType>
void BERValueWriter::_doWriteInteger(const NumberType& value)
{
   NumberType tmpValue = (value >= 0 ? value : ~value);
   tmpValue >>= 7;
   uint8_t valueLength = 1;

   // calculate INTEGER value length
   while (tmpValue != 0)
   {
      tmpValue >>= 8;
      ++valueLength;
   }

   // save position and resize buffer
   BERBuffer::SizeType bufferSize = _buffer.size();
   _buffer.resize(bufferSize + valueLength);

   // write INTEGER value
   _doWriteIntegerValue(value, valueLength, bufferSize);
}

template <class NumberType>
void BERValueWriter::_doWriteIntegerValue(const NumberType& value, uint8_t valueLength,
   BERBuffer::SizeType bufferSize)
{
   NumberType tmpValue = value;
   for (BERBuffer::SizeType i = valueLength; i > 0; --i)
   {
      _buffer.put(bufferSize + (i - 1), tmpValue & 0xFF);
      tmpValue >>= 8;
   }
}

#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
template <>
void BERValueWriter::_doWriteIntegerValue<BigInteger>(const BigInteger& value,
   uint8_t valueLength,
   BERBuffer::SizeType bufferSize)
{
   BigInteger tmpValue = value;
   for (BERBuffer::SizeType i = valueLength; i > 0; --i)
   {
      _buffer.put(bufferSize + (i - 1), tmpValue.convert_to<uint8_t>() & 0xFF);
      tmpValue >>= 8;
   }
}
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT

// Writes SEQUENCE/SET value end
// Returns true if last nested SEQUENCE/SET value end was written, otherwise returns false
bool BERValueWriter::_writeLastCompositionEnd()
{
   if (_nestedWriter)
   {
      if (_nestedWriter->_writeLastCompositionEnd())
         return true;

      delete _nestedWriter;
      _nestedWriter = nullptr;

      // update length of composition
      assert(_compositionStart > 0);
      _buffer.updateLengthOctets(_compositionStart);
      _compositionStart = 0;
      return true;
   }

   return false;
}

}
