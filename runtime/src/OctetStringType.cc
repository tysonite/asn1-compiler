#include <algorithm>

#include "ASN1Exception.hh"
#include "Utils.hh"
#include "OctetStringType.hh"

namespace asn1
{

// Checks type parameters for validness
void OctetStringType::checkType(const ValueType& value) const
{
   std::for_each(_sizes.begin(), _sizes.end(),
      [this, &value](const SizesType::value_type& p)
   {
      if (p.first == p.second && value.size() != static_cast<ValueType::size_type>(p.first))
      {
         throw ASN1Exception(toString() + " value size is not equal to size '"
            + utils::ntos(p.first) + "'");
      }

      if (p.first >= 0 && value.size() < static_cast<ValueType::size_type>(p.first))
      {
         throw ASN1Exception(toString() + " value size is less than minimum size '"
            + utils::ntos(p.first) + "'");
      }

      if (p.second >= 0 && value.size() > static_cast<ValueType::size_type>(p.second))
      {
         throw ASN1Exception(toString() + " value size is more than maximum size '"
            + utils::ntos(p.second) + "'");
      }
   });
}

}
