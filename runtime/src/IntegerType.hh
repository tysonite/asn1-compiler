#ifndef __INTEGER_TYPE_HH
#define __INTEGER_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"
#include "ValueConstraintsHolder.hh"

namespace asn1
{

class IntegerType : public Type, public ValueConstraintsHolder<Integer>
{
public:

   typedef Integer ValueType;
   
   explicit IntegerType(const ValueType& defaultValue = 0, bool hasDefault = false)
      : ValueConstraintsHolder<ValueType>(*this, 0, 0), _defaultValue(defaultValue),
      _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return INTEGER_TYPE; }

   const Integer& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      if (_hasDefault)
      {
         if (reader.isComponentPresent(*this))
            reader.readInteger(value, *this);
         else
            value = _defaultValue;
      }
      else
      reader.readInteger(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      if (_hasDefault)
      {
         if (_defaultValue != value)
            writer.writeInteger(value, *this);
      }
      else
      writer.writeInteger(value, *this);
   }

private:

   ValueType _defaultValue;
   bool      _hasDefault;

private:
    
   DISALLOW_COPY_AND_ASSIGN(IntegerType);
};

}

#endif // __INTEGER_TYPE_HH
