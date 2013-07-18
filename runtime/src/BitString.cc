#include <algorithm>

#include "BitString.hh"
#include "ASN1Exception.hh"

namespace asn1
{

// Sets specified bit
void BitString::setBit(size_type bitNumber)
{
   if (bitNumber < size())
      (*this)[bitNumber] = true;
   else
   {
      this->reserve(bitNumber);

      // fill all bits before 'bitNumber' with 'zero's
      for (size_type i = size(); i <= bitNumber - 1; ++i)
         this->push_back(false);

      // sets bit 'bitNumber' to true
      this->push_back(true);
   }
}

// Returns true if bit is set and false otherwise
bool BitString::getBit(size_type bitNumber) const
{
   if (bitNumber < size())
      return (*this)[bitNumber];
   else
      return false;
}

// Clears specified bit
void BitString::clearBit(size_type bitNumber)
{
   if (bitNumber < size())
   {
      (*this)[bitNumber] = false;
      _repack();
   }
}

// Returns bit string represented as string (i.e. "11001")
std::string BitString::getValueAsString() const
{
   std::string value;
   value.reserve(size());

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
   // reserve space for value
   BitString tmp;
   tmp.reserve(value.size());

   // parse and set
   for (std::string::const_iterator p = value.begin(); p != value.end(); ++p)
   {
      if (*p != '1' && *p != '0')
         throw ASN1Exception("Bit String value '" + value + "' is incorrect");

      if (*p == '1')
         tmp.push_back(true);
      else
         tmp.push_back(false);
   }

   // apply value
   swap(tmp);
}

 // Repacks bit string (exclude trailing 'zero' bits)
 void BitString::_repack()
 {
    // repack bit string in order to exclude trailing 'zero'ed bits
    BitString tmp(*this);
    for (const_reverse_iterator p = rbegin(); p < rend(); ++p)
    {
       if (*p == true)
          break;
       else
          tmp.pop_back();
    }

    if (tmp.size() != size()) // apply value
      swap(tmp);
 }

}
