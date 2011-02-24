#ifndef __OCTET_STRING_TYPE_HH
#define __OCTET_STRING_TYPE_HH

#include <cstdint>

#include <type/Type.hh>
#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>

namespace asn1
{

class OctetStringType : public Type
{
public:
   
   // Constructor
   explicit OctetStringType(const OctetString& defaultValue = "", bool hasDefault = false,
      int64_t minLength = -1, int64_t maxLength = -1)
      : _defaultValue(defaultValue), _hasDefault(hasDefault), _minLength(minLength), _maxLength(maxLength) {}

   // Returns type identifier
   virtual TypeID typeID() const { return OCTET_STRING_TYPE; }

   const OctetString& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }
   int64_t minLength() const { return _minLength; }
   int64_t maxLength() const { return _maxLength; }

   // Checks type parameters for validness
   virtual void checkType(const OctetString& value) const;

   // Reads the value
   virtual void read(ASN1ValueReader& reader, OctetString& value) const
   { 
      ValueRestorer<OctetString> restorer(value);

      reader.readOctetString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   virtual void write(ASN1ValueWriter& writer, const OctetString& value) const
   {
      writer.writeOctetString(value, *this);
   }

protected:

   OctetString _defaultValue;
   bool        _hasDefault;
   int64_t     _minLength, _maxLength;

private:
    
   DISALLOW_COPY_AND_ASSIGN(OctetStringType);
};

}

#endif // __OCTET_STRING_TYPE_HH
