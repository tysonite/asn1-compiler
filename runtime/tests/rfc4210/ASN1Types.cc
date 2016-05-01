#include <ASN1Types.hh>

namespace asn1
{

namespace generated
{

void _INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CertificateSerialNumber::ValueType v;
      _userCertificate_Type.read(reader, v);
      value.set_userCertificate(std::move(v));
   }
   {
      asn1::generated::Time::ValueType v;
      _revocationDate_Type.read(reader, v);
      value.set_revocationDate(std::move(v));
   }

   if (reader.isComponentPresent(_crlEntryExtensions_Type))
   {
      asn1::generated::Extensions::ValueType v;
      _crlEntryExtensions_Type.read(reader, v);
      value.set_crlEntryExtensions(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void _INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _userCertificate_Type.write(writer, value.get_userCertificate());
   _revocationDate_Type.write(writer, value.get_revocationDate());
   if (value.is_crlEntryExtensions_Present())
      _crlEntryExtensions_Type.write(writer, value.get_crlEntryExtensions());

   writer.writeSequenceEnd(*this);
}


void _APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_x121_dcc_code_Type)
   {
      asn1::NumericStringType::ValueType v;
      _x121_dcc_code_Type.read(reader, v);
      value.set_x121_dcc_code(std::move(v));
   }
   else if (choosenType == &_iso_3166_alpha2_code_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _iso_3166_alpha2_code_Type.read(reader, v);
      value.set_iso_3166_alpha2_code(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _x121_dcc_code_Type.toString() + ", " + _iso_3166_alpha2_code_Type.toString());
   }
}

void _APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_x121_dcc_code_Choosen() || value.has_iso_3166_alpha2_code_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_x121_dcc_code_Choosen())
      _x121_dcc_code_Type.write(writer, value.get_x121_dcc_code());
   else if (value.has_iso_3166_alpha2_code_Choosen())
      _iso_3166_alpha2_code_Type.write(writer, value.get_iso_3166_alpha2_code());

   writer.writeChoiceEnd(*this);
}


void _APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_numeric_Type)
   {
      asn1::NumericStringType::ValueType v;
      _numeric_Type.read(reader, v);
      value.set_numeric(std::move(v));
   }
   else if (choosenType == &_printable_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printable_Type.read(reader, v);
      value.set_printable(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _numeric_Type.toString() + ", " + _printable_Type.toString());
   }
}

void _APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_numeric_Choosen() || value.has_printable_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_numeric_Choosen())
      _numeric_Type.write(writer, value.get_numeric());
   else if (value.has_printable_Choosen())
      _printable_Type.write(writer, value.get_printable());

   writer.writeChoiceEnd(*this);
}


void e163_4_address_INTERNAL__SequenceType_numbernumber_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType_sub_addresssub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      number_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType::ValueType v;
      _number_Type.read(reader, v);
      value.set_number(std::move(v));
   }

   if (reader.isComponentPresent(_sub_address_Type))
   {
      sub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType::ValueType v;
      _sub_address_Type.read(reader, v);
      value.set_sub_address(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void e163_4_address_INTERNAL__SequenceType_numbernumber_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType_sub_addresssub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _number_Type.write(writer, value.get_number());
   if (value.is_sub_address_Present())
      _sub_address_Type.write(writer, value.get_sub_address());

   writer.writeSequenceEnd(*this);
}


void _INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CertPolicyId::ValueType v;
      _issuerDomainPolicy_Type.read(reader, v);
      value.set_issuerDomainPolicy(std::move(v));
   }
   {
      asn1::generated::CertPolicyId::ValueType v;
      _subjectDomainPolicy_Type.read(reader, v);
      value.set_subjectDomainPolicy(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void _INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _issuerDomainPolicy_Type.write(writer, value.get_issuerDomainPolicy());
   _subjectDomainPolicy_Type.write(writer, value.get_subjectDomainPolicy());

   writer.writeSequenceEnd(*this);
}


void _INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_octets_Type)
   {
      asn1::OctetStringType::ValueType v;
      _octets_Type.read(reader, v);
      value.set_octets(std::move(v));
   }
   else if (choosenType == &_oid_Type)
   {
      asn1::ObjectIdentifierType::ValueType v;
      _oid_Type.read(reader, v);
      value.set_oid(std::move(v));
   }
   else if (choosenType == &_string_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _string_Type.read(reader, v);
      value.set_string(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _octets_Type.toString() + ", " + _oid_Type.toString() + ", " + _string_Type.toString());
   }
}

void _INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_octets_Choosen() || value.has_oid_Choosen() || value.has_string_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_octets_Choosen())
      _octets_Type.write(writer, value.get_octets());
   else if (value.has_oid_Choosen())
      _oid_Type.write(writer, value.get_oid());
   else if (value.has_string_Choosen())
      _string_Type.write(writer, value.get_string());

   writer.writeChoiceEnd(*this);
}


void subject_INTERNAL__ChoiceType_baseCertificateIDbaseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial_subjectNamesubjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_baseCertificateID_Type)
   {
      baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial::ValueType v;
      _baseCertificateID_Type.read(reader, v);
      value.set_baseCertificateID(std::move(v));
   }
   else if (choosenType == &_subjectName_Type)
   {
      subjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _subjectName_Type.read(reader, v);
      value.set_subjectName(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _baseCertificateID_Type.toString() + ", " + _subjectName_Type.toString());
   }
}

void subject_INTERNAL__ChoiceType_baseCertificateIDbaseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial_subjectNamesubjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_baseCertificateID_Choosen() || value.has_subjectName_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_baseCertificateID_Choosen())
      _baseCertificateID_Type.write(writer, value.get_baseCertificateID());
   else if (value.has_subjectName_Choosen())
      _subjectName_Type.write(writer, value.get_subjectName());

   writer.writeChoiceEnd(*this);
}


void authInfo_INTERNAL__ChoiceType_sendersender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName_publicKeyMACpublicKeyMAC_INTERNAL_asn1__generated__PKMACValue::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_sender_Type)
   {
      sender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName::ValueType v;
      _sender_Type.read(reader, v);
      value.set_sender(std::move(v));
   }
   else if (choosenType == &_publicKeyMAC_Type)
   {
      asn1::generated::PKMACValue::ValueType v;
      _publicKeyMAC_Type.read(reader, v);
      value.set_publicKeyMAC(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _sender_Type.toString() + ", " + _publicKeyMAC_Type.toString());
   }
}

void authInfo_INTERNAL__ChoiceType_sendersender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName_publicKeyMACpublicKeyMAC_INTERNAL_asn1__generated__PKMACValue::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_sender_Choosen() || value.has_publicKeyMAC_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_sender_Choosen())
      _sender_Type.write(writer, value.get_sender());
   else if (value.has_publicKeyMAC_Choosen())
      _publicKeyMAC_Type.write(writer, value.get_publicKeyMAC());

   writer.writeChoiceEnd(*this);
}


void identifier_INTERNAL__ChoiceType_stringstring_INTERNAL_asn1__generated__UTF8String_generalNamegeneralName_INTERNAL_asn1__generated__GeneralName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_string_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _string_Type.read(reader, v);
      value.set_string(std::move(v));
   }
   else if (choosenType == &_generalName_Type)
   {
      asn1::generated::GeneralName::ValueType v;
      _generalName_Type.read(reader, v);
      value.set_generalName(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _string_Type.toString() + ", " + _generalName_Type.toString());
   }
}

void identifier_INTERNAL__ChoiceType_stringstring_INTERNAL_asn1__generated__UTF8String_generalNamegeneralName_INTERNAL_asn1__generated__GeneralName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_string_Choosen() || value.has_generalName_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_string_Choosen())
      _string_Type.write(writer, value.get_string());
   else if (value.has_generalName_Choosen())
      _generalName_Type.write(writer, value.get_generalName());

   writer.writeChoiceEnd(*this);
}


void _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _certReqId_Type.read(reader, v);
      value.set_certReqId(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certReqId_Type.write(writer, value.get_certReqId());

   writer.writeSequenceEnd(*this);
}


void _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _certReqId_Type.read(reader, v);
      value.set_certReqId(std::move(v));
   }
   {
      asn1::IntegerType::ValueType v;
      _checkAfter_Type.read(reader, v);
      value.set_checkAfter(std::move(v));
   }

   if (reader.isComponentPresent(_reason_Type))
   {
      asn1::generated::PKIFreeText::ValueType v;
      _reason_Type.read(reader, v);
      value.set_reason(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certReqId_Type.write(writer, value.get_certReqId());
   _checkAfter_Type.write(writer, value.get_checkAfter());
   if (value.is_reason_Present())
      _reason_Type.write(writer, value.get_reason());

   writer.writeSequenceEnd(*this);
}


void Attribute::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AttributeType::ValueType v;
      _type_Type.read(reader, v);
      value.set_type(std::move(v));
   }
   {
      values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue::ValueType v;
      _values_Type.read(reader, v);
      value.set_values(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Attribute::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_Type.write(writer, value.get_type());
   _values_Type.write(writer, value.get_values());

   writer.writeSequenceEnd(*this);
}


void AttributeTypeAndValue::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AttributeType::ValueType v;
      _type_Type.read(reader, v);
      value.set_type(std::move(v));
   }
   {
      asn1::generated::AttributeValue::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttributeTypeAndValue::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_Type.write(writer, value.get_type());
   _value_Type.write(writer, value.get_value());

   writer.writeSequenceEnd(*this);
}


void X520name::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520name::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void X520CommonName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520CommonName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void X520LocalityName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520LocalityName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void X520StateOrProvinceName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520StateOrProvinceName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void X520OrganizationName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520OrganizationName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void X520OrganizationalUnitName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520OrganizationalUnitName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void X520Title::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520Title::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void X520Pseudonym::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void X520Pseudonym::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void Name::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_rdnSequence_Type)
   {
      asn1::generated::RDNSequence::ValueType v;
      _rdnSequence_Type.read(reader, v);
      value.set_rdnSequence(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _rdnSequence_Type.toString());
   }
}

void Name::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_rdnSequence_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_rdnSequence_Choosen())
      _rdnSequence_Type.write(writer, value.get_rdnSequence());

   writer.writeChoiceEnd(*this);
}


void DirectoryString::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_teletexString_Type)
   {
      asn1::TeletexStringType::ValueType v;
      _teletexString_Type.read(reader, v);
      value.set_teletexString(std::move(v));
   }
   else if (choosenType == &_printableString_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printableString_Type.read(reader, v);
      value.set_printableString(std::move(v));
   }
   else if (choosenType == &_universalString_Type)
   {
      asn1::generated::UniversalString::ValueType v;
      _universalString_Type.read(reader, v);
      value.set_universalString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _teletexString_Type.toString() + ", " + _printableString_Type.toString() + ", " + _universalString_Type.toString() + ", " + _utf8String_Type.toString() + ", " + _bmpString_Type.toString());
   }
}

void DirectoryString::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_teletexString_Choosen() || value.has_printableString_Choosen() || value.has_universalString_Choosen() || value.has_utf8String_Choosen() || value.has_bmpString_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_teletexString_Choosen())
      _teletexString_Type.write(writer, value.get_teletexString());
   else if (value.has_printableString_Choosen())
      _printableString_Type.write(writer, value.get_printableString());
   else if (value.has_universalString_Choosen())
      _universalString_Type.write(writer, value.get_universalString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());

   writer.writeChoiceEnd(*this);
}


void Certificate::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::TBSCertificate::ValueType v;
      _tbsCertificate_Type.read(reader, v);
      value.set_tbsCertificate(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signatureAlgorithm_Type.read(reader, v);
      value.set_signatureAlgorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Certificate::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _tbsCertificate_Type.write(writer, value.get_tbsCertificate());
   _signatureAlgorithm_Type.write(writer, value.get_signatureAlgorithm());
   _signature_Type.write(writer, value.get_signature());

   writer.writeSequenceEnd(*this);
}


void TBSCertificate::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      version_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Version::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::CertificateSerialNumber::ValueType v;
      _serialNumber_Type.read(reader, v);
      value.set_serialNumber(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }
   {
      asn1::generated::Name::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }
   {
      asn1::generated::Validity::ValueType v;
      _validity_Type.read(reader, v);
      value.set_validity(std::move(v));
   }
   {
      asn1::generated::Name::ValueType v;
      _subject_Type.read(reader, v);
      value.set_subject(std::move(v));
   }
   {
      asn1::generated::SubjectPublicKeyInfo::ValueType v;
      _subjectPublicKeyInfo_Type.read(reader, v);
      value.set_subjectPublicKeyInfo(std::move(v));
   }

   if (reader.isComponentPresent(_issuerUniqueID_Type))
   {
      issuerUniqueID_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UniqueIdentifier::ValueType v;
      _issuerUniqueID_Type.read(reader, v);
      value.set_issuerUniqueID(std::move(v));
   }

   if (reader.isComponentPresent(_subjectUniqueID_Type))
   {
      subjectUniqueID_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__UniqueIdentifier::ValueType v;
      _subjectUniqueID_Type.read(reader, v);
      value.set_subjectUniqueID(std::move(v));
   }

   if (reader.isComponentPresent(_extensions_Type))
   {
      extensions_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Extensions::ValueType v;
      _extensions_Type.read(reader, v);
      value.set_extensions(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void TBSCertificate::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _serialNumber_Type.write(writer, value.get_serialNumber());
   _signature_Type.write(writer, value.get_signature());
   _issuer_Type.write(writer, value.get_issuer());
   _validity_Type.write(writer, value.get_validity());
   _subject_Type.write(writer, value.get_subject());
   _subjectPublicKeyInfo_Type.write(writer, value.get_subjectPublicKeyInfo());
   if (value.is_issuerUniqueID_Present())
      _issuerUniqueID_Type.write(writer, value.get_issuerUniqueID());
   if (value.is_subjectUniqueID_Present())
      _subjectUniqueID_Type.write(writer, value.get_subjectUniqueID());
   if (value.is_extensions_Present())
      _extensions_Type.write(writer, value.get_extensions());

   writer.writeSequenceEnd(*this);
}


void Validity::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::Time::ValueType v;
      _notBefore_Type.read(reader, v);
      value.set_notBefore(std::move(v));
   }
   {
      asn1::generated::Time::ValueType v;
      _notAfter_Type.read(reader, v);
      value.set_notAfter(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Validity::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _notBefore_Type.write(writer, value.get_notBefore());
   _notAfter_Type.write(writer, value.get_notAfter());

   writer.writeSequenceEnd(*this);
}


void Time::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_utcTime_Type)
   {
      asn1::UTCTimeType::ValueType v;
      _utcTime_Type.read(reader, v);
      value.set_utcTime(std::move(v));
   }
   else if (choosenType == &_generalTime_Type)
   {
      asn1::GeneralizedTimeType::ValueType v;
      _generalTime_Type.read(reader, v);
      value.set_generalTime(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _utcTime_Type.toString() + ", " + _generalTime_Type.toString());
   }
}

void Time::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_utcTime_Choosen() || value.has_generalTime_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_utcTime_Choosen())
      _utcTime_Type.write(writer, value.get_utcTime());
   else if (value.has_generalTime_Choosen())
      _generalTime_Type.write(writer, value.get_generalTime());

   writer.writeChoiceEnd(*this);
}


void SubjectPublicKeyInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _algorithm_Type.read(reader, v);
      value.set_algorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _subjectPublicKey_Type.read(reader, v);
      value.set_subjectPublicKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SubjectPublicKeyInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _algorithm_Type.write(writer, value.get_algorithm());
   _subjectPublicKey_Type.write(writer, value.get_subjectPublicKey());

   writer.writeSequenceEnd(*this);
}


void Extension::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _extnID_Type.read(reader, v);
      value.set_extnID(std::move(v));
   }
   {
      asn1::BooleanType::ValueType v;
      _critical_Type.read(reader, v);
      value.set_critical(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _extnValue_Type.read(reader, v);
      value.set_extnValue(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Extension::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _extnID_Type.write(writer, value.get_extnID());
   _critical_Type.write(writer, value.get_critical());
   _extnValue_Type.write(writer, value.get_extnValue());

   writer.writeSequenceEnd(*this);
}


void CertificateList::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::TBSCertList::ValueType v;
      _tbsCertList_Type.read(reader, v);
      value.set_tbsCertList(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signatureAlgorithm_Type.read(reader, v);
      value.set_signatureAlgorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertificateList::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _tbsCertList_Type.write(writer, value.get_tbsCertList());
   _signatureAlgorithm_Type.write(writer, value.get_signatureAlgorithm());
   _signature_Type.write(writer, value.get_signature());

   writer.writeSequenceEnd(*this);
}


void TBSCertList::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_version_Type))
   {
      asn1::generated::Version::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }
   {
      asn1::generated::Name::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }
   {
      asn1::generated::Time::ValueType v;
      _thisUpdate_Type.read(reader, v);
      value.set_thisUpdate(std::move(v));
   }

   if (reader.isComponentPresent(_nextUpdate_Type))
   {
      asn1::generated::Time::ValueType v;
      _nextUpdate_Type.read(reader, v);
      value.set_nextUpdate(std::move(v));
   }

   if (reader.isComponentPresent(_revokedCertificates_Type))
   {
      revokedCertificates_INTERNAL__SequenceOfType_INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions::ValueType v;
      _revokedCertificates_Type.read(reader, v);
      value.set_revokedCertificates(std::move(v));
   }

   if (reader.isComponentPresent(_crlExtensions_Type))
   {
      crlExtensions_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Extensions::ValueType v;
      _crlExtensions_Type.read(reader, v);
      value.set_crlExtensions(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void TBSCertList::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_version_Present())
      _version_Type.write(writer, value.get_version());
   _signature_Type.write(writer, value.get_signature());
   _issuer_Type.write(writer, value.get_issuer());
   _thisUpdate_Type.write(writer, value.get_thisUpdate());
   if (value.is_nextUpdate_Present())
      _nextUpdate_Type.write(writer, value.get_nextUpdate());
   if (value.is_revokedCertificates_Present())
      _revokedCertificates_Type.write(writer, value.get_revokedCertificates());
   if (value.is_crlExtensions_Present())
      _crlExtensions_Type.write(writer, value.get_crlExtensions());

   writer.writeSequenceEnd(*this);
}


