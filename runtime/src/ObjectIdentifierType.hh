#ifndef __OBJECT_IDENTIFIER_TYPE_HH
#define __OBJECT_IDENTIFIER_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"

namespace asn1
{

class ObjectIdentifierType : public Type
{
public:

   typedef ObjectIdentifier ValueType;

   // Constructor
   explicit ObjectIdentifierType() {}

   // Returns type identifier
   virtual TypeID typeID() const { return OBJECT_IDENTIFIER_TYPE; }

   // Checks type parameters for validness
   void checkType(const ObjectIdentifier&) const {}

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ObjectIdentifier> restorer(value);
      
      reader.readObjectIdentifier(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeObjectIdentifier(value, *this);
   }

private:
    
   DISALLOW_COPY_AND_ASSIGN(ObjectIdentifierType);
};

}

#endif // __OBJECT_IDENTIFIER_TYPE_HH
