#include <type/Types.hh>

#include <xer/XERValueWriter.hh>

namespace asn1
{

enum { NUMBER_OF_WS = 6 };

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