void AlgorithmIdentifier::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _algorithm_Type.read(reader, v);
      value.set_algorithm(std::move(v));
   }

   if (reader.isComponentPresent(_parameters_Type))
   {
      asn1::AnyType::ValueType v;
      _parameters_Type.read(reader, v);
      value.set_parameters(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AlgorithmIdentifier::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _algorithm_Type.write(writer, value.get_algorithm());
   if (value.is_parameters_Present())
      _parameters_Type.write(writer, value.get_parameters());

   writer.writeSequenceEnd(*this);
}


void ORAddress::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::BuiltInStandardAttributes::ValueType v;
      _built_in_standard_attributes_Type.read(reader, v);
      value.set_built_in_standard_attributes(std::move(v));
   }

   if (reader.isComponentPresent(_built_in_domain_defined_attributes_Type))
   {
      asn1::generated::BuiltInDomainDefinedAttributes::ValueType v;
      _built_in_domain_defined_attributes_Type.read(reader, v);
      value.set_built_in_domain_defined_attributes(std::move(v));
   }

   if (reader.isComponentPresent(_extension_attributes_Type))
   {
      asn1::generated::ExtensionAttributes::ValueType v;
      _extension_attributes_Type.read(reader, v);
      value.set_extension_attributes(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ORAddress::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _built_in_standard_attributes_Type.write(writer, value.get_built_in_standard_attributes());
   if (value.is_built_in_domain_defined_attributes_Present())
      _built_in_domain_defined_attributes_Type.write(writer, value.get_built_in_domain_defined_attributes());
   if (value.is_extension_attributes_Present())
      _extension_attributes_Type.write(writer, value.get_extension_attributes());

   writer.writeSequenceEnd(*this);
}


void BuiltInStandardAttributes::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_country_name_Type))
   {
      asn1::generated::CountryName::ValueType v;
      _country_name_Type.read(reader, v);
      value.set_country_name(std::move(v));
   }

   if (reader.isComponentPresent(_administration_domain_name_Type))
   {
      asn1::generated::AdministrationDomainName::ValueType v;
      _administration_domain_name_Type.read(reader, v);
      value.set_administration_domain_name(std::move(v));
   }

   if (reader.isComponentPresent(_network_address_Type))
   {
      network_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__NetworkAddress::ValueType v;
      _network_address_Type.read(reader, v);
      value.set_network_address(std::move(v));
   }

   if (reader.isComponentPresent(_terminal_identifier_Type))
   {
      terminal_identifier_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__TerminalIdentifier::ValueType v;
      _terminal_identifier_Type.read(reader, v);
      value.set_terminal_identifier(std::move(v));
   }

   if (reader.isComponentPresent(_private_domain_name_Type))
   {
      private_domain_name_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__PrivateDomainName::ValueType v;
      _private_domain_name_Type.read(reader, v);
      value.set_private_domain_name(std::move(v));
   }

   if (reader.isComponentPresent(_organization_name_Type))
   {
      organization_name_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OrganizationName::ValueType v;
      _organization_name_Type.read(reader, v);
      value.set_organization_name(std::move(v));
   }

   if (reader.isComponentPresent(_numeric_user_identifier_Type))
   {
      numeric_user_identifier_INTERNAL__IMPLICIT_4_INTERNAL_asn1__generated__NumericUserIdentifier::ValueType v;
      _numeric_user_identifier_Type.read(reader, v);
      value.set_numeric_user_identifier(std::move(v));
   }

   if (reader.isComponentPresent(_personal_name_Type))
   {
      personal_name_INTERNAL__IMPLICIT_5_INTERNAL_asn1__generated__PersonalName::ValueType v;
      _personal_name_Type.read(reader, v);
      value.set_personal_name(std::move(v));
   }

   if (reader.isComponentPresent(_organizational_unit_names_Type))
   {
      organizational_unit_names_INTERNAL__IMPLICIT_6_INTERNAL_asn1__generated__OrganizationalUnitNames::ValueType v;
      _organizational_unit_names_Type.read(reader, v);
      value.set_organizational_unit_names(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void BuiltInStandardAttributes::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_country_name_Present())
      _country_name_Type.write(writer, value.get_country_name());
   if (value.is_administration_domain_name_Present())
      _administration_domain_name_Type.write(writer, value.get_administration_domain_name());
   if (value.is_network_address_Present())
      _network_address_Type.write(writer, value.get_network_address());
   if (value.is_terminal_identifier_Present())
      _terminal_identifier_Type.write(writer, value.get_terminal_identifier());
   if (value.is_private_domain_name_Present())
      _private_domain_name_Type.write(writer, value.get_private_domain_name());
   if (value.is_organization_name_Present())
      _organization_name_Type.write(writer, value.get_organization_name());
   if (value.is_numeric_user_identifier_Present())
      _numeric_user_identifier_Type.write(writer, value.get_numeric_user_identifier());
   if (value.is_personal_name_Present())
      _personal_name_Type.write(writer, value.get_personal_name());
   if (value.is_organizational_unit_names_Present())
      _organizational_unit_names_Type.write(writer, value.get_organizational_unit_names());

   writer.writeSequenceEnd(*this);
}


void PrivateDomainName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_numeric_Type)
   {
      asn1::NumericStringType::ValueType v;
      _numeric_Type.read(reader, v);
      value.set_numeric(std::move(v));
   }
   else if (choosenType == &_printable_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printable_Type.read(reader, v);
      value.set_printable(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _numeric_Type.toString() + ", " + _printable_Type.toString());
   }
}

void PrivateDomainName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_numeric_Choosen() || value.has_printable_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_numeric_Choosen())
      _numeric_Type.write(writer, value.get_numeric());
   else if (value.has_printable_Choosen())
      _printable_Type.write(writer, value.get_printable());

   writer.writeChoiceEnd(*this);
}


void PersonalName::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSetBegin(*this);

   {
      surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__PrintableStringType::ValueType v;
      _surname_Type.read(reader, v);
      value.set_surname(std::move(v));
   }

   if (reader.isComponentPresent(_given_name_Type))
   {
      given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__PrintableStringType::ValueType v;
      _given_name_Type.read(reader, v);
      value.set_given_name(std::move(v));
   }

   if (reader.isComponentPresent(_initials_Type))
   {
      initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__PrintableStringType::ValueType v;
      _initials_Type.read(reader, v);
      value.set_initials(std::move(v));
   }

   if (reader.isComponentPresent(_generation_qualifier_Type))
   {
      generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__PrintableStringType::ValueType v;
      _generation_qualifier_Type.read(reader, v);
      value.set_generation_qualifier(std::move(v));
   }

   reader.readSetEnd(*this);
}

void PersonalName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSetBegin(*this);

   _surname_Type.write(writer, value.get_surname());
   if (value.is_given_name_Present())
      _given_name_Type.write(writer, value.get_given_name());
   if (value.is_initials_Present())
      _initials_Type.write(writer, value.get_initials());
   if (value.is_generation_qualifier_Present())
      _generation_qualifier_Type.write(writer, value.get_generation_qualifier());

   writer.writeSetEnd(*this);
}


void BuiltInDomainDefinedAttribute::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::PrintableStringType::ValueType v;
      _type_Type.read(reader, v);
      value.set_type(std::move(v));
   }
   {
      asn1::PrintableStringType::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void BuiltInDomainDefinedAttribute::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_Type.write(writer, value.get_type());
   _value_Type.write(writer, value.get_value());

   writer.writeSequenceEnd(*this);
}


void ExtensionAttribute::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      extension_attribute_type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__UnsignedIntegerType::ValueType v;
      _extension_attribute_type_Type.read(reader, v);
      value.set_extension_attribute_type(std::move(v));
   }
   {
      extension_attribute_value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType::ValueType v;
      _extension_attribute_value_Type.read(reader, v);
      value.set_extension_attribute_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ExtensionAttribute::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _extension_attribute_type_Type.write(writer, value.get_extension_attribute_type());
   _extension_attribute_value_Type.write(writer, value.get_extension_attribute_value());

   writer.writeSequenceEnd(*this);
}


void TeletexPersonalName::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSetBegin(*this);

   {
      surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__TeletexStringType::ValueType v;
      _surname_Type.read(reader, v);
      value.set_surname(std::move(v));
   }

   if (reader.isComponentPresent(_given_name_Type))
   {
      given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__TeletexStringType::ValueType v;
      _given_name_Type.read(reader, v);
      value.set_given_name(std::move(v));
   }

   if (reader.isComponentPresent(_initials_Type))
   {
      initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__TeletexStringType::ValueType v;
      _initials_Type.read(reader, v);
      value.set_initials(std::move(v));
   }

   if (reader.isComponentPresent(_generation_qualifier_Type))
   {
      generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__TeletexStringType::ValueType v;
      _generation_qualifier_Type.read(reader, v);
      value.set_generation_qualifier(std::move(v));
   }

   reader.readSetEnd(*this);
}

void TeletexPersonalName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSetBegin(*this);

   _surname_Type.write(writer, value.get_surname());
   if (value.is_given_name_Present())
      _given_name_Type.write(writer, value.get_given_name());
   if (value.is_initials_Present())
      _initials_Type.write(writer, value.get_initials());
   if (value.is_generation_qualifier_Present())
      _generation_qualifier_Type.write(writer, value.get_generation_qualifier());

   writer.writeSetEnd(*this);
}


void PhysicalDeliveryCountryName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_x121_dcc_code_Type)
   {
      asn1::NumericStringType::ValueType v;
      _x121_dcc_code_Type.read(reader, v);
      value.set_x121_dcc_code(std::move(v));
   }
   else if (choosenType == &_iso_3166_alpha2_code_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _iso_3166_alpha2_code_Type.read(reader, v);
      value.set_iso_3166_alpha2_code(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _x121_dcc_code_Type.toString() + ", " + _iso_3166_alpha2_code_Type.toString());
   }
}

void PhysicalDeliveryCountryName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_x121_dcc_code_Choosen() || value.has_iso_3166_alpha2_code_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_x121_dcc_code_Choosen())
      _x121_dcc_code_Type.write(writer, value.get_x121_dcc_code());
   else if (value.has_iso_3166_alpha2_code_Choosen())
      _iso_3166_alpha2_code_Type.write(writer, value.get_iso_3166_alpha2_code());

   writer.writeChoiceEnd(*this);
}


void PostalCode::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_numeric_code_Type)
   {
      asn1::NumericStringType::ValueType v;
      _numeric_code_Type.read(reader, v);
      value.set_numeric_code(std::move(v));
   }
   else if (choosenType == &_printable_code_Type)
   {
      asn1::PrintableStringType::ValueType v;
      _printable_code_Type.read(reader, v);
      value.set_printable_code(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _numeric_code_Type.toString() + ", " + _printable_code_Type.toString());
   }
}

void PostalCode::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_numeric_code_Choosen() || value.has_printable_code_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_numeric_code_Choosen())
      _numeric_code_Type.write(writer, value.get_numeric_code());
   else if (value.has_printable_code_Choosen())
      _printable_code_Type.write(writer, value.get_printable_code());

   writer.writeChoiceEnd(*this);
}


void UnformattedPostalAddress::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSetBegin(*this);


   if (reader.isComponentPresent(_printable_address_Type))
   {
      printable_address_INTERNAL__SequenceOfType_INTERNAL_asn1__PrintableStringType::ValueType v;
      _printable_address_Type.read(reader, v);
      value.set_printable_address(std::move(v));
   }

   if (reader.isComponentPresent(_teletex_string_Type))
   {
      asn1::TeletexStringType::ValueType v;
      _teletex_string_Type.read(reader, v);
      value.set_teletex_string(std::move(v));
   }

   reader.readSetEnd(*this);
}

void UnformattedPostalAddress::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSetBegin(*this);

   if (value.is_printable_address_Present())
      _printable_address_Type.write(writer, value.get_printable_address());
   if (value.is_teletex_string_Present())
      _teletex_string_Type.write(writer, value.get_teletex_string());

   writer.writeSetEnd(*this);
}


void PDSParameter::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSetBegin(*this);


   if (reader.isComponentPresent(_printable_string_Type))
   {
      asn1::PrintableStringType::ValueType v;
      _printable_string_Type.read(reader, v);
      value.set_printable_string(std::move(v));
   }

   if (reader.isComponentPresent(_teletex_string_Type))
   {
      asn1::TeletexStringType::ValueType v;
      _teletex_string_Type.read(reader, v);
      value.set_teletex_string(std::move(v));
   }

   reader.readSetEnd(*this);
}

void PDSParameter::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSetBegin(*this);

   if (value.is_printable_string_Present())
      _printable_string_Type.write(writer, value.get_printable_string());
   if (value.is_teletex_string_Present())
      _teletex_string_Type.write(writer, value.get_teletex_string());

   writer.writeSetEnd(*this);
}


void ExtendedNetworkAddress::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_e163_4_address_Type)
   {
      e163_4_address_INTERNAL__SequenceType_numbernumber_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType_sub_addresssub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType::ValueType v;
      _e163_4_address_Type.read(reader, v);
      value.set_e163_4_address(std::move(v));
   }
   else if (choosenType == &_psap_address_Type)
   {
      psap_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__PresentationAddress::ValueType v;
      _psap_address_Type.read(reader, v);
      value.set_psap_address(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _e163_4_address_Type.toString() + ", " + _psap_address_Type.toString());
   }
}

void ExtendedNetworkAddress::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_e163_4_address_Choosen() || value.has_psap_address_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_e163_4_address_Choosen())
      _e163_4_address_Type.write(writer, value.get_e163_4_address());
   else if (value.has_psap_address_Choosen())
      _psap_address_Type.write(writer, value.get_psap_address());

   writer.writeChoiceEnd(*this);
}


void PresentationAddress::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_pSelector_Type))
   {
      pSelector_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType::ValueType v;
      _pSelector_Type.read(reader, v);
      value.set_pSelector(std::move(v));
   }

   if (reader.isComponentPresent(_sSelector_Type))
   {
      sSelector_INTERNAL__EXPLICIT_1_INTERNAL_asn1__OctetStringType::ValueType v;
      _sSelector_Type.read(reader, v);
      value.set_sSelector(std::move(v));
   }

   if (reader.isComponentPresent(_tSelector_Type))
   {
      tSelector_INTERNAL__EXPLICIT_2_INTERNAL_asn1__OctetStringType::ValueType v;
      _tSelector_Type.read(reader, v);
      value.set_tSelector(std::move(v));
   }
   {
      nAddresses_INTERNAL__EXPLICIT_3_INTERNAL__SequenceOfType_INTERNAL_asn1__OctetStringType::ValueType v;
      _nAddresses_Type.read(reader, v);
      value.set_nAddresses(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PresentationAddress::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_pSelector_Present())
      _pSelector_Type.write(writer, value.get_pSelector());
   if (value.is_sSelector_Present())
      _sSelector_Type.write(writer, value.get_sSelector());
   if (value.is_tSelector_Present())
      _tSelector_Type.write(writer, value.get_tSelector());
   _nAddresses_Type.write(writer, value.get_nAddresses());

   writer.writeSequenceEnd(*this);
}


void TeletexDomainDefinedAttribute::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::TeletexStringType::ValueType v;
      _type_Type.read(reader, v);
      value.set_type(std::move(v));
   }
   {
      asn1::TeletexStringType::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void TeletexDomainDefinedAttribute::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_Type.write(writer, value.get_type());
   _value_Type.write(writer, value.get_value());

   writer.writeSequenceEnd(*this);
}


void AuthorityKeyIdentifier::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_keyIdentifier_Type))
   {
      keyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyIdentifier::ValueType v;
      _keyIdentifier_Type.read(reader, v);
      value.set_keyIdentifier(std::move(v));
   }

   if (reader.isComponentPresent(_authorityCertIssuer_Type))
   {
      authorityCertIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _authorityCertIssuer_Type.read(reader, v);
      value.set_authorityCertIssuer(std::move(v));
   }

   if (reader.isComponentPresent(_authorityCertSerialNumber_Type))
   {
      authorityCertSerialNumber_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertificateSerialNumber::ValueType v;
      _authorityCertSerialNumber_Type.read(reader, v);
      value.set_authorityCertSerialNumber(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AuthorityKeyIdentifier::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_keyIdentifier_Present())
      _keyIdentifier_Type.write(writer, value.get_keyIdentifier());
   if (value.is_authorityCertIssuer_Present())
      _authorityCertIssuer_Type.write(writer, value.get_authorityCertIssuer());
   if (value.is_authorityCertSerialNumber_Present())
      _authorityCertSerialNumber_Type.write(writer, value.get_authorityCertSerialNumber());

   writer.writeSequenceEnd(*this);
}


void PrivateKeyUsagePeriod::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_notBefore_Type))
   {
      notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType::ValueType v;
      _notBefore_Type.read(reader, v);
      value.set_notBefore(std::move(v));
   }

   if (reader.isComponentPresent(_notAfter_Type))
   {
      notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__GeneralizedTimeType::ValueType v;
      _notAfter_Type.read(reader, v);
      value.set_notAfter(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PrivateKeyUsagePeriod::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_notBefore_Present())
      _notBefore_Type.write(writer, value.get_notBefore());
   if (value.is_notAfter_Present())
      _notAfter_Type.write(writer, value.get_notAfter());

   writer.writeSequenceEnd(*this);
}


void PolicyInformation::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CertPolicyId::ValueType v;
      _policyIdentifier_Type.read(reader, v);
      value.set_policyIdentifier(std::move(v));
   }

   if (reader.isComponentPresent(_policyQualifiers_Type))
   {
      policyQualifiers_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PolicyQualifierInfo::ValueType v;
      _policyQualifiers_Type.read(reader, v);
      value.set_policyQualifiers(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PolicyInformation::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _policyIdentifier_Type.write(writer, value.get_policyIdentifier());
   if (value.is_policyQualifiers_Present())
      _policyQualifiers_Type.write(writer, value.get_policyQualifiers());

   writer.writeSequenceEnd(*this);
}


void PolicyQualifierInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PolicyQualifierId::ValueType v;
      _policyQualifierId_Type.read(reader, v);
      value.set_policyQualifierId(std::move(v));
   }
   {
      asn1::AnyType::ValueType v;
      _qualifier_Type.read(reader, v);
      value.set_qualifier(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PolicyQualifierInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _policyQualifierId_Type.write(writer, value.get_policyQualifierId());
   _qualifier_Type.write(writer, value.get_qualifier());

   writer.writeSequenceEnd(*this);
}


void UserNotice::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_noticeRef_Type))
   {
      asn1::generated::NoticeReference::ValueType v;
      _noticeRef_Type.read(reader, v);
      value.set_noticeRef(std::move(v));
   }

   if (reader.isComponentPresent(_explicitText_Type))
   {
      asn1::generated::DisplayText::ValueType v;
      _explicitText_Type.read(reader, v);
      value.set_explicitText(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void UserNotice::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_noticeRef_Present())
      _noticeRef_Type.write(writer, value.get_noticeRef());
   if (value.is_explicitText_Present())
      _explicitText_Type.write(writer, value.get_explicitText());

   writer.writeSequenceEnd(*this);
}


