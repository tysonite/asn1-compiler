#include "IA5StringType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Checks type parameters for validness
void IA5StringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   for (OctetString::size_type i = 0; i < value.size(); ++i)
   {
      OctetString::value_type c = value[i];
      if (c < 0x00 || c > 0x7F)
         throw ASN1Exception(toString() + " value '" + value + "' is not valid");
   }
}

}
