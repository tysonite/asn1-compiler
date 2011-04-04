#ifndef __VISIBLE_STRING_TYPE_HH
#define __VISIBLE_STRING_TYPE_HH

#include "OctetStringType.hh"

namespace asn1
{

class VisibleStringType : public OctetStringType
{
public:

   // Constructor
   explicit VisibleStringType(const ValueType& defaultValue = "", bool hasDefault = false)
      : OctetStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return VISIBLE_STRING_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      reader.readVisibleString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeVisibleString(value, *this);
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(VisibleStringType);
};

}

#endif // __VISIBLE_STRING_TYPE_HH
