#ifndef __SIZE_CONSTRAINTS_HOLDER_HH
#define __SIZE_CONSTRAINTS_HOLDER_HH

#include <cstdint>

#include "TypeCommon.hh"
#include "Utils.hh"

namespace asn1
{

class SizeConstraintsHolder
{
public:
   
   // Constructor
   explicit SizeConstraintsHolder(const Type& type, uint64_t minSize = 0, uint64_t maxSize = 0)
      : _minSize(minSize), _hasMinSize(false), _maxSize(maxSize), _hasMaxSize(false), _type(type) {}

   // Returns minimal size
   uint64_t minSize() const { return _minSize; }

   // Checks whether mininal size is set
   bool hasMinSize() const { return _hasMinSize; }

   // Sets minimal size
   void setMinSize(uint64_t minSize) { _minSize = minSize; _hasMinSize = true; }

   // Returns maximal size
   uint64_t maxSize() const { return _maxSize; }

   // Checks whether maximal size is set
   bool hasMaxSize() const { return _hasMaxSize; }

   // Sets maximal size
   void setMaxSize(uint64_t maxSize) { _maxSize = maxSize; _hasMaxSize = true; }

   // Checks size
   void checkSize(uint64_t size) const;

protected:

   uint64_t    _minSize;
   bool        _hasMinSize;
   uint64_t    _maxSize;
   bool        _hasMaxSize;

   // reference to type which is known to include size constraints
   const Type& _type;

private:

   DISALLOW_COPY_AND_ASSIGN(SizeConstraintsHolder);
};

}

#endif // __SIZE_CONSTRAINTS_HOLDER_HH
