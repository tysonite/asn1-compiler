#ifndef __OBJECT_IDENTIFIER_HH
#define __OBJECT_IDENTIFIER_HH

#include <cstdint>

#include <string>
#include <vector>

namespace asn1
{

class ObjectIdentifier
{
public:

   typedef std::vector<uint16_t> ObjectIdentifierRaw;

   // Constructor: value is a string representation of the object identifier.
   // i.e.: value = "1.2.3.4.5"
   ObjectIdentifier(const std::string& value) { setValue(value); }

   // Constructor: value is a vector of identifiers
   // i.e.: value = { 1, 2, 3, 4, 5 }
   ObjectIdentifier(const ObjectIdentifierRaw& value) { setValue(value); }

   // Sets object identifier as string
   void setValue(const std::string& value) { _parseAndSetOid(value); }

   // Sets object identifier as vector
   void setValue(const ObjectIdentifierRaw& value) { _oid = value; }

   // Returns object identifier represented as string
   std::string getValueAsString() const;

   // Returns object identifier in internal representation
   ObjectIdentifierRaw getValueAsVector() const { return _oid; }

private:

   // Parses and sets oid
   void _parseAndSetOid(const std::string& value);

private:

   // object identifier
   ObjectIdentifierRaw _oid;
};

}

#endif // __OBJECT_IDENTIFIER_VALUE_HH
