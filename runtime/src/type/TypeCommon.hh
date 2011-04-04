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
typedef bool                  Boolean;
typedef int64_t               Integer;
typedef std::string           OctetString;

// Types of ASN.1 value type representation
class Type;
class NullType;
class IntegerType;
class EnumeratedType;
class BooleanType;
class ObjectIdentifierType;
class OctetStringType;
class VisibleStringType;
class GraphicStringType;
class GeneralizedTimeType;
class PrintableStringType;
class SequenceType;
class ChoiceType;
template <typename TypeItemType> class TaggingType;
template <typename TypeItemType> class SequenceOfType;

}

#endif // __TYPE_COMMON_HH
