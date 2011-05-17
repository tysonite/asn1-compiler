#ifndef __SET_TYPE_HH
#define __SET_TYPE_HH

#include "Type.hh"

namespace asn1
{

class SetType : public Type
{
public:
 
   // Constructor
   explicit SetType() {}

   // Returns type identifier
   TypeID typeID() const { return SET_TYPE; }

private:
   
   DISALLOW_COPY_AND_ASSIGN(SetType);
};

}

#endif // __SEQUENCE_TYPE_HH
