#ifndef __OCTET_STRING_TYPE_HH
#define __OCTET_STRING_TYPE_HH

#include <cstdint>
#include <vector>
#include <utility>

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"

namespace asn1
{

class OctetStringType : public Type
{
public:

   typedef OctetString ValueType;

   typedef std::pair<int64_t, int64_t> SizeMinMaxType;
   typedef std::vector<SizeMinMaxType> SizesType;
   
   // Constructor
   explicit OctetStringType(const ValueType& defaultValue = "", bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return OCTET_STRING_TYPE; }

   const ValueType& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   // Adds size constraint
   void addSize(int64_t minSize, int64_t maxSize) { _sizes.push_back(SizeMinMaxType(minSize, maxSize)); }

   // Checks type parameters for validness
   virtual void checkType(const ValueType& value) const;

   // Reads the value
   virtual void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);

      reader.readOctetString(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   virtual void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeOctetString(value, *this);
   }

protected:

   ValueType _defaultValue;
   bool      _hasDefault;
   SizesType _sizes;

private:
    
   DISALLOW_COPY_AND_ASSIGN(OctetStringType);
};

}

#endif // __OCTET_STRING_TYPE_HH
