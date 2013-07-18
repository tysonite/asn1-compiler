#ifndef __BIT_STRING_HH
#define __BIT_STRING_HH

#include <vector>
#include <string>

namespace asn1
{

class BitString : public std::vector<bool>
{
public:

   // Default constructor
   BitString() {}

   // Constructor: value is a string representation of the bit string.
   // i.e.: value = "11001"
   BitString(const std::string& value) { setValue(value); }

   // Sets bit string as string
   void setValue(const std::string& value) { _parseAndSetBitString(value); }

   // Sets specified bit
   void setBit(size_type bitNumber);

   // Returns true if bit is set and false otherwise
   bool getBit(size_type bitNumber) const;

   // Clears specified bit
   void clearBit(size_type bitNumber);

   // Returns bit string represented as string (i.e. "11001")
   std::string getValueAsString() const;

private:

   // Parses and sets bit string
   void _parseAndSetBitString(const std::string& value);

   // Repacks bit string (exclude trailing 'zero' bits)
   void _repack();
};

}

#endif // __BIT_STRING_HH
