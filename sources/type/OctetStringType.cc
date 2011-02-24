#include <common/ASN1Exception.hh>
#include <common/Utils.hh>
#include <type/OctetStringType.hh>

namespace asn1
{

// Checks type parameters for validness
void OctetStringType::checkType(const OctetString& value) const
{
   if (_minLength >= 0 && value.size() < _minLength)
   {
      throw ASN1Exception(typeName() + " value '" + value + "' length is less than minimum length '" +
         utils::ntos(_minLength) + "'");
   }

   if (_maxLength >= 0 && value.size() > _maxLength)
   {
      throw ASN1Exception(typeName() + " value '" + value + "' length is more than maximum length '" +
         utils::ntos(_maxLength) + "'");
   }
}

}
