#ifndef __BIG_INTEGER_TYPE_HH
#define __BIG_INTEGER_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"
#include "ValueConstraintsHolder.hh"

namespace asn1
{

class BigIntegerType : public Type, public ValueConstraintsHolder<BigInteger>
{
public:

   typedef BigInteger ValueType;
   
   explicit BigIntegerType(const ValueType& defaultValue = 0, bool hasDefault = false)
      : ValueConstraintsHolder<ValueType>(*this, 0, 0), _defaultValue(defaultValue),
      _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return INTEGER_TYPE; }

   const ValueType& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      if (_hasDefault)
      {
         if (reader.isComponentPresent(*this))
            reader.readBigInteger(value, *this);
         else
            value = _defaultValue;
      }
      else
         reader.readBigInteger(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      if (_hasDefault)
      {
         if (_defaultValue != value)
            writer.writeBigInteger(value, *this);
      }
      else
         writer.writeBigInteger(value, *this);
   }

private:

   ValueType _defaultValue;
   bool      _hasDefault;

private:
    
   DISALLOW_COPY_AND_ASSIGN(BigIntegerType);
};

}

#endif // __BIG_INTEGER_TYPE_HH
