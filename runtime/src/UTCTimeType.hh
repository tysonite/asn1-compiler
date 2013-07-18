#ifndef __UTC_TIME_TYPE_HH
#define __UTC_TIME_TYPE_HH

#include "VisibleStringType.hh"

namespace asn1
{

class UTCTimeType : public VisibleStringType
{
public:

   // Constructor
   explicit UTCTimeType(const ValueType& defaultValue = "", bool hasDefault = false)
      : VisibleStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return UTC_TIME_TYPE; }

   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   virtual void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);
      
      reader.readUtcTime(value, *this); 

      restorer.restoreNotNeeded();
   }

   // Writes the value
   virtual void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeUtcTime(value, *this);
   }

private:

   DISALLOW_COPY_AND_ASSIGN(UTCTimeType);
};

}

#endif // __UTC_TIME_TYPE_HH
