#include <iostream>
#include <fstream>
#include <memory>

#include <ASN1Types.hh>

#include <DERValueReader.hh>
#include <XERValueWriter.hh>

int main()
{
   std::ifstream file("d:\\tmp\\ir_1.bin", std::ios::binary);
   if (!file)
   {
      std::cerr << "Can't open file" << std::endl;
      return 1;
   }

   file.seekg(0, std::ios::end);
   std::size_t length = file.tellg();
   file.seekg(0, std::ios::beg);

   std::unique_ptr<char> data(new char[length]);

   file.read(data.get(), length);
   file.close();

   asn1::BERBuffer buf((uint8_t*)data.get(), length);

   try
   {
      asn1::generated::PKIMessage type;
      asn1::generated::PKIMessage::ValueType value;

      asn1::DERValueReader reader(buf);
      type.read(reader, value);

#if defined(ASN1_ENABLE_XER)
      asn1::XERBuffer xbuf;
      asn1::XERValueWriter xwriter(xbuf, false);

      type.write(xwriter, value);

      std::cout << "XER : " << std::endl << xbuf << std::endl;
#endif // ASN1_ENABLE_XER
   }
   catch (asn1::ASN1Exception& e)
   {
      std::cerr << "asn1::ASN1Exception : " << e.what() << std::endl;
      return 1;
   }

   return 0;
}
