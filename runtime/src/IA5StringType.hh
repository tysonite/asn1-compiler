#ifndef __IA5_STRING_TYPE_HH
#define __IA5_STRING_TYPE_HH

#include "OctetStringType.hh"

namespace asn1
{

class IA5StringType : public OctetStringType
{
public:

   // Constructor
   explicit IA5StringType(const ValueType& defaultValue = "", bool hasDefault = false)
      : OctetStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return IA5_STRING_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      reader.readIA5String(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeIA5String(value, *this);
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(IA5StringType);
};

}

#endif // __IA5_STRING_TYPE_HH