void NoticeReference::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::DisplayText::ValueType v;
      _organization_Type.read(reader, v);
      value.set_organization(std::move(v));
   }
   {
      noticeNumbers_INTERNAL__SequenceOfType_INTERNAL_asn1__IntegerType::ValueType v;
      _noticeNumbers_Type.read(reader, v);
      value.set_noticeNumbers(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void NoticeReference::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _organization_Type.write(writer, value.get_organization());
   _noticeNumbers_Type.write(writer, value.get_noticeNumbers());

   writer.writeSequenceEnd(*this);
}


void DisplayText::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_ia5String_Type)
   {
      asn1::IA5StringType::ValueType v;
      _ia5String_Type.read(reader, v);
      value.set_ia5String(std::move(v));
   }
   else if (choosenType == &_visibleString_Type)
   {
      asn1::generated::VisibleString::ValueType v;
      _visibleString_Type.read(reader, v);
      value.set_visibleString(std::move(v));
   }
   else if (choosenType == &_bmpString_Type)
   {
      asn1::generated::BMPString::ValueType v;
      _bmpString_Type.read(reader, v);
      value.set_bmpString(std::move(v));
   }
   else if (choosenType == &_utf8String_Type)
   {
      asn1::generated::UTF8String::ValueType v;
      _utf8String_Type.read(reader, v);
      value.set_utf8String(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _ia5String_Type.toString() + ", " + _visibleString_Type.toString() + ", " + _bmpString_Type.toString() + ", " + _utf8String_Type.toString());
   }
}

void DisplayText::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_ia5String_Choosen() || value.has_visibleString_Choosen() || value.has_bmpString_Choosen() || value.has_utf8String_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_ia5String_Choosen())
      _ia5String_Type.write(writer, value.get_ia5String());
   else if (value.has_visibleString_Choosen())
      _visibleString_Type.write(writer, value.get_visibleString());
   else if (value.has_bmpString_Choosen())
      _bmpString_Type.write(writer, value.get_bmpString());
   else if (value.has_utf8String_Choosen())
      _utf8String_Type.write(writer, value.get_utf8String());

   writer.writeChoiceEnd(*this);
}


void GeneralName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_otherName_Type)
   {
      otherName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AnotherName::ValueType v;
      _otherName_Type.read(reader, v);
      value.set_otherName(std::move(v));
   }
   else if (choosenType == &_rfc822Name_Type)
   {
      rfc822Name_INTERNAL__NOTAG_1_INTERNAL_asn1__IA5StringType::ValueType v;
      _rfc822Name_Type.read(reader, v);
      value.set_rfc822Name(std::move(v));
   }
   else if (choosenType == &_dNSName_Type)
   {
      dNSName_INTERNAL__NOTAG_2_INTERNAL_asn1__IA5StringType::ValueType v;
      _dNSName_Type.read(reader, v);
      value.set_dNSName(std::move(v));
   }
   else if (choosenType == &_x400Address_Type)
   {
      x400Address_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__ORAddress::ValueType v;
      _x400Address_Type.read(reader, v);
      value.set_x400Address(std::move(v));
   }
   else if (choosenType == &_directoryName_Type)
   {
      directoryName_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__Name::ValueType v;
      _directoryName_Type.read(reader, v);
      value.set_directoryName(std::move(v));
   }
   else if (choosenType == &_ediPartyName_Type)
   {
      ediPartyName_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__EDIPartyName::ValueType v;
      _ediPartyName_Type.read(reader, v);
      value.set_ediPartyName(std::move(v));
   }
   else if (choosenType == &_uniformResourceIdentifier_Type)
   {
      uniformResourceIdentifier_INTERNAL__NOTAG_6_INTERNAL_asn1__IA5StringType::ValueType v;
      _uniformResourceIdentifier_Type.read(reader, v);
      value.set_uniformResourceIdentifier(std::move(v));
   }
   else if (choosenType == &_iPAddress_Type)
   {
      iPAddress_INTERNAL__NOTAG_7_INTERNAL_asn1__OctetStringType::ValueType v;
      _iPAddress_Type.read(reader, v);
      value.set_iPAddress(std::move(v));
   }
   else if (choosenType == &_registeredID_Type)
   {
      registeredID_INTERNAL__NOTAG_8_INTERNAL_asn1__ObjectIdentifierType::ValueType v;
      _registeredID_Type.read(reader, v);
      value.set_registeredID(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _otherName_Type.toString() + ", " + _rfc822Name_Type.toString() + ", " + _dNSName_Type.toString() + ", " + _x400Address_Type.toString() + ", " + _directoryName_Type.toString() + ", " + _ediPartyName_Type.toString() + ", " + _uniformResourceIdentifier_Type.toString() + ", " + _iPAddress_Type.toString() + ", " + _registeredID_Type.toString());
   }
}

void GeneralName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_otherName_Choosen() || value.has_rfc822Name_Choosen() || value.has_dNSName_Choosen() || value.has_x400Address_Choosen() || value.has_directoryName_Choosen() || value.has_ediPartyName_Choosen() || value.has_uniformResourceIdentifier_Choosen() || value.has_iPAddress_Choosen() || value.has_registeredID_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_otherName_Choosen())
      _otherName_Type.write(writer, value.get_otherName());
   else if (value.has_rfc822Name_Choosen())
      _rfc822Name_Type.write(writer, value.get_rfc822Name());
   else if (value.has_dNSName_Choosen())
      _dNSName_Type.write(writer, value.get_dNSName());
   else if (value.has_x400Address_Choosen())
      _x400Address_Type.write(writer, value.get_x400Address());
   else if (value.has_directoryName_Choosen())
      _directoryName_Type.write(writer, value.get_directoryName());
   else if (value.has_ediPartyName_Choosen())
      _ediPartyName_Type.write(writer, value.get_ediPartyName());
   else if (value.has_uniformResourceIdentifier_Choosen())
      _uniformResourceIdentifier_Type.write(writer, value.get_uniformResourceIdentifier());
   else if (value.has_iPAddress_Choosen())
      _iPAddress_Type.write(writer, value.get_iPAddress());
   else if (value.has_registeredID_Choosen())
      _registeredID_Type.write(writer, value.get_registeredID());

   writer.writeChoiceEnd(*this);
}


void AnotherName::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _type_id_Type.read(reader, v);
      value.set_type_id(std::move(v));
   }
   {
      value_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AnotherName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_id_Type.write(writer, value.get_type_id());
   _value_Type.write(writer, value.get_value());

   writer.writeSequenceEnd(*this);
}


void EDIPartyName::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_nameAssigner_Type))
   {
      nameAssigner_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DirectoryString::ValueType v;
      _nameAssigner_Type.read(reader, v);
      value.set_nameAssigner(std::move(v));
   }
   {
      partyName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DirectoryString::ValueType v;
      _partyName_Type.read(reader, v);
      value.set_partyName(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void EDIPartyName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_nameAssigner_Present())
      _nameAssigner_Type.write(writer, value.get_nameAssigner());
   _partyName_Type.write(writer, value.get_partyName());

   writer.writeSequenceEnd(*this);
}


void BasicConstraints::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::BooleanType::ValueType v;
      _cA_Type.read(reader, v);
      value.set_cA(std::move(v));
   }

   if (reader.isComponentPresent(_pathLenConstraint_Type))
   {
      asn1::UnsignedIntegerType::ValueType v;
      _pathLenConstraint_Type.read(reader, v);
      value.set_pathLenConstraint(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void BasicConstraints::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _cA_Type.write(writer, value.get_cA());
   if (value.is_pathLenConstraint_Present())
      _pathLenConstraint_Type.write(writer, value.get_pathLenConstraint());

   writer.writeSequenceEnd(*this);
}


void PolicyConstraints::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_requireExplicitPolicy_Type))
   {
      requireExplicitPolicy_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SkipCerts::ValueType v;
      _requireExplicitPolicy_Type.read(reader, v);
      value.set_requireExplicitPolicy(std::move(v));
   }

   if (reader.isComponentPresent(_inhibitPolicyMapping_Type))
   {
      inhibitPolicyMapping_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SkipCerts::ValueType v;
      _inhibitPolicyMapping_Type.read(reader, v);
      value.set_inhibitPolicyMapping(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PolicyConstraints::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_requireExplicitPolicy_Present())
      _requireExplicitPolicy_Type.write(writer, value.get_requireExplicitPolicy());
   if (value.is_inhibitPolicyMapping_Present())
      _inhibitPolicyMapping_Type.write(writer, value.get_inhibitPolicyMapping());

   writer.writeSequenceEnd(*this);
}


void DistributionPoint::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_distributionPoint_Type))
   {
      distributionPoint_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DistributionPointName::ValueType v;
      _distributionPoint_Type.read(reader, v);
      value.set_distributionPoint(std::move(v));
   }

   if (reader.isComponentPresent(_reasons_Type))
   {
      reasons_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ReasonFlags::ValueType v;
      _reasons_Type.read(reader, v);
      value.set_reasons(std::move(v));
   }

   if (reader.isComponentPresent(_cRLIssuer_Type))
   {
      cRLIssuer_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _cRLIssuer_Type.read(reader, v);
      value.set_cRLIssuer(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void DistributionPoint::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_distributionPoint_Present())
      _distributionPoint_Type.write(writer, value.get_distributionPoint());
   if (value.is_reasons_Present())
      _reasons_Type.write(writer, value.get_reasons());
   if (value.is_cRLIssuer_Present())
      _cRLIssuer_Type.write(writer, value.get_cRLIssuer());

   writer.writeSequenceEnd(*this);
}


void DistributionPointName::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_fullName_Type)
   {
      fullName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _fullName_Type.read(reader, v);
      value.set_fullName(std::move(v));
   }
   else if (choosenType == &_nameRelativeToCRLIssuer_Type)
   {
      nameRelativeToCRLIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__RelativeDistinguishedName::ValueType v;
      _nameRelativeToCRLIssuer_Type.read(reader, v);
      value.set_nameRelativeToCRLIssuer(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _fullName_Type.toString() + ", " + _nameRelativeToCRLIssuer_Type.toString());
   }
}

void DistributionPointName::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_fullName_Choosen() || value.has_nameRelativeToCRLIssuer_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_fullName_Choosen())
      _fullName_Type.write(writer, value.get_fullName());
   else if (value.has_nameRelativeToCRLIssuer_Choosen())
      _nameRelativeToCRLIssuer_Type.write(writer, value.get_nameRelativeToCRLIssuer());

   writer.writeChoiceEnd(*this);
}


void AccessDescription::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _accessMethod_Type.read(reader, v);
      value.set_accessMethod(std::move(v));
   }
   {
      asn1::generated::GeneralName::ValueType v;
      _accessLocation_Type.read(reader, v);
      value.set_accessLocation(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AccessDescription::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _accessMethod_Type.write(writer, value.get_accessMethod());
   _accessLocation_Type.write(writer, value.get_accessLocation());

   writer.writeSequenceEnd(*this);
}


void AttributeCertificate::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AttributeCertificateInfo::ValueType v;
      _acinfo_Type.read(reader, v);
      value.set_acinfo(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signatureAlgorithm_Type.read(reader, v);
      value.set_signatureAlgorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _signatureValue_Type.read(reader, v);
      value.set_signatureValue(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttributeCertificate::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _acinfo_Type.write(writer, value.get_acinfo());
   _signatureAlgorithm_Type.write(writer, value.get_signatureAlgorithm());
   _signatureValue_Type.write(writer, value.get_signatureValue());

   writer.writeSequenceEnd(*this);
}


void AttributeCertificateInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AttCertVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::Holder::ValueType v;
      _holder_Type.read(reader, v);
      value.set_holder(std::move(v));
   }
   {
      asn1::generated::AttCertIssuer::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }
   {
      asn1::generated::CertificateSerialNumber::ValueType v;
      _serialNumber_Type.read(reader, v);
      value.set_serialNumber(std::move(v));
   }
   {
      asn1::generated::AttCertValidityPeriod::ValueType v;
      _attrCertValidityPeriod_Type.read(reader, v);
      value.set_attrCertValidityPeriod(std::move(v));
   }
   {
      attributes_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute::ValueType v;
      _attributes_Type.read(reader, v);
      value.set_attributes(std::move(v));
   }

   if (reader.isComponentPresent(_issuerUniqueID_Type))
   {
      asn1::generated::UniqueIdentifier::ValueType v;
      _issuerUniqueID_Type.read(reader, v);
      value.set_issuerUniqueID(std::move(v));
   }

   if (reader.isComponentPresent(_extensions_Type))
   {
      asn1::generated::Extensions::ValueType v;
      _extensions_Type.read(reader, v);
      value.set_extensions(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttributeCertificateInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _holder_Type.write(writer, value.get_holder());
   _issuer_Type.write(writer, value.get_issuer());
   _signature_Type.write(writer, value.get_signature());
   _serialNumber_Type.write(writer, value.get_serialNumber());
   _attrCertValidityPeriod_Type.write(writer, value.get_attrCertValidityPeriod());
   _attributes_Type.write(writer, value.get_attributes());
   if (value.is_issuerUniqueID_Present())
      _issuerUniqueID_Type.write(writer, value.get_issuerUniqueID());
   if (value.is_extensions_Present())
      _extensions_Type.write(writer, value.get_extensions());

   writer.writeSequenceEnd(*this);
}


void Holder::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_baseCertificateID_Type))
   {
      baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial::ValueType v;
      _baseCertificateID_Type.read(reader, v);
      value.set_baseCertificateID(std::move(v));
   }

   if (reader.isComponentPresent(_entityName_Type))
   {
      entityName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _entityName_Type.read(reader, v);
      value.set_entityName(std::move(v));
   }

   if (reader.isComponentPresent(_objectDigestInfo_Type))
   {
      objectDigestInfo_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__ObjectDigestInfo::ValueType v;
      _objectDigestInfo_Type.read(reader, v);
      value.set_objectDigestInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Holder::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_baseCertificateID_Present())
      _baseCertificateID_Type.write(writer, value.get_baseCertificateID());
   if (value.is_entityName_Present())
      _entityName_Type.write(writer, value.get_entityName());
   if (value.is_objectDigestInfo_Present())
      _objectDigestInfo_Type.write(writer, value.get_objectDigestInfo());

   writer.writeSequenceEnd(*this);
}


void ObjectDigestInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      digestedObjectType_INTERNAL__EnumeratedTypepublicKey0publicKeyCert1otherObjectTypes2::ValueType v;
      _digestedObjectType_Type.read(reader, v);
      value.set_digestedObjectType(std::move(v));
   }

   if (reader.isComponentPresent(_otherObjectTypeID_Type))
   {
      asn1::ObjectIdentifierType::ValueType v;
      _otherObjectTypeID_Type.read(reader, v);
      value.set_otherObjectTypeID(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _digestAlgorithm_Type.read(reader, v);
      value.set_digestAlgorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _objectDigest_Type.read(reader, v);
      value.set_objectDigest(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ObjectDigestInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _digestedObjectType_Type.write(writer, value.get_digestedObjectType());
   if (value.is_otherObjectTypeID_Present())
      _otherObjectTypeID_Type.write(writer, value.get_otherObjectTypeID());
   _digestAlgorithm_Type.write(writer, value.get_digestAlgorithm());
   _objectDigest_Type.write(writer, value.get_objectDigest());

   writer.writeSequenceEnd(*this);
}


void AttCertIssuer::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_v1Form_Type)
   {
      asn1::generated::GeneralNames::ValueType v;
      _v1Form_Type.read(reader, v);
      value.set_v1Form(std::move(v));
   }
   else if (choosenType == &_v2Form_Type)
   {
      v2Form_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__V2Form::ValueType v;
      _v2Form_Type.read(reader, v);
      value.set_v2Form(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _v1Form_Type.toString() + ", " + _v2Form_Type.toString());
   }
}

void AttCertIssuer::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_v1Form_Choosen() || value.has_v2Form_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_v1Form_Choosen())
      _v1Form_Type.write(writer, value.get_v1Form());
   else if (value.has_v2Form_Choosen())
      _v2Form_Type.write(writer, value.get_v2Form());

   writer.writeChoiceEnd(*this);
}


void V2Form::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_issuerName_Type))
   {
      asn1::generated::GeneralNames::ValueType v;
      _issuerName_Type.read(reader, v);
      value.set_issuerName(std::move(v));
   }

   if (reader.isComponentPresent(_baseCertificateID_Type))
   {
      baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial::ValueType v;
      _baseCertificateID_Type.read(reader, v);
      value.set_baseCertificateID(std::move(v));
   }

   if (reader.isComponentPresent(_objectDigestInfo_Type))
   {
      objectDigestInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ObjectDigestInfo::ValueType v;
      _objectDigestInfo_Type.read(reader, v);
      value.set_objectDigestInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void V2Form::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_issuerName_Present())
      _issuerName_Type.write(writer, value.get_issuerName());
   if (value.is_baseCertificateID_Present())
      _baseCertificateID_Type.write(writer, value.get_baseCertificateID());
   if (value.is_objectDigestInfo_Present())
      _objectDigestInfo_Type.write(writer, value.get_objectDigestInfo());

   writer.writeSequenceEnd(*this);
}


