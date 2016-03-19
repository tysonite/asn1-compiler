#include <algorithm>

#include "NumericStringType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Checks type parameters for validness
void NumericStringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   std::for_each(value.begin(), value.end(),
      [this, value](const ValueType::value_type& v)
   {
      if ((v < 0x30 || v > 0x39) && v != 0x20)
         throw ASN1Exception(toString() + " value '" + value + "' is not valid");
   });
}

}
