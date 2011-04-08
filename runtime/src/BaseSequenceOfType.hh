#ifndef __BASE_SEQUENCE_OF_TYPE_HH
#define __BASE_SEQUENCE_OF_TYPE_HH

#include "SequenceType.hh"
#include "SizeConstraintsHolder.hh"

namespace asn1
{

class BaseSequenceOfType : public SequenceType, public SizeConstraintsHolder
{
public:
   
   // Constructor
   explicit BaseSequenceOfType(uint64_t minSize = 0, uint64_t maxSize = 0)
      : SizeConstraintsHolder(*this, minSize, maxSize) {}

   // Returns type identifier
   TypeID typeID() const { return SEQUENCE_OF_TYPE; }

private:

   DISALLOW_COPY_AND_ASSIGN(BaseSequenceOfType);
};

}

#endif // __BASE_SEQUENCE_OF_TYPE_HH
