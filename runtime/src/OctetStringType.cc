#include "ASN1Exception.hh"
#include "Utils.hh"
#include "OctetStringType.hh"

// The size of value part to be reported in the exception message
#define VALUE_PART_SIZE 10U

namespace asn1
{

// Checks type parameters for validness
void OctetStringType::checkType(const ValueType& value) const
{
   for (SizesType::const_iterator p = _sizes.begin(); p != _sizes.end(); ++p)
   {
      ValueType::size_type valueSize = value.size();
      if (p->first == p->second && valueSize != p->first)
      {
         throw ASN1Exception(toString() + " value '" + value.substr(0,
            std::min(VALUE_PART_SIZE, valueSize)) + "' size is not equal to size '"
            + utils::ntos(p->first) + "'");
      }

      if (p->first >= 0 && valueSize < p->first)
      {
         throw ASN1Exception(toString() + " value '" + value.substr(0,
            std::min(VALUE_PART_SIZE, valueSize)) + "' size is less than minimum size '"
            + utils::ntos(p->first) + "'");
      }

      if (p->second >= 0 && valueSize > p->second)
      {
         throw ASN1Exception(toString() + " value '" + value.substr(0,
            std::min(VALUE_PART_SIZE, valueSize)) + "' size is more than maximum size '"
            + utils::ntos(p->second) + "'");
      }
   }
}

}