void IssuerSerial::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::GeneralNames::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }
   {
      asn1::generated::CertificateSerialNumber::ValueType v;
      _serial_Type.read(reader, v);
      value.set_serial(std::move(v));
   }

   if (reader.isComponentPresent(_issuerUID_Type))
   {
      asn1::generated::UniqueIdentifier::ValueType v;
      _issuerUID_Type.read(reader, v);
      value.set_issuerUID(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void IssuerSerial::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _issuer_Type.write(writer, value.get_issuer());
   _serial_Type.write(writer, value.get_serial());
   if (value.is_issuerUID_Present())
      _issuerUID_Type.write(writer, value.get_issuerUID());

   writer.writeSequenceEnd(*this);
}


void AttCertValidityPeriod::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::GeneralizedTimeType::ValueType v;
      _notBeforeTime_Type.read(reader, v);
      value.set_notBeforeTime(std::move(v));
   }
   {
      asn1::GeneralizedTimeType::ValueType v;
      _notAfterTime_Type.read(reader, v);
      value.set_notAfterTime(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttCertValidityPeriod::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _notBeforeTime_Type.write(writer, value.get_notBeforeTime());
   _notAfterTime_Type.write(writer, value.get_notAfterTime());

   writer.writeSequenceEnd(*this);
}


void Target::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_targetName_Type)
   {
      targetName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName::ValueType v;
      _targetName_Type.read(reader, v);
      value.set_targetName(std::move(v));
   }
   else if (choosenType == &_targetGroup_Type)
   {
      targetGroup_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName::ValueType v;
      _targetGroup_Type.read(reader, v);
      value.set_targetGroup(std::move(v));
   }
   else if (choosenType == &_targetCert_Type)
   {
      targetCert_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__TargetCert::ValueType v;
      _targetCert_Type.read(reader, v);
      value.set_targetCert(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _targetName_Type.toString() + ", " + _targetGroup_Type.toString() + ", " + _targetCert_Type.toString());
   }
}

void Target::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_targetName_Choosen() || value.has_targetGroup_Choosen() || value.has_targetCert_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_targetName_Choosen())
      _targetName_Type.write(writer, value.get_targetName());
   else if (value.has_targetGroup_Choosen())
      _targetGroup_Type.write(writer, value.get_targetGroup());
   else if (value.has_targetCert_Choosen())
      _targetCert_Type.write(writer, value.get_targetCert());

   writer.writeChoiceEnd(*this);
}


void TargetCert::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::IssuerSerial::ValueType v;
      _targetCertificate_Type.read(reader, v);
      value.set_targetCertificate(std::move(v));
   }

   if (reader.isComponentPresent(_targetName_Type))
   {
      asn1::generated::GeneralName::ValueType v;
      _targetName_Type.read(reader, v);
      value.set_targetName(std::move(v));
   }

   if (reader.isComponentPresent(_certDigestInfo_Type))
   {
      asn1::generated::ObjectDigestInfo::ValueType v;
      _certDigestInfo_Type.read(reader, v);
      value.set_certDigestInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void TargetCert::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _targetCertificate_Type.write(writer, value.get_targetCertificate());
   if (value.is_targetName_Present())
      _targetName_Type.write(writer, value.get_targetName());
   if (value.is_certDigestInfo_Present())
      _certDigestInfo_Type.write(writer, value.get_certDigestInfo());

   writer.writeSequenceEnd(*this);
}


void IetfAttrSyntax::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_policyAuthority_Type))
   {
      policyAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _policyAuthority_Type.read(reader, v);
      value.set_policyAuthority(std::move(v));
   }
   {
      values_INTERNAL__SequenceOfType_INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String::ValueType v;
      _values_Type.read(reader, v);
      value.set_values(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void IetfAttrSyntax::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_policyAuthority_Present())
      _policyAuthority_Type.write(writer, value.get_policyAuthority());
   _values_Type.write(writer, value.get_values());

   writer.writeSequenceEnd(*this);
}


void SvceAuthInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::GeneralName::ValueType v;
      _service_Type.read(reader, v);
      value.set_service(std::move(v));
   }
   {
      asn1::generated::GeneralName::ValueType v;
      _ident_Type.read(reader, v);
      value.set_ident(std::move(v));
   }

   if (reader.isComponentPresent(_authInfo_Type))
   {
      asn1::OctetStringType::ValueType v;
      _authInfo_Type.read(reader, v);
      value.set_authInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SvceAuthInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _service_Type.write(writer, value.get_service());
   _ident_Type.write(writer, value.get_ident());
   if (value.is_authInfo_Present())
      _authInfo_Type.write(writer, value.get_authInfo());

   writer.writeSequenceEnd(*this);
}


void RoleSyntax::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_roleAuthority_Type))
   {
      roleAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _roleAuthority_Type.read(reader, v);
      value.set_roleAuthority(std::move(v));
   }
   {
      roleName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName::ValueType v;
      _roleName_Type.read(reader, v);
      value.set_roleName(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void RoleSyntax::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_roleAuthority_Present())
      _roleAuthority_Type.write(writer, value.get_roleAuthority());
   _roleName_Type.write(writer, value.get_roleName());

   writer.writeSequenceEnd(*this);
}


void Clearance::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      policyId_INTERNAL__NOTAG_0_INTERNAL_asn1__ObjectIdentifierType::ValueType v;
      _policyId_Type.read(reader, v);
      value.set_policyId(std::move(v));
   }
   {
      classList_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ClassList::ValueType v;
      _classList_Type.read(reader, v);
      value.set_classList(std::move(v));
   }

   if (reader.isComponentPresent(_securityCategories_Type))
   {
      securityCategories_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SecurityCategory::ValueType v;
      _securityCategories_Type.read(reader, v);
      value.set_securityCategories(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Clearance::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _policyId_Type.write(writer, value.get_policyId());
   _classList_Type.write(writer, value.get_classList());
   if (value.is_securityCategories_Present())
      _securityCategories_Type.write(writer, value.get_securityCategories());

   writer.writeSequenceEnd(*this);
}


void SecurityCategory::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__ObjectIdentifierType::ValueType v;
      _type_Type.read(reader, v);
      value.set_type(std::move(v));
   }
   {
      value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SecurityCategory::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_Type.write(writer, value.get_type());
   _value_Type.write(writer, value.get_value());

   writer.writeSequenceEnd(*this);
}


void ACClearAttrs::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::GeneralName::ValueType v;
      _acIssuer_Type.read(reader, v);
      value.set_acIssuer(std::move(v));
   }
   {
      asn1::IntegerType::ValueType v;
      _acSerial_Type.read(reader, v);
      value.set_acSerial(std::move(v));
   }
   {
      attrs_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute::ValueType v;
      _attrs_Type.read(reader, v);
      value.set_attrs(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ACClearAttrs::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _acIssuer_Type.write(writer, value.get_acIssuer());
   _acSerial_Type.write(writer, value.get_acSerial());
   _attrs_Type.write(writer, value.get_attrs());

   writer.writeSequenceEnd(*this);
}


void AttributeCertificateV1::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AttributeCertificateInfoV1::ValueType v;
      _acInfo_Type.read(reader, v);
      value.set_acInfo(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signatureAlgorithm_Type.read(reader, v);
      value.set_signatureAlgorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttributeCertificateV1::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _acInfo_Type.write(writer, value.get_acInfo());
   _signatureAlgorithm_Type.write(writer, value.get_signatureAlgorithm());
   _signature_Type.write(writer, value.get_signature());

   writer.writeSequenceEnd(*this);
}


void AttributeCertificateInfoV1::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AttCertVersionV1::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      subject_INTERNAL__ChoiceType_baseCertificateIDbaseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial_subjectNamesubjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames::ValueType v;
      _subject_Type.read(reader, v);
      value.set_subject(std::move(v));
   }
   {
      asn1::generated::GeneralNames::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }
   {
      asn1::generated::CertificateSerialNumber::ValueType v;
      _serialNumber_Type.read(reader, v);
      value.set_serialNumber(std::move(v));
   }
   {
      asn1::generated::AttCertValidityPeriod::ValueType v;
      _attCertValidityPeriod_Type.read(reader, v);
      value.set_attCertValidityPeriod(std::move(v));
   }
   {
      attributes_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute::ValueType v;
      _attributes_Type.read(reader, v);
      value.set_attributes(std::move(v));
   }

   if (reader.isComponentPresent(_issuerUniqueID_Type))
   {
      asn1::generated::UniqueIdentifier::ValueType v;
      _issuerUniqueID_Type.read(reader, v);
      value.set_issuerUniqueID(std::move(v));
   }

   if (reader.isComponentPresent(_extensions_Type))
   {
      asn1::generated::Extensions::ValueType v;
      _extensions_Type.read(reader, v);
      value.set_extensions(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttributeCertificateInfoV1::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _subject_Type.write(writer, value.get_subject());
   _issuer_Type.write(writer, value.get_issuer());
   _signature_Type.write(writer, value.get_signature());
   _serialNumber_Type.write(writer, value.get_serialNumber());
   _attCertValidityPeriod_Type.write(writer, value.get_attCertValidityPeriod());
   _attributes_Type.write(writer, value.get_attributes());
   if (value.is_issuerUniqueID_Present())
      _issuerUniqueID_Type.write(writer, value.get_issuerUniqueID());
   if (value.is_extensions_Present())
      _extensions_Type.write(writer, value.get_extensions());

   writer.writeSequenceEnd(*this);
}


void ContentInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::ContentType::ValueType v;
      _contentType_Type.read(reader, v);
      value.set_contentType(std::move(v));
   }
   {
      content_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType::ValueType v;
      _content_Type.read(reader, v);
      value.set_content(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ContentInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _contentType_Type.write(writer, value.get_contentType());
   _content_Type.write(writer, value.get_content());

   writer.writeSequenceEnd(*this);
}


void SignedData::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::DigestAlgorithmIdentifiers::ValueType v;
      _digestAlgorithms_Type.read(reader, v);
      value.set_digestAlgorithms(std::move(v));
   }
   {
      asn1::generated::EncapsulatedContentInfo::ValueType v;
      _encapContentInfo_Type.read(reader, v);
      value.set_encapContentInfo(std::move(v));
   }

   if (reader.isComponentPresent(_certificates_Type))
   {
      certificates_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet::ValueType v;
      _certificates_Type.read(reader, v);
      value.set_certificates(std::move(v));
   }

   if (reader.isComponentPresent(_crls_Type))
   {
      crls_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__RevocationInfoChoices::ValueType v;
      _crls_Type.read(reader, v);
      value.set_crls(std::move(v));
   }
   {
      asn1::generated::SignerInfos::ValueType v;
      _signerInfos_Type.read(reader, v);
      value.set_signerInfos(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SignedData::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _digestAlgorithms_Type.write(writer, value.get_digestAlgorithms());
   _encapContentInfo_Type.write(writer, value.get_encapContentInfo());
   if (value.is_certificates_Present())
      _certificates_Type.write(writer, value.get_certificates());
   if (value.is_crls_Present())
      _crls_Type.write(writer, value.get_crls());
   _signerInfos_Type.write(writer, value.get_signerInfos());

   writer.writeSequenceEnd(*this);
}


void EncapsulatedContentInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::ContentType::ValueType v;
      _eContentType_Type.read(reader, v);
      value.set_eContentType(std::move(v));
   }

   if (reader.isComponentPresent(_eContent_Type))
   {
      eContent_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType::ValueType v;
      _eContent_Type.read(reader, v);
      value.set_eContent(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void EncapsulatedContentInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _eContentType_Type.write(writer, value.get_eContentType());
   if (value.is_eContent_Present())
      _eContent_Type.write(writer, value.get_eContent());

   writer.writeSequenceEnd(*this);
}


void SignerInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::SignerIdentifier::ValueType v;
      _sid_Type.read(reader, v);
      value.set_sid(std::move(v));
   }
   {
      asn1::generated::DigestAlgorithmIdentifier::ValueType v;
      _digestAlgorithm_Type.read(reader, v);
      value.set_digestAlgorithm(std::move(v));
   }

   if (reader.isComponentPresent(_signedAttrs_Type))
   {
      signedAttrs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__SignedAttributes::ValueType v;
      _signedAttrs_Type.read(reader, v);
      value.set_signedAttrs(std::move(v));
   }
   {
      asn1::generated::SignatureAlgorithmIdentifier::ValueType v;
      _signatureAlgorithm_Type.read(reader, v);
      value.set_signatureAlgorithm(std::move(v));
   }
   {
      asn1::generated::SignatureValue::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }

   if (reader.isComponentPresent(_unsignedAttrs_Type))
   {
      unsignedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnsignedAttributes::ValueType v;
      _unsignedAttrs_Type.read(reader, v);
      value.set_unsignedAttrs(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SignerInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _sid_Type.write(writer, value.get_sid());
   _digestAlgorithm_Type.write(writer, value.get_digestAlgorithm());
   if (value.is_signedAttrs_Present())
      _signedAttrs_Type.write(writer, value.get_signedAttrs());
   _signatureAlgorithm_Type.write(writer, value.get_signatureAlgorithm());
   _signature_Type.write(writer, value.get_signature());
   if (value.is_unsignedAttrs_Present())
      _unsignedAttrs_Type.write(writer, value.get_unsignedAttrs());

   writer.writeSequenceEnd(*this);
}


void SignerIdentifier::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_issuerAndSerialNumber_Type)
   {
      asn1::generated::IssuerAndSerialNumber::ValueType v;
      _issuerAndSerialNumber_Type.read(reader, v);
      value.set_issuerAndSerialNumber(std::move(v));
   }
   else if (choosenType == &_subjectKeyIdentifier_Type)
   {
      subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier::ValueType v;
      _subjectKeyIdentifier_Type.read(reader, v);
      value.set_subjectKeyIdentifier(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _issuerAndSerialNumber_Type.toString() + ", " + _subjectKeyIdentifier_Type.toString());
   }
}

void SignerIdentifier::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_issuerAndSerialNumber_Choosen() || value.has_subjectKeyIdentifier_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_issuerAndSerialNumber_Choosen())
      _issuerAndSerialNumber_Type.write(writer, value.get_issuerAndSerialNumber());
   else if (value.has_subjectKeyIdentifier_Choosen())
      _subjectKeyIdentifier_Type.write(writer, value.get_subjectKeyIdentifier());

   writer.writeChoiceEnd(*this);
}


void AttributeImplicit::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _attrType_Type.read(reader, v);
      value.set_attrType(std::move(v));
   }
   {
      attrValues_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValueImplicit::ValueType v;
      _attrValues_Type.read(reader, v);
      value.set_attrValues(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttributeImplicit::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _attrType_Type.write(writer, value.get_attrType());
   _attrValues_Type.write(writer, value.get_attrValues());

   writer.writeSequenceEnd(*this);
}


void EnvelopedData::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }

   if (reader.isComponentPresent(_originatorInfo_Type))
   {
      originatorInfo_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__OriginatorInfo::ValueType v;
      _originatorInfo_Type.read(reader, v);
      value.set_originatorInfo(std::move(v));
   }
   {
      asn1::generated::RecipientInfos::ValueType v;
      _recipientInfos_Type.read(reader, v);
      value.set_recipientInfos(std::move(v));
   }
   {
      asn1::generated::EncryptedContentInfo::ValueType v;
      _encryptedContentInfo_Type.read(reader, v);
      value.set_encryptedContentInfo(std::move(v));
   }

   if (reader.isComponentPresent(_unprotectedAttrs_Type))
   {
      unprotectedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnprotectedAttributes::ValueType v;
      _unprotectedAttrs_Type.read(reader, v);
      value.set_unprotectedAttrs(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void EnvelopedData::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   if (value.is_originatorInfo_Present())
      _originatorInfo_Type.write(writer, value.get_originatorInfo());
   _recipientInfos_Type.write(writer, value.get_recipientInfos());
   _encryptedContentInfo_Type.write(writer, value.get_encryptedContentInfo());
   if (value.is_unprotectedAttrs_Present())
      _unprotectedAttrs_Type.write(writer, value.get_unprotectedAttrs());

   writer.writeSequenceEnd(*this);
}


void OriginatorInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_certs_Type))
   {
      certs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet::ValueType v;
      _certs_Type.read(reader, v);
      value.set_certs(std::move(v));
   }

   if (reader.isComponentPresent(_crls_Type))
   {
      crls_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__RevocationInfoChoices::ValueType v;
      _crls_Type.read(reader, v);
      value.set_crls(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OriginatorInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_certs_Present())
      _certs_Type.write(writer, value.get_certs());
   if (value.is_crls_Present())
      _crls_Type.write(writer, value.get_crls());

   writer.writeSequenceEnd(*this);
}


void EncryptedContentInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::ContentType::ValueType v;
      _contentType_Type.read(reader, v);
      value.set_contentType(std::move(v));
   }
   {
      asn1::generated::ContentEncryptionAlgorithmIdentifier::ValueType v;
      _contentEncryptionAlgorithm_Type.read(reader, v);
      value.set_contentEncryptionAlgorithm(std::move(v));
   }

   if (reader.isComponentPresent(_encryptedContent_Type))
   {
      encryptedContent_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__EncryptedContent::ValueType v;
      _encryptedContent_Type.read(reader, v);
      value.set_encryptedContent(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void EncryptedContentInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _contentType_Type.write(writer, value.get_contentType());
   _contentEncryptionAlgorithm_Type.write(writer, value.get_contentEncryptionAlgorithm());
   if (value.is_encryptedContent_Present())
      _encryptedContent_Type.write(writer, value.get_encryptedContent());

   writer.writeSequenceEnd(*this);
}


void RecipientInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_ktri_Type)
   {
      asn1::generated::KeyTransRecipientInfo::ValueType v;
      _ktri_Type.read(reader, v);
      value.set_ktri(std::move(v));
   }
   else if (choosenType == &_kari_Type)
   {
      kari_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyAgreeRecipientInfo::ValueType v;
      _kari_Type.read(reader, v);
      value.set_kari(std::move(v));
   }
   else if (choosenType == &_kekri_Type)
   {
      kekri_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KEKRecipientInfo::ValueType v;
      _kekri_Type.read(reader, v);
      value.set_kekri(std::move(v));
   }
   else if (choosenType == &_pwri_Type)
   {
      pwri_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PasswordRecipientInfo::ValueType v;
      _pwri_Type.read(reader, v);
      value.set_pwri(std::move(v));
   }
   else if (choosenType == &_ori_Type)
   {
      ori_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OtherRecipientInfo::ValueType v;
      _ori_Type.read(reader, v);
      value.set_ori(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _ktri_Type.toString() + ", " + _kari_Type.toString() + ", " + _kekri_Type.toString() + ", " + _pwri_Type.toString() + ", " + _ori_Type.toString());
   }
}

void RecipientInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_ktri_Choosen() || value.has_kari_Choosen() || value.has_kekri_Choosen() || value.has_pwri_Choosen() || value.has_ori_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_ktri_Choosen())
      _ktri_Type.write(writer, value.get_ktri());
   else if (value.has_kari_Choosen())
      _kari_Type.write(writer, value.get_kari());
   else if (value.has_kekri_Choosen())
      _kekri_Type.write(writer, value.get_kekri());
   else if (value.has_pwri_Choosen())
      _pwri_Type.write(writer, value.get_pwri());
   else if (value.has_ori_Choosen())
      _ori_Type.write(writer, value.get_ori());

   writer.writeChoiceEnd(*this);
}


void KeyTransRecipientInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::RecipientIdentifier::ValueType v;
      _rid_Type.read(reader, v);
      value.set_rid(std::move(v));
   }
   {
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType v;
      _keyEncryptionAlgorithm_Type.read(reader, v);
      value.set_keyEncryptionAlgorithm(std::move(v));
   }
   {
      asn1::generated::EncryptedKey::ValueType v;
      _encryptedKey_Type.read(reader, v);
      value.set_encryptedKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void KeyTransRecipientInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _rid_Type.write(writer, value.get_rid());
   _keyEncryptionAlgorithm_Type.write(writer, value.get_keyEncryptionAlgorithm());
   _encryptedKey_Type.write(writer, value.get_encryptedKey());

   writer.writeSequenceEnd(*this);
}


void RecipientIdentifier::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_issuerAndSerialNumber_Type)
   {
      asn1::generated::IssuerAndSerialNumber::ValueType v;
      _issuerAndSerialNumber_Type.read(reader, v);
      value.set_issuerAndSerialNumber(std::move(v));
   }
   else if (choosenType == &_subjectKeyIdentifier_Type)
   {
      subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier::ValueType v;
      _subjectKeyIdentifier_Type.read(reader, v);
      value.set_subjectKeyIdentifier(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _issuerAndSerialNumber_Type.toString() + ", " + _subjectKeyIdentifier_Type.toString());
   }
}

void RecipientIdentifier::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_issuerAndSerialNumber_Choosen() || value.has_subjectKeyIdentifier_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_issuerAndSerialNumber_Choosen())
      _issuerAndSerialNumber_Type.write(writer, value.get_issuerAndSerialNumber());
   else if (value.has_subjectKeyIdentifier_Choosen())
      _subjectKeyIdentifier_Type.write(writer, value.get_subjectKeyIdentifier());

   writer.writeChoiceEnd(*this);
}


void KeyAgreeRecipientInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      originator_INTERNAL__EXPLICIT_0_INTERNAL_asn1__generated__OriginatorIdentifierOrKey::ValueType v;
      _originator_Type.read(reader, v);
      value.set_originator(std::move(v));
   }

   if (reader.isComponentPresent(_ukm_Type))
   {
      ukm_INTERNAL__EXPLICIT_1_INTERNAL_asn1__generated__UserKeyingMaterial::ValueType v;
      _ukm_Type.read(reader, v);
      value.set_ukm(std::move(v));
   }
   {
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType v;
      _keyEncryptionAlgorithm_Type.read(reader, v);
      value.set_keyEncryptionAlgorithm(std::move(v));
   }
   {
      asn1::generated::RecipientEncryptedKeys::ValueType v;
      _recipientEncryptedKeys_Type.read(reader, v);
      value.set_recipientEncryptedKeys(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void KeyAgreeRecipientInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _originator_Type.write(writer, value.get_originator());
   if (value.is_ukm_Present())
      _ukm_Type.write(writer, value.get_ukm());
   _keyEncryptionAlgorithm_Type.write(writer, value.get_keyEncryptionAlgorithm());
   _recipientEncryptedKeys_Type.write(writer, value.get_recipientEncryptedKeys());

   writer.writeSequenceEnd(*this);
}


void OriginatorIdentifierOrKey::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_issuerAndSerialNumber_Type)
   {
      asn1::generated::IssuerAndSerialNumber::ValueType v;
      _issuerAndSerialNumber_Type.read(reader, v);
      value.set_issuerAndSerialNumber(std::move(v));
   }
   else if (choosenType == &_subjectKeyIdentifier_Type)
   {
      subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier::ValueType v;
      _subjectKeyIdentifier_Type.read(reader, v);
      value.set_subjectKeyIdentifier(std::move(v));
   }
   else if (choosenType == &_originatorKey_Type)
   {
      originatorKey_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__OriginatorPublicKey::ValueType v;
      _originatorKey_Type.read(reader, v);
      value.set_originatorKey(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _issuerAndSerialNumber_Type.toString() + ", " + _subjectKeyIdentifier_Type.toString() + ", " + _originatorKey_Type.toString());
   }
}

void OriginatorIdentifierOrKey::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_issuerAndSerialNumber_Choosen() || value.has_subjectKeyIdentifier_Choosen() || value.has_originatorKey_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_issuerAndSerialNumber_Choosen())
      _issuerAndSerialNumber_Type.write(writer, value.get_issuerAndSerialNumber());
   else if (value.has_subjectKeyIdentifier_Choosen())
      _subjectKeyIdentifier_Type.write(writer, value.get_subjectKeyIdentifier());
   else if (value.has_originatorKey_Choosen())
      _originatorKey_Type.write(writer, value.get_originatorKey());

   writer.writeChoiceEnd(*this);
}


void OriginatorPublicKey::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _algorithm_Type.read(reader, v);
      value.set_algorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _publicKey_Type.read(reader, v);
      value.set_publicKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OriginatorPublicKey::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _algorithm_Type.write(writer, value.get_algorithm());
   _publicKey_Type.write(writer, value.get_publicKey());

   writer.writeSequenceEnd(*this);
}


void RecipientEncryptedKey::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::KeyAgreeRecipientIdentifier::ValueType v;
      _rid_Type.read(reader, v);
      value.set_rid(std::move(v));
   }
   {
      asn1::generated::EncryptedKey::ValueType v;
      _encryptedKey_Type.read(reader, v);
      value.set_encryptedKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void RecipientEncryptedKey::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _rid_Type.write(writer, value.get_rid());
   _encryptedKey_Type.write(writer, value.get_encryptedKey());

   writer.writeSequenceEnd(*this);
}


void KeyAgreeRecipientIdentifier::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_issuerAndSerialNumber_Type)
   {
      asn1::generated::IssuerAndSerialNumber::ValueType v;
      _issuerAndSerialNumber_Type.read(reader, v);
      value.set_issuerAndSerialNumber(std::move(v));
   }
   else if (choosenType == &_rKeyId_Type)
   {
      rKeyId_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__RecipientKeyIdentifier::ValueType v;
      _rKeyId_Type.read(reader, v);
      value.set_rKeyId(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _issuerAndSerialNumber_Type.toString() + ", " + _rKeyId_Type.toString());
   }
}

void KeyAgreeRecipientIdentifier::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_issuerAndSerialNumber_Choosen() || value.has_rKeyId_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_issuerAndSerialNumber_Choosen())
      _issuerAndSerialNumber_Type.write(writer, value.get_issuerAndSerialNumber());
   else if (value.has_rKeyId_Choosen())
      _rKeyId_Type.write(writer, value.get_rKeyId());

   writer.writeChoiceEnd(*this);
}


void RecipientKeyIdentifier::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::SubjectKeyIdentifier::ValueType v;
      _subjectKeyIdentifier_Type.read(reader, v);
      value.set_subjectKeyIdentifier(std::move(v));
   }

   if (reader.isComponentPresent(_date_Type))
   {
      asn1::GeneralizedTimeType::ValueType v;
      _date_Type.read(reader, v);
      value.set_date(std::move(v));
   }

   if (reader.isComponentPresent(_other_Type))
   {
      asn1::generated::OtherKeyAttribute::ValueType v;
      _other_Type.read(reader, v);
      value.set_other(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void RecipientKeyIdentifier::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _subjectKeyIdentifier_Type.write(writer, value.get_subjectKeyIdentifier());
   if (value.is_date_Present())
      _date_Type.write(writer, value.get_date());
   if (value.is_other_Present())
      _other_Type.write(writer, value.get_other());

   writer.writeSequenceEnd(*this);
}


void KEKRecipientInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::KEKIdentifier::ValueType v;
      _kekid_Type.read(reader, v);
      value.set_kekid(std::move(v));
   }
   {
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType v;
      _keyEncryptionAlgorithm_Type.read(reader, v);
      value.set_keyEncryptionAlgorithm(std::move(v));
   }
   {
      asn1::generated::EncryptedKey::ValueType v;
      _encryptedKey_Type.read(reader, v);
      value.set_encryptedKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void KEKRecipientInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _kekid_Type.write(writer, value.get_kekid());
   _keyEncryptionAlgorithm_Type.write(writer, value.get_keyEncryptionAlgorithm());
   _encryptedKey_Type.write(writer, value.get_encryptedKey());

   writer.writeSequenceEnd(*this);
}


void KEKIdentifier::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::OctetStringType::ValueType v;
      _keyIdentifier_Type.read(reader, v);
      value.set_keyIdentifier(std::move(v));
   }

   if (reader.isComponentPresent(_date_Type))
   {
      asn1::GeneralizedTimeType::ValueType v;
      _date_Type.read(reader, v);
      value.set_date(std::move(v));
   }

   if (reader.isComponentPresent(_other_Type))
   {
      asn1::generated::OtherKeyAttribute::ValueType v;
      _other_Type.read(reader, v);
      value.set_other(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void KEKIdentifier::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _keyIdentifier_Type.write(writer, value.get_keyIdentifier());
   if (value.is_date_Present())
      _date_Type.write(writer, value.get_date());
   if (value.is_other_Present())
      _other_Type.write(writer, value.get_other());

   writer.writeSequenceEnd(*this);
}


void PasswordRecipientInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }

   if (reader.isComponentPresent(_keyDerivationAlgorithm_Type))
   {
      keyDerivationAlgorithm_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyDerivationAlgorithmIdentifier::ValueType v;
      _keyDerivationAlgorithm_Type.read(reader, v);
      value.set_keyDerivationAlgorithm(std::move(v));
   }
   {
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType v;
      _keyEncryptionAlgorithm_Type.read(reader, v);
      value.set_keyEncryptionAlgorithm(std::move(v));
   }
   {
      asn1::generated::EncryptedKey::ValueType v;
      _encryptedKey_Type.read(reader, v);
      value.set_encryptedKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PasswordRecipientInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   if (value.is_keyDerivationAlgorithm_Present())
      _keyDerivationAlgorithm_Type.write(writer, value.get_keyDerivationAlgorithm());
   _keyEncryptionAlgorithm_Type.write(writer, value.get_keyEncryptionAlgorithm());
   _encryptedKey_Type.write(writer, value.get_encryptedKey());

   writer.writeSequenceEnd(*this);
}


void OtherRecipientInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _oriType_Type.read(reader, v);
      value.set_oriType(std::move(v));
   }
   {
      asn1::AnyType::ValueType v;
      _oriValue_Type.read(reader, v);
      value.set_oriValue(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OtherRecipientInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _oriType_Type.write(writer, value.get_oriType());
   _oriValue_Type.write(writer, value.get_oriValue());

   writer.writeSequenceEnd(*this);
}


void DigestedData::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::DigestAlgorithmIdentifier::ValueType v;
      _digestAlgorithm_Type.read(reader, v);
      value.set_digestAlgorithm(std::move(v));
   }
   {
      asn1::generated::EncapsulatedContentInfo::ValueType v;
      _encapContentInfo_Type.read(reader, v);
      value.set_encapContentInfo(std::move(v));
   }
   {
      asn1::generated::Digest::ValueType v;
      _digest_Type.read(reader, v);
      value.set_digest(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void DigestedData::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _digestAlgorithm_Type.write(writer, value.get_digestAlgorithm());
   _encapContentInfo_Type.write(writer, value.get_encapContentInfo());
   _digest_Type.write(writer, value.get_digest());

   writer.writeSequenceEnd(*this);
}


void EncryptedData::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::EncryptedContentInfo::ValueType v;
      _encryptedContentInfo_Type.read(reader, v);
      value.set_encryptedContentInfo(std::move(v));
   }

   if (reader.isComponentPresent(_unprotectedAttrs_Type))
   {
      unprotectedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnprotectedAttributes::ValueType v;
      _unprotectedAttrs_Type.read(reader, v);
      value.set_unprotectedAttrs(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void EncryptedData::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _encryptedContentInfo_Type.write(writer, value.get_encryptedContentInfo());
   if (value.is_unprotectedAttrs_Present())
      _unprotectedAttrs_Type.write(writer, value.get_unprotectedAttrs());

   writer.writeSequenceEnd(*this);
}


void AuthenticatedData::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }

   if (reader.isComponentPresent(_originatorInfo_Type))
   {
      originatorInfo_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__OriginatorInfo::ValueType v;
      _originatorInfo_Type.read(reader, v);
      value.set_originatorInfo(std::move(v));
   }
   {
      asn1::generated::RecipientInfos::ValueType v;
      _recipientInfos_Type.read(reader, v);
      value.set_recipientInfos(std::move(v));
   }
   {
      asn1::generated::MessageAuthenticationCodeAlgorithm::ValueType v;
      _macAlgorithm_Type.read(reader, v);
      value.set_macAlgorithm(std::move(v));
   }

   if (reader.isComponentPresent(_digestAlgorithm_Type))
   {
      digestAlgorithm_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DigestAlgorithmIdentifier::ValueType v;
      _digestAlgorithm_Type.read(reader, v);
      value.set_digestAlgorithm(std::move(v));
   }
   {
      asn1::generated::EncapsulatedContentInfo::ValueType v;
      _encapContentInfo_Type.read(reader, v);
      value.set_encapContentInfo(std::move(v));
   }

   if (reader.isComponentPresent(_authAttrs_Type))
   {
      authAttrs_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AuthAttributes::ValueType v;
      _authAttrs_Type.read(reader, v);
      value.set_authAttrs(std::move(v));
   }
   {
      asn1::generated::MessageAuthenticationCode::ValueType v;
      _mac_Type.read(reader, v);
      value.set_mac(std::move(v));
   }

   if (reader.isComponentPresent(_unauthAttrs_Type))
   {
      unauthAttrs_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__UnauthAttributes::ValueType v;
      _unauthAttrs_Type.read(reader, v);
      value.set_unauthAttrs(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AuthenticatedData::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   if (value.is_originatorInfo_Present())
      _originatorInfo_Type.write(writer, value.get_originatorInfo());
   _recipientInfos_Type.write(writer, value.get_recipientInfos());
   _macAlgorithm_Type.write(writer, value.get_macAlgorithm());
   if (value.is_digestAlgorithm_Present())
      _digestAlgorithm_Type.write(writer, value.get_digestAlgorithm());
   _encapContentInfo_Type.write(writer, value.get_encapContentInfo());
   if (value.is_authAttrs_Present())
      _authAttrs_Type.write(writer, value.get_authAttrs());
   _mac_Type.write(writer, value.get_mac());
   if (value.is_unauthAttrs_Present())
      _unauthAttrs_Type.write(writer, value.get_unauthAttrs());

   writer.writeSequenceEnd(*this);
}


void RevocationInfoChoice::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_crl_Type)
   {
      asn1::generated::CertificateList::ValueType v;
      _crl_Type.read(reader, v);
      value.set_crl(std::move(v));
   }
   else if (choosenType == &_other_Type)
   {
      other_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__OtherRevocationInfoFormat::ValueType v;
      _other_Type.read(reader, v);
      value.set_other(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _crl_Type.toString() + ", " + _other_Type.toString());
   }
}

void RevocationInfoChoice::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_crl_Choosen() || value.has_other_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_crl_Choosen())
      _crl_Type.write(writer, value.get_crl());
   else if (value.has_other_Choosen())
      _other_Type.write(writer, value.get_other());

   writer.writeChoiceEnd(*this);
}


void OtherRevocationInfoFormat::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _otherRevInfoFormat_Type.read(reader, v);
      value.set_otherRevInfoFormat(std::move(v));
   }
   {
      asn1::AnyType::ValueType v;
      _otherRevInfo_Type.read(reader, v);
      value.set_otherRevInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OtherRevocationInfoFormat::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _otherRevInfoFormat_Type.write(writer, value.get_otherRevInfoFormat());
   _otherRevInfo_Type.write(writer, value.get_otherRevInfo());

   writer.writeSequenceEnd(*this);
}


void CertificateChoices::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_certificate_Type)
   {
      asn1::generated::Certificate::ValueType v;
      _certificate_Type.read(reader, v);
      value.set_certificate(std::move(v));
   }
   else if (choosenType == &_extendedCertificate_Type)
   {
      extendedCertificate_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__ExtendedCertificate::ValueType v;
      _extendedCertificate_Type.read(reader, v);
      value.set_extendedCertificate(std::move(v));
   }
   else if (choosenType == &_v1AttrCert_Type)
   {
      v1AttrCert_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__AttributeCertificateV1::ValueType v;
      _v1AttrCert_Type.read(reader, v);
      value.set_v1AttrCert(std::move(v));
   }
   else if (choosenType == &_v2AttrCert_Type)
   {
      v2AttrCert_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AttributeCertificateV2::ValueType v;
      _v2AttrCert_Type.read(reader, v);
      value.set_v2AttrCert(std::move(v));
   }
   else if (choosenType == &_other_Type)
   {
      other_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OtherCertificateFormat::ValueType v;
      _other_Type.read(reader, v);
      value.set_other(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _certificate_Type.toString() + ", " + _extendedCertificate_Type.toString() + ", " + _v1AttrCert_Type.toString() + ", " + _v2AttrCert_Type.toString() + ", " + _other_Type.toString());
   }
}

