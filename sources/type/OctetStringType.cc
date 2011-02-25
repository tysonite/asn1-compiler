#include <common/ASN1Exception.hh>
#include <common/Utils.hh>
#include <type/OctetStringType.hh>

namespace asn1
{

// Checks type parameters for validness
void OctetStringType::checkType(const OctetString& value) const
{
   for (SizesType::const_iterator p = _sizes.begin(); p != _sizes.end(); ++p)
   {
      if (value.size() < p->first)
      {
         throw ASN1Exception(typeName() + " value '" + value + "' length is less than minimum length '" +
            utils::ntos(p->first) + "'");
      }

      if (value.size() > p->second)
      {
         throw ASN1Exception(typeName() + " value '" + value + "' length is more than maximum length '" +
            utils::ntos(p->second) + "'");
      }
   }
}

}
