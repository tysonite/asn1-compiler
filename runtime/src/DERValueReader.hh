#ifndef __DER_VALUE_READER_HH
#define __DER_VALUE_READER_HH

#include "BERValueReader.hh"

namespace asn1
{

class DERValueReader : public BERValueReader
{
public:

   // Constructor
   explicit DERValueReader(BERBuffer& buffer)
      : BERValueReader(buffer) {}

protected:

   // Returns prototype (new instance) of the reader
   DERValueReader* _prototype() const;

private:

   DISALLOW_COPY_AND_ASSIGN(DERValueReader);
};

}

#endif // __DER_VALUE_READER_HH
