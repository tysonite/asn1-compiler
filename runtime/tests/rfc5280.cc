#include <iostream>
#include <fstream>

#include <ASN1Types.hh>

#include <DERValueReader.hh>

int main()
{
   std::ifstream file("d:\\mak\\projects\\asn1-compiler\\certificates\\NewWithCRL", std::ios::binary);

   file.seekg(0, std::ios::end);
   int length = file.tellg();
   file.seekg(0, std::ios::beg);

   char* data = new char[length];

   file.read(data, length);
   file.close();

   asn1::BERBuffer buf((uint8_t*) data, length);

   try
   {
      asn1::generated::Certificate type;
      asn1::generated::Certificate::ValueType value;

      asn1::DERValueReader reader(buf);
      type.read(reader, value);

      asn1::generated::TBSCertificate::extensions_Type::ValueType exts
         = value.get_tbsCertificate().get_extensions();

      for (auto p = exts.begin(); p != exts.end(); ++p) {
        asn1::BERBuffer extBuf(
          reinterpret_cast<const uint8_t*>(p->get_extnValue().data()),
          p->get_extnValue().size());
        asn1::DERValueReader extReader(extBuf);

         if (p->get_extnID() == asn1::generated::id_ce_cRLDistributionPoints) {
            asn1::generated::CRLDistributionPoints crls;
            asn1::generated::CRLDistributionPoints::ValueType vcrl;
            crls.read(extReader, vcrl);
         }
      }
   }
   catch (asn1::ASN1Exception& e)
   {
      std::cout << "error: " << e.what() << std::endl;
   }

   delete[] data;

   return 0;
}
