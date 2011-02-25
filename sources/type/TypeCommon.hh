#ifndef __TYPE_COMMON_HH
#define __TYPE_COMMON_HH

#include <cstdint>

#include <vector>
#include <string>

namespace asn1
{

// Types of tag
typedef int64_t TagType;
typedef uint8_t PCType;
typedef uint8_t CLType;

// Types of ASN.1 value representation
typedef bool                 Boolean;
typedef int64_t              Integer;
typedef std::string          OctetString;
typedef std::vector<int16_t> ObjectIdentifier;

// Types of ASN.1 value type representation
class Type;
class IntegerType;
class BooleanType;
class OctetStringType;
class VisibleStringType;
class PrintableStringType;
class SequenceType;
class ObjectIdentifierType;
template <typename TypeItem, typename TypeItemType> class SequenceOfType;

}

#endif // __TYPE_COMMON_HH
