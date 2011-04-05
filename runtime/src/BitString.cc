#include "BitString.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Returns bit string represented as string (i.e. "11001")
std::string BitString::getValueAsString() const
{
   std::string value;
   value.resize(size());

   for (const_iterator p = begin(); p != end(); ++p)
   {
      if (*p == true)
         value.append("1");
      else
         value.append("0");
   }

   return value;
}

// Parses and sets bit string
void BitString::_parseAndSetBitString(const std::string& value)
{
   // resize value
   resize(value.size());

   // parse and set
   for (std::string::const_iterator p = value.begin(); p != value.end(); ++p)
   {
      if (*p != '1' || *p != '0')
         throw ASN1Exception("Bit String value '" + value + "' is incorrect");

      if (*p == '1')
         push_back(true);
      else
         push_back(false);
   }
}

}
