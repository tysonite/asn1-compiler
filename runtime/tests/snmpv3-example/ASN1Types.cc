#include <ASN1Types.hh>

namespace asn1
{

namespace generated
{

void data_INTERNAL__ChoiceType_valuevalue_INTERNAL_asn1__generated__ObjectSyntax_unSpecifiedunSpecified_INTERNAL_asn1__NullType_noSuchObjectnoSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType_noSuchInstancenoSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType_endOfMibViewendOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_value_Type)
   {
      asn1::generated::ObjectSyntax::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }
   else if (choosenType == &_unSpecified_Type)
   {
      asn1::NullType::ValueType v;
      _unSpecified_Type.read(reader, v);
      value.set_unSpecified(std::move(v));
   }
   else if (choosenType == &_noSuchObject_Type)
   {
      noSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType::ValueType v;
      _noSuchObject_Type.read(reader, v);
      value.set_noSuchObject(std::move(v));
   }
   else if (choosenType == &_noSuchInstance_Type)
   {
      noSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType::ValueType v;
      _noSuchInstance_Type.read(reader, v);
      value.set_noSuchInstance(std::move(v));
   }
   else if (choosenType == &_endOfMibView_Type)
   {
      endOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType::ValueType v;
      _endOfMibView_Type.read(reader, v);
      value.set_endOfMibView(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _value_Type.toString() + ", " + _unSpecified_Type.toString() + ", " + _noSuchObject_Type.toString() + ", " + _noSuchInstance_Type.toString() + ", " + _endOfMibView_Type.toString());
   }
}

void data_INTERNAL__ChoiceType_valuevalue_INTERNAL_asn1__generated__ObjectSyntax_unSpecifiedunSpecified_INTERNAL_asn1__NullType_noSuchObjectnoSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType_noSuchInstancenoSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType_endOfMibViewendOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_value_Choosen() || value.has_unSpecified_Choosen() || value.has_noSuchObject_Choosen() || value.has_noSuchInstance_Choosen() || value.has_endOfMibView_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_value_Choosen())
      _value_Type.write(writer, value.get_value());
   else if (value.has_unSpecified_Choosen())
      _unSpecified_Type.write(writer, value.get_unSpecified());
   else if (value.has_noSuchObject_Choosen())
      _noSuchObject_Type.write(writer, value.get_noSuchObject());
   else if (value.has_noSuchInstance_Choosen())
      _noSuchInstance_Type.write(writer, value.get_noSuchInstance());
   else if (value.has_endOfMibView_Choosen())
      _endOfMibView_Type.write(writer, value.get_endOfMibView());

   writer.writeChoiceEnd(*this);
}


void ObjectSyntax::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_simple_Type)
   {
      asn1::generated::SimpleSyntax::ValueType v;
      _simple_Type.read(reader, v);
      value.set_simple(std::move(v));
   }
   else if (choosenType == &_application_wide_Type)
   {
      asn1::generated::ApplicationSyntax::ValueType v;
      _application_wide_Type.read(reader, v);
      value.set_application_wide(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _simple_Type.toString() + ", " + _application_wide_Type.toString());
   }
}

void ObjectSyntax::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_simple_Choosen() || value.has_application_wide_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_simple_Choosen())
      _simple_Type.write(writer, value.get_simple());
   else if (value.has_application_wide_Choosen())
      _application_wide_Type.write(writer, value.get_application_wide());

   writer.writeChoiceEnd(*this);
}


void SimpleSyntax::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_integer_value_Type)
   {
      asn1::IntegerType::ValueType v;
      _integer_value_Type.read(reader, v);
      value.set_integer_value(std::move(v));
   }
   else if (choosenType == &_string_value_Type)
   {
      asn1::OctetStringType::ValueType v;
      _string_value_Type.read(reader, v);
      value.set_string_value(std::move(v));
   }
   else if (choosenType == &_objectID_value_Type)
   {
      asn1::ObjectIdentifierType::ValueType v;
      _objectID_value_Type.read(reader, v);
      value.set_objectID_value(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _integer_value_Type.toString() + ", " + _string_value_Type.toString() + ", " + _objectID_value_Type.toString());
   }
}

void SimpleSyntax::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_integer_value_Choosen() || value.has_string_value_Choosen() || value.has_objectID_value_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_integer_value_Choosen())
      _integer_value_Type.write(writer, value.get_integer_value());
   else if (value.has_string_value_Choosen())
      _string_value_Type.write(writer, value.get_string_value());
   else if (value.has_objectID_value_Choosen())
      _objectID_value_Type.write(writer, value.get_objectID_value());

   writer.writeChoiceEnd(*this);
}


