#include "PrintableStringType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Checks type parameters for validness
void PrintableStringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   for (OctetString::size_type i = 0; i < value.size(); ++i)
   {
      OctetString::value_type c = value[i];
      if ((c < 'A' || c > 'Z') && ( c < 'a' || c > 'z') && ( c < '0' || c > '9') &&
         c != ' ' && c != '\'' && c != '(' && c != ')' && c != '+' && c != ',' &&
         c != '-' && c != '.' && c != '/' && c != ':' && c != '=' && c != '?')
      {
         throw ASN1Exception(toString() + " value '" + value + "' is not valid");
      }
   }
}

}
