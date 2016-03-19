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
      _doReadNumber(value, type);

      // check received data
      type.checkType(value);
   }
}

void BERValueReader::readUnsignedInteger(UnsignedInteger& value, const UnsignedIntegerType& type)
{
   if (_nestedReader)
      _nestedReader->readUnsignedInteger(value, type);
   else
   {
      _doReadNumber(value, type);

      // check received data
      type.checkType(value);
   }
}

#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
void BERValueReader::readBigInteger(BigInteger& value, const BigIntegerType& type)
{
   if (_nestedReader)
      _nestedReader->readBigInteger(value, type);
   else
   {
      _doReadNumber(value, type);

      // check received data
      type.checkType(value);
   }
}
#endif

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
         value.push_back(_buffer.decodeUnsignedInteger<ObjectIdentifier::value_type>());

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

      // resize value to fit all bits
      value.resize((static_cast<BitString::size_type>(length - 2)) * 8
         + (8 - static_cast<BitString::size_type>(b)));

      int32_t k = 0;
      while (_buffer.current() < _buffer.end())
      {
         BERBuffer::ValueType m = _buffer.get();
         for (int8_t i = 0; i < 8; ++i)
            value[k * 8 + i] = ((m & (0x80 >> i)) != 0) ? true : false;
         ++k;
      }

      // set end of the value
      _buffer.setEnd(_buffer.end() + 1);

      // read last byte
      BERBuffer::ValueType m = _buffer.get();
      for (int8_t i = 0; i < 8 - b; ++i)
         value[k * 8 + i] = ((m & (0x80 >> i)) != 0) ? true : false;

      _buffer.clearEnd();
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

      if (type.typeID() == VISIBLE_STRING_TYPE)
         _checkTagTagging(tag, cl, BERBuffer::VISIBLESTRING_BERTYPE, type);
      else if (type.typeID() == GENERALIZED_TIME_TYPE)
         _checkTagTagging(tag, cl, BERBuffer::GENERALTIME_BERTYPE, type);
      else
         throw BERBufferException("BER " + type.toString() + " is expected");

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