void CertificateChoices::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_certificate_Choosen() || value.has_extendedCertificate_Choosen() || value.has_v1AttrCert_Choosen() || value.has_v2AttrCert_Choosen() || value.has_other_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_certificate_Choosen())
      _certificate_Type.write(writer, value.get_certificate());
   else if (value.has_extendedCertificate_Choosen())
      _extendedCertificate_Type.write(writer, value.get_extendedCertificate());
   else if (value.has_v1AttrCert_Choosen())
      _v1AttrCert_Type.write(writer, value.get_v1AttrCert());
   else if (value.has_v2AttrCert_Choosen())
      _v2AttrCert_Type.write(writer, value.get_v2AttrCert());
   else if (value.has_other_Choosen())
      _other_Type.write(writer, value.get_other());

   writer.writeChoiceEnd(*this);
}


void OtherCertificateFormat::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _otherCertFormat_Type.read(reader, v);
      value.set_otherCertFormat(std::move(v));
   }
   {
      asn1::AnyType::ValueType v;
      _otherCert_Type.read(reader, v);
      value.set_otherCert(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OtherCertificateFormat::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _otherCertFormat_Type.write(writer, value.get_otherCertFormat());
   _otherCert_Type.write(writer, value.get_otherCert());

   writer.writeSequenceEnd(*this);
}


void IssuerAndSerialNumber::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::Name::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }
   {
      asn1::generated::CertificateSerialNumber::ValueType v;
      _serialNumber_Type.read(reader, v);
      value.set_serialNumber(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void IssuerAndSerialNumber::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _issuer_Type.write(writer, value.get_issuer());
   _serialNumber_Type.write(writer, value.get_serialNumber());

   writer.writeSequenceEnd(*this);
}


void OtherKeyAttribute::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _keyAttrId_Type.read(reader, v);
      value.set_keyAttrId(std::move(v));
   }

   if (reader.isComponentPresent(_keyAttr_Type))
   {
      asn1::AnyType::ValueType v;
      _keyAttr_Type.read(reader, v);
      value.set_keyAttr(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OtherKeyAttribute::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _keyAttrId_Type.write(writer, value.get_keyAttrId());
   if (value.is_keyAttr_Present())
      _keyAttr_Type.write(writer, value.get_keyAttr());

   writer.writeSequenceEnd(*this);
}


void TimeImplicit::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_utcTime_Type)
   {
      asn1::UTCTimeType::ValueType v;
      _utcTime_Type.read(reader, v);
      value.set_utcTime(std::move(v));
   }
   else if (choosenType == &_generalTime_Type)
   {
      asn1::GeneralizedTimeType::ValueType v;
      _generalTime_Type.read(reader, v);
      value.set_generalTime(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _utcTime_Type.toString() + ", " + _generalTime_Type.toString());
   }
}

void TimeImplicit::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_utcTime_Choosen() || value.has_generalTime_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_utcTime_Choosen())
      _utcTime_Type.write(writer, value.get_utcTime());
   else if (value.has_generalTime_Choosen())
      _generalTime_Type.write(writer, value.get_generalTime());

   writer.writeChoiceEnd(*this);
}


void ExtendedCertificateOrCertificate::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_certificate_Type)
   {
      asn1::generated::Certificate::ValueType v;
      _certificate_Type.read(reader, v);
      value.set_certificate(std::move(v));
   }
   else if (choosenType == &_extendedCertificate_Type)
   {
      extendedCertificate_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__ExtendedCertificate::ValueType v;
      _extendedCertificate_Type.read(reader, v);
      value.set_extendedCertificate(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _certificate_Type.toString() + ", " + _extendedCertificate_Type.toString());
   }
}

void ExtendedCertificateOrCertificate::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_certificate_Choosen() || value.has_extendedCertificate_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_certificate_Choosen())
      _certificate_Type.write(writer, value.get_certificate());
   else if (value.has_extendedCertificate_Choosen())
      _extendedCertificate_Type.write(writer, value.get_extendedCertificate());

   writer.writeChoiceEnd(*this);
}


void ExtendedCertificate::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::ExtendedCertificateInfo::ValueType v;
      _extendedCertificateInfo_Type.read(reader, v);
      value.set_extendedCertificateInfo(std::move(v));
   }
   {
      asn1::generated::SignatureAlgorithmIdentifier::ValueType v;
      _signatureAlgorithm_Type.read(reader, v);
      value.set_signatureAlgorithm(std::move(v));
   }
   {
      asn1::generated::Signature::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ExtendedCertificate::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _extendedCertificateInfo_Type.write(writer, value.get_extendedCertificateInfo());
   _signatureAlgorithm_Type.write(writer, value.get_signatureAlgorithm());
   _signature_Type.write(writer, value.get_signature());

   writer.writeSequenceEnd(*this);
}


void ExtendedCertificateInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMSVersion::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::Certificate::ValueType v;
      _certificate_Type.read(reader, v);
      value.set_certificate(std::move(v));
   }
   {
      asn1::generated::UnauthAttributes::ValueType v;
      _attributes_Type.read(reader, v);
      value.set_attributes(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ExtendedCertificateInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _certificate_Type.write(writer, value.get_certificate());
   _attributes_Type.write(writer, value.get_attributes());

   writer.writeSequenceEnd(*this);
}


void CertReqMsg::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CertRequest::ValueType v;
      _certReq_Type.read(reader, v);
      value.set_certReq(std::move(v));
   }

   if (reader.isComponentPresent(_popo_Type))
   {
      asn1::generated::ProofOfPossession::ValueType v;
      _popo_Type.read(reader, v);
      value.set_popo(std::move(v));
   }

   if (reader.isComponentPresent(_regInfo_Type))
   {
      regInfo_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeTypeAndValueImplicit::ValueType v;
      _regInfo_Type.read(reader, v);
      value.set_regInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertReqMsg::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certReq_Type.write(writer, value.get_certReq());
   if (value.is_popo_Present())
      _popo_Type.write(writer, value.get_popo());
   if (value.is_regInfo_Present())
      _regInfo_Type.write(writer, value.get_regInfo());

   writer.writeSequenceEnd(*this);
}


void CertRequest::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _certReqId_Type.read(reader, v);
      value.set_certReqId(std::move(v));
   }
   {
      asn1::generated::CertTemplate::ValueType v;
      _certTemplate_Type.read(reader, v);
      value.set_certTemplate(std::move(v));
   }

   if (reader.isComponentPresent(_controls_Type))
   {
      asn1::generated::Controls::ValueType v;
      _controls_Type.read(reader, v);
      value.set_controls(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertRequest::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certReqId_Type.write(writer, value.get_certReqId());
   _certTemplate_Type.write(writer, value.get_certTemplate());
   if (value.is_controls_Present())
      _controls_Type.write(writer, value.get_controls());

   writer.writeSequenceEnd(*this);
}


void CertTemplate::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_version_Type))
   {
      version_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Version::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }

   if (reader.isComponentPresent(_serialNumber_Type))
   {
      serialNumber_INTERNAL__NOTAG_1_INTERNAL_asn1__IntegerType::ValueType v;
      _serialNumber_Type.read(reader, v);
      value.set_serialNumber(std::move(v));
   }

   if (reader.isComponentPresent(_signingAlg_Type))
   {
      signingAlg_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__AlgorithmIdentifier::ValueType v;
      _signingAlg_Type.read(reader, v);
      value.set_signingAlg(std::move(v));
   }

   if (reader.isComponentPresent(_issuer_Type))
   {
      issuer_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Name::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }

   if (reader.isComponentPresent(_validity_Type))
   {
      validity_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OptionalValidity::ValueType v;
      _validity_Type.read(reader, v);
      value.set_validity(std::move(v));
   }

   if (reader.isComponentPresent(_subject_Type))
   {
      subject_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__Name::ValueType v;
      _subject_Type.read(reader, v);
      value.set_subject(std::move(v));
   }

   if (reader.isComponentPresent(_publicKey_Type))
   {
      publicKey_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__SubjectPublicKeyInfo::ValueType v;
      _publicKey_Type.read(reader, v);
      value.set_publicKey(std::move(v));
   }

   if (reader.isComponentPresent(_issuerUID_Type))
   {
      issuerUID_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__UniqueIdentifier::ValueType v;
      _issuerUID_Type.read(reader, v);
      value.set_issuerUID(std::move(v));
   }

   if (reader.isComponentPresent(_subjectUID_Type))
   {
      subjectUID_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__UniqueIdentifier::ValueType v;
      _subjectUID_Type.read(reader, v);
      value.set_subjectUID(std::move(v));
   }

   if (reader.isComponentPresent(_extensions_Type))
   {
      extensions_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__Extensions::ValueType v;
      _extensions_Type.read(reader, v);
      value.set_extensions(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertTemplate::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_version_Present())
      _version_Type.write(writer, value.get_version());
   if (value.is_serialNumber_Present())
      _serialNumber_Type.write(writer, value.get_serialNumber());
   if (value.is_signingAlg_Present())
      _signingAlg_Type.write(writer, value.get_signingAlg());
   if (value.is_issuer_Present())
      _issuer_Type.write(writer, value.get_issuer());
   if (value.is_validity_Present())
      _validity_Type.write(writer, value.get_validity());
   if (value.is_subject_Present())
      _subject_Type.write(writer, value.get_subject());
   if (value.is_publicKey_Present())
      _publicKey_Type.write(writer, value.get_publicKey());
   if (value.is_issuerUID_Present())
      _issuerUID_Type.write(writer, value.get_issuerUID());
   if (value.is_subjectUID_Present())
      _subjectUID_Type.write(writer, value.get_subjectUID());
   if (value.is_extensions_Present())
      _extensions_Type.write(writer, value.get_extensions());

   writer.writeSequenceEnd(*this);
}


void OptionalValidity::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_notBefore_Type))
   {
      notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Time::ValueType v;
      _notBefore_Type.read(reader, v);
      value.set_notBefore(std::move(v));
   }

   if (reader.isComponentPresent(_notAfter_Type))
   {
      notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__Time::ValueType v;
      _notAfter_Type.read(reader, v);
      value.set_notAfter(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OptionalValidity::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_notBefore_Present())
      _notBefore_Type.write(writer, value.get_notBefore());
   if (value.is_notAfter_Present())
      _notAfter_Type.write(writer, value.get_notAfter());

   writer.writeSequenceEnd(*this);
}


void AttributeTypeAndValueImplicit::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _type_Type.read(reader, v);
      value.set_type(std::move(v));
   }
   {
      asn1::AnyType::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AttributeTypeAndValueImplicit::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_Type.write(writer, value.get_type());
   _value_Type.write(writer, value.get_value());

   writer.writeSequenceEnd(*this);
}


void ProofOfPossession::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_raVerified_Type)
   {
      raVerified_INTERNAL__NOTAG_0_INTERNAL_asn1__NullType::ValueType v;
      _raVerified_Type.read(reader, v);
      value.set_raVerified(std::move(v));
   }
   else if (choosenType == &_signature_Type)
   {
      signature_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__POPOSigningKey::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }
   else if (choosenType == &_keyEncipherment_Type)
   {
      keyEncipherment_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__POPOPrivKey::ValueType v;
      _keyEncipherment_Type.read(reader, v);
      value.set_keyEncipherment(std::move(v));
   }
   else if (choosenType == &_keyAgreement_Type)
   {
      keyAgreement_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__POPOPrivKey::ValueType v;
      _keyAgreement_Type.read(reader, v);
      value.set_keyAgreement(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _raVerified_Type.toString() + ", " + _signature_Type.toString() + ", " + _keyEncipherment_Type.toString() + ", " + _keyAgreement_Type.toString());
   }
}

void ProofOfPossession::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_raVerified_Choosen() || value.has_signature_Choosen() || value.has_keyEncipherment_Choosen() || value.has_keyAgreement_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_raVerified_Choosen())
      _raVerified_Type.write(writer, value.get_raVerified());
   else if (value.has_signature_Choosen())
      _signature_Type.write(writer, value.get_signature());
   else if (value.has_keyEncipherment_Choosen())
      _keyEncipherment_Type.write(writer, value.get_keyEncipherment());
   else if (value.has_keyAgreement_Choosen())
      _keyAgreement_Type.write(writer, value.get_keyAgreement());

   writer.writeChoiceEnd(*this);
}


void POPOSigningKey::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_poposkInput_Type))
   {
      poposkInput_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__POPOSigningKeyInput::ValueType v;
      _poposkInput_Type.read(reader, v);
      value.set_poposkInput(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _algorithmIdentifier_Type.read(reader, v);
      value.set_algorithmIdentifier(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void POPOSigningKey::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_poposkInput_Present())
      _poposkInput_Type.write(writer, value.get_poposkInput());
   _algorithmIdentifier_Type.write(writer, value.get_algorithmIdentifier());
   _signature_Type.write(writer, value.get_signature());

   writer.writeSequenceEnd(*this);
}


void POPOSigningKeyInput::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      authInfo_INTERNAL__ChoiceType_sendersender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName_publicKeyMACpublicKeyMAC_INTERNAL_asn1__generated__PKMACValue::ValueType v;
      _authInfo_Type.read(reader, v);
      value.set_authInfo(std::move(v));
   }
   {
      asn1::generated::SubjectPublicKeyInfo::ValueType v;
      _publicKey_Type.read(reader, v);
      value.set_publicKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void POPOSigningKeyInput::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _authInfo_Type.write(writer, value.get_authInfo());
   _publicKey_Type.write(writer, value.get_publicKey());

   writer.writeSequenceEnd(*this);
}


void PKMACValue::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _algId_Type.read(reader, v);
      value.set_algId(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _value_Type.read(reader, v);
      value.set_value(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PKMACValue::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _algId_Type.write(writer, value.get_algId());
   _value_Type.write(writer, value.get_value());

   writer.writeSequenceEnd(*this);
}


void PBMParameter_2005::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::OctetStringType::ValueType v;
      _salt_Type.read(reader, v);
      value.set_salt(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _owf_Type.read(reader, v);
      value.set_owf(std::move(v));
   }
   {
      asn1::IntegerType::ValueType v;
      _iterationCount_Type.read(reader, v);
      value.set_iterationCount(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _mac_Type.read(reader, v);
      value.set_mac(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PBMParameter_2005::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _salt_Type.write(writer, value.get_salt());
   _owf_Type.write(writer, value.get_owf());
   _iterationCount_Type.write(writer, value.get_iterationCount());
   _mac_Type.write(writer, value.get_mac());

   writer.writeSequenceEnd(*this);
}


void POPOPrivKey::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_thisMessage_Type)
   {
      thisMessage_INTERNAL__NOTAG_0_INTERNAL_asn1__BitStringType::ValueType v;
      _thisMessage_Type.read(reader, v);
      value.set_thisMessage(std::move(v));
   }
   else if (choosenType == &_subsequentMessage_Type)
   {
      subsequentMessage_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SubsequentMessage::ValueType v;
      _subsequentMessage_Type.read(reader, v);
      value.set_subsequentMessage(std::move(v));
   }
   else if (choosenType == &_dhMAC_Type)
   {
      dhMAC_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType::ValueType v;
      _dhMAC_Type.read(reader, v);
      value.set_dhMAC(std::move(v));
   }
   else if (choosenType == &_agreeMAC_Type)
   {
      agreeMAC_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PKMACValue::ValueType v;
      _agreeMAC_Type.read(reader, v);
      value.set_agreeMAC(std::move(v));
   }
   else if (choosenType == &_encryptedKey_Type)
   {
      encryptedKey_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__EnvelopedData::ValueType v;
      _encryptedKey_Type.read(reader, v);
      value.set_encryptedKey(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _thisMessage_Type.toString() + ", " + _subsequentMessage_Type.toString() + ", " + _dhMAC_Type.toString() + ", " + _agreeMAC_Type.toString() + ", " + _encryptedKey_Type.toString());
   }
}

void POPOPrivKey::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_thisMessage_Choosen() || value.has_subsequentMessage_Choosen() || value.has_dhMAC_Choosen() || value.has_agreeMAC_Choosen() || value.has_encryptedKey_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_thisMessage_Choosen())
      _thisMessage_Type.write(writer, value.get_thisMessage());
   else if (value.has_subsequentMessage_Choosen())
      _subsequentMessage_Type.write(writer, value.get_subsequentMessage());
   else if (value.has_dhMAC_Choosen())
      _dhMAC_Type.write(writer, value.get_dhMAC());
   else if (value.has_agreeMAC_Choosen())
      _agreeMAC_Type.write(writer, value.get_agreeMAC());
   else if (value.has_encryptedKey_Choosen())
      _encryptedKey_Type.write(writer, value.get_encryptedKey());

   writer.writeChoiceEnd(*this);
}


void PKIPublicationInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      action_INTERNAL_::ValueType v;
      _action_Type.read(reader, v);
      value.set_action(std::move(v));
   }

   if (reader.isComponentPresent(_pubInfos_Type))
   {
      pubInfos_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SinglePubInfo::ValueType v;
      _pubInfos_Type.read(reader, v);
      value.set_pubInfos(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PKIPublicationInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _action_Type.write(writer, value.get_action());
   if (value.is_pubInfos_Present())
      _pubInfos_Type.write(writer, value.get_pubInfos());

   writer.writeSequenceEnd(*this);
}


void SinglePubInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      pubMethod_INTERNAL_::ValueType v;
      _pubMethod_Type.read(reader, v);
      value.set_pubMethod(std::move(v));
   }

   if (reader.isComponentPresent(_pubLocation_Type))
   {
      asn1::generated::GeneralName::ValueType v;
      _pubLocation_Type.read(reader, v);
      value.set_pubLocation(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SinglePubInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _pubMethod_Type.write(writer, value.get_pubMethod());
   if (value.is_pubLocation_Present())
      _pubLocation_Type.write(writer, value.get_pubLocation());

   writer.writeSequenceEnd(*this);
}


void PKIArchiveOptions::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_encryptedPrivKey_Type)
   {
      encryptedPrivKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedKey2005::ValueType v;
      _encryptedPrivKey_Type.read(reader, v);
      value.set_encryptedPrivKey(std::move(v));
   }
   else if (choosenType == &_keyGenParameters_Type)
   {
      keyGenParameters_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyGenParameters::ValueType v;
      _keyGenParameters_Type.read(reader, v);
      value.set_keyGenParameters(std::move(v));
   }
   else if (choosenType == &_archiveRemGenPrivKey_Type)
   {
      archiveRemGenPrivKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BooleanType::ValueType v;
      _archiveRemGenPrivKey_Type.read(reader, v);
      value.set_archiveRemGenPrivKey(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _encryptedPrivKey_Type.toString() + ", " + _keyGenParameters_Type.toString() + ", " + _archiveRemGenPrivKey_Type.toString());
   }
}

