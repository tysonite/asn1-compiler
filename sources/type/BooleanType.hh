#ifndef __BOOLEAN_TYPE_HH
#define __BOOLEAN_TYPE_HH

#include <type/Type.hh>
#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>

namespace asn1
{

class BooleanType : public Type
{
public:

   typedef Boolean ValueType;

   explicit BooleanType(const Boolean& defaultValue = false, bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return BOOLEAN_TYPE; }

   const Boolean& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   // Checks type parameters for validness
   void checkType(const Boolean&) const {}

   // Reads the value
   void read(ASN1ValueReader& reader, Boolean& value) const
   { 
      ValueRestorer<Boolean> restorer(value);
      
      reader.readBoolean(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const Boolean& value) const
   {
      writer.writeBoolean(value, *this);
   }

private:

   Boolean _defaultValue;
   bool    _hasDefault;

private:
    
   DISALLOW_COPY_AND_ASSIGN(BooleanType);
};

}

#endif // __BOOLEAN_TYPE_HH
