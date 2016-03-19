#include <algorithm>

#include "IA5StringType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Checks type parameters for validness
void IA5StringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   std::for_each(value.begin(), value.end(),
      [this, value](const ValueType::value_type& v)
   {
      if (v < 0x00 || v > 0x7F)
         throw ASN1Exception(toString() + " value '" + value + "' is not valid");
   });
}

}