void ApplicationSyntax::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_ipAddress_value_Type)
   {
      asn1::generated::IpAddress::ValueType v;
      _ipAddress_value_Type.read(reader, v);
      value.set_ipAddress_value(std::move(v));
   }
   else if (choosenType == &_counter_value_Type)
   {
      asn1::generated::Counter32::ValueType v;
      _counter_value_Type.read(reader, v);
      value.set_counter_value(std::move(v));
   }
   else if (choosenType == &_timeticks_value_Type)
   {
      asn1::generated::TimeTicks::ValueType v;
      _timeticks_value_Type.read(reader, v);
      value.set_timeticks_value(std::move(v));
   }
   else if (choosenType == &_arbitrary_value_Type)
   {
      asn1::generated::Opaque::ValueType v;
      _arbitrary_value_Type.read(reader, v);
      value.set_arbitrary_value(std::move(v));
   }
   else if (choosenType == &_big_counter_value_Type)
   {
      asn1::generated::Counter64::ValueType v;
      _big_counter_value_Type.read(reader, v);
      value.set_big_counter_value(std::move(v));
   }
   else if (choosenType == &_unsigned_integer_value_Type)
   {
      asn1::generated::Unsigned32::ValueType v;
      _unsigned_integer_value_Type.read(reader, v);
      value.set_unsigned_integer_value(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _ipAddress_value_Type.toString() + ", " + _counter_value_Type.toString() + ", " + _timeticks_value_Type.toString() + ", " + _arbitrary_value_Type.toString() + ", " + _big_counter_value_Type.toString() + ", " + _unsigned_integer_value_Type.toString());
   }
}

void ApplicationSyntax::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_ipAddress_value_Choosen() || value.has_counter_value_Choosen() || value.has_timeticks_value_Choosen() || value.has_arbitrary_value_Choosen() || value.has_big_counter_value_Choosen() || value.has_unsigned_integer_value_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_ipAddress_value_Choosen())
      _ipAddress_value_Type.write(writer, value.get_ipAddress_value());
   else if (value.has_counter_value_Choosen())
      _counter_value_Type.write(writer, value.get_counter_value());
   else if (value.has_timeticks_value_Choosen())
      _timeticks_value_Type.write(writer, value.get_timeticks_value());
   else if (value.has_arbitrary_value_Choosen())
      _arbitrary_value_Type.write(writer, value.get_arbitrary_value());
   else if (value.has_big_counter_value_Choosen())
      _big_counter_value_Type.write(writer, value.get_big_counter_value());
   else if (value.has_unsigned_integer_value_Choosen())
      _unsigned_integer_value_Type.write(writer, value.get_unsigned_integer_value());

   writer.writeChoiceEnd(*this);
}


void PDUs::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_get_request_Type)
   {
      asn1::generated::GetRequest_PDU::ValueType v;
      _get_request_Type.read(reader, v);
      value.set_get_request(std::move(v));
   }
   else if (choosenType == &_get_next_request_Type)
   {
      asn1::generated::GetNextRequest_PDU::ValueType v;
      _get_next_request_Type.read(reader, v);
      value.set_get_next_request(std::move(v));
   }
   else if (choosenType == &_get_bulk_request_Type)
   {
      asn1::generated::GetBulkRequest_PDU::ValueType v;
      _get_bulk_request_Type.read(reader, v);
      value.set_get_bulk_request(std::move(v));
   }
   else if (choosenType == &_response_Type)
   {
      asn1::generated::Response_PDU::ValueType v;
      _response_Type.read(reader, v);
      value.set_response(std::move(v));
   }
   else if (choosenType == &_set_request_Type)
   {
      asn1::generated::SetRequest_PDU::ValueType v;
      _set_request_Type.read(reader, v);
      value.set_set_request(std::move(v));
   }
   else if (choosenType == &_inform_request_Type)
   {
      asn1::generated::InformRequest_PDU::ValueType v;
      _inform_request_Type.read(reader, v);
      value.set_inform_request(std::move(v));
   }
   else if (choosenType == &_snmpV2_trap_Type)
   {
      asn1::generated::SNMPv2_Trap_PDU::ValueType v;
      _snmpV2_trap_Type.read(reader, v);
      value.set_snmpV2_trap(std::move(v));
   }
   else if (choosenType == &_report_Type)
   {
      asn1::generated::Report_PDU::ValueType v;
      _report_Type.read(reader, v);
      value.set_report(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _get_request_Type.toString() + ", " + _get_next_request_Type.toString() + ", " + _get_bulk_request_Type.toString() + ", " + _response_Type.toString() + ", " + _set_request_Type.toString() + ", " + _inform_request_Type.toString() + ", " + _snmpV2_trap_Type.toString() + ", " + _report_Type.toString());
   }
}

