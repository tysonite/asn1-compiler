#ifndef __BER_VALUE_WRITER_HH
#define __BER_VALUE_WRITER_HH

#include <cstddef>

#include "ASN1ValueWriter.hh"
#include "BERBuffer.hh"
#include "Utils.hh"

namespace asn1
{

// It represents an encoder of the ASN.1 data structures in BER format
class BERValueWriter : public ASN1ValueWriter
{
public:
   
   // Constructor
   explicit BERValueWriter(BERBuffer& buffer)
      : _nestedWriter(NULL), _buffer(buffer), _compositionStart(0) {}

   // Destructor
   ~BERValueWriter() { delete _nestedWriter; }

   // Writes BOOLEAN value
   void writeBoolean(const Boolean& value, const BooleanType& type);

   // Writes INTEGER value
   void writeInteger(const Integer& value, const IntegerType& type);
   void writeUnsignedInteger(const UnsignedInteger& value, const UnsignedIntegerType& type);
#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
   void writeBigInteger(const BigInteger& value, const BigIntegerType& type);
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT

   // Writes ENUMERATED value
   void writeEnumerated(const Integer& value, const EnumeratedType& type);

   // Writes OBJECT IDENTIFIER value
   void writeObjectIdentifier(const ObjectIdentifier& value, const ObjectIdentifierType& type);

   // Writes BIT STRING value
   void writeBitString(const BitString& value, const BitStringType& type);

   // Writes NULL value
   void writeNull(const NullType& type);

   // Writes OCTET STRING value
   void writeOctetString(const OctetString& value, const OctetStringType& type);

   // Writes VISIBLE STRING value
   void writeVisibleString(const OctetString& value, const VisibleStringType& type);

   // Writes GRAPHIC STRING value
   void writeGraphicString(const OctetString& value, const GraphicStringType& type);

   // Writes PRINTABLE STRING value
   void writePrintableString(const OctetString& value, const PrintableStringType& type);

   // Writes TELETEX STRING value
   void writeTeletexString(const OctetString& value, const TeletexStringType& type);

   // Writes NUMERIC STRING value
   void writeNumericString(const OctetString& value, const NumericStringType& type);

   // Writes IA5 STRING value
   void writeIA5String(const OctetString& value, const IA5StringType& type);

   // Writes UTC TIME value
   void writeUtcTime(const OctetString& value, const UTCTimeType& type);

   // Writes ANY value
   void writeAny(const OctetString& value, const AnyType& type);

   // Writes SEQUENCE value
   void writeSequenceBegin(const SequenceType& type);
   void writeSequenceEnd(const SequenceType& type);
   
   // Writes SEQUENCE OF value (the same as SET)
   void writeSequenceOfBegin(const BaseSequenceOfType& type);
   void writeSequenceOfEnd(const BaseSequenceOfType& type);

   // Writes SET value
   void writeSetBegin(const SetType& type);
   void writeSetEnd(const SetType& type);

   // Writes SET OF value (the same as SET)
   void writeSetOfBegin(const BaseSetOfType& type);
   void writeSetOfEnd(const BaseSetOfType& type);

   // Writes EXPLICIT tag
   void writeExplicitBegin(const Type& type);
   void writeExplicitEnd();

protected:
   
   // Returns prototype (new instance) of the writer
   virtual BERValueWriter* _prototype() const;

   // Writes OCTET STRING value
   virtual void _doWriteOctetString(const OctetString& value, const BERBuffer::BERType& tagType,
      const OctetStringType& type);

   // Write BIT STRING value
   virtual void _doWriteBitString(const BitString& value, const BitStringType& type);

   // Write BIT STRING value content octets
   void _doWriteBitStringContent(const BitString& value);

   // Writes INTEGER value
   template <class NumberType>
   void _doWriteInteger(const NumberType& value);

private:

   template <class NumberType>
   void _doWriteIntegerValue(const NumberType& value, uint8_t valueLength,
      BERBuffer::SizeType bufferSize);
#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
   template <>
   void _doWriteIntegerValue(const BigInteger& value, uint8_t valueLength,
      BERBuffer::SizeType bufferSize);
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT

   // Writes SEQUENCE/SET value end
   // Returns true if last nested SEQUENCE/SET value end was written, otherwise returns false
   bool _writeLastCompositionEnd();

protected:

   BERValueWriter*     _nestedWriter;  // nested BER writer, used to encode composition types
   BERBuffer&          _buffer;        // reference to BER buffer

private:
   
   BERBuffer::SizeType _compositionStart; // position in the buffer where length octets of the SEQUENCE/SET value were encoded

   DISALLOW_COPY_AND_ASSIGN(BERValueWriter);
};

}

#endif // __BER_VALUE_WRITER_HH
