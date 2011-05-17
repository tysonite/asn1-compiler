#include "GeneralizedTimeType.hh"

namespace asn1
{

// Checks type parameters for validness
void GeneralizedTimeType::checkType(const ValueType& value) const
{
   VisibleStringType::checkType(value);

   for (OctetString::size_type i = 0; i < value.size(); ++i)
   {
      OctetString::value_type c = value[i];
      // TODO: add checks
   }
}

}
