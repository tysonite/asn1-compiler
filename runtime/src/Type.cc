#include "Type.hh"

namespace asn1
{

// Destructor (do not allow instantiation)
Type::~Type()
{
}
   
// Returns string representation of type identifier
std::string Type::typeName() const
{
#if !defined(ASN1_ENABLE_XER)
   switch (typeID())
   {
   case NULL_TYPE:
      return "NULL";
   case INTEGER_TYPE:
      return "INTEGER";
   case ENUMERATED_TYPE:
      return "ENUMERATED";
   case BOOLEAN_TYPE:
      return "BOOLEAN";
   case OBJECT_IDENTIFIER_TYPE:
      return "OBJECT IDENTIFIER";
   case OCTET_STRING_TYPE:
      return "OCTET STRING";
   case BITSTRING_TYPE:
      return "BIT STRING";
   case VISIBLE_STRING_TYPE:
      return "VISIBLE STRING";
   case GENERALIZED_TIME_TYPE:
      return "GENERALIZED TIME";
   case UTC_TIME_TYPE:
      return "UTC TIME";
   case GRAPHIC_STRING_TYPE:
      return "GRAPHIC STRING";
   case PRINTABLE_STRING_TYPE:
      return "PRINTABLE STRING";
   case TELETEX_STRING_TYPE:
      return "TELETEX STRING";
   case NUMERIC_STRING_TYPE:
      return "NUMERIC STRING";
   case IA5_STRING_TYPE:
      return "IA5 STRING";
   case CHOICE_TYPE:
      return "CHOICE";
   case SEQUENCE_TYPE:
      return "SEQUENCE";
   case SET_TYPE:
      return "SET";
   case SEQUENCE_OF_TYPE:
      return "SEQUENCE OF";
   case SET_OF_TYPE:
      return "SET OF";
   case ANY_TYPE:
      return "ANY";
   default:
      return "Unknown Type";
   }
#else
   return _doTypeName();
#endif
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
