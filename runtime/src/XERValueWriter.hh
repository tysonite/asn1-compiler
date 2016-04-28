#ifndef __XER_VALUE_WRITER_HH
#define __XER_VALUE_WRITER_HH

#include <cstddef>

#include "ASN1ValueWriter.hh"

#include "XERBuffer.hh"

namespace asn1
{

// It represents an encoder of the ASN.1 data structures in XER format
class XERValueWriter : public ASN1ValueWriter
{
public:
   
   // Constructor
   explicit XERValueWriter(XERBuffer& buffer, bool isCanonical = true)
      : _buffer(buffer), _isCanonical(isCanonical), _indent(0) {}

   // Writes BOOLEAN value
   void writeBoolean(const Boolean& value, const BooleanType& type) {}

   // Writes INTEGER value
   void writeInteger(const Integer& value, const IntegerType& type);
   void writeUnsignedInteger(const UnsignedInteger& value, const UnsignedIntegerType& type);
#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
   void writeBigInteger(const BigInteger& value, const BigIntegerType& type) {}
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT

   // Writes ENUMERATED value
   void writeEnumerated(const Integer& value, const EnumeratedType& type) {}

   // Writes OBJECT IDENTIFIER value
   void writeObjectIdentifier(const ObjectIdentifier& value, const ObjectIdentifierType& type);

   // Writes BIT STRING value
   void writeBitString(const BitString& value, const BitStringType& type) {}

   // Writes NULL value
   void writeNull(const NullType& type) {}

   // Writes OCTET STRING value
   void writeOctetString(const OctetString& value, const OctetStringType& type);

   // Writes VISIBLE STRING value
   void writeVisibleString(const OctetString& value, const VisibleStringType& type) {}

   // Writes GRAPHIC STRING value
   void writeGraphicString(const OctetString& value, const GraphicStringType& type) {}

   // Writes PRINTABLE STRING value
   void writePrintableString(const OctetString& value, const PrintableStringType& type) {}

   // Writes TELETEX STRING value
   void writeTeletexString(const OctetString& value, const TeletexStringType& type) {}

   // Writes NUMERIC STRING value
   void writeNumericString(const OctetString& value, const NumericStringType& type) {}

   // Writes IA5 STRING value
   void writeIA5String(const OctetString& value, const IA5StringType& type) {}

   // Writes UTC TIME value
   void writeUtcTime(const OctetString& value, const UTCTimeType& type) {}

   // Writes ANY value
   void writeAny(const OctetString& value, const AnyType& type) {}

   // Writes SEQUENCE value
   void writeSequenceBegin(const SequenceType& type);
   void writeSequenceEnd(const SequenceType& type);
   
   // Writes SEQUENCE OF value (the same as SET)
   void writeSequenceOfBegin(const BaseSequenceOfType& type) {}
   void writeSequenceOfEnd(const BaseSequenceOfType& type) {}

   // Writes SET value
   void writeSetBegin(const SetType& type) {}
   void writeSetEnd(const SetType& type) {}

   // Writes SET OF value (the same as SET)
   void writeSetOfBegin(const BaseSetOfType& type) {}
   void writeSetOfEnd(const BaseSetOfType& type) {}

   // Writes EXPLICIT tag
   void writeExplicitBegin(const Type& type) {}
   void writeExplicitEnd() {}

private:

   void _writeTagBegin(const Type& type);
   void _writeTagEnd(const Type& type);

   XERBuffer& _buffer; // reference to XER buffer
   bool _isCanonical;  // canonical XML representation
   int _indent;        // number of white-spaces before tag (applicable only for non-canonical representation)

private:

   DISALLOW_COPY_AND_ASSIGN(XERValueWriter);
};

}

#endif // __XER_VALUE_WRITER_HH
