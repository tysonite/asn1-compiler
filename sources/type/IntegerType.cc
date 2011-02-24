#include <type/IntegerType.hh>
#include <common/ASN1Exception.hh>
#include <common/Utils.hh>

namespace asn1
{

// Checks type parameters for validness
void IntegerType::checkType(const Integer& value) const
{
   if (_hasMinMax && value < _minValue)
   {
      throw ASN1Exception(typeName() + " value '" + utils::ntos(value) + "' is less than minimum '" +
         utils::ntos(_minValue) + "'");
   }

   if (_hasMinMax && value > _maxValue)
   {
      throw ASN1Exception(typeName() + " value '" + utils::ntos(value) + "' is more than maximum '" +
         utils::ntos(_maxValue) + "'");
   }
}

}
