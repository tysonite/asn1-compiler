#ifndef __INTEGER_TYPE_HH
#define __INTEGER_TYPE_HH

#include <type/Type.hh>

#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>
#include <ber/BERBuffer.hh>

namespace asn1
{

class IntegerType : public Type
{
public:

   typedef Integer ValueType;
   
   explicit IntegerType(const ValueType& defaultValue = 0, bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault), _minValue(0),
      _maxValue(0), _hasMinMax(false) {}

   // Returns type identifier
   virtual TypeID typeID() const { return INTEGER_TYPE; }

   const Integer& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   void setMinValue(const Integer& value) { _minValue = value; _hasMinMax = true; }
   Integer minValue() const { return _minValue; }

   void setMaxValue(const Integer& value) { _maxValue = value; _hasMinMax = true; }
   Integer maxValue() const { return _maxValue; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<Integer> restorer(value);
      
      reader.readInteger(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeInteger(value, *this);
   }

private:

   ValueType _defaultValue;
   bool      _hasDefault;

   ValueType _minValue, _maxValue;
   bool      _hasMinMax;

private:
    
   DISALLOW_COPY_AND_ASSIGN(IntegerType);
};

}

#endif // __INTEGER_TYPE_HH