void PDUs::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_get_request_Choosen() || value.has_get_next_request_Choosen() || value.has_get_bulk_request_Choosen() || value.has_response_Choosen() || value.has_set_request_Choosen() || value.has_inform_request_Choosen() || value.has_snmpV2_trap_Choosen() || value.has_report_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_get_request_Choosen())
      _get_request_Type.write(writer, value.get_get_request());
   else if (value.has_get_next_request_Choosen())
      _get_next_request_Type.write(writer, value.get_get_next_request());
   else if (value.has_get_bulk_request_Choosen())
      _get_bulk_request_Type.write(writer, value.get_get_bulk_request());
   else if (value.has_response_Choosen())
      _response_Type.write(writer, value.get_response());
   else if (value.has_set_request_Choosen())
      _set_request_Type.write(writer, value.get_set_request());
   else if (value.has_inform_request_Choosen())
      _inform_request_Type.write(writer, value.get_inform_request());
   else if (value.has_snmpV2_trap_Choosen())
      _snmpV2_trap_Type.write(writer, value.get_snmpV2_trap());
   else if (value.has_report_Choosen())
      _report_Type.write(writer, value.get_report());

   writer.writeChoiceEnd(*this);
}


void PDU::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _request_id_Type.read(reader, v);
      value.set_request_id(std::move(v));
   }
   {
      error_status_INTERNAL_::ValueType v;
      _error_status_Type.read(reader, v);
      value.set_error_status(std::move(v));
   }
   {
      asn1::UnsignedIntegerType::ValueType v;
      _error_index_Type.read(reader, v);
      value.set_error_index(std::move(v));
   }
   {
      asn1::generated::VarBindList::ValueType v;
      _variable_bindings_Type.read(reader, v);
      value.set_variable_bindings(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PDU::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _request_id_Type.write(writer, value.get_request_id());
   _error_status_Type.write(writer, value.get_error_status());
   _error_index_Type.write(writer, value.get_error_index());
   _variable_bindings_Type.write(writer, value.get_variable_bindings());

   writer.writeSequenceEnd(*this);
}


void BulkPDU::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _request_id_Type.read(reader, v);
      value.set_request_id(std::move(v));
   }
   {
      asn1::UnsignedIntegerType::ValueType v;
      _non_repeaters_Type.read(reader, v);
      value.set_non_repeaters(std::move(v));
   }
   {
      asn1::UnsignedIntegerType::ValueType v;
      _max_repetitions_Type.read(reader, v);
      value.set_max_repetitions(std::move(v));
   }
   {
      asn1::generated::VarBindList::ValueType v;
      _variable_bindings_Type.read(reader, v);
      value.set_variable_bindings(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void BulkPDU::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _request_id_Type.write(writer, value.get_request_id());
   _non_repeaters_Type.write(writer, value.get_non_repeaters());
   _max_repetitions_Type.write(writer, value.get_max_repetitions());
   _variable_bindings_Type.write(writer, value.get_variable_bindings());

   writer.writeSequenceEnd(*this);
}


void VarBind::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::ObjectName::ValueType v;
      _name_Type.read(reader, v);
      value.set_name(std::move(v));
   }
   {
      data_INTERNAL__ChoiceType_valuevalue_INTERNAL_asn1__generated__ObjectSyntax_unSpecifiedunSpecified_INTERNAL_asn1__NullType_noSuchObjectnoSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType_noSuchInstancenoSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType_endOfMibViewendOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType::ValueType v;
      _data_Type.read(reader, v);
      value.set_data(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void VarBind::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _name_Type.write(writer, value.get_name());
   _data_Type.write(writer, value.get_data());

   writer.writeSequenceEnd(*this);
}


void SNMPv3Message::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::UnsignedIntegerType::ValueType v;
      _msgVersion_Type.read(reader, v);
      value.set_msgVersion(std::move(v));
   }
   {
      asn1::generated::HeaderData::ValueType v;
      _msgGlobalData_Type.read(reader, v);
      value.set_msgGlobalData(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _msgSecurityParameters_Type.read(reader, v);
      value.set_msgSecurityParameters(std::move(v));
   }
   {
      asn1::generated::ScopedPduData::ValueType v;
      _msgData_Type.read(reader, v);
      value.set_msgData(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SNMPv3Message::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _msgVersion_Type.write(writer, value.get_msgVersion());
   _msgGlobalData_Type.write(writer, value.get_msgGlobalData());
   _msgSecurityParameters_Type.write(writer, value.get_msgSecurityParameters());
   _msgData_Type.write(writer, value.get_msgData());

   writer.writeSequenceEnd(*this);
}


void HeaderData::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::UnsignedIntegerType::ValueType v;
      _msgID_Type.read(reader, v);
      value.set_msgID(std::move(v));
   }
   {
      asn1::UnsignedIntegerType::ValueType v;
      _msgMaxSize_Type.read(reader, v);
      value.set_msgMaxSize(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _msgFlags_Type.read(reader, v);
      value.set_msgFlags(std::move(v));
   }
   {
      asn1::UnsignedIntegerType::ValueType v;
      _msgSecurityModel_Type.read(reader, v);
      value.set_msgSecurityModel(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void HeaderData::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _msgID_Type.write(writer, value.get_msgID());
   _msgMaxSize_Type.write(writer, value.get_msgMaxSize());
   _msgFlags_Type.write(writer, value.get_msgFlags());
   _msgSecurityModel_Type.write(writer, value.get_msgSecurityModel());

   writer.writeSequenceEnd(*this);
}


void ScopedPduData::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_plaintext_Type)
   {
      asn1::generated::ScopedPDU::ValueType v;
      _plaintext_Type.read(reader, v);
      value.set_plaintext(std::move(v));
   }
   else if (choosenType == &_encryptedPDU_Type)
   {
      asn1::OctetStringType::ValueType v;
      _encryptedPDU_Type.read(reader, v);
      value.set_encryptedPDU(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _plaintext_Type.toString() + ", " + _encryptedPDU_Type.toString());
   }
}

void ScopedPduData::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_plaintext_Choosen() || value.has_encryptedPDU_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_plaintext_Choosen())
      _plaintext_Type.write(writer, value.get_plaintext());
   else if (value.has_encryptedPDU_Choosen())
      _encryptedPDU_Type.write(writer, value.get_encryptedPDU());

   writer.writeChoiceEnd(*this);
}


