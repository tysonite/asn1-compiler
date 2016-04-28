#ifndef __ASN1_VALUE_WRITER_HH
#define __ASN1_VALUE_WRITER_HH

#include "TypeCommon.hh"
#include "Values.hh"

namespace asn1
{

// Represents an interface for ASN.1 value encoders (BER, CER, DER, [U]PER, XER)
class ASN1ValueWriter
{
public:
   // Destructor
   virtual ~ASN1ValueWriter() {}

   // Writes BOOLEAN value
   virtual void writeBoolean(const Boolean& value, const BooleanType& type) = 0;

   // Writes INTEGER value
   virtual void writeInteger(const Integer& value, const IntegerType& type) = 0;
   virtual void writeUnsignedInteger(const UnsignedInteger& value, const UnsignedIntegerType& type) = 0;
#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
   virtual void writeBigInteger(const BigInteger& value, const BigIntegerType& type) = 0;
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT

   // Writes ENUMERATED value
   virtual void writeEnumerated(const Integer& value, const EnumeratedType& type) = 0;

   // Writes OBJECT IDENTIFIER value
   virtual void writeObjectIdentifier(const ObjectIdentifier& value, const ObjectIdentifierType& type) = 0;

   // Writes BIT STRING value
   virtual void writeBitString(const BitString& value, const BitStringType& type) = 0;

   // Writes NULL value
   virtual void writeNull(const NullType& type) = 0;

   // Writes OCTET STRING value
   virtual void writeOctetString(const OctetString& value, const OctetStringType& type) = 0;

   // Writes VISIBLE STRING value
   virtual void writeVisibleString(const OctetString& value, const VisibleStringType& type) = 0;

   // Writes GRAPHIC STRING value
   virtual void writeGraphicString(const OctetString& value, const GraphicStringType& type) = 0;

   // Writes PRINTABLE STRING value
   virtual void writePrintableString(const OctetString& value, const PrintableStringType& type) = 0;

   // Writes TELETEX STRING value
   virtual void writeTeletexString(const OctetString& value, const TeletexStringType& type) = 0;

   // Writes NUMERIC STRING value
   virtual void writeNumericString(const OctetString& value, const NumericStringType& type) = 0;

   // Writes IA5 STRING value
   virtual void writeIA5String(const OctetString& value, const IA5StringType& type) = 0;

   // Writes UTC TIME value
   virtual void writeUtcTime(const OctetString& value, const UTCTimeType& type) = 0;

   // Writes ANY value
   virtual void writeAny(const OctetString& value, const AnyType& type) = 0;

   // Writes SEQUENCE value
   virtual void writeSequenceBegin(const SequenceType& type) = 0;
   virtual void writeSequenceEnd(const SequenceType& type) = 0;

   // Writes SEQUENCE OF value (the same as SET)
   virtual void writeSequenceOfBegin(const BaseSequenceOfType& type) = 0;
   virtual void writeSequenceOfEnd(const BaseSequenceOfType& type) = 0;

   // Writes SET value
   virtual void writeSetBegin(const SetType& type) = 0;
   virtual void writeSetEnd(const SetType& type) = 0;

   // Writes SET OF value (the same as SET)
   virtual void writeSetOfBegin(const BaseSetOfType& type) = 0;
   virtual void writeSetOfEnd(const BaseSetOfType& type) = 0;

   // Writes CHOICE value
   virtual void writeChoiceBegin(const ChoiceType& type) = 0;
   virtual void writeChoiceEnd(const ChoiceType& type) = 0;

   // Writes EXPLICIT tag
   virtual void writeExplicitBegin(const Type& type) = 0;
   virtual void writeExplicitEnd() = 0;
};

}

#endif // __ASN1_VALUE_WRITER_HH
