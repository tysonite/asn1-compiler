#include "Types.hh"

#include "XERValueWriter.hh"

namespace asn1
{

enum { NUMBER_OF_WS = 3 };

std::string whiteSpaces(int number)
{
   return std::string(number, ' ');
}

std::string newLine()
{
   return std::string("\r\n");
}

// Writes INTEGER value
void XERValueWriter::writeInteger(const Integer& value, const IntegerType& type)
{
   _writeTagBegin(type);
   _buffer.append(utils::ntos(value));
   _writeTagEnd(type);

   if (!_isCanonical)
      _buffer.append(newLine());
}

void XERValueWriter::writeUnsignedInteger(const UnsignedInteger& value, const UnsignedIntegerType& type)
{
   _writeTagBegin(type);
   _buffer.append(utils::ntos(value));
   _writeTagEnd(type);

   if (!_isCanonical)
      _buffer.append(newLine());
}

// Writes OBJECT IDENTIFIER value
void XERValueWriter::writeObjectIdentifier(const ObjectIdentifier& value, const ObjectIdentifierType& type)
{
   _writeTagBegin(type);
   _buffer.append(value.getValueAsString());
   _writeTagEnd(type);

   if (!_isCanonical)
      _buffer.append(newLine());
}

// Writes NULL value
void XERValueWriter::writeNull(const NullType& type)
{
   _writeTag(type);

   if (!_isCanonical)
      _buffer.append(newLine());
}

// Writes OCTET STRING value
void XERValueWriter::writeOctetString(const OctetString& value, const OctetStringType& type)
{
   _writeTagBegin(type);
   _buffer.append(value);
   _writeTagEnd(type);

   if (!_isCanonical)
      _buffer.append(newLine());
}

// Writes SEQUENCE value
void XERValueWriter::writeSequenceBegin(const SequenceType& type)
{
   _writeTagBegin(type);

   if (!_isCanonical)
   {
      _buffer.append(newLine());
      _indent += NUMBER_OF_WS;
   }
}

void XERValueWriter::writeSequenceEnd(const SequenceType& type)
{
   if (_isCanonical)
      _writeTagEnd(type);
   else
   {
      _indent -= NUMBER_OF_WS;
      _buffer.append(whiteSpaces(_indent));
      _writeTagEnd(type);
      _buffer.append(newLine());
   }
}

// Writes SEQUENCE OF value (the same as SET)
void XERValueWriter::writeSequenceOfBegin(const BaseSequenceOfType& type)
{
   writeSequenceBegin(type);
}

void XERValueWriter::writeSequenceOfEnd(const BaseSequenceOfType& type)
{
   writeSequenceEnd(type);
}

// Writes CHOICE value
void XERValueWriter::writeChoiceBegin(const ChoiceType& type)
{
   _writeTagBegin(type);

   if (!_isCanonical)
   {
      _buffer.append(newLine());
      _indent += NUMBER_OF_WS;
   }
}

void XERValueWriter::writeChoiceEnd(const ChoiceType& type)
{
   if (_isCanonical)
      _writeTagEnd(type);
   else
   {
      _indent -= NUMBER_OF_WS;
      _buffer.append(whiteSpaces(_indent));
      _writeTagEnd(type);
      _buffer.append(newLine());
   }
}

void XERValueWriter::_writeTag(const Type& type)
{
   if (!_isCanonical)
      _buffer.append(whiteSpaces(_indent));

   _buffer.append("<").append(type.typeName()).append("/>");
}

void XERValueWriter::_writeTagBegin(const Type& type)
{
   if (!_isCanonical)
      _buffer.append(whiteSpaces(_indent));

   _buffer.append("<").append(type.typeName()).append(">");
}

void XERValueWriter::_writeTagEnd(const Type& type)
{
   _buffer.append("</").append(type.typeName()).append(">");
}

}
