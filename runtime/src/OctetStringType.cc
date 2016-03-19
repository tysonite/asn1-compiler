#include <algorithm>

#include "ASN1Exception.hh"
#include "Utils.hh"
#include "OctetStringType.hh"

namespace asn1
{

// Checks type parameters for validness
void OctetStringType::checkType(const ValueType& value) const
{
   const ValueType::size_type valuePartSize = 10;

   for (SizesType::const_iterator p = _sizes.begin(); p != _sizes.end(); ++p)
   {
      ValueType::size_type valueSize = value.size();
      if (p->first == p->second && valueSize != p->first)
      {
         throw ASN1Exception(toString() + " value '" + value.substr(0,
            std::min(valuePartSize, valueSize)) + "' size is not equal to size '"
            + utils::ntos(p->first) + "'");
      }

      if (p->first >= 0 && valueSize < p->first)
      {
         throw ASN1Exception(toString() + " value '" + value.substr(0,
            std::min(valuePartSize, valueSize)) + "' size is less than minimum size '"
            + utils::ntos(p->first) + "'");
      }

      if (p->second >= 0 && valueSize > p->second)
      {
         throw ASN1Exception(toString() + " value '" + value.substr(0,
            std::min(valuePartSize, valueSize)) + "' size is more than maximum size '"
            + utils::ntos(p->second) + "'");
      }
   }
}

}
