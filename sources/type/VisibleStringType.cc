#include <type/VisibleStringType.hh>
#include <common/ASN1Exception.hh>

namespace asn1
{

// Checks type parameters for validness
void VisibleStringType::checkType(const OctetString& value) const
{
   OctetStringType::checkType(value);

   for (OctetString::size_type i = 0; i < value.size(); ++i)
   {
      OctetString::value_type c = value[i];
      if (c < 32 || c > 126)
         throw ASN1Exception(typeName() + " value '" + value + "' is not valid");
   }
}

}
