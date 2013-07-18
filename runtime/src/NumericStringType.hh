#ifndef __NUMERIC_STRING_TYPE_HH
#define __NUMERIC_STRING_TYPE_HH

#include "OctetStringType.hh"

namespace asn1
{

class NumericStringType : public OctetStringType
{
public:

   // Constructor
   explicit NumericStringType(const ValueType& defaultValue = "", bool hasDefault = false)
      : OctetStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return NUMERIC_STRING_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      reader.readNumericString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeNumericString(value, *this);
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(NumericStringType);
};

}

#endif // __NUMERIC_STRING_TYPE_HH