void ScopedPDU::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::OctetStringType::ValueType v;
      _contextEngineID_Type.read(reader, v);
      value.set_contextEngineID(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _contextName_Type.read(reader, v);
      value.set_contextName(std::move(v));
   }
   {
      asn1::generated::PDUs::ValueType v;
      _data_Type.read(reader, v);
      value.set_data(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ScopedPDU::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _contextEngineID_Type.write(writer, value.get_contextEngineID());
   _contextName_Type.write(writer, value.get_contextName());
   _data_Type.write(writer, value.get_data());

   writer.writeSequenceEnd(*this);
}


void UsmSecurityParameters::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::OctetStringType::ValueType v;
      _msgAuthoritativeEngineID_Type.read(reader, v);
      value.set_msgAuthoritativeEngineID(std::move(v));
   }
   {
      asn1::UnsignedIntegerType::ValueType v;
      _msgAuthoritativeEngineBoots_Type.read(reader, v);
      value.set_msgAuthoritativeEngineBoots(std::move(v));
   }
   {
      asn1::UnsignedIntegerType::ValueType v;
      _msgAuthoritativeEngineTime_Type.read(reader, v);
      value.set_msgAuthoritativeEngineTime(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _msgUserName_Type.read(reader, v);
      value.set_msgUserName(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _msgAuthenticationParameters_Type.read(reader, v);
      value.set_msgAuthenticationParameters(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _msgPrivacyParameters_Type.read(reader, v);
      value.set_msgPrivacyParameters(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void UsmSecurityParameters::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _msgAuthoritativeEngineID_Type.write(writer, value.get_msgAuthoritativeEngineID());
   _msgAuthoritativeEngineBoots_Type.write(writer, value.get_msgAuthoritativeEngineBoots());
   _msgAuthoritativeEngineTime_Type.write(writer, value.get_msgAuthoritativeEngineTime());
   _msgUserName_Type.write(writer, value.get_msgUserName());
   _msgAuthenticationParameters_Type.write(writer, value.get_msgAuthenticationParameters());
   _msgPrivacyParameters_Type.write(writer, value.get_msgPrivacyParameters());

   writer.writeSequenceEnd(*this);
}

}

}