// Reads TELETEX STRING value
void BERValueReader::readTeletexString(OctetString& value, const TeletexStringType& type)
{
   if (_nestedReader)
      _nestedReader->readTeletexString(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::TELETEXSTRING_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Reads NUMERIC STRING value
void BERValueReader::readNumericString(OctetString& value, const NumericStringType& type)
{
   if (_nestedReader)
      _nestedReader->readNumericString(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::NUMERICSTRING_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Reads IA5 STRING value
void BERValueReader::readIA5String(OctetString& value, const IA5StringType& type)
{
   if (_nestedReader)
      _nestedReader->readIA5String(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::IA5STRING_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Reads UTC TIME value
void BERValueReader::readUtcTime(OctetString& value, const UTCTimeType& type)
{
   if (_nestedReader)
      _nestedReader->readUtcTime(value, type);
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      _checkTagTagging(tag, cl, BERBuffer::UTCTIME_BERTYPE, type);

      _readOctetStringOctets(value, type);
   }
}

// Reads ANY value
void BERValueReader::readAny(OctetString& value, const AnyType& type)
{
   if (_nestedReader)
      _nestedReader->readAny(value, type);
   else
   {
      BERBuffer::SizeType startAnyTypePos = _buffer.current();

      // decode identifier (but not use it)
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.decodeIdentifierOctets(tag, pc, cl);

      // save position of beggining of type content
      BERBuffer::SizeType endIdentifierPos = _buffer.current();

      // read raw data
      BERBuffer::ContentType rawValue;
      _buffer.decodeContentOctets(rawValue);

      // assign data to value;
      // '(endIdentifierPos - startAnyTypePos) > 0' check is needed, because
      // ANY type value must include a correctly encoded BER data, the minimal
      // encoding size is equal to 2 bytes (i.e. NullType value BER encoding)
      if (rawValue.size() > 0 || (endIdentifierPos - startAnyTypePos) > 0)
      {
         // end position of ANY type
         BERBuffer::SizeType endAnyTypePos = _buffer.current();

         // read identifier and length octets
         _buffer.setCurrent(startAnyTypePos);

         BERBuffer::ContentType anyRaw;
         anyRaw.resize(static_cast<BERBuffer::SizeType>(endAnyTypePos - startAnyTypePos));
         _buffer.read(anyRaw.data(), static_cast<BERBuffer::SizeType>(endAnyTypePos - startAnyTypePos));

         // assign data to value (the receiver is responsible for further decoding)
         value.assign(reinterpret_cast<OctetString::value_type*>(anyRaw.data()), anyRaw.size());

         // reset position
         _buffer.setCurrent(endAnyTypePos);
      }
   }
}

// Checks whether component represented by type present or not (usefull for SEQUENCE/SET)
bool BERValueReader::isComponentPresent(const Type& type)
{
   if (_nestedReader)
   {
      if (_buffer.current() >= _compositionEnd) // case for OPTIONAL components inside empty SEQUENCE
         return false;

      return _nestedReader->isComponentPresent(type);
   }
   else
   {
      TagType tag;
      PCType pc;
      CLType cl;
      _buffer.lookupIdentifierOctets(tag, pc, cl);

      if (type.typeID() == ANY_TYPE)
      {
         return true;
      }
      else if (type.typeID() == CHOICE_TYPE)
      {
         if (type.hasTagNumber() && type.tagClass() == cl)
         {
            if (type.tagNumber() == tag)
               return true;
         }
         else
         {
            const ChoiceType* choice = static_cast<const ChoiceType*>(_getDeepInnerType(&type));
            const ChoiceType::ChoicesType& types = choice->getChoices();

            for (ChoiceType::ChoicesType::const_iterator p = types.begin(); p != types.end(); ++p)
            {
               if (isComponentPresent(*(*p)))
                  return true;
            }
            return false;
         }
      }
      else if (type.tagClass() == cl)
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

      // check indefinite length contraints
      _checkIndefiniteConstraints(pc, length, type);

      if (length != -1)
      {
         // save position of the sequence end
         _compositionEnd = _buffer.current() + static_cast<BERBuffer::SizeType>(length);
         _eofc = false;
      }
      else
      {
         _compositionEnd = 0;
         _eofc = true;
      }

      // check tag
      _checkTagTagging(tag, cl, BERBuffer::SEQUENCE_BERTYPE, type);
      if (pc != BERBuffer::CONSTRUCTED_OBJECTYPE)
         throw BERBufferException("BER " + type.toString() + " must be CONSTRUCTED");

      // create reader for nested operations
      _nestedReader = _prototype();
      assert(_nestedReader != nullptr);
   }
}

bool BERValueReader::isSequenceEnd(const SequenceType& type)
{
   if (_nestedReader && _nestedReader->_nestedReader != nullptr)
      return _nestedReader->isSequenceEnd(type);
   else
   {
      if (_eofc)
      {
         if (_buffer.get(0) == 0 && _buffer.get(1) == 0)
            return true;
         else
            return false;
      }
      else
         return (_buffer.current() < _compositionEnd) ? false : true;
   }
}

void BERValueReader::readSequenceEnd(const SequenceType& type)
{
   assert(_nestedReader != nullptr);

   if (_nestedReader && _nestedReader->_nestedReader != nullptr)
      _nestedReader->readSequenceEnd(type);
   else
   {
      delete _nestedReader;
      _nestedReader = nullptr;

      if (_eofc == true)
      {
         // read 2 zero-ed bytes
         if (_buffer.get() != 0)
            throw BERBufferException("First EOC byte is expected");
         if (_buffer.get() != 0)
            throw BERBufferException("Second EOC byte is expected");
      }
      else
      {
         if (_buffer.current() < _compositionEnd)
            throw BERBufferException("More BER " + type.toString() + " items are expected");
      }
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
      _compositionEnd = _buffer.current() + static_cast<BERBuffer::SizeType>(length);

      // check tag
      _checkTagTagging(tag, cl, BERBuffer::SET_BERTYPE, type);
      if (pc != BERBuffer::CONSTRUCTED_OBJECTYPE)
         throw BERBufferException("BER " + type.toString() + " must be CONSTRUCTED");

      // create reader for nested operations
      _nestedReader = _prototype();
      assert(_nestedReader != nullptr);
   }
}

bool BERValueReader::isSetEnd(const SetType& type)
{
   if (_nestedReader && _nestedReader->_nestedReader != nullptr)
      return _nestedReader->isSetEnd(type);
   else
      return (_buffer.current() < _compositionEnd) ? false : true;
}

void BERValueReader::readSetEnd(const SetType& type)
{
   assert(_nestedReader != nullptr && _compositionEnd > 0);

   if (_nestedReader && _nestedReader->_nestedReader != nullptr)
      _nestedReader->readSetEnd(type);
   else
   {
      delete _nestedReader;
      _nestedReader = nullptr;

      if (_buffer.current() < _compositionEnd)
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

const Type* BERValueReader::_getDeepInnerType(const Type* t) const
{
   const AbstractTypeGetter* abstractGetter = dynamic_cast<const AbstractTypeGetter*>(t);
   if (!abstractGetter)
      return t;

   return _getDeepInnerType(&abstractGetter->abstractType());
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

      *choosenType = nullptr;

      const ChoiceType::ChoicesType& types = type.getChoices();
      for (ChoiceType::ChoicesType::const_iterator p = types.begin(); p != types.end(); ++p)
      {
         const Type* t = *p;

         if (t->typeID() == CHOICE_TYPE)
         {
            if (t->hasTagNumber())
            {
               if (t->tagClass() == cl)
               {
                  if (t->hasTagNumber() && (t->tagNumber() == tag))
                     *choosenType = const_cast<Type*>(t);
                  if (!t->hasTagNumber() && (t->typeID() == tag))
                     *choosenType = const_cast<Type*>(t);
               }
               else
               {
                  readChoice(*(static_cast<const ChoiceType*>(_getDeepInnerType(t))), choosenType);
                  if (*choosenType != nullptr)
                  {
                     *choosenType = const_cast<Type*>(t);
                     break;
                  }
               }
            }
            else
            {
               readChoice(*(static_cast<const ChoiceType*>(_getDeepInnerType(t))), choosenType);
               if (*choosenType != nullptr)
               {
                  *choosenType = const_cast<Type*>(t);
                  break;
               }
            }
         }
         else if (t->tagClass() == cl)
         {
            if (t->hasTagNumber() && (t->tagNumber() == tag))
               *choosenType = const_cast<Type*>(t);
            if (!t->hasTagNumber() && (t->typeID() == tag))
               *choosenType = const_cast<Type*>(t);
         }
      }
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

   // assign temporary data to actual value
   if (rawValue.size())
      value.assign(reinterpret_cast<OctetString::value_type*>(rawValue.data()), rawValue.size());

   // check received data
   type.checkType(value);
}

// Reads INTEGER value
template <typename NumberType>
void BERValueReader::_doReadNumber(NumberType& value, const Type& type)
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
      value = 0;
      return;
   }

   _doReadInteger(value);
}

template <typename NumberType>
void BERValueReader::_doReadInteger(NumberType& value)
{
   bool isFirstByte = true;
   while (_buffer.current() < _buffer.end())
   {
      BERBuffer::ValueType b = _buffer.get();
      if (isFirstByte)
      {
         value = (b & 0x80) ? ~0LL : 0LL;
         isFirstByte = false;
      }

      value <<= 8;
      value |= static_cast<NumberType>(b);
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

// Checks indefinite length form constraints
void BERValueReader::_checkIndefiniteConstraints(PCType pc, int64_t length, const Type& type)
{
   if (length == -1 && pc != BERBuffer::CONSTRUCTED_OBJECTYPE)
   {
      throw BERBufferException("BER " + type.toString() + " must be constructed"
         + ", if indefinite length form is used");
   }
}

}