void PKIArchiveOptions::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_encryptedPrivKey_Choosen() || value.has_keyGenParameters_Choosen() || value.has_archiveRemGenPrivKey_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_encryptedPrivKey_Choosen())
      _encryptedPrivKey_Type.write(writer, value.get_encryptedPrivKey());
   else if (value.has_keyGenParameters_Choosen())
      _keyGenParameters_Type.write(writer, value.get_keyGenParameters());
   else if (value.has_archiveRemGenPrivKey_Choosen())
      _archiveRemGenPrivKey_Type.write(writer, value.get_archiveRemGenPrivKey());

   writer.writeChoiceEnd(*this);
}


void EncryptedKey2005::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_encryptedValue_Type)
   {
      asn1::generated::EncryptedValue::ValueType v;
      _encryptedValue_Type.read(reader, v);
      value.set_encryptedValue(std::move(v));
   }
   else if (choosenType == &_envelopedData_Type)
   {
      envelopedData_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EnvelopedData::ValueType v;
      _envelopedData_Type.read(reader, v);
      value.set_envelopedData(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _encryptedValue_Type.toString() + ", " + _envelopedData_Type.toString());
   }
}

void EncryptedKey2005::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_encryptedValue_Choosen() || value.has_envelopedData_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_encryptedValue_Choosen())
      _encryptedValue_Type.write(writer, value.get_encryptedValue());
   else if (value.has_envelopedData_Choosen())
      _envelopedData_Type.write(writer, value.get_envelopedData());

   writer.writeChoiceEnd(*this);
}


void EncryptedValue::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_intendedAlg_Type))
   {
      intendedAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier::ValueType v;
      _intendedAlg_Type.read(reader, v);
      value.set_intendedAlg(std::move(v));
   }

   if (reader.isComponentPresent(_symmAlg_Type))
   {
      symmAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier::ValueType v;
      _symmAlg_Type.read(reader, v);
      value.set_symmAlg(std::move(v));
   }

   if (reader.isComponentPresent(_encSymmKey_Type))
   {
      encSymmKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType::ValueType v;
      _encSymmKey_Type.read(reader, v);
      value.set_encSymmKey(std::move(v));
   }

   if (reader.isComponentPresent(_keyAlg_Type))
   {
      keyAlg_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__AlgorithmIdentifier::ValueType v;
      _keyAlg_Type.read(reader, v);
      value.set_keyAlg(std::move(v));
   }

   if (reader.isComponentPresent(_valueHint_Type))
   {
      valueHint_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType::ValueType v;
      _valueHint_Type.read(reader, v);
      value.set_valueHint(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _encValue_Type.read(reader, v);
      value.set_encValue(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void EncryptedValue::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_intendedAlg_Present())
      _intendedAlg_Type.write(writer, value.get_intendedAlg());
   if (value.is_symmAlg_Present())
      _symmAlg_Type.write(writer, value.get_symmAlg());
   if (value.is_encSymmKey_Present())
      _encSymmKey_Type.write(writer, value.get_encSymmKey());
   if (value.is_keyAlg_Present())
      _keyAlg_Type.write(writer, value.get_keyAlg());
   if (value.is_valueHint_Present())
      _valueHint_Type.write(writer, value.get_valueHint());
   _encValue_Type.write(writer, value.get_encValue());

   writer.writeSequenceEnd(*this);
}


void CertId::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::GeneralName::ValueType v;
      _issuer_Type.read(reader, v);
      value.set_issuer(std::move(v));
   }
   {
      asn1::IntegerType::ValueType v;
      _serialNumber_Type.read(reader, v);
      value.set_serialNumber(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertId::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _issuer_Type.write(writer, value.get_issuer());
   _serialNumber_Type.write(writer, value.get_serialNumber());

   writer.writeSequenceEnd(*this);
}


void EncKeyWithID::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PrivateKeyInfo::ValueType v;
      _privateKey_Type.read(reader, v);
      value.set_privateKey(std::move(v));
   }

   if (reader.isComponentPresent(_identifier_Type))
   {
      identifier_INTERNAL__ChoiceType_stringstring_INTERNAL_asn1__generated__UTF8String_generalNamegeneralName_INTERNAL_asn1__generated__GeneralName::ValueType v;
      _identifier_Type.read(reader, v);
      value.set_identifier(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void EncKeyWithID::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _privateKey_Type.write(writer, value.get_privateKey());
   if (value.is_identifier_Present())
      _identifier_Type.write(writer, value.get_identifier());

   writer.writeSequenceEnd(*this);
}


void PrivateKeyInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _privateKeyAlgorithm_Type.read(reader, v);
      value.set_privateKeyAlgorithm(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _privateKey_Type.read(reader, v);
      value.set_privateKey(std::move(v));
   }

   if (reader.isComponentPresent(_attributes_Type))
   {
      attributes_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__Attributes::ValueType v;
      _attributes_Type.read(reader, v);
      value.set_attributes(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PrivateKeyInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _privateKeyAlgorithm_Type.write(writer, value.get_privateKeyAlgorithm());
   _privateKey_Type.write(writer, value.get_privateKey());
   if (value.is_attributes_Present())
      _attributes_Type.write(writer, value.get_attributes());

   writer.writeSequenceEnd(*this);
}


void CertificationRequestInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _version_Type.read(reader, v);
      value.set_version(std::move(v));
   }
   {
      asn1::generated::Name::ValueType v;
      _subject_Type.read(reader, v);
      value.set_subject(std::move(v));
   }
   {
      asn1::generated::SubjectPublicKeyInfo_10::ValueType v;
      _subjectPKInfo_Type.read(reader, v);
      value.set_subjectPKInfo(std::move(v));
   }
   {
      attributes_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Attributes_10::ValueType v;
      _attributes_Type.read(reader, v);
      value.set_attributes(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertificationRequestInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _version_Type.write(writer, value.get_version());
   _subject_Type.write(writer, value.get_subject());
   _subjectPKInfo_Type.write(writer, value.get_subjectPKInfo());
   _attributes_Type.write(writer, value.get_attributes());

   writer.writeSequenceEnd(*this);
}


void SubjectPublicKeyInfo_10::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AlgorithmIdentifier_10::ValueType v;
      _algorithm_Type.read(reader, v);
      value.set_algorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _subjectPublicKey_Type.read(reader, v);
      value.set_subjectPublicKey(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void SubjectPublicKeyInfo_10::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _algorithm_Type.write(writer, value.get_algorithm());
   _subjectPublicKey_Type.write(writer, value.get_subjectPublicKey());

   writer.writeSequenceEnd(*this);
}


void Attribute_10::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _type_Type.read(reader, v);
      value.set_type(std::move(v));
   }
   {
      values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue_10::ValueType v;
      _values_Type.read(reader, v);
      value.set_values(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Attribute_10::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _type_Type.write(writer, value.get_type());
   _values_Type.write(writer, value.get_values());

   writer.writeSequenceEnd(*this);
}


void CertificationRequest::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CertificationRequestInfo::ValueType v;
      _certificationRequestInfo_Type.read(reader, v);
      value.set_certificationRequestInfo(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier_10::ValueType v;
      _signatureAlgorithm_Type.read(reader, v);
      value.set_signatureAlgorithm(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _signature_Type.read(reader, v);
      value.set_signature(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertificationRequest::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certificationRequestInfo_Type.write(writer, value.get_certificationRequestInfo());
   _signatureAlgorithm_Type.write(writer, value.get_signatureAlgorithm());
   _signature_Type.write(writer, value.get_signature());

   writer.writeSequenceEnd(*this);
}


void AlgorithmIdentifier_10::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _algorithm_Type.read(reader, v);
      value.set_algorithm(std::move(v));
   }

   if (reader.isComponentPresent(_parameters_Type))
   {
      asn1::AnyType::ValueType v;
      _parameters_Type.read(reader, v);
      value.set_parameters(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void AlgorithmIdentifier_10::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _algorithm_Type.write(writer, value.get_algorithm());
   if (value.is_parameters_Present())
      _parameters_Type.write(writer, value.get_parameters());

   writer.writeSequenceEnd(*this);
}


void CMPCertificate::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_x509v3PKCert_Type)
   {
      asn1::generated::Certificate::ValueType v;
      _x509v3PKCert_Type.read(reader, v);
      value.set_x509v3PKCert(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _x509v3PKCert_Type.toString());
   }
}

void CMPCertificate::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_x509v3PKCert_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_x509v3PKCert_Choosen())
      _x509v3PKCert_Type.write(writer, value.get_x509v3PKCert());

   writer.writeChoiceEnd(*this);
}


void PKIMessage::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PKIHeader::ValueType v;
      _header_Type.read(reader, v);
      value.set_header(std::move(v));
   }
   {
      asn1::generated::PKIBody::ValueType v;
      _body_Type.read(reader, v);
      value.set_body(std::move(v));
   }

   if (reader.isComponentPresent(_protection_Type))
   {
      protection_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__PKIProtection::ValueType v;
      _protection_Type.read(reader, v);
      value.set_protection(std::move(v));
   }

   if (reader.isComponentPresent(_extraCerts_Type))
   {
      extraCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate::ValueType v;
      _extraCerts_Type.read(reader, v);
      value.set_extraCerts(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PKIMessage::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _header_Type.write(writer, value.get_header());
   _body_Type.write(writer, value.get_body());
   if (value.is_protection_Present())
      _protection_Type.write(writer, value.get_protection());
   if (value.is_extraCerts_Present())
      _extraCerts_Type.write(writer, value.get_extraCerts());

   writer.writeSequenceEnd(*this);
}


void PKIHeader::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      pvno_INTERNAL_::ValueType v;
      _pvno_Type.read(reader, v);
      value.set_pvno(std::move(v));
   }
   {
      asn1::generated::GeneralName::ValueType v;
      _sender_Type.read(reader, v);
      value.set_sender(std::move(v));
   }
   {
      asn1::generated::GeneralName::ValueType v;
      _recipient_Type.read(reader, v);
      value.set_recipient(std::move(v));
   }

   if (reader.isComponentPresent(_messageTime_Type))
   {
      messageTime_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType::ValueType v;
      _messageTime_Type.read(reader, v);
      value.set_messageTime(std::move(v));
   }

   if (reader.isComponentPresent(_protectionAlg_Type))
   {
      protectionAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier::ValueType v;
      _protectionAlg_Type.read(reader, v);
      value.set_protectionAlg(std::move(v));
   }

   if (reader.isComponentPresent(_senderKID_Type))
   {
      senderKID_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KeyIdentifier::ValueType v;
      _senderKID_Type.read(reader, v);
      value.set_senderKID(std::move(v));
   }

   if (reader.isComponentPresent(_recipKID_Type))
   {
      recipKID_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__KeyIdentifier::ValueType v;
      _recipKID_Type.read(reader, v);
      value.set_recipKID(std::move(v));
   }

   if (reader.isComponentPresent(_transactionID_Type))
   {
      transactionID_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType::ValueType v;
      _transactionID_Type.read(reader, v);
      value.set_transactionID(std::move(v));
   }

   if (reader.isComponentPresent(_senderNonce_Type))
   {
      senderNonce_INTERNAL__NOTAG_5_INTERNAL_asn1__OctetStringType::ValueType v;
      _senderNonce_Type.read(reader, v);
      value.set_senderNonce(std::move(v));
   }

   if (reader.isComponentPresent(_recipNonce_Type))
   {
      recipNonce_INTERNAL__NOTAG_6_INTERNAL_asn1__OctetStringType::ValueType v;
      _recipNonce_Type.read(reader, v);
      value.set_recipNonce(std::move(v));
   }

   if (reader.isComponentPresent(_freeText_Type))
   {
      freeText_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__PKIFreeText::ValueType v;
      _freeText_Type.read(reader, v);
      value.set_freeText(std::move(v));
   }

   if (reader.isComponentPresent(_generalInfo_Type))
   {
      generalInfo_INTERNAL__NOTAG_8_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__InfoTypeAndValue::ValueType v;
      _generalInfo_Type.read(reader, v);
      value.set_generalInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PKIHeader::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _pvno_Type.write(writer, value.get_pvno());
   _sender_Type.write(writer, value.get_sender());
   _recipient_Type.write(writer, value.get_recipient());
   if (value.is_messageTime_Present())
      _messageTime_Type.write(writer, value.get_messageTime());
   if (value.is_protectionAlg_Present())
      _protectionAlg_Type.write(writer, value.get_protectionAlg());
   if (value.is_senderKID_Present())
      _senderKID_Type.write(writer, value.get_senderKID());
   if (value.is_recipKID_Present())
      _recipKID_Type.write(writer, value.get_recipKID());
   if (value.is_transactionID_Present())
      _transactionID_Type.write(writer, value.get_transactionID());
   if (value.is_senderNonce_Present())
      _senderNonce_Type.write(writer, value.get_senderNonce());
   if (value.is_recipNonce_Present())
      _recipNonce_Type.write(writer, value.get_recipNonce());
   if (value.is_freeText_Present())
      _freeText_Type.write(writer, value.get_freeText());
   if (value.is_generalInfo_Present())
      _generalInfo_Type.write(writer, value.get_generalInfo());

   writer.writeSequenceEnd(*this);
}


void PKIBody::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_ir_Type)
   {
      ir_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CertReqMessages::ValueType v;
      _ir_Type.read(reader, v);
      value.set_ir(std::move(v));
   }
   else if (choosenType == &_ip_Type)
   {
      ip_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertRepMessage::ValueType v;
      _ip_Type.read(reader, v);
      value.set_ip(std::move(v));
   }
   else if (choosenType == &_cr_Type)
   {
      cr_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertReqMessages::ValueType v;
      _cr_Type.read(reader, v);
      value.set_cr(std::move(v));
   }
   else if (choosenType == &_cp_Type)
   {
      cp_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__CertRepMessage::ValueType v;
      _cp_Type.read(reader, v);
      value.set_cp(std::move(v));
   }
   else if (choosenType == &_p10cr_Type)
   {
      p10cr_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__CertificationRequest::ValueType v;
      _p10cr_Type.read(reader, v);
      value.set_p10cr(std::move(v));
   }
   else if (choosenType == &_popdecc_Type)
   {
      popdecc_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__POPODecKeyChallContent::ValueType v;
      _popdecc_Type.read(reader, v);
      value.set_popdecc(std::move(v));
   }
   else if (choosenType == &_popdecr_Type)
   {
      popdecr_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__POPODecKeyRespContent::ValueType v;
      _popdecr_Type.read(reader, v);
      value.set_popdecr(std::move(v));
   }
   else if (choosenType == &_kur_Type)
   {
      kur_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__CertReqMessages::ValueType v;
      _kur_Type.read(reader, v);
      value.set_kur(std::move(v));
   }
   else if (choosenType == &_kup_Type)
   {
      kup_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__CertRepMessage::ValueType v;
      _kup_Type.read(reader, v);
      value.set_kup(std::move(v));
   }
   else if (choosenType == &_krr_Type)
   {
      krr_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__CertReqMessages::ValueType v;
      _krr_Type.read(reader, v);
      value.set_krr(std::move(v));
   }
   else if (choosenType == &_krp_Type)
   {
      krp_INTERNAL__NOTAG_10_INTERNAL_asn1__generated__KeyRecRepContent::ValueType v;
      _krp_Type.read(reader, v);
      value.set_krp(std::move(v));
   }
   else if (choosenType == &_rr_Type)
   {
      rr_INTERNAL__NOTAG_11_INTERNAL_asn1__generated__RevReqContent::ValueType v;
      _rr_Type.read(reader, v);
      value.set_rr(std::move(v));
   }
   else if (choosenType == &_rp_Type)
   {
      rp_INTERNAL__NOTAG_12_INTERNAL_asn1__generated__RevRepContent::ValueType v;
      _rp_Type.read(reader, v);
      value.set_rp(std::move(v));
   }
   else if (choosenType == &_ccr_Type)
   {
      ccr_INTERNAL__NOTAG_13_INTERNAL_asn1__generated__CertReqMessages::ValueType v;
      _ccr_Type.read(reader, v);
      value.set_ccr(std::move(v));
   }
   else if (choosenType == &_ccp_Type)
   {
      ccp_INTERNAL__NOTAG_14_INTERNAL_asn1__generated__CertRepMessage::ValueType v;
      _ccp_Type.read(reader, v);
      value.set_ccp(std::move(v));
   }
   else if (choosenType == &_pkiconf_Type)
   {
      pkiconf_INTERNAL__NOTAG_19_INTERNAL_asn1__generated__PKIConfirmContent::ValueType v;
      _pkiconf_Type.read(reader, v);
      value.set_pkiconf(std::move(v));
   }
   else if (choosenType == &_genm_Type)
   {
      genm_INTERNAL__NOTAG_21_INTERNAL_asn1__generated__GenMsgContent::ValueType v;
      _genm_Type.read(reader, v);
      value.set_genm(std::move(v));
   }
   else if (choosenType == &_genp_Type)
   {
      genp_INTERNAL__NOTAG_22_INTERNAL_asn1__generated__GenRepContent::ValueType v;
      _genp_Type.read(reader, v);
      value.set_genp(std::move(v));
   }
   else if (choosenType == &_error_Type)
   {
      error_INTERNAL__NOTAG_23_INTERNAL_asn1__generated__ErrorMsgContent::ValueType v;
      _error_Type.read(reader, v);
      value.set_error(std::move(v));
   }
   else if (choosenType == &_certConf_Type)
   {
      certConf_INTERNAL__NOTAG_24_INTERNAL_asn1__generated__CertConfirmContent::ValueType v;
      _certConf_Type.read(reader, v);
      value.set_certConf(std::move(v));
   }
   else if (choosenType == &_pollReq_Type)
   {
      pollReq_INTERNAL__NOTAG_25_INTERNAL_asn1__generated__PollReqContent::ValueType v;
      _pollReq_Type.read(reader, v);
      value.set_pollReq(std::move(v));
   }
   else if (choosenType == &_pollRep_Type)
   {
      pollRep_INTERNAL__NOTAG_26_INTERNAL_asn1__generated__PollRepContent::ValueType v;
      _pollRep_Type.read(reader, v);
      value.set_pollRep(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _ir_Type.toString() + ", " + _ip_Type.toString() + ", " + _cr_Type.toString() + ", " + _cp_Type.toString() + ", " + _p10cr_Type.toString() + ", " + _popdecc_Type.toString() + ", " + _popdecr_Type.toString() + ", " + _kur_Type.toString() + ", " + _kup_Type.toString() + ", " + _krr_Type.toString() + ", " + _krp_Type.toString() + ", " + _rr_Type.toString() + ", " + _rp_Type.toString() + ", " + _ccr_Type.toString() + ", " + _ccp_Type.toString() + ", " + _pkiconf_Type.toString() + ", " + _genm_Type.toString() + ", " + _genp_Type.toString() + ", " + _error_Type.toString() + ", " + _certConf_Type.toString() + ", " + _pollReq_Type.toString() + ", " + _pollRep_Type.toString());
   }
}

