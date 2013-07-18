#include "DERValueReader.hh"

namespace asn1
{

// Returns prototype (new instance) of the writer
DERValueReader* DERValueReader::_prototype() const
{
   return new DERValueReader(_buffer);
}

}
