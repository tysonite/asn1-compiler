#ifndef __ENUMERATED_TYPE_HH
#define __ENUMERATED_TYPE_HH

#include <list>
#include <algorithm>

#include <type/Type.hh>

namespace asn1
{

class EnumeratedType : public Type
{
public:

   typedef Integer ValueType;

   explicit EnumeratedType(const ValueType& defaultValue = 0, bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return ENUMERATED_TYPE; }

   const ValueType& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const
   {
      std::list<ValueType>::const_iterator p = std::find(_enumValues.begin(), _enumValues.end(), value);
      if (p == _enumValues.end())
         throw ASN1Exception("Value '" + utils::ntos(value) + "' is illegal in enumeration " + toString());
   }

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);

      reader.readEnumerated(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeEnumerated(value, *this);
   }

protected:

   // Adds possible enumerated value
   void _addEnumValue(const ValueType& value)
   {
      _enumValues.push_back(value);
   }

private:

   ValueType            _defaultValue;
   bool                 _hasDefault;
   std::list<ValueType> _enumValues;

private:

   DISALLOW_COPY_AND_ASSIGN(EnumeratedType);
};

}

#endif // __ENUMERATED_TYPE_HH
