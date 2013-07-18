#include "TeletexStringType.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Checks type parameters for validness
void TeletexStringType::checkType(const ValueType& value) const
{
   OctetStringType::checkType(value);

   // TODO: additional checks on string content
}

}
