#ifndef __BIT_STRING_TYPE_HH
#define __BIT_STRING_TYPE_HH

#include <common/ASN1ValueReader.hh>
#include <common/ASN1ValueWriter.hh>

#include <type/Type.hh>

namespace asn1
{

class BitStringType : public Type
{
public:

   typedef Integer ValueType;
   
   explicit BitStringType(const ValueType& defaultValue = 0, bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return INTEGER_TYPE; }

   const Integer& defaultValue() const { return _defaultValue; }
   bool hasDefault() const { return _hasDefault; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const {}

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<Integer> restorer(value);

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
   }

private:

   ValueType _defaultValue;
   bool      _hasDefault;

private:
    
   DISALLOW_COPY_AND_ASSIGN(BitStringType);
};

}

#endif // __BIT_STRING_TYPE_HH
