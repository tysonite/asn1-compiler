#include <iostream>
#include <fstream>

#include <ASN1Types.hh>

#include <BERValueWriter.hh>
#include <BERValueReader.hh>

int main()
{
   asn1::BERBuffer buf;

   try
   {
      asn1::generated::SNMPv3Message type;
      asn1::generated::SNMPv3Message::ValueType value;

      value.set_msgVersion(1);
      value.get_msgGlobalData().set_msgID(1);
      value.get_msgGlobalData().set_msgMaxSize(65535);
      value.get_msgGlobalData().set_msgFlags("0");
      value.get_msgGlobalData().set_msgSecurityModel(1);

      value.get_msgData().choose_plaintext();
      value.get_msgData().get_plaintext().get_data().choose_snmpV2_trap();
      value.get_msgData().get_plaintext().get_data().get_snmpV2_trap().set_request_id(1);
      value.get_msgData().get_plaintext().get_data().get_snmpV2_trap().set_error_index(0);

      asn1::generated::VarBind::ValueType vb2;
      vb2.set_name(asn1::ObjectIdentifier("1.2.3"));
      vb2.get_data().choose_value();
      vb2.get_data().get_value().choose_simple();
      vb2.get_data().get_value().get_simple().choose_objectID_value();
      vb2.get_data().get_value().get_simple().set_objectID_value(asn1::ObjectIdentifier("1.2.3.4.5"));

      value.get_msgData().get_plaintext().get_data().get_snmpV2_trap().get_variable_bindings().push_back(vb2);

      asn1::BERValueWriter writer(buf);
      type.write(writer, value);
   }
   catch (asn1::ASN1Exception& e)
   {
      std::cerr << "write error: " << e.what() << std::endl;
      return 1;
   }

   try
   {
      asn1::generated::SNMPv3Message type;
      asn1::generated::SNMPv3Message::ValueType value;

      asn1::BERValueReader reader(buf);
      type.read(reader, value);
   }
   catch (asn1::ASN1Exception& e)
   {
      std::cerr << "read error: " << e.what() << std::endl;
      return 1;
   }
   catch (std::exception& e)
   {
      std::cerr << "std::exception: " << e.what() << std::endl;
      return 1;
   }

   return 0;
}
