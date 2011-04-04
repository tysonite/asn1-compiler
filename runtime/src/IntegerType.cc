#include "IntegerType.hh"
#include "ASN1Exception.hh"
#include "Utils.hh"

namespace asn1
{

// Checks type parameters for validness
void IntegerType::checkType(const ValueType& value) const
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
