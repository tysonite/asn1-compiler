#include <iostream>
#include <string>

#include "ber/BERBuffer.hh"
#include "ber/BERValueWriter.hh"
#include "ber/BERValueReader.hh"

#include "xer/XERBuffer.hh"
#include "xer/XERValueWriter.hh"
//#include "xer/XERValueReader.hh"

#include <ASN1Types.hh>

int main()
{
   try
   {
      asn1::XERBuffer buffer;
      asn1::XERValueWriter writer(buffer, false);

      asn1::generated::SNMPv3Message::ValueType msg;
      asn1::generated::SNMPv3Message msgType;
      
      // set parameters
      msg.set_msgVersion(3);
      
      msgType.write(writer, msg);

      std::cout << buffer.c_str() << std::endl;
   }
   catch (std::exception& e)
   {
      std::cerr << "exception: " << e.what() << std::endl;
   }

   std::string line;
   std::getline(std::cin, line);

   return 0;
}