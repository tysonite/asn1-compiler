#ifndef __UNSIGNED_INTEGER_TYPE_HH
#define __UNSIGNED_INTEGER_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"

namespace asn1
{

class UnsignedIntegerType : public Type
{
public:

   typedef UnsignedInteger ValueType;
   
   explicit UnsignedIntegerType(const ValueType& defaultValue = 0, bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault), _minValue(0),
      _maxValue(0), _hasMinMax(false) {}

   // Returns type identifier
   virtual TypeID typeID() const { return INTEGER_TYPE; }

   const Integer& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   void setMinValue(int64_t value) { _minValue = value; _hasMinMax = true; }
   uint64_t minValue() const { return _minValue; }

   void setMaxValue(int64_t value) { _maxValue = value; _hasMinMax = true; }
   uint64_t maxValue() const { return _maxValue; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
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

   uint64_t   _minValue, _maxValue;
   bool      _hasMinMax;

private:
    
   DISALLOW_COPY_AND_ASSIGN(UnsignedIntegerType);
};

}

#endif // __UNSIGNED_INTEGER_TYPE_HH
