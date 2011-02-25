#include <iostream>
#include <string>

#include "ber/BERBuffer.hh"
#include "ber/BERValueWriter.hh"
#include "ber/BERValueReader.hh"

#include <type/IntegerType.hh>

int my_main()
{
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);
   
   asn1::IntegerType outType1(0, false);
   //outType1.setTagging(asn1::Type::EMPTY_TAGGING);
   //outType1.setTagNumber(0);

   asn1::IntegerType outType2(0, false);
   //outType2.setImplicit(true);
   //outType2.setTagNumber(2);

//   writer.writeSequenceBegin();
   outType1.write(writer, 1);
   outType2.write(writer, 2);
   writer.writeSequenceEnd();

   for (std::size_t i = 0; i < outbuffer.size(); ++i)
   {
      if ((i + 1) % 20 == 0)
         std::cout << std::endl;
      std::cout << "0x" << std::hex << (int) outbuffer.data()[i] << std::dec << " ";
   }
   std::cout << std::endl;

   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   try
   {
      asn1::Integer v1(-1), v2(-1);
      
      asn1::IntegerType inType1(0, false);
      inType1.setTagging(asn1::Type::EMPTY_TAGGING);
      inType1.setTagNumber(0);

      asn1::IntegerType inType2(0, false);
      //inType2.setImplicit(true);
      //inType2.setTagNumber(2);

//      reader.readSequenceBegin();

      inType1.read(reader, v1);
      inType2.read(reader, v2);
//      reader.readSequenceEnd();

      std::cout << "v1 = " << v1 << "; v2 = " << v2 << std::endl;
   }
   catch (std::exception& e)
   {
      std::cerr << "exception: " << e.what() << std::endl;
   }

   std::string line;
   std::getline(std::cin, line);

   return 0;
}