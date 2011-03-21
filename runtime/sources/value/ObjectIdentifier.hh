#ifndef __OBJECT_IDENTIFIER_HH
#define __OBJECT_IDENTIFIER_HH

#include <cstdint>

#include <string>
#include <vector>

namespace asn1
{

class ObjectIdentifier : public std::vector<uint16_t>
{
public:

   // Default constructor
   ObjectIdentifier() {}

   // Constructor: value is a string representation of the object identifier.
   // i.e.: value = "1.2.3.4.5"
   ObjectIdentifier(const std::string& value) { setValue(value); }

   // Sets object identifier as string
   void setValue(const std::string& value) { _parseAndSetOid(value); }

   // Returns object identifier represented as string
   std::string getValueAsString() const;

private:

   // Parses and sets oid
   void _parseAndSetOid(const std::string& value);
};

}

#endif // __OBJECT_IDENTIFIER_HH
