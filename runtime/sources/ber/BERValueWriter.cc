#include <cassert>

#include <ber/BERValueWriter.hh>
#include <type/Types.hh>

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

      if (value.size() < 2)
         return;

      _buffer.reserve(_buffer.size() + value.size());
      _buffer.put((value[0] * 40 + value[1]) & 0x00FF);
      for (ObjectIdentifier::size_type i = 2; i < value.size(); ++i)
         _buffer.encodeInteger(value[i]);

      _buffer.updateLengthOctets(position);
   }
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
      _doWriteOctetString(value, BERBuffer::VISIBLESTRING_BERTYPE, type);
}

// Writes PRINTABLE STRING value
void BERValueWriter::writePrintableString(const OctetString& value, const PrintableStringType& type)
{
   if (_nestedWriter)
      _nestedWriter->writePrintableString(value, type);
   else
      _doWriteOctetString(value, BERBuffer::PRINTABLESTRING_BERTYPE, type);
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

void BERValueWriter::writeSequenceEnd()
{
   _writeLastCompositionEnd();
}

void BERValueWriter::writeSequenceOfBegin(const SequenceType& type)
{
   writeSequenceBegin(type);
}

void BERValueWriter::writeSequenceOfEnd()
{
   writeSequenceEnd();
}

// Writes SET value
void BERValueWriter::writeSetBegin()
{
   if (_nestedWriter)
      _nestedWriter->writeSetBegin();
   else
   {
      assert(_compositionStart == 0);
      _compositionStart = _buffer.encodeIL(BERBuffer::SET_BERTYPE, BERBuffer::CONSTRUCTED_OBJECTYPE);
      _nestedWriter = _prototype();
   }
}

void BERValueWriter::writeSetEnd()
{
   _writeLastCompositionEnd();
}

// Writes SET OF value
void BERValueWriter::writeSetOfBegin()
{
   writeSetBegin();
}

void BERValueWriter::writeSetOfEnd()
{
   writeSetEnd();
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

// Writes INTEGER value
void BERValueWriter::_doWriteInteger(const Integer& value)
{
   Integer tmpValue = (value >= 0 ? value : ~value);
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
   tmpValue = value;
   for (BERBuffer::SizeType i = valueLength; i > 0; --i)
   {
      _buffer.put(bufferSize + (i - 1), tmpValue & 0xFF);
      tmpValue >>= 8;
   }
}

// Writes SEQUENCE/SET value end
// Returns true if last nested SEQUENCE/SET value end was written, otherwise returns false
bool BERValueWriter::_writeLastCompositionEnd()
{
   if (_nestedWriter)
   {
      if (_nestedWriter->_writeLastCompositionEnd())
         return true;

      delete _nestedWriter;
      _nestedWriter = NULL;

      // update length of composition
      assert(_compositionStart > 0);
      _buffer.updateLengthOctets(_compositionStart);
      _compositionStart = 0;
      return true;
   }

   return false;
}

}
