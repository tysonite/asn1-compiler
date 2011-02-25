#include <type/Type.hh>
#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>

namespace asn1
{

// Returns string representation of type identifier
std::string Type::typeName() const
{
   switch (typeID())
   {
   case INTEGER_TYPE:
      return "INTEGER";
   case BOOLEAN_TYPE:
      return "BOOLEAN";
   case OBJECT_IDENTIFIER_TYPE:
      return "OBJECT IDENTIFIER";
   case OCTET_STRING_TYPE:
      return "OCTET STRING";
   case VISIBLE_STRING_TYPE:
      return "VISIBLE STRING";
   case PRINTABLE_STRING_TYPE:
      return "PRINTABLE STRING";
   case SEQUENCE_TYPE:
      return "SEQUENCE";
   case SEQUENCE_OF_TYPE:
      return "SEQUENCE OF";
   default:
      return "Unknown Type";
   }
}

// Returns string representation of tagging type
std::string Type::taggingName() const
{
   switch (_taggingType)
   {
   case IMPLICIT_TAGGING:
      return "IMPLICIT";
   case EXPLICIT_TAGGING:
      return "EXPLICIT";
   case EMPTY_TAGGING:
      return "EMPTY";
   default:
      return "Unknown tagging";
   }
}

// Returns string representation of tag class
std::string Type::tagClassName() const
{
   switch (_tagClass)
   {
   case UNIVERSAL:
      return "UNIVERSAL";
   case APPLICATION:
      return "APPLICATION";
   case CONTEXT_SPECIFIC:
      return "CONTEXT-SPECIFIC";
   case PRIVATE:
      return "PRIVATE";
   default:
      return "Unknown tag class";
   }
}

// Returns string representation of type
std::string Type::toString() const
{
   std::string s = typeName();
   s += " [";
   s += taggingName();
   s += ", " + tagClassName();
   if (hasTagNumber())
      s += ", " + utils::ntos(tagNumber());
   s += "]";
   return s;
}

}
