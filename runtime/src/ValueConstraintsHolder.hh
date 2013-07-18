#ifndef __VALUE_CONSTRAINTS_HOLDER_HH
#define __VALUE_CONSTRAINTS_HOLDER_HH

#include "TypeCommon.hh"
#include "Utils.hh"
#include "ASN1Exception.hh"

namespace asn1
{

template <typename NumericType>
class ValueConstraintsHolder
{
public:

   // Constructor
   explicit ValueConstraintsHolder(const Type& type, NumericType minValue = 0, NumericType maxValue = 0)
      : _type(type), _minValue(minValue), _maxValue(maxValue), _hasMinMax(false) {}

   // Sets minimal value
   void setMinValue(NumericType value) { _minValue = value; _hasMinMax = true; }

   // Returns minimal value
   NumericType minValue() const { return _minValue; }

   // Sets maximum value
   void setMaxValue(NumericType value) { _maxValue = value; _hasMinMax = true; }

   // Returns maximum value
   NumericType maxValue() const { return _maxValue; }

   // Checks whether minimal or maximum size is set
   bool hasMinMaxValue() const { return _hasMinMax; }

   // Checks type parameters for validness
   void checkType(const NumericType& value) const;

protected:

   // reference to type which is known to include value constraints
   const Type& _type;

   NumericType _minValue, _maxValue;
   bool        _hasMinMax;

private:

   DISALLOW_COPY_AND_ASSIGN(ValueConstraintsHolder);
};

// Checks type parameters for validness
template <typename NumericType>
void ValueConstraintsHolder<NumericType>::checkType(const NumericType& value) const
{
   if (_hasMinMax && value < _minValue)
   {
      throw ASN1Exception(_type.typeName() + " value '" + utils::ntos(value) + "' is less than minimum '" +
         utils::ntos(_minValue) + "'");
   }

   if (_hasMinMax && value > _maxValue)
   {
      throw ASN1Exception(_type.typeName() + " value '" + utils::ntos(value) + "' is greater than maximum '" +
         utils::ntos(_maxValue) + "'");
   }
}

}

#endif // __VALUE_CONSTRAINTS_HOLDER_HH