void PKIBody::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_ir_Choosen() || value.has_ip_Choosen() || value.has_cr_Choosen() || value.has_cp_Choosen() || value.has_p10cr_Choosen() || value.has_popdecc_Choosen() || value.has_popdecr_Choosen() || value.has_kur_Choosen() || value.has_kup_Choosen() || value.has_krr_Choosen() || value.has_krp_Choosen() || value.has_rr_Choosen() || value.has_rp_Choosen() || value.has_ccr_Choosen() || value.has_ccp_Choosen() || value.has_pkiconf_Choosen() || value.has_genm_Choosen() || value.has_genp_Choosen() || value.has_error_Choosen() || value.has_certConf_Choosen() || value.has_pollReq_Choosen() || value.has_pollRep_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_ir_Choosen())
      _ir_Type.write(writer, value.get_ir());
   else if (value.has_ip_Choosen())
      _ip_Type.write(writer, value.get_ip());
   else if (value.has_cr_Choosen())
      _cr_Type.write(writer, value.get_cr());
   else if (value.has_cp_Choosen())
      _cp_Type.write(writer, value.get_cp());
   else if (value.has_p10cr_Choosen())
      _p10cr_Type.write(writer, value.get_p10cr());
   else if (value.has_popdecc_Choosen())
      _popdecc_Type.write(writer, value.get_popdecc());
   else if (value.has_popdecr_Choosen())
      _popdecr_Type.write(writer, value.get_popdecr());
   else if (value.has_kur_Choosen())
      _kur_Type.write(writer, value.get_kur());
   else if (value.has_kup_Choosen())
      _kup_Type.write(writer, value.get_kup());
   else if (value.has_krr_Choosen())
      _krr_Type.write(writer, value.get_krr());
   else if (value.has_krp_Choosen())
      _krp_Type.write(writer, value.get_krp());
   else if (value.has_rr_Choosen())
      _rr_Type.write(writer, value.get_rr());
   else if (value.has_rp_Choosen())
      _rp_Type.write(writer, value.get_rp());
   else if (value.has_ccr_Choosen())
      _ccr_Type.write(writer, value.get_ccr());
   else if (value.has_ccp_Choosen())
      _ccp_Type.write(writer, value.get_ccp());
   else if (value.has_pkiconf_Choosen())
      _pkiconf_Type.write(writer, value.get_pkiconf());
   else if (value.has_genm_Choosen())
      _genm_Type.write(writer, value.get_genm());
   else if (value.has_genp_Choosen())
      _genp_Type.write(writer, value.get_genp());
   else if (value.has_error_Choosen())
      _error_Type.write(writer, value.get_error());
   else if (value.has_certConf_Choosen())
      _certConf_Type.write(writer, value.get_certConf());
   else if (value.has_pollReq_Choosen())
      _pollReq_Type.write(writer, value.get_pollReq());
   else if (value.has_pollRep_Choosen())
      _pollRep_Type.write(writer, value.get_pollRep());

   writer.writeChoiceEnd(*this);
}


void ProtectedPart::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PKIHeader::ValueType v;
      _header_Type.read(reader, v);
      value.set_header(std::move(v));
   }
   {
      asn1::generated::PKIBody::ValueType v;
      _body_Type.read(reader, v);
      value.set_body(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ProtectedPart::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _header_Type.write(writer, value.get_header());
   _body_Type.write(writer, value.get_body());

   writer.writeSequenceEnd(*this);
}


void PBMParameter::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::OctetStringType::ValueType v;
      _salt_Type.read(reader, v);
      value.set_salt(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _owf_Type.read(reader, v);
      value.set_owf(std::move(v));
   }
   {
      asn1::IntegerType::ValueType v;
      _iterationCount_Type.read(reader, v);
      value.set_iterationCount(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _mac_Type.read(reader, v);
      value.set_mac(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PBMParameter::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _salt_Type.write(writer, value.get_salt());
   _owf_Type.write(writer, value.get_owf());
   _iterationCount_Type.write(writer, value.get_iterationCount());
   _mac_Type.write(writer, value.get_mac());

   writer.writeSequenceEnd(*this);
}


void DHBMParameter::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _owf_Type.read(reader, v);
      value.set_owf(std::move(v));
   }
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _mac_Type.read(reader, v);
      value.set_mac(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void DHBMParameter::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _owf_Type.write(writer, value.get_owf());
   _mac_Type.write(writer, value.get_mac());

   writer.writeSequenceEnd(*this);
}


void PKIStatusInfo::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PKIStatus::ValueType v;
      _status_Type.read(reader, v);
      value.set_status(std::move(v));
   }

   if (reader.isComponentPresent(_statusString_Type))
   {
      asn1::generated::PKIFreeText::ValueType v;
      _statusString_Type.read(reader, v);
      value.set_statusString(std::move(v));
   }

   if (reader.isComponentPresent(_failInfo_Type))
   {
      asn1::generated::PKIFailureInfo::ValueType v;
      _failInfo_Type.read(reader, v);
      value.set_failInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void PKIStatusInfo::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _status_Type.write(writer, value.get_status());
   if (value.is_statusString_Present())
      _statusString_Type.write(writer, value.get_statusString());
   if (value.is_failInfo_Present())
      _failInfo_Type.write(writer, value.get_failInfo());

   writer.writeSequenceEnd(*this);
}


void OOBCertHash::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_hashAlg_Type))
   {
      hashAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier::ValueType v;
      _hashAlg_Type.read(reader, v);
      value.set_hashAlg(std::move(v));
   }

   if (reader.isComponentPresent(_certId_Type))
   {
      certId_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertId::ValueType v;
      _certId_Type.read(reader, v);
      value.set_certId(std::move(v));
   }
   {
      asn1::BitStringType::ValueType v;
      _hashVal_Type.read(reader, v);
      value.set_hashVal(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void OOBCertHash::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_hashAlg_Present())
      _hashAlg_Type.write(writer, value.get_hashAlg());
   if (value.is_certId_Present())
      _certId_Type.write(writer, value.get_certId());
   _hashVal_Type.write(writer, value.get_hashVal());

   writer.writeSequenceEnd(*this);
}


void Challenge::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_owf_Type))
   {
      asn1::generated::AlgorithmIdentifier::ValueType v;
      _owf_Type.read(reader, v);
      value.set_owf(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _witness_Type.read(reader, v);
      value.set_witness(std::move(v));
   }
   {
      asn1::OctetStringType::ValueType v;
      _challenge_Type.read(reader, v);
      value.set_challenge(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void Challenge::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_owf_Present())
      _owf_Type.write(writer, value.get_owf());
   _witness_Type.write(writer, value.get_witness());
   _challenge_Type.write(writer, value.get_challenge());

   writer.writeSequenceEnd(*this);
}


void CertRepMessage::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);


   if (reader.isComponentPresent(_caPubs_Type))
   {
      caPubs_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate::ValueType v;
      _caPubs_Type.read(reader, v);
      value.set_caPubs(std::move(v));
   }
   {
      response_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertResponse::ValueType v;
      _response_Type.read(reader, v);
      value.set_response(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertRepMessage::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   if (value.is_caPubs_Present())
      _caPubs_Type.write(writer, value.get_caPubs());
   _response_Type.write(writer, value.get_response());

   writer.writeSequenceEnd(*this);
}


void CertResponse::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::IntegerType::ValueType v;
      _certReqId_Type.read(reader, v);
      value.set_certReqId(std::move(v));
   }
   {
      asn1::generated::PKIStatusInfo::ValueType v;
      _status_Type.read(reader, v);
      value.set_status(std::move(v));
   }

   if (reader.isComponentPresent(_certifiedKeyPair_Type))
   {
      asn1::generated::CertifiedKeyPair::ValueType v;
      _certifiedKeyPair_Type.read(reader, v);
      value.set_certifiedKeyPair(std::move(v));
   }

   if (reader.isComponentPresent(_rspInfo_Type))
   {
      asn1::OctetStringType::ValueType v;
      _rspInfo_Type.read(reader, v);
      value.set_rspInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertResponse::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certReqId_Type.write(writer, value.get_certReqId());
   _status_Type.write(writer, value.get_status());
   if (value.is_certifiedKeyPair_Present())
      _certifiedKeyPair_Type.write(writer, value.get_certifiedKeyPair());
   if (value.is_rspInfo_Present())
      _rspInfo_Type.write(writer, value.get_rspInfo());

   writer.writeSequenceEnd(*this);
}


void CertifiedKeyPair::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CertOrEncCert::ValueType v;
      _certOrEncCert_Type.read(reader, v);
      value.set_certOrEncCert(std::move(v));
   }

   if (reader.isComponentPresent(_privateKey_Type))
   {
      privateKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedValue::ValueType v;
      _privateKey_Type.read(reader, v);
      value.set_privateKey(std::move(v));
   }

   if (reader.isComponentPresent(_publicationInfo_Type))
   {
      publicationInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__PKIPublicationInfo::ValueType v;
      _publicationInfo_Type.read(reader, v);
      value.set_publicationInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertifiedKeyPair::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certOrEncCert_Type.write(writer, value.get_certOrEncCert());
   if (value.is_privateKey_Present())
      _privateKey_Type.write(writer, value.get_privateKey());
   if (value.is_publicationInfo_Present())
      _publicationInfo_Type.write(writer, value.get_publicationInfo());

   writer.writeSequenceEnd(*this);
}


void CertOrEncCert::read(ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = nullptr;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_certificate_Type)
   {
      certificate_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate::ValueType v;
      _certificate_Type.read(reader, v);
      value.set_certificate(std::move(v));
   }
   else if (choosenType == &_encryptedCert_Type)
   {
      encryptedCert_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__EncryptedValue::ValueType v;
      _encryptedCert_Type.read(reader, v);
      value.set_encryptedCert(std::move(v));
   }
   else
   {
      throw ASN1Exception("Expected " + toString() + " must be one of: "
          + _certificate_Type.toString() + ", " + _encryptedCert_Type.toString());
   }
}

void CertOrEncCert::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_certificate_Choosen() || value.has_encryptedCert_Choosen());

   writer.writeChoiceBegin(*this);

   if (value.has_certificate_Choosen())
      _certificate_Type.write(writer, value.get_certificate());
   else if (value.has_encryptedCert_Choosen())
      _encryptedCert_Type.write(writer, value.get_encryptedCert());

   writer.writeChoiceEnd(*this);
}


void KeyRecRepContent::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PKIStatusInfo::ValueType v;
      _status_Type.read(reader, v);
      value.set_status(std::move(v));
   }

   if (reader.isComponentPresent(_newSigCert_Type))
   {
      newSigCert_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate::ValueType v;
      _newSigCert_Type.read(reader, v);
      value.set_newSigCert(std::move(v));
   }

   if (reader.isComponentPresent(_caCerts_Type))
   {
      caCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate::ValueType v;
      _caCerts_Type.read(reader, v);
      value.set_caCerts(std::move(v));
   }

   if (reader.isComponentPresent(_keyPairHist_Type))
   {
      keyPairHist_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertifiedKeyPair::ValueType v;
      _keyPairHist_Type.read(reader, v);
      value.set_keyPairHist(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void KeyRecRepContent::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _status_Type.write(writer, value.get_status());
   if (value.is_newSigCert_Present())
      _newSigCert_Type.write(writer, value.get_newSigCert());
   if (value.is_caCerts_Present())
      _caCerts_Type.write(writer, value.get_caCerts());
   if (value.is_keyPairHist_Present())
      _keyPairHist_Type.write(writer, value.get_keyPairHist());

   writer.writeSequenceEnd(*this);
}


void RevDetails::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CertTemplate::ValueType v;
      _certDetails_Type.read(reader, v);
      value.set_certDetails(std::move(v));
   }

   if (reader.isComponentPresent(_crlEntryDetails_Type))
   {
      asn1::generated::Extensions::ValueType v;
      _crlEntryDetails_Type.read(reader, v);
      value.set_crlEntryDetails(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void RevDetails::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certDetails_Type.write(writer, value.get_certDetails());
   if (value.is_crlEntryDetails_Present())
      _crlEntryDetails_Type.write(writer, value.get_crlEntryDetails());

   writer.writeSequenceEnd(*this);
}


void RevRepContent::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      status_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PKIStatusInfo::ValueType v;
      _status_Type.read(reader, v);
      value.set_status(std::move(v));
   }

   if (reader.isComponentPresent(_revCerts_Type))
   {
      revCerts_INTERNAL__NOTAG_0_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertId::ValueType v;
      _revCerts_Type.read(reader, v);
      value.set_revCerts(std::move(v));
   }

   if (reader.isComponentPresent(_crls_Type))
   {
      crls_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertificateList::ValueType v;
      _crls_Type.read(reader, v);
      value.set_crls(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void RevRepContent::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _status_Type.write(writer, value.get_status());
   if (value.is_revCerts_Present())
      _revCerts_Type.write(writer, value.get_revCerts());
   if (value.is_crls_Present())
      _crls_Type.write(writer, value.get_crls());

   writer.writeSequenceEnd(*this);
}


void CAKeyUpdAnnContent::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::CMPCertificate::ValueType v;
      _oldWithNew_Type.read(reader, v);
      value.set_oldWithNew(std::move(v));
   }
   {
      asn1::generated::CMPCertificate::ValueType v;
      _newWithOld_Type.read(reader, v);
      value.set_newWithOld(std::move(v));
   }
   {
      asn1::generated::CMPCertificate::ValueType v;
      _newWithNew_Type.read(reader, v);
      value.set_newWithNew(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CAKeyUpdAnnContent::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _oldWithNew_Type.write(writer, value.get_oldWithNew());
   _newWithOld_Type.write(writer, value.get_newWithOld());
   _newWithNew_Type.write(writer, value.get_newWithNew());

   writer.writeSequenceEnd(*this);
}


void RevAnnContent::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PKIStatus::ValueType v;
      _status_Type.read(reader, v);
      value.set_status(std::move(v));
   }
   {
      asn1::generated::CertId::ValueType v;
      _certId_Type.read(reader, v);
      value.set_certId(std::move(v));
   }
   {
      asn1::GeneralizedTimeType::ValueType v;
      _willBeRevokedAt_Type.read(reader, v);
      value.set_willBeRevokedAt(std::move(v));
   }
   {
      asn1::GeneralizedTimeType::ValueType v;
      _badSinceDate_Type.read(reader, v);
      value.set_badSinceDate(std::move(v));
   }

   if (reader.isComponentPresent(_crlDetails_Type))
   {
      asn1::generated::Extensions::ValueType v;
      _crlDetails_Type.read(reader, v);
      value.set_crlDetails(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void RevAnnContent::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _status_Type.write(writer, value.get_status());
   _certId_Type.write(writer, value.get_certId());
   _willBeRevokedAt_Type.write(writer, value.get_willBeRevokedAt());
   _badSinceDate_Type.write(writer, value.get_badSinceDate());
   if (value.is_crlDetails_Present())
      _crlDetails_Type.write(writer, value.get_crlDetails());

   writer.writeSequenceEnd(*this);
}


void CertStatus::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::OctetStringType::ValueType v;
      _certHash_Type.read(reader, v);
      value.set_certHash(std::move(v));
   }
   {
      asn1::IntegerType::ValueType v;
      _certReqId_Type.read(reader, v);
      value.set_certReqId(std::move(v));
   }

   if (reader.isComponentPresent(_statusInfo_Type))
   {
      asn1::generated::PKIStatusInfo::ValueType v;
      _statusInfo_Type.read(reader, v);
      value.set_statusInfo(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void CertStatus::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _certHash_Type.write(writer, value.get_certHash());
   _certReqId_Type.write(writer, value.get_certReqId());
   if (value.is_statusInfo_Present())
      _statusInfo_Type.write(writer, value.get_statusInfo());

   writer.writeSequenceEnd(*this);
}


void InfoTypeAndValue::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::ObjectIdentifierType::ValueType v;
      _infoType_Type.read(reader, v);
      value.set_infoType(std::move(v));
   }

   if (reader.isComponentPresent(_infoValue_Type))
   {
      asn1::AnyType::ValueType v;
      _infoValue_Type.read(reader, v);
      value.set_infoValue(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void InfoTypeAndValue::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _infoType_Type.write(writer, value.get_infoType());
   if (value.is_infoValue_Present())
      _infoValue_Type.write(writer, value.get_infoValue());

   writer.writeSequenceEnd(*this);
}


void ErrorMsgContent::read(ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      asn1::generated::PKIStatusInfo::ValueType v;
      _pKIStatusInfo_Type.read(reader, v);
      value.set_pKIStatusInfo(std::move(v));
   }

   if (reader.isComponentPresent(_errorCode_Type))
   {
      asn1::IntegerType::ValueType v;
      _errorCode_Type.read(reader, v);
      value.set_errorCode(std::move(v));
   }

   if (reader.isComponentPresent(_errorDetails_Type))
   {
      asn1::generated::PKIFreeText::ValueType v;
      _errorDetails_Type.read(reader, v);
      value.set_errorDetails(std::move(v));
   }

   reader.readSequenceEnd(*this);
}

void ErrorMsgContent::write(ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _pKIStatusInfo_Type.write(writer, value.get_pKIStatusInfo());
   if (value.is_errorCode_Present())
      _errorCode_Type.write(writer, value.get_errorCode());
   if (value.is_errorDetails_Present())
      _errorDetails_Type.write(writer, value.get_errorDetails());

   writer.writeSequenceEnd(*this);
}

}

}
