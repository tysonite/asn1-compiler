#ifndef __GRAPHIC_STRING_TYPE_HH
#define __GRAPHIC_STRING_TYPE_HH

#include <type/OctetStringType.hh>

namespace asn1
{

class GraphicStringType : public OctetStringType
{
public:

   // Constructor
   explicit GraphicStringType(const ValueType& defaultValue = "", bool hasDefault = false)
      : OctetStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return GRAPHIC_STRING_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      reader.readGraphicString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeGraphicString(value, *this);
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(GraphicStringType);
};

}

#endif // __GRAPHIC_STRING_TYPE_HH
