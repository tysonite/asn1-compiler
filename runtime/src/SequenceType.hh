#ifndef __SEQUENCE_TYPE_HH
#define __SEQUENCE_TYPE_HH

#include "Type.hh"

namespace asn1
{

class SequenceType : public Type
{
public:
   explicit SequenceType(uint64_t minSize = 0, uint64_t maxSize = 0)
      : _minSize(minSize), _hasMinSize(false), _maxSize(maxSize), _hasMaxSize(false) {}

   virtual TypeID typeID() const { return SEQUENCE_TYPE; }

   uint64_t minSize() const { return _minSize; }
   bool hasMinSize() const { return _hasMinSize; }
   void setMinSize(uint64_t minSize) { _minSize = minSize; _hasMinSize = true; }

   uint64_t maxSize() const { return _maxSize; }
   bool hasMaxSize() const { return _hasMaxSize; }
   void setMaxSize(uint64_t maxSize) { _maxSize = maxSize; _hasMaxSize = true; }

   void checkSize(uint64_t size) const;

protected:

   uint64_t            _minSize;
   bool                _hasMinSize;
   uint64_t            _maxSize;
   bool                _hasMaxSize;

private:
   
   DISALLOW_COPY_AND_ASSIGN(SequenceType);
};

}

#endif // __SEQUENCE_TYPE_HH
