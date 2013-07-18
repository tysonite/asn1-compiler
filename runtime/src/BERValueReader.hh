#ifndef __BER_VALUE_READER_HH
#define __BER_VALUE_READER_HH

#include "ASN1ValueReader.hh"
#include "BERBuffer.hh"
#include "TypeCommon.hh"
#include "Utils.hh"

namespace asn1
{

class BERBuffer;

class BERValueReader : public ASN1ValueReader
{
public:

   // Constructor
   explicit BERValueReader(BERBuffer& buffer)
      : _nestedReader(NULL), _buffer(buffer), _compositionEnd(0) {}

   // Destructor
   ~BERValueReader() { delete _nestedReader; }

   // Reads BOOLEAN value
   void readBoolean(Boolean& value, const BooleanType& type);

   // Reads INTEGER value
   void readInteger(Integer& value, const IntegerType& type);
   void readUnsignedInteger(UnsignedInteger& value, const UnsignedIntegerType& type);

   // Reads ENUMERATED value
   void readEnumerated(Integer& value, const EnumeratedType& type);
   
   // Reads OBJECT IDENTIFIER value
   void readObjectIdentifier(ObjectIdentifier& value, const ObjectIdentifierType& type);

   // Reads BIT STRING value
   virtual void readBitString(BitString& value, const BitStringType& type);

   // Reads NULL value
   void readNull(const NullType& type);

   // Reads OCTET STRING value
   void readOctetString(OctetString& value, const OctetStringType& type);

   // Reads VISIBLE STRING value
   void readVisibleString(OctetString& value, const VisibleStringType& type);

   // Reads GRAPHIC STRING value
   void readGraphicString(OctetString& value, const GraphicStringType& type);

   // Reads PRINTABLE STRING value
   void readPrintableString(OctetString& value, const PrintableStringType& type);

   // Reads TELETEX STRING value
   void readTeletexString(OctetString& value, const TeletexStringType& type);

   // Reads NUMERIC STRING value
   void readNumericString(OctetString& value, const NumericStringType& type);

   // Reads IA5 STRING value
   void readIA5String(OctetString& value, const IA5StringType& type);

   // Reads UTC TIME value
   void readUtcTime(OctetString& value, const UTCTimeType& type);

   // Reads ANY value
   void readAny(OctetString& value, const AnyType& type);

   // Checks whether component represented by type present or not (usefull for SEQUENCE/SET)
   bool isComponentPresent(const Type& type);

   // Reads SEQUENCE value
   void readSequenceBegin(const SequenceType& type);
   bool isSequenceEnd(const SequenceType& type);
   void readSequenceEnd(const SequenceType& type);

   // Reads SEQUENCE OF value (the same as SET)
   void readSequenceOfBegin(const BaseSequenceOfType& type);
   bool isSequenceOfEnd(const BaseSequenceOfType& type);
   void readSequenceOfEnd(const BaseSequenceOfType& type);

   // Reads SET value
   void readSetBegin(const SetType& type);
   bool isSetEnd(const SetType& type);
   void readSetEnd(const SetType& type);

   // Reads SET OF value (the same as SET)
   void readSetOfBegin(const BaseSetOfType& type);
   bool isSetOfEnd(const BaseSetOfType& type);
   void readSetOfEnd(const BaseSetOfType& type);

   // Reads CHOICE value
   void readChoice(const ChoiceType& type, Type** choosenType);

   // Reads EXPLICIT tag
   void readExplicitBegin(const Type& type);
   void readExplicitEnd(const Type& type);

protected:

   // Returns prototype (new instance) of the reader
   virtual BERValueReader* _prototype() const;

   // Reads and checks OCTET STRING value
   void _readOctetStringOctets(OctetString& value, const OctetStringType& type);

   // Reads INTEGER value
   template <typename NumberType>
   void _doReadNumber(NumberType& value, const Type& type);
   template <typename NumberType>
   void _doReadInteger(NumberType& value);

   // Checks tag for correctness
   void _checkTagIsCorrect(PCType pc, const Type& type);

   // Checks tag for tagging (IMPLICIT, EXPLICIT, ...)
   void _checkTagTagging(TagType tag, CLType cl, TagType expectedTag, const Type& type);

   // Returns last inner type in chain
   const Type* _getDeepInnerType(const Type* t) const;
      
protected:

   BERValueReader*     _nestedReader;  // nested BER reader, used to decode composition types
   BERBuffer&          _buffer;

private:

   BERBuffer::SizeType _compositionEnd;

   DISALLOW_COPY_AND_ASSIGN(BERValueReader);
};

}

#endif // __BER_VALUE_READER_HH
