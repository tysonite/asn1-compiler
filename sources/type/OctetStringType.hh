#ifndef __OCTET_STRING_TYPE_HH
#define __OCTET_STRING_TYPE_HH

#include <cstdint>
#include <vector>
#include <utility>

#include <type/Type.hh>
#include <ber/ASN1ValueReader.hh>
#include <ber/ASN1ValueWriter.hh>

namespace asn1
{

class OctetStringType : public Type
{
public:

   typedef OctetString ValueType;

   typedef std::pair<int64_t, int64_t> SizeMinMaxType;
   typedef std::vector<SizeMinMaxType> SizesType;
   
   // Constructor
   explicit OctetStringType(const OctetString& defaultValue = "", bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return OCTET_STRING_TYPE; }

   const OctetString& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }
   void addSize(int64_t minSize, int64_t maxSize) { _sizes.push_back(SizeMinMaxType(minSize, maxSize)); }

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
   SizesType   _sizes;

private:
    
   DISALLOW_COPY_AND_ASSIGN(OctetStringType);
};

}

#endif // __OCTET_STRING_TYPE_HH
