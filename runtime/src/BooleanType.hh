#ifndef __BOOLEAN_TYPE_HH
#define __BOOLEAN_TYPE_HH

#include "ASN1ValueReader.hh"
#include "ASN1ValueWriter.hh"

#include "Type.hh"

namespace asn1
{

class BooleanType : public Type
{
public:

   typedef Boolean ValueType;

   // Constructor
   explicit BooleanType(const ValueType& defaultValue = false, bool hasDefault = false)
      : _defaultValue(defaultValue), _hasDefault(hasDefault) {}

   // Returns type identifier
   virtual TypeID typeID() const { return BOOLEAN_TYPE; }

   // Returns default value of the type
   const Boolean& defaultValue() const { return _defaultValue; }

   // Returns true if type has a default value, otherwise returns false
   bool hasDefault() const { return _hasDefault; }

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);

      if (_hasDefault)
      {
         if (reader.isComponentPresent(*this))
            reader.readBoolean(value, *this);
         else
            value = _defaultValue;
      }
      else
         reader.readBoolean(value, *this);

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      if (_hasDefault)
      {
         if (_defaultValue != value)
            writer.writeBoolean(value, *this);
      }
      else
         writer.writeBoolean(value, *this);
   }

private:

   ValueType _defaultValue; // default value
   bool      _hasDefault;   // indicates whether default value is set

private:

   DISALLOW_COPY_AND_ASSIGN(BooleanType);
};

}

#endif // __BOOLEAN_TYPE_HH
