#ifndef __BASE_SET_OF_TYPE_HH
#define __BASE_SET_OF_TYPE_HH

#include "SetType.hh"
#include "SizeConstraintsHolder.hh"

namespace asn1
{

class BaseSetOfType : public SetType, public SizeConstraintsHolder
{
public:
   
   // Constructor
   explicit BaseSetOfType(uint64_t minSize = 0, uint64_t maxSize = 0)
      : SizeConstraintsHolder(*this, minSize, maxSize) {}

   // Returns type identifier
   TypeID typeID() const { return SET_OF_TYPE; }

private:

   DISALLOW_COPY_AND_ASSIGN(BaseSetOfType);
};

}

#endif // __BASE_SET_OF_TYPE_HH
