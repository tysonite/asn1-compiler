#include "SequenceType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

void SequenceType::checkSize(uint64_t size) const
{
   if (_hasMinSize && size < _minSize)
      throw ASN1Exception(toString() + " size must be not less than " + utils::ntos(_minSize));
   if (_hasMaxSize && size > _maxSize)
      throw ASN1Exception(toString() + " size must be not more than " + utils::ntos(_maxSize));
}

}
