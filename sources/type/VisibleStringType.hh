#ifndef __VISIBLE_STRING_TYPE_HH
#define __VISIBLE_STRING_TYPE_HH

#include <type/OctetStringType.hh>

namespace asn1
{

class VisibleStringType : public OctetStringType
{
public:

   // Constructor
   explicit VisibleStringType(const OctetString& defaultValue = "", bool hasDefault = false)
      : OctetStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return VISIBLE_STRING_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const OctetString& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, OctetString& value) const
   { 
      ValueRestorer<OctetString> restorer(value);
      
      reader.readVisibleString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const OctetString& value) const
   {
      writer.writeVisibleString(value, *this);
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(VisibleStringType);
};

}

#endif // __VISIBLE_STRING_TYPE_HH
