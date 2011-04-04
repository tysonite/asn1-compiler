#include <common/ASN1Exception.hh>
#include <common/Utils.hh>
#include <type/OctetStringType.hh>

namespace asn1
{

// Checks type parameters for validness
void OctetStringType::checkType(const ValueType& value) const
{
   for (SizesType::const_iterator p = _sizes.begin(); p != _sizes.end(); ++p)
   {
      if (p->first == p->second && value.size() != p->first)
      {
         throw ASN1Exception(toString() + " value '" + value + "' size is not equal to size '" +
            utils::ntos(p->first) + "'");
      }

      if (value.size() < p->first)
      {
         throw ASN1Exception(toString() + " value '" + value + "' size is less than minimum size '" +
            utils::ntos(p->first) + "'");
      }

      if (value.size() > p->second)
      {
         throw ASN1Exception(toString() + " value '" + value + "' size is more than maximum size '" +
            utils::ntos(p->second) + "'");
      }
   }
}

}
