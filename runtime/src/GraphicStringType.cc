#include "GraphicStringType.hh"

namespace asn1
{

// Checks type parameters for validness
void GraphicStringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   for (OctetString::size_type i = 0; i < value.size(); ++i)
   {
      OctetString::value_type c = value[i];
      // TODO: add checks
   }
}

}
