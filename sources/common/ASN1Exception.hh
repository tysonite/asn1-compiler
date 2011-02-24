#ifndef __ASN1_EXCEPTION_HH
#define __ASN1_EXCEPTION_HH

#include <exception>
#include <string>

namespace asn1
{

class ASN1Exception : public std::exception
{
public:

   explicit ASN1Exception(const char* msg)
      : std::exception(msg) {}
   explicit ASN1Exception(const std::string& msg)
      : std::exception(msg.c_str()) {}
};

}

#endif // __ASN1_EXCEPTION_HH
