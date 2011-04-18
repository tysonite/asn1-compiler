#include "ObjectIdentifier.hh"
#include "Utils.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Parses and sets oid
void ObjectIdentifier::_parseAndSetOid(const std::string& value)
{
   std::vector<std::string> tokens;
   
   utils::split(value, tokens, ".");
   if (tokens.size() <= 0)
      throw ASN1Exception("Object Identifier value '" + value + "' is incorrect");

   ObjectIdentifier tmp;
   for (std::vector<std::string>::const_iterator p = tokens.begin(); p != tokens.end(); ++p)
      tmp.push_back(utils::ston<SubOID>(*p)); // TODO: take into case when conversation is not possible

   swap(tmp);
}

// Returns object identifier represented as string (i.e. "1.2.3")
std::string ObjectIdentifier::getValueAsString() const
{
   std::string value;

   bool isFirst(true);
   for (const_iterator p = begin(); p != end(); ++p)
   {
      if (isFirst)
      {
         value = utils::ntos(*p);
         isFirst = false;
      }
      else
         value += "." + utils::ntos(*p);
   }

   return value;
}

}
