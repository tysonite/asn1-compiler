#include <algorithm>

#include "PrintableStringType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Checks type parameters for validness
void PrintableStringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   std::for_each(value.begin(), value.end(), [this, value](const ValueType::value_type& v)
   {
      if ((v < 'A' || v > 'Z') && (v < 'a' || v > 'z') && (v < '0' || v > '9') &&
         v != ' ' && v != '\'' && v != '(' && v != ')' && v != '+' && v != ',' &&
         v != '-' && v != '.' && v != '/' && v != ':' && v != '=' && v != '?')
      {
         throw ASN1Exception(toString() + " value '" + value + "' is not valid");
      }
   });
}

}
