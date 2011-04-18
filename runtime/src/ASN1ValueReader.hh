#ifndef __ASN1_VALUE_READER_HH
#define __ASN1_VALUE_READER_HH

#include "TypeCommon.hh"
#include "Values.hh"

namespace asn1
{

// Represents an interface for ASN.1 value decoders (BER, CER, DER, [U]PER, XER)
class ASN1ValueReader
{
public:
   // Reads BOOLEAN value
   virtual void readBoolean(Boolean& value, const BooleanType& type) = 0;

   // Reads INTEGER value
   virtual void readInteger(Integer& value, const IntegerType& type) = 0;
   virtual void readUnsignedInteger(UnsignedInteger& value, const UnsignedIntegerType& type) = 0;

   // Reads ENUMERATED value
   virtual void readEnumerated(Integer& value, const EnumeratedType& type) = 0;

   // Reads OBJECT IDENTIFIER value
   virtual void readObjectIdentifier(ObjectIdentifier& value, const ObjectIdentifierType& type) = 0;

   // Reads BIT STRING value
   virtual void readBitString(BitString& value, const BitStringType& type) = 0;

   // Reads NULL value
   virtual void readNull(const NullType& type) = 0;

   // Reads OCTET STRING value
   virtual void readOctetString(OctetString& value, const OctetStringType& type) = 0;

   // Reads VISIBLE STRING value
   virtual void readVisibleString(OctetString& value, const VisibleStringType& type) = 0;

   // Reads GRAPHIC STRING value
   virtual void readGraphicString(OctetString& value, const GraphicStringType& type) = 0;

   // Reads PRINTABLE STRING value
   virtual void readPrintableString(OctetString& value, const PrintableStringType& type) = 0;

   // Checks whether component represented by type present or not (usefull for SEQUENCE/SET)
   virtual bool isComponentPresent(const Type& type) = 0;

   // Reads SEQUENCE value
   virtual void readSequenceBegin(const SequenceType& type) = 0;
   virtual bool isSequenceEnd(const SequenceType& type) = 0;
   virtual void readSequenceEnd(const SequenceType& type) = 0;

   // Reads SEQUENCE OF value (the same as SET)
   virtual void readSequenceOfBegin(const BaseSequenceOfType& type) = 0;
   virtual bool isSequenceOfEnd(const BaseSequenceOfType& type) = 0;
   virtual void readSequenceOfEnd(const BaseSequenceOfType& type) = 0;

   // Reads SET value
   virtual void readSetBegin(const SetType& type) = 0;
   virtual bool isSetEnd(const SetType& type) = 0;
   virtual void readSetEnd(const SetType& type) = 0;

   // Reads SET OF value (the same as SET)
   virtual void readSetOfBegin(const BaseSetOfType& type) = 0;
   virtual bool isSetOfEnd(const BaseSetOfType& type) = 0;
   virtual void readSetOfEnd(const BaseSetOfType& type) = 0;

   // Reads CHOICE value
   virtual void readChoice(const ChoiceType& type, Type** choosenType) = 0;

   // Reads EXPLICIT tag
   virtual void readExplicitBegin(const Type& type) = 0;
   virtual void readExplicitEnd(const Type& type) = 0;
};

}

#endif // __ASN1_VALUE_READER_HH
