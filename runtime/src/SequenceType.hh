#ifndef __SEQUENCE_TYPE_HH
#define __SEQUENCE_TYPE_HH

#include "Type.hh"

namespace asn1
{

class SequenceType : public Type
{
public:
 
   // Constructor
   explicit SequenceType() {}

   // Returns type identifier
   TypeID typeID() const { return SEQUENCE_TYPE; }

private:
   
   DISALLOW_COPY_AND_ASSIGN(SequenceType);
};

}

#endif // __SEQUENCE_TYPE_HH
