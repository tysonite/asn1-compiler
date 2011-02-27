#ifndef __ASN1_EXCEPTION_HH
#define __ASN1_EXCEPTION_HH

#include <exception>
#include <string>

namespace asn1
{

class ASN1Exception : public std::exception
{
public:

   explicit ASN1Exception(const char* msg) throw()
      : _message(msg) {}
   explicit ASN1Exception(const std::string& msg) throw()
      : _message(msg) {}
   ~ASN1Exception() throw() {}

   const char* what() const throw() { return _message.c_str(); }

private:

   std::string _message;
};

}

#endif // __ASN1_EXCEPTION_HH
