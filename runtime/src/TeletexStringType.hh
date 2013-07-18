#ifndef __TELETEX_STRING_TYPE_HH
#define __TELETEX_STRING_TYPE_HH

#include "OctetStringType.hh"

namespace asn1
{

class TeletexStringType : public OctetStringType
{
public:

   // Constructor
   explicit TeletexStringType(const ValueType& defaultValue = "", bool hasDefault = false)
      : OctetStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return TELETEX_STRING_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      reader.readTeletexString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeTeletexString(value, *this);
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(TeletexStringType);
};

}

#endif // __TELETEX_STRING_TYPE_HH
