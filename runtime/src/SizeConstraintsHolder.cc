#include "SizeConstraintsHolder.hh"
#include "Type.hh"
#include "ASN1Exception.hh"

namespace asn1
{

void SizeConstraintsHolder::checkSize(uint64_t size) const
{
   if (_hasMinSize && size < _minSize)
      throw ASN1Exception(_type.toString() + " size must be not less than " + utils::ntos(_minSize));
   if (_hasMaxSize && size > _maxSize)
      throw ASN1Exception(_type.toString() + " size must be not more than " + utils::ntos(_maxSize));
}

}
