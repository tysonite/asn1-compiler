#ifndef __PRINTABLE_STRING_TYPE_HH
#define __PRINTABLE_STRING_TYPE_HH

#include <type/OctetStringType.hh>

namespace asn1
{

class PrintableStringType : public OctetStringType
{
public:

   // Constructor
   explicit PrintableStringType(const OctetString& defaultValue = "", bool hasDefault = false)
      : OctetStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return PRINTABLE_STRING_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const OctetString& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, OctetString& value) const
   { 
      ValueRestorer<OctetString> restorer(value);
      
      reader.readPrintableString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const OctetString& value) const
   {
      writer.writePrintableString(value, *this);
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(PrintableStringType);
};
}

#endif // __PRINTABLE_STRING_TYPE_HH
