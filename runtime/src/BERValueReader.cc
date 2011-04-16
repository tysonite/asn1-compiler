#include "BERValueReader.hh"
#include "BERBuffer.hh"
#include "Types.hh"
#include "Utils.hh"

namespace asn1
{

// Reads BOOLEAN value
void BERValueReader::readBoolean(Boolean& value, const BooleanType& type)
{
   if (_nestedReader)
      _nestedReader->readBoolean(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.decodeIL(tag, pc, cl, length);

      _checkTagIsCorrect(pc, type);
      _checkTagTagging(tag, cl, BERBuffer::BOOLEAN_BERTYPE, type);

      if (length != 1)
         throw BERBufferException("BER " + type.toString() + " length must be equal to 1");

      BERBuffer::ValueType rawValue = _buffer.get();
      if (rawValue == 0xFF)
         value = true;
      else if (rawValue == 0)
         value = false;
      else
         throw BERBufferException("Unexpected content octets of BER " + type.toString());
   }
}

// Reads INTEGER value
void BERValueReader::readInteger(Integer& value, const IntegerType& type)
{
   if (_nestedReader)
      _nestedReader->readInteger(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.setEnd(_buffer.decodeIL(tag, pc, cl, length));

      _checkTagIsCorrect(pc, type);
      _checkTagTagging(tag, cl, BERBuffer::INTEGER_BERTYPE, type);

      if (length == -1) // INTEGER must always have a definite length
         throw BERBufferException("Illegal BER " + type.toString() + " length");
      else if (length == 0)
      {
         value = 0LL;
         return;
      }

      _doReadInteger(value);

      // check received data
      type.checkType(value);
   }
}

// Reads ENUMERATED value
void BERValueReader::readEnumerated(Integer& value, const EnumeratedType& type)
{
   if (_nestedReader)
      _nestedReader->readEnumerated(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.setEnd(_buffer.decodeIL(tag, pc, cl, length));

      _checkTagIsCorrect(pc, type);
      _checkTagTagging(tag, cl, BERBuffer::ENUMERATED_BERTYPE, type);

      _doReadInteger(value);

      // check received data
      type.checkType(value);
   }
}

// Reads OBJECT IDENTIFIER value
void BERValueReader::readObjectIdentifier(ObjectIdentifier& value, const ObjectIdentifierType& type)
{
   if (_nestedReader)
      _nestedReader->readObjectIdentifier(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.setEnd(_buffer.decodeIL(tag, pc, cl, length));

      _checkTagIsCorrect(pc, type);
      _checkTagTagging(tag, cl, BERBuffer::OBJECTID_BERTYPE, type);

      if (length < 1)
         throw BERBufferException("Illegal BER " + type.toString() + " length");

      value.push_back(static_cast<ObjectIdentifier::value_type>(_buffer.get()));
      if (value[0] < 0 || value[0] > 119)
         throw BERBufferException("BER " + type.toString() + " must be in interval [0, 119]");

      value.push_back(value[0] % 40);
      value[0] /= 40;

      while (_buffer.current() < _buffer.end())
         value.push_back(static_cast<ObjectIdentifier::value_type>(_buffer.decodeInteger()));

      _buffer.clearEnd();

      // check received data
      type.checkType(value);
   }
}

// Reads BIT STRING value
void BERValueReader::readBitString(BitString& value, const BitStringType& type)
{
   if (_nestedReader)
      _nestedReader->readBitString(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.setEnd(_buffer.decodeIL(tag, pc, cl, length));

      _checkTagIsCorrect(pc, type);
      _checkTagTagging(tag, cl, BERBuffer::BITSTRING_BERTYPE, type);

      BERBuffer::ValueType b = _buffer.get();
      _buffer.setEnd(_buffer.end() - 1);

      while (_buffer.current() < _buffer.end())
      {
         BERBuffer::ValueType m = _buffer.get();
         for (int i = 0; i < 8; ++i)
         {
            if ((m & (0x80 >> i)) != 0)
               value.push_back(true);
            else
               value.push_back(false);
         }
      }

      // set end of the value
      _buffer.setEnd(_buffer.end() + 1);

      // read last byte
      BERBuffer::ValueType m = _buffer.get();
      for (int i = 0; i < 8 - b; ++i)
      {
         if ((m & (0x80 >> i)) != 0)
            value.push_back(true);
         else
            value.push_back(false);
      }
   }
}

// Reads NULL value
void BERValueReader::readNull(const NullType& type)
{
   if (_nestedReader)
      _nestedReader->readNull(type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.decodeIL(tag, pc, cl, length);

      _checkTagIsCorrect(pc, type);
      _checkTagTagging(tag, cl, BERBuffer::NULL_BERTYPE, type);

      if (length != 0)
         throw BERBufferException("BER " + type.toString() + " length is expected to be equal to 0");
   }
}

// Reads OCTET STRING value
void BERValueReader::readOctetString(OctetString& value, const OctetStringType& type)
{
   if (_nestedReader)
      _nestedReader->readOctetString(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::OCTETSTRING_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Reads VISIBLE STRING value
void BERValueReader::readVisibleString(OctetString& value, const VisibleStringType& type)
{
   if (_nestedReader)
      _nestedReader->readVisibleString(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::VISIBLESTRING_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Reads GRAPHIC STRING value
void BERValueReader::readGraphicString(OctetString& value, const GraphicStringType& type)
{
   if (_nestedReader)
      _nestedReader->readGraphicString(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::GRAPHICSTRING_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Reads PRINTABLE STRING value
void BERValueReader::readPrintableString(OctetString& value, const PrintableStringType& type)
{
   if (_nestedReader)
      _nestedReader->readPrintableString(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::PRINTABLESTRING_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Checks whether component represented by type present or not (usefull for SEQUENCE/SET)
bool BERValueReader::isComponentPresent(const Type& type)
{
   if (_nestedReader)
      return _nestedReader->isComponentPresent(type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.lookupIdentifierOctets(tag, pc, cl);

      if (type.tagClass() == cl)
      {
         if (type.hasTagNumber() && (type.tagNumber() == tag))
            return true;
         else if (!type.hasTagNumber() && type.typeID() == tag)
            return true;
      }

      return false;
   }
}

// Reads SEQUENCE value
void BERValueReader::readSequenceBegin(const SequenceType& type)
{
   if (_nestedReader)
      _nestedReader->readSequenceBegin(type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.decodeIL(tag, pc, cl, length);

      // save position of the sequence end
      _sequenceEndPos = _buffer.current() + static_cast<BERBuffer::SizeType>(length);

      // check tag
      _checkTagTagging(tag, cl, BERBuffer::SEQUENCE_BERTYPE, type);
      if (pc != BERBuffer::CONSTRUCTED_OBJECTYPE)
         throw BERBufferException("BER " + type.toString() + " must be CONSTRUCTED");

      // create reader for nested operations
      _nestedReader = _prototype();
      assert(_nestedReader != NULL);
   }
}

bool BERValueReader::isSequenceEnd(const SequenceType& type)
{
   if (_nestedReader && _nestedReader->_nestedReader != NULL)
      return _nestedReader->isSequenceEnd(type);
   else
      return (_buffer.current() < _sequenceEndPos) ? false : true;
}

void BERValueReader::readSequenceEnd(const SequenceType& type)
{
   assert(_nestedReader != NULL && _sequenceEndPos > 0);

   if (_nestedReader && _nestedReader->_nestedReader != NULL)
      _nestedReader->readSequenceEnd(type);
   else
   {
      delete _nestedReader;
      _nestedReader = NULL;

      if (_sequenceEndPos < _buffer.current())
         throw BERBufferException("More BER " + type.toString() + " items are expected");
   }
}

// Reads SEQUENCE OF value
void BERValueReader::readSequenceOfBegin(const BaseSequenceOfType& type)
{
   readSequenceBegin(type);
}

bool BERValueReader::isSequenceOfEnd(const BaseSequenceOfType& type)
{
   return isSequenceEnd(type);
}

void BERValueReader::readSequenceOfEnd(const BaseSequenceOfType& type)
{
   readSequenceEnd(type);
}

// Reads SET value
void BERValueReader::readSetBegin(const SetType& type)
{
   if (_nestedReader)
      _nestedReader->readSetBegin(type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;
      _buffer.decodeIL(tag, pc, cl, length);

      // save position of the sequence end
      _setEndPos = _buffer.current() + static_cast<BERBuffer::SizeType>(length);

      // check tag
      _checkTagTagging(tag, cl, BERBuffer::SET_BERTYPE, type);
      if (pc != BERBuffer::CONSTRUCTED_OBJECTYPE)
         throw BERBufferException("BER " + type.toString() + " must be CONSTRUCTED");

      // create reader for nested operations
      _nestedReader = _prototype();
      assert(_nestedReader != NULL);
   }
}

bool BERValueReader::isSetEnd(const SetType& type)
{
   if (_nestedReader && _nestedReader->_nestedReader != NULL)
      return _nestedReader->isSetEnd(type);
   else
      return (_buffer.current() < _setEndPos) ? false : true;
}

void BERValueReader::readSetEnd(const SetType& type)
{
   assert(_nestedReader != NULL && _setEndPos > 0);

   if (_nestedReader && _nestedReader->_nestedReader != NULL)
      _nestedReader->readSetEnd(type);
   else
   {
      delete _nestedReader;
      _nestedReader = NULL;

      if (_setEndPos < _buffer.current())
         throw BERBufferException("More BER " + type.toString() + " items are expected");
   }
}

// Reads SET OF value
void BERValueReader::readSetOfBegin(const BaseSetOfType& type)
{
   readSetBegin(type);
}

bool BERValueReader::isSetOfEnd(const BaseSetOfType& type)
{
   return isSetEnd(type);
}

void BERValueReader::readSetOfEnd(const BaseSetOfType& type)
{
   readSetEnd(type);
}

// Reads CHOICE value
void BERValueReader::readChoice(const ChoiceType& type, Type** choosenType)
{
   if (_nestedReader)
      _nestedReader->readChoice(type, choosenType);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.lookupIdentifierOctets(tag, pc, cl);

      const ChoiceType::ChoicesType& types = type.getChoices();
      for (ChoiceType::ChoicesType::const_iterator p = types.begin(); p != types.end(); ++p)
      {
         Type* t = *p;
         if (t->typeID() == CHOICE_TYPE)
         {
            try
            {
               readChoice(*((ChoiceType*) t), choosenType);
               *choosenType = t;
               return;
            }
            catch (...)
            {
               /* Do not process an exception, because it is issued by nested CHOICE,
                  if the type cannot be distingushed.
                  TODO: Find another way to check nested CHOICE.
               */
            }
         }
         else if (t->tagClass() == cl && ((t->hasTagNumber() && t->tagNumber() == tag)
             || (!t->hasTagNumber() && t->typeID() == tag)))
         {
            *choosenType = t;
            return;
         }
      }

      throw BERBufferException("BER " + type.toString() + " is expected");
   }
}

// Reads EXPLICIT tag
void BERValueReader::readExplicitBegin(const Type& type)
{
   assert(type.hasTagNumber() && (type.hasExplicitTagging() || type.hasEmptyTagging()));

   if (_nestedReader)
      _nestedReader->readExplicitBegin(type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      int64_t length;

      _buffer.decodeIL(tag, pc, cl, length);
      if (tag != type.tagNumber() || cl != type.tagClass())
         throw BERBufferException("BER " + type.toString() + " is expected");
      if (pc != BERBuffer::CONSTRUCTED_OBJECTYPE)
         throw BERBufferException("BER " + type.toString() + " must be CONSTRUCTED");
      if (length <= 0)
         throw BERBufferException("BER " + type.toString() + " must contain at least nested indentifier");
   }
}

void BERValueReader::readExplicitEnd(const Type& type)
{
   assert(type.hasTagNumber() && (type.hasExplicitTagging() || type.hasEmptyTagging()));
}

// Returns prototype (new instance) of the reader
BERValueReader* BERValueReader::_prototype() const
{
   return new BERValueReader(_buffer);
}

// Reads and checks OCTET STRING value
void BERValueReader::_readOctetStringOctets(OctetString& value, const OctetStringType& type)
{
   // primitive decoding; TODO: support both primitive and constructed value
   BERBuffer::ContentType rawValue;
   _buffer.decodeContentOctets(rawValue);

   // assign data to temporary variable
   if (rawValue.size())
      value.assign(reinterpret_cast<OctetString::value_type*>(rawValue.data()), rawValue.size());

   // check received data
   type.checkType(value);
}

// Reads INTEGER value
void BERValueReader::_doReadInteger(Integer& value)
{
   bool isFirstByte = true;
   while (_buffer.current() < _buffer.end())
   {
      Integer b = _buffer.get();
      if (isFirstByte)
      {
         value = (b & 0x80) ? ~0LL : 0LL;
         isFirstByte = false;
      }

      value <<= 8;
      value |= static_cast<Integer>(b);
   }

   _buffer.clearEnd();
}

// Checks tag for correctness
void BERValueReader::_checkTagIsCorrect(PCType pc, const Type& type)
{
   if (type.hasTagNumber() && (type.hasExplicitTagging() || type.hasEmptyTagging()))
   {
      if (pc != BERBuffer::CONSTRUCTED_OBJECTYPE)
         throw BERBufferException("BER " + type.toString() + " must be CONSTRUCTED");
   }
   else
   {
      if (pc != BERBuffer::PRIMITIVE_OBJECTYPE)
         throw BERBufferException("BER " + type.toString() + " must be PRIMITIVE");
   }
}

// Checks tag for tagging (IMPLICIT, EXPLICIT, ...)
void BERValueReader::_checkTagTagging(TagType tag, CLType cl, TagType expectedTag, const Type& type)
{
   if (type.hasImplicitTagging())
   {
      if (type.hasTagNumber() && tag != type.tagNumber())
         throw BERBufferException("BER " + type.toString() + " is expected");
   }

   if (type.hasEmptyTagging() || type.hasExplicitTagging())
   {
      if (!type.hasTagNumber() && tag != expectedTag)
         throw BERBufferException("BER " + type.toString() + " is expected");
      if (type.hasTagNumber() && tag != type.tagNumber())
         throw BERBufferException("BER " + type.toString() + " is expected");
   }

   if (cl != type.tagClass())
      throw BERBufferException("BER " + type.toString() + " is expected");
}

}
