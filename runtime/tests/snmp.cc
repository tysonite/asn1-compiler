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
      asn1::generated::Message type;
      asn1::generated::Message::ValueType value;

      value.get_data().choose_snmpV2_trap();
      
      asn1::generated::VarBind::ValueType vb2;
      vb2.get_data().choose_value();
      vb2.get_data().get_value().choose_simple();
      vb2.get_data().get_value().get_simple().choose_objectID_value();
      vb2.get_data().get_value().get_simple().set_objectID_value(asn1::ObjectIdentifier("1.2.3"));

      value.get_data().get_snmpV2_trap().get_variable_bindings().push_back(vb2);

      asn1::BERValueWriter writer(buf);
      type.write(writer, value);
   }
   catch (asn1::ASN1Exception& e)
   {
      std::cout << "write error: " << e.what() << std::endl;
   }

   try
   {
      asn1::generated::Message type;
      asn1::generated::Message::ValueType value;

      asn1::BERValueReader reader(buf);
      type.read(reader, value);
   }
   catch (asn1::ASN1Exception& e)
   {
      std::cout << "read error: " << e.what() << std::endl;
   }

   return 0;
}
