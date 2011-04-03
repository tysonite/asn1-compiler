#ifndef __INTEGER_TYPE_HH
#define __INTEGER_TYPE_HH

#include <common/ASN1ValueReader.hh>
#include <common/ASN1ValueWriter.hh>

#include <type/Type.hh>

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

   void setMinValue(int64_t value) { _minValue = value; _hasMinMax = true; }
   int64_t minValue() const { return _minValue; }

   void setMaxValue(int64_t value) { _maxValue = value; _hasMinMax = true; }
   int64_t maxValue() const { return _maxValue; }

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

   int64_t   _minValue, _maxValue;
   bool      _hasMinMax;

private:
    
   DISALLOW_COPY_AND_ASSIGN(IntegerType);
};

}

#endif // __INTEGER_TYPE_HH
