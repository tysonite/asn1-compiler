#ifndef __ASN1_VALUE_WRITER_HH
#define __ASN1_VALUE_WRITER_HH

#include <type/TypeCommon.hh>

namespace asn1
{

// Represents an interface for ASN.1 value encoders (BER, CER, DER, [U]PER, XER)
class ASN1ValueWriter
{
public:
   // Writes BOOLEAN value
   virtual void writeBoolean(const Boolean& value, const BooleanType& type) = 0;

   // Writes INTEGER value
   virtual void writeInteger(const Integer& value, const IntegerType& type) = 0;

   // Writes OBJECT IDENTIFIER value
   virtual void writeObjectIdentifier(const ObjectIdentifier& value, const ObjectIdentifierType& type) = 0;

   // Writes NULL value
   virtual void writeNull() = 0;

   // Writes OCTET STRING value
   virtual void writeOctetString(const OctetString& value, const OctetStringType& type) = 0;

   // Writes VISIBLE STRING value
   virtual void writeVisibleString(const OctetString& value, const VisibleStringType& type) = 0;

   // Writes SEQUENCE value
   virtual void writeSequenceBegin(const SequenceType& type) = 0;
   virtual void writeSequenceEnd() = 0;

   // Writes SEQUENCE OF value (the same as SET)
   virtual void writeSequenceOfBegin(const SequenceType& type) = 0;
   virtual void writeSequenceOfEnd() = 0;

   // Writes SET value
   virtual void writeSetBegin() = 0;
   virtual void writeSetEnd() = 0;

   // Writes SET OF value (the same as SET)
   virtual void writeSetOfBegin() = 0;
   virtual void writeSetOfEnd() = 0;

   // Writes EXPLICIT tag
   virtual void writeExplicitBegin(const Type& type) = 0;
   virtual void writeExplicitEnd(const Type& type) = 0;
};

}

#endif // __ASN1_VALUE_WRITER_HH
