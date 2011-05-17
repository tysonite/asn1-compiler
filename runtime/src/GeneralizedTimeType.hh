#ifndef __GENERALIZED_TIME_TYPE_HH
#define __GENERALIZED_TIME_TYPE_HH

#include "VisibleStringType.hh"

namespace asn1
{

class GeneralizedTimeType : public VisibleStringType
{
public:

   // Constructor
   explicit GeneralizedTimeType(const ValueType& defaultValue = "", bool hasDefault = false)
      : VisibleStringType(defaultValue, hasDefault) {}

   // Returns type identifier
   TypeID typeID() const { return GENERALIZED_TIME_TYPE; }
   
   // Checks type parameters for validness
   void checkType(const ValueType& value) const;

   // Reads the value
   void read(ASN1ValueReader& reader, ValueType& value) const
   { 
      ValueRestorer<ValueType> restorer(value);

      restorer.restoreNotNeeded();
   }

   // Writes the value
   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
   }

private:
   
   DISALLOW_COPY_AND_ASSIGN(GeneralizedTimeType);
};

}

#endif // __GENERALIZED_TIME_TYPE_HH
