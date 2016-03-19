#include <algorithm>

#include "VisibleStringType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Checks type parameters for validness
void VisibleStringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   std::for_each(value.begin(), value.end(),
      [this, &value](const ValueType::value_type& v)
   {
      if (v < 32 || v > 126)
         throw ASN1Exception(toString() + " value '" + value + "' is not valid");
   });
}

}
