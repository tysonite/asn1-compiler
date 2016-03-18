#ifndef __TYPE_COMMON_HH
#define __TYPE_COMMON_HH

#include <cstdint>

#include <vector>
#include <string>

#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
#include <boost/multiprecision/cpp_int.hpp>
#endif

namespace asn1
{

// Types of tag
typedef int64_t     TagType;
typedef uint8_t     PCType;
typedef uint8_t     CLType;

// Types of ASN.1 value representation
typedef bool        Boolean;
typedef int64_t     Integer;
typedef uint64_t    UnsignedInteger;
#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
namespace mp = boost::multiprecision;
typedef mp::cpp_int BigInteger;
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT
typedef std::string OctetString;
typedef uint32_t    SubOID;

// Types of ASN.1 value type representation
class Type;
class NullType;
class IntegerType;
class UnsignedIntegerType;
#if defined(VARIABLE_LENGTH_INTEGER_SUPPORT)
class BigIntegerType;
#endif // VARIABLE_LENGTH_INTEGER_SUPPORT
class EnumeratedType;
class BooleanType;
class ObjectIdentifierType;
class BitStringType;
class OctetStringType;
class VisibleStringType;
class GraphicStringType;
class GeneralizedTimeType;
class UTCTimeType;
class PrintableStringType;
class TeletexStringType;
class NumericStringType;
class IA5StringType;
class AnyType;
class ChoiceType;
class SequenceType;
class BaseSequenceOfType;
class SetType;
class BaseSetOfType;
template <typename TypeItemType> class TaggingType;
template <typename TypeItemType> class SequenceOfType;
template <typename TypeItemType> class SetOfType;

}

#endif // __TYPE_COMMON_HH
