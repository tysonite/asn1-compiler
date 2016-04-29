#ifndef __ASN1_TYPES_HH
#define __ASN1_TYPES_HH

#include <Types.hh>

namespace asn1
{

namespace generated
{

// ValueAssignment for ASN.1 value: id-pkix
const ObjectIdentifierType::ValueType id_pkix("1.3.6.1.5.5.7");

// ValueAssignment for ASN.1 value: id-pe
const ObjectIdentifierType::ValueType id_pe("1.3.6.1.5.5.7.1");

// ValueAssignment for ASN.1 value: id-qt
const ObjectIdentifierType::ValueType id_qt("1.3.6.1.5.5.7.2");

// ValueAssignment for ASN.1 value: id-kp
const ObjectIdentifierType::ValueType id_kp("1.3.6.1.5.5.7.3");

// ValueAssignment for ASN.1 value: id-ad
const ObjectIdentifierType::ValueType id_ad("1.3.6.1.5.5.7.48");

// ValueAssignment for ASN.1 value: id-qt-cps
const ObjectIdentifierType::ValueType id_qt_cps("1.3.6.1.5.5.7.2.1");

// ValueAssignment for ASN.1 value: id-qt-unotice
const ObjectIdentifierType::ValueType id_qt_unotice("1.3.6.1.5.5.7.2.2");

// ValueAssignment for ASN.1 value: id-ad-ocsp
const ObjectIdentifierType::ValueType id_ad_ocsp("1.3.6.1.5.5.7.48.1");

// ValueAssignment for ASN.1 value: id-ad-caIssuers
const ObjectIdentifierType::ValueType id_ad_caIssuers("1.3.6.1.5.5.7.48.2");

// ValueAssignment for ASN.1 value: id-ad-timeStamping
const ObjectIdentifierType::ValueType id_ad_timeStamping("1.3.6.1.5.5.7.48.3");

// ValueAssignment for ASN.1 value: id-ad-caRepository
const ObjectIdentifierType::ValueType id_ad_caRepository("1.3.6.1.5.5.7.48.5");

// ValueAssignment for ASN.1 value: id-at
const ObjectIdentifierType::ValueType id_at("2.5.4");

// ValueAssignment for ASN.1 value: id-at-name
const ObjectIdentifierType::ValueType id_at_name("2.5.4.41");

// ValueAssignment for ASN.1 value: id-at-surname
const ObjectIdentifierType::ValueType id_at_surname("2.5.4.4");

// ValueAssignment for ASN.1 value: id-at-givenName
const ObjectIdentifierType::ValueType id_at_givenName("2.5.4.42");

// ValueAssignment for ASN.1 value: id-at-initials
const ObjectIdentifierType::ValueType id_at_initials("2.5.4.43");

// ValueAssignment for ASN.1 value: id-at-generationQualifier
const ObjectIdentifierType::ValueType id_at_generationQualifier("2.5.4.44");

// ValueAssignment for ASN.1 value: id-at-commonName
const ObjectIdentifierType::ValueType id_at_commonName("2.5.4.3");

// ValueAssignment for ASN.1 value: id-at-localityName
const ObjectIdentifierType::ValueType id_at_localityName("2.5.4.7");

// ValueAssignment for ASN.1 value: id-at-stateOrProvinceName
const ObjectIdentifierType::ValueType id_at_stateOrProvinceName("2.5.4.8");

// ValueAssignment for ASN.1 value: id-at-organizationName
const ObjectIdentifierType::ValueType id_at_organizationName("2.5.4.10");

// ValueAssignment for ASN.1 value: id-at-organizationalUnitName
const ObjectIdentifierType::ValueType id_at_organizationalUnitName("2.5.4.11");

// ValueAssignment for ASN.1 value: id-at-title
const ObjectIdentifierType::ValueType id_at_title("2.5.4.12");

// ValueAssignment for ASN.1 value: id-at-dnQualifier
const ObjectIdentifierType::ValueType id_at_dnQualifier("2.5.4.46");

// ValueAssignment for ASN.1 value: id-at-countryName
const ObjectIdentifierType::ValueType id_at_countryName("2.5.4.6");

// ValueAssignment for ASN.1 value: id-at-serialNumber
const ObjectIdentifierType::ValueType id_at_serialNumber("2.5.4.5");

// ValueAssignment for ASN.1 value: id-at-pseudonym
const ObjectIdentifierType::ValueType id_at_pseudonym("2.5.4.65");

// ValueAssignment for ASN.1 value: id-domainComponent
const ObjectIdentifierType::ValueType id_domainComponent("0.9.2342.19200300.100.1.25");

// ValueAssignment for ASN.1 value: pkcs-9
const ObjectIdentifierType::ValueType pkcs_9("1.2.840.113549.1.9");

// ValueAssignment for ASN.1 value: id-emailAddress
const ObjectIdentifierType::ValueType id_emailAddress("1.2.840.113549.1.9.1");

// ValueAssignment for ASN.1 value: common-name
enum { k_common_name = 1 };

// ValueAssignment for ASN.1 value: teletex-common-name
enum { k_teletex_common_name = 2 };

// ValueAssignment for ASN.1 value: teletex-organization-name
enum { k_teletex_organization_name = 3 };

// ValueAssignment for ASN.1 value: teletex-personal-name
enum { k_teletex_personal_name = 4 };

// ValueAssignment for ASN.1 value: teletex-organizational-unit-names
enum { k_teletex_organizational_unit_names = 5 };

// ValueAssignment for ASN.1 value: pds-name
enum { k_pds_name = 7 };

// ValueAssignment for ASN.1 value: physical-delivery-country-name
enum { k_physical_delivery_country_name = 8 };

// ValueAssignment for ASN.1 value: postal-code
enum { k_postal_code = 9 };

// ValueAssignment for ASN.1 value: physical-delivery-office-name
enum { k_physical_delivery_office_name = 10 };

// ValueAssignment for ASN.1 value: physical-delivery-office-number
enum { k_physical_delivery_office_number = 11 };

// ValueAssignment for ASN.1 value: extension-OR-address-components
enum { k_extension_OR_address_components = 12 };

// ValueAssignment for ASN.1 value: physical-delivery-personal-name
enum { k_physical_delivery_personal_name = 13 };

// ValueAssignment for ASN.1 value: physical-delivery-organization-name
enum { k_physical_delivery_organization_name = 14 };

// ValueAssignment for ASN.1 value: extension-physical-delivery-address-components
enum { k_extension_physical_delivery_address_components = 15 };

// ValueAssignment for ASN.1 value: unformatted-postal-address
enum { k_unformatted_postal_address = 16 };

// ValueAssignment for ASN.1 value: street-address
enum { k_street_address = 17 };

// ValueAssignment for ASN.1 value: post-office-box-address
enum { k_post_office_box_address = 18 };

// ValueAssignment for ASN.1 value: poste-restante-address
enum { k_poste_restante_address = 19 };

// ValueAssignment for ASN.1 value: unique-postal-name
enum { k_unique_postal_name = 20 };

// ValueAssignment for ASN.1 value: local-postal-attributes
enum { k_local_postal_attributes = 21 };

// ValueAssignment for ASN.1 value: extended-network-address
enum { k_extended_network_address = 22 };

// ValueAssignment for ASN.1 value: terminal-type
enum { k_terminal_type = 23 };

// ValueAssignment for ASN.1 value: teletex-domain-defined-attributes
enum { k_teletex_domain_defined_attributes = 6 };

// ValueAssignment for ASN.1 value: ub-name
enum { k_ub_name = 32768 };

// ValueAssignment for ASN.1 value: ub-common-name
enum { k_ub_common_name = 64 };

// ValueAssignment for ASN.1 value: ub-locality-name
enum { k_ub_locality_name = 128 };

// ValueAssignment for ASN.1 value: ub-state-name
enum { k_ub_state_name = 128 };

// ValueAssignment for ASN.1 value: ub-organization-name
enum { k_ub_organization_name = 64 };

// ValueAssignment for ASN.1 value: ub-organizational-unit-name
enum { k_ub_organizational_unit_name = 64 };

// ValueAssignment for ASN.1 value: ub-title
enum { k_ub_title = 64 };

// ValueAssignment for ASN.1 value: ub-serial-number
enum { k_ub_serial_number = 64 };

// ValueAssignment for ASN.1 value: ub-match
enum { k_ub_match = 128 };

// ValueAssignment for ASN.1 value: ub-emailaddress-length
enum { k_ub_emailaddress_length = 255 };

// ValueAssignment for ASN.1 value: ub-common-name-length
enum { k_ub_common_name_length = 64 };

// ValueAssignment for ASN.1 value: ub-country-name-alpha-length
enum { k_ub_country_name_alpha_length = 2 };

// ValueAssignment for ASN.1 value: ub-country-name-numeric-length
enum { k_ub_country_name_numeric_length = 3 };

// ValueAssignment for ASN.1 value: ub-domain-defined-attributes
enum { k_ub_domain_defined_attributes = 4 };

// ValueAssignment for ASN.1 value: ub-domain-defined-attribute-type-length
enum { k_ub_domain_defined_attribute_type_length = 8 };

// ValueAssignment for ASN.1 value: ub-domain-defined-attribute-value-length
enum { k_ub_domain_defined_attribute_value_length = 128 };

// ValueAssignment for ASN.1 value: ub-domain-name-length
enum { k_ub_domain_name_length = 16 };

// ValueAssignment for ASN.1 value: ub-extension-attributes
enum { k_ub_extension_attributes = 256 };

// ValueAssignment for ASN.1 value: ub-e163-4-number-length
enum { k_ub_e163_4_number_length = 15 };

// ValueAssignment for ASN.1 value: ub-e163-4-sub-address-length
enum { k_ub_e163_4_sub_address_length = 40 };

// ValueAssignment for ASN.1 value: ub-generation-qualifier-length
enum { k_ub_generation_qualifier_length = 3 };

// ValueAssignment for ASN.1 value: ub-given-name-length
enum { k_ub_given_name_length = 16 };

// ValueAssignment for ASN.1 value: ub-initials-length
enum { k_ub_initials_length = 5 };

// ValueAssignment for ASN.1 value: ub-integer-options
enum { k_ub_integer_options = 256 };

// ValueAssignment for ASN.1 value: ub-numeric-user-id-length
enum { k_ub_numeric_user_id_length = 32 };

// ValueAssignment for ASN.1 value: ub-organization-name-length
enum { k_ub_organization_name_length = 64 };

// ValueAssignment for ASN.1 value: ub-organizational-unit-name-length
enum { k_ub_organizational_unit_name_length = 32 };

// ValueAssignment for ASN.1 value: ub-organizational-units
enum { k_ub_organizational_units = 4 };

// ValueAssignment for ASN.1 value: ub-pds-name-length
enum { k_ub_pds_name_length = 16 };

// ValueAssignment for ASN.1 value: ub-pds-parameter-length
enum { k_ub_pds_parameter_length = 30 };

// ValueAssignment for ASN.1 value: ub-pds-physical-address-lines
enum { k_ub_pds_physical_address_lines = 6 };

// ValueAssignment for ASN.1 value: ub-postal-code-length
enum { k_ub_postal_code_length = 16 };

// ValueAssignment for ASN.1 value: ub-pseudonym
enum { k_ub_pseudonym = 128 };

// ValueAssignment for ASN.1 value: ub-surname-length
enum { k_ub_surname_length = 40 };

// ValueAssignment for ASN.1 value: ub-terminal-id-length
enum { k_ub_terminal_id_length = 24 };

// ValueAssignment for ASN.1 value: ub-unformatted-address-length
enum { k_ub_unformatted_address_length = 180 };

// ValueAssignment for ASN.1 value: ub-x121-address-length
enum { k_ub_x121_address_length = 16 };

// ValueAssignment for ASN.1 value: id-ce
const ObjectIdentifierType::ValueType id_ce("2.5.29");

// ValueAssignment for ASN.1 value: id-ce-authorityKeyIdentifier
const ObjectIdentifierType::ValueType id_ce_authorityKeyIdentifier("2.5.29.35");

// ValueAssignment for ASN.1 value: id-ce-subjectKeyIdentifier
const ObjectIdentifierType::ValueType id_ce_subjectKeyIdentifier("2.5.29.14");

// ValueAssignment for ASN.1 value: id-ce-keyUsage
const ObjectIdentifierType::ValueType id_ce_keyUsage("2.5.29.15");

// ValueAssignment for ASN.1 value: id-ce-privateKeyUsagePeriod
const ObjectIdentifierType::ValueType id_ce_privateKeyUsagePeriod("2.5.29.16");

// ValueAssignment for ASN.1 value: id-ce-certificatePolicies
const ObjectIdentifierType::ValueType id_ce_certificatePolicies("2.5.29.32");

// ValueAssignment for ASN.1 value: anyPolicy
const ObjectIdentifierType::ValueType anyPolicy("2.5.29.32.0");

// ValueAssignment for ASN.1 value: id-ce-policyMappings
const ObjectIdentifierType::ValueType id_ce_policyMappings("2.5.29.33");

// ValueAssignment for ASN.1 value: id-ce-subjectAltName
const ObjectIdentifierType::ValueType id_ce_subjectAltName("2.5.29.17");

// ValueAssignment for ASN.1 value: id-ce-issuerAltName
const ObjectIdentifierType::ValueType id_ce_issuerAltName("2.5.29.18");

// ValueAssignment for ASN.1 value: id-ce-subjectDirectoryAttributes
const ObjectIdentifierType::ValueType id_ce_subjectDirectoryAttributes("2.5.29.9");

// ValueAssignment for ASN.1 value: id-ce-basicConstraints
const ObjectIdentifierType::ValueType id_ce_basicConstraints("2.5.29.19");

// ValueAssignment for ASN.1 value: id-ce-nameConstraints
const ObjectIdentifierType::ValueType id_ce_nameConstraints("2.5.29.30");

// ValueAssignment for ASN.1 value: id-ce-policyConstraints
const ObjectIdentifierType::ValueType id_ce_policyConstraints("2.5.29.36");

// ValueAssignment for ASN.1 value: id-ce-cRLDistributionPoints
const ObjectIdentifierType::ValueType id_ce_cRLDistributionPoints("2.5.29.31");

// ValueAssignment for ASN.1 value: id-ce-extKeyUsage
const ObjectIdentifierType::ValueType id_ce_extKeyUsage("2.5.29.37");

// ValueAssignment for ASN.1 value: anyExtendedKeyUsage
const ObjectIdentifierType::ValueType anyExtendedKeyUsage("2.5.29.37.0");

// ValueAssignment for ASN.1 value: id-kp-serverAuth
const ObjectIdentifierType::ValueType id_kp_serverAuth("1.3.6.1.5.5.7.3.1");

// ValueAssignment for ASN.1 value: id-kp-clientAuth
const ObjectIdentifierType::ValueType id_kp_clientAuth("1.3.6.1.5.5.7.3.2");

// ValueAssignment for ASN.1 value: id-kp-codeSigning
const ObjectIdentifierType::ValueType id_kp_codeSigning("1.3.6.1.5.5.7.3.3");

// ValueAssignment for ASN.1 value: id-kp-emailProtection
const ObjectIdentifierType::ValueType id_kp_emailProtection("1.3.6.1.5.5.7.3.4");

// ValueAssignment for ASN.1 value: id-kp-timeStamping
const ObjectIdentifierType::ValueType id_kp_timeStamping("1.3.6.1.5.5.7.3.8");

// ValueAssignment for ASN.1 value: id-kp-OCSPSigning
const ObjectIdentifierType::ValueType id_kp_OCSPSigning("1.3.6.1.5.5.7.3.9");

// ValueAssignment for ASN.1 value: id-ce-inhibitAnyPolicy
const ObjectIdentifierType::ValueType id_ce_inhibitAnyPolicy("2.5.29.54");

// ValueAssignment for ASN.1 value: id-ce-freshestCRL
const ObjectIdentifierType::ValueType id_ce_freshestCRL("2.5.29.46");

// ValueAssignment for ASN.1 value: id-pe-authorityInfoAccess
const ObjectIdentifierType::ValueType id_pe_authorityInfoAccess("1.3.6.1.5.5.7.1.1");

// ValueAssignment for ASN.1 value: id-pe-subjectInfoAccess
const ObjectIdentifierType::ValueType id_pe_subjectInfoAccess("1.3.6.1.5.5.7.1.11");

// ValueAssignment for ASN.1 value: id-ce-cRLNumber
const ObjectIdentifierType::ValueType id_ce_cRLNumber("2.5.29.20");

// ValueAssignment for ASN.1 value: id-ce-issuingDistributionPoint
const ObjectIdentifierType::ValueType id_ce_issuingDistributionPoint("2.5.29.28");

// ValueAssignment for ASN.1 value: id-ce-deltaCRLIndicator
const ObjectIdentifierType::ValueType id_ce_deltaCRLIndicator("2.5.29.27");

// ValueAssignment for ASN.1 value: id-ce-cRLReasons
const ObjectIdentifierType::ValueType id_ce_cRLReasons("2.5.29.21");

// ValueAssignment for ASN.1 value: id-ce-certificateIssuer
const ObjectIdentifierType::ValueType id_ce_certificateIssuer("2.5.29.29");

// ValueAssignment for ASN.1 value: id-ce-holdInstructionCode
const ObjectIdentifierType::ValueType id_ce_holdInstructionCode("2.5.29.23");

// ValueAssignment for ASN.1 value: holdInstruction
const ObjectIdentifierType::ValueType holdInstruction("2.2.840.10040.2");

// ValueAssignment for ASN.1 value: id-holdinstruction-none
const ObjectIdentifierType::ValueType id_holdinstruction_none("2.2.840.10040.2.1");

// ValueAssignment for ASN.1 value: id-holdinstruction-callissuer
const ObjectIdentifierType::ValueType id_holdinstruction_callissuer("2.2.840.10040.2.2");

// ValueAssignment for ASN.1 value: id-holdinstruction-reject
const ObjectIdentifierType::ValueType id_holdinstruction_reject("2.2.840.10040.2.3");

// ValueAssignment for ASN.1 value: id-ce-invalidityDate
const ObjectIdentifierType::ValueType id_ce_invalidityDate("2.5.29.24");

// ValueAssignment for ASN.1 value: id-pe-ac-auditIdentity
const ObjectIdentifierType::ValueType id_pe_ac_auditIdentity("1.3.6.1.5.5.7.1.4");

// ValueAssignment for ASN.1 value: id-pe-aaControls
const ObjectIdentifierType::ValueType id_pe_aaControls("1.3.6.1.5.5.7.1.6");

// ValueAssignment for ASN.1 value: id-pe-ac-proxying
const ObjectIdentifierType::ValueType id_pe_ac_proxying("1.3.6.1.5.5.7.1.10");

// ValueAssignment for ASN.1 value: id-ce-targetInformation
const ObjectIdentifierType::ValueType id_ce_targetInformation("2.5.29.55");

// ValueAssignment for ASN.1 value: id-aca
const ObjectIdentifierType::ValueType id_aca("1.3.6.1.5.5.7.10");

// ValueAssignment for ASN.1 value: id-aca-authenticationInfo
const ObjectIdentifierType::ValueType id_aca_authenticationInfo("1.3.6.1.5.5.7.10.1");

// ValueAssignment for ASN.1 value: id-aca-accessIdentity
const ObjectIdentifierType::ValueType id_aca_accessIdentity("1.3.6.1.5.5.7.10.2");

// ValueAssignment for ASN.1 value: id-aca-chargingIdentity
const ObjectIdentifierType::ValueType id_aca_chargingIdentity("1.3.6.1.5.5.7.10.3");

// ValueAssignment for ASN.1 value: id-aca-group
const ObjectIdentifierType::ValueType id_aca_group("1.3.6.1.5.5.7.10.4");

// ValueAssignment for ASN.1 value: id-aca-encAttrs
const ObjectIdentifierType::ValueType id_aca_encAttrs("1.3.6.1.5.5.7.10.6");

// ValueAssignment for ASN.1 value: id-at-role
const ObjectIdentifierType::ValueType id_at_role("2.5.4.72");

// ValueAssignment for ASN.1 value: id-at-clearance
const ObjectIdentifierType::ValueType id_at_clearance("2.5.1.5.55");

// ValueAssignment for ASN.1 value: id-ct-contentInfo
const ObjectIdentifierType::ValueType id_ct_contentInfo("1.2.840.113549.1.9.16.1.6");

// ValueAssignment for ASN.1 value: id-data
const ObjectIdentifierType::ValueType id_data("1.2.840.113549.1.7.1");

// ValueAssignment for ASN.1 value: id-signedData
const ObjectIdentifierType::ValueType id_signedData("1.2.840.113549.1.7.2");

// ValueAssignment for ASN.1 value: id-envelopedData
const ObjectIdentifierType::ValueType id_envelopedData("1.2.840.113549.1.7.3");

// ValueAssignment for ASN.1 value: id-digestedData
const ObjectIdentifierType::ValueType id_digestedData("1.2.840.113549.1.7.5");

// ValueAssignment for ASN.1 value: id-encryptedData
const ObjectIdentifierType::ValueType id_encryptedData("1.2.840.113549.1.7.6");

// ValueAssignment for ASN.1 value: id-ct-authData
const ObjectIdentifierType::ValueType id_ct_authData("1.2.840.113549.1.9.16.1.2");

// ValueAssignment for ASN.1 value: id-contentType
const ObjectIdentifierType::ValueType id_contentType("1.2.840.113549.1.9.3");

// ValueAssignment for ASN.1 value: id-messageDigest
const ObjectIdentifierType::ValueType id_messageDigest("1.2.840.113549.1.9.4");

// ValueAssignment for ASN.1 value: id-signingTime
const ObjectIdentifierType::ValueType id_signingTime("1.2.840.113549.1.9.5");

// ValueAssignment for ASN.1 value: id-countersignature
const ObjectIdentifierType::ValueType id_countersignature("1.2.840.113549.1.9.6");

// ValueAssignment for ASN.1 value: id-pkip
const ObjectIdentifierType::ValueType id_pkip("1.3.6.1.5.5.7.5");

// ValueAssignment for ASN.1 value: id-smime
const ObjectIdentifierType::ValueType id_smime("1.2.840.113549.1.9.16");

// ValueAssignment for ASN.1 value: id-ct
const ObjectIdentifierType::ValueType id_ct("1.2.840.113549.1.9.16.1");

// ValueAssignment for ASN.1 value: id-regCtrl
const ObjectIdentifierType::ValueType id_regCtrl("1.3.6.1.5.5.7.5.1");

// ValueAssignment for ASN.1 value: id-regCtrl-regToken
const ObjectIdentifierType::ValueType id_regCtrl_regToken("1.3.6.1.5.5.7.5.1.1");

// ValueAssignment for ASN.1 value: id-regCtrl-authenticator
const ObjectIdentifierType::ValueType id_regCtrl_authenticator("1.3.6.1.5.5.7.5.1.2");

// ValueAssignment for ASN.1 value: id-regCtrl-pkiPublicationInfo
const ObjectIdentifierType::ValueType id_regCtrl_pkiPublicationInfo("1.3.6.1.5.5.7.5.1.3");

// ValueAssignment for ASN.1 value: id-regCtrl-pkiArchiveOptions
const ObjectIdentifierType::ValueType id_regCtrl_pkiArchiveOptions("1.3.6.1.5.5.7.5.1.4");

// ValueAssignment for ASN.1 value: id-regCtrl-oldCertID
const ObjectIdentifierType::ValueType id_regCtrl_oldCertID("1.3.6.1.5.5.7.5.1.5");

// ValueAssignment for ASN.1 value: id-regCtrl-protocolEncrKey
const ObjectIdentifierType::ValueType id_regCtrl_protocolEncrKey("1.3.6.1.5.5.7.5.1.6");

// ValueAssignment for ASN.1 value: id-regInfo
const ObjectIdentifierType::ValueType id_regInfo("1.3.6.1.5.5.7.5.2");

// ValueAssignment for ASN.1 value: id-regInfo-utf8Pairs
const ObjectIdentifierType::ValueType id_regInfo_utf8Pairs("1.3.6.1.5.5.7.5.2.1");

// ValueAssignment for ASN.1 value: id-regInfo-certReq
const ObjectIdentifierType::ValueType id_regInfo_certReq("1.3.6.1.5.5.7.5.2.2");

// ValueAssignment for ASN.1 value: id-ct-encKeyWithID
const ObjectIdentifierType::ValueType id_ct_encKeyWithID("1.2.840.113549.1.9.16.1.21");

// ValueAssignment for ASN.1 value: id-PasswordBasedMac
const ObjectIdentifierType::ValueType id_PasswordBasedMac("1.2.840.113533.7.66.13");

// ValueAssignment for ASN.1 value: id-DHBasedMac
const ObjectIdentifierType::ValueType id_DHBasedMac("1.2.840.113533.7.66.30");

// TypeAssignment for ASN.1 type: UniversalString
class UniversalString : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit UniversalString() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::UNIVERSAL);
      setTagNumber(28);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UniversalString"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BMPString
class BMPString : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit BMPString() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::UNIVERSAL);
      setTagNumber(30);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BMPString"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: VisibleString
class VisibleString : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit VisibleString() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::UNIVERSAL);
      setTagNumber(26);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "VisibleString"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UTF8String
class UTF8String : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit UTF8String() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::UNIVERSAL);
      setTagNumber(12);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UTF8String"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeValue
class AttributeValue : public asn1::AnyType
{
public:

   explicit AttributeValue()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeValue"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue
class values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue : public asn1::SetOfType<asn1::generated::AttributeValue>
{
public:

   explicit values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue() : asn1::SetOfType<asn1::generated::AttributeValue>(new asn1::generated::AttributeValue)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "values"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeType
class AttributeType : public asn1::ObjectIdentifierType
{
public:

   explicit AttributeType()
   {
   }

   explicit AttributeType(const ValueType& defaultValue, bool hasDefault) : asn1::ObjectIdentifierType(defaultValue, hasDefault)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeType"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Attribute
class Attribute : public asn1::SequenceType
{
public:

   explicit Attribute()
   {
#if defined(ASN1_ENABLE_XER)
      _type_Type.setTypeName("type");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _values_Type.setTypeName("values");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue values_Type;

   class SequenceValue_Type
   {
   public:

      // Component: type
      void set_type(const asn1::generated::AttributeType::ValueType& v) { _type = v;  }
      void set_type(asn1::generated::AttributeType::ValueType&& v) { _type = std::move(v);  }
      const asn1::generated::AttributeType::ValueType& get_type() const { return _type; }
      asn1::generated::AttributeType::ValueType& get_type() { return _type; }

      // Component: values
      void set_values(const values_Type::ValueType& v) { _values = v;  }
      void set_values(values_Type::ValueType&& v) { _values = std::move(v);  }
      const values_Type::ValueType& get_values() const { return _values; }
      values_Type::ValueType& get_values() { return _values; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type != other._type)
            return false;
         if (_values != other._values)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AttributeType::ValueType _type;
      values_Type::ValueType _values;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AttributeType _type_Type;
   values_Type _values_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Attribute"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeTypeAndValue
class AttributeTypeAndValue : public asn1::SequenceType
{
public:

   explicit AttributeTypeAndValue()
   {
#if defined(ASN1_ENABLE_XER)
      _type_Type.setTypeName("type");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: type
      void set_type(const asn1::generated::AttributeType::ValueType& v) { _type = v;  }
      void set_type(asn1::generated::AttributeType::ValueType&& v) { _type = std::move(v);  }
      const asn1::generated::AttributeType::ValueType& get_type() const { return _type; }
      asn1::generated::AttributeType::ValueType& get_type() { return _type; }

      // Component: value
      void set_value(const asn1::generated::AttributeValue::ValueType& v) { _value = v;  }
      void set_value(asn1::generated::AttributeValue::ValueType&& v) { _value = std::move(v);  }
      const asn1::generated::AttributeValue::ValueType& get_value() const { return _value; }
      asn1::generated::AttributeValue::ValueType& get_value() { return _value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type != other._type)
            return false;
         if (_value != other._value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AttributeType::ValueType _type;
      asn1::generated::AttributeValue::ValueType _value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AttributeType _type_Type;
   asn1::generated::AttributeValue _value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeTypeAndValue"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520name
class X520name : public asn1::ChoiceType
{
public:

   explicit X520name()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_name);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_name);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520name"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520CommonName
class X520CommonName : public asn1::ChoiceType
{
public:

   explicit X520CommonName()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_common_name);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_common_name);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520CommonName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520LocalityName
class X520LocalityName : public asn1::ChoiceType
{
public:

   explicit X520LocalityName()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_locality_name);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_locality_name);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520LocalityName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520StateOrProvinceName
class X520StateOrProvinceName : public asn1::ChoiceType
{
public:

   explicit X520StateOrProvinceName()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_state_name);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_state_name);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520StateOrProvinceName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520OrganizationName
class X520OrganizationName : public asn1::ChoiceType
{
public:

   explicit X520OrganizationName()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_organization_name);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_organization_name);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520OrganizationName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520OrganizationalUnitName
class X520OrganizationalUnitName : public asn1::ChoiceType
{
public:

   explicit X520OrganizationalUnitName()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_organizational_unit_name);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_organizational_unit_name);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520OrganizationalUnitName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520Title
class X520Title : public asn1::ChoiceType
{
public:

   explicit X520Title()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_title);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_title);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520Title"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520dnQualifier
class X520dnQualifier : public asn1::PrintableStringType
{
public:

   explicit X520dnQualifier()
   {
   }

   explicit X520dnQualifier(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520dnQualifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520countryName
class X520countryName : public asn1::PrintableStringType
{
public:

   explicit X520countryName()
   {
      addSize(2LL, 2LL);
   }

   explicit X520countryName(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
      addSize(2LL, 2LL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520countryName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520SerialNumber
class X520SerialNumber : public asn1::PrintableStringType
{
public:

   explicit X520SerialNumber()
   {
      addSize(1LL, k_ub_serial_number);
   }

   explicit X520SerialNumber(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_serial_number);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520SerialNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X520Pseudonym
class X520Pseudonym : public asn1::ChoiceType
{
public:

   explicit X520Pseudonym()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, k_ub_pseudonym);
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, k_ub_pseudonym);
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X520Pseudonym"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DomainComponent
class DomainComponent : public asn1::IA5StringType
{
public:

   explicit DomainComponent()
   {
   }

   explicit DomainComponent(const ValueType& defaultValue, bool hasDefault) : asn1::IA5StringType(defaultValue, hasDefault)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DomainComponent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EmailAddress
class EmailAddress : public asn1::IA5StringType
{
public:

   explicit EmailAddress()
   {
      addSize(1LL, k_ub_emailaddress_length);
   }

   explicit EmailAddress(const ValueType& defaultValue, bool hasDefault) : asn1::IA5StringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_emailaddress_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EmailAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RelativeDistinguishedName
class RelativeDistinguishedName : public asn1::SetOfType<asn1::generated::AttributeTypeAndValue>
{
public:

   explicit RelativeDistinguishedName() : asn1::SetOfType<asn1::generated::AttributeTypeAndValue>(new asn1::generated::AttributeTypeAndValue)
   {
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RelativeDistinguishedName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RDNSequence
class RDNSequence : public asn1::SequenceOfType<asn1::generated::RelativeDistinguishedName>
{
public:

   explicit RDNSequence() : asn1::SequenceOfType<asn1::generated::RelativeDistinguishedName>(new asn1::generated::RelativeDistinguishedName)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RDNSequence"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Name
class Name : public asn1::ChoiceType
{
public:

   explicit Name()
   {
      _addChoice(&_rdnSequence_Type);
#if defined(ASN1_ENABLE_XER)
      _rdnSequence_Type.setTypeName("rdnSequence");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: rdnSequence
      void set_rdnSequence(const asn1::generated::RDNSequence::ValueType& v) { _rdnSequence = v; _id = rdnSequence_ID; }
      void set_rdnSequence(asn1::generated::RDNSequence::ValueType&& v) { _rdnSequence = std::move(v); _id = rdnSequence_ID; }
      const asn1::generated::RDNSequence::ValueType& get_rdnSequence() const { assert(_id == rdnSequence_ID); return _rdnSequence; }
      asn1::generated::RDNSequence::ValueType& get_rdnSequence() { assert(_id == rdnSequence_ID); return _rdnSequence; }
      bool has_rdnSequence_Choosen() const { return _id == rdnSequence_ID; }
      void choose_rdnSequence() { _id = rdnSequence_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case rdnSequence_ID:
            if (_rdnSequence != other._rdnSequence)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         rdnSequence_ID = 1,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::RDNSequence::ValueType _rdnSequence;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::RDNSequence _rdnSequence_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Name"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DistinguishedName
class DistinguishedName : public asn1::generated::RDNSequence
{
public:

   explicit DistinguishedName()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DistinguishedName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DirectoryString
class DirectoryString : public asn1::ChoiceType
{
public:

   explicit DirectoryString()
   {
      _addChoice(&_teletexString_Type);
      _teletexString_Type.addSize(1LL, std::numeric_limits<asn1::TeletexStringType::ValueType::size_type>::max());
#if defined(ASN1_ENABLE_XER)
      _teletexString_Type.setTypeName("teletexString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printableString_Type);
      _printableString_Type.addSize(1LL, std::numeric_limits<asn1::PrintableStringType::ValueType::size_type>::max());
#if defined(ASN1_ENABLE_XER)
      _printableString_Type.setTypeName("printableString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_universalString_Type);
#if defined(ASN1_ENABLE_XER)
      _universalString_Type.setTypeName("universalString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: teletexString
      void set_teletexString(const asn1::TeletexStringType::ValueType& v) { _teletexString = v; _id = teletexString_ID; }
      void set_teletexString(asn1::TeletexStringType::ValueType&& v) { _teletexString = std::move(v); _id = teletexString_ID; }
      const asn1::TeletexStringType::ValueType& get_teletexString() const { assert(_id == teletexString_ID); return _teletexString; }
      asn1::TeletexStringType::ValueType& get_teletexString() { assert(_id == teletexString_ID); return _teletexString; }
      bool has_teletexString_Choosen() const { return _id == teletexString_ID; }
      void choose_teletexString() { _id = teletexString_ID; }

      // Alternative: printableString
      void set_printableString(const asn1::PrintableStringType::ValueType& v) { _printableString = v; _id = printableString_ID; }
      void set_printableString(asn1::PrintableStringType::ValueType&& v) { _printableString = std::move(v); _id = printableString_ID; }
      const asn1::PrintableStringType::ValueType& get_printableString() const { assert(_id == printableString_ID); return _printableString; }
      asn1::PrintableStringType::ValueType& get_printableString() { assert(_id == printableString_ID); return _printableString; }
      bool has_printableString_Choosen() const { return _id == printableString_ID; }
      void choose_printableString() { _id = printableString_ID; }

      // Alternative: universalString
      void set_universalString(const asn1::generated::UniversalString::ValueType& v) { _universalString = v; _id = universalString_ID; }
      void set_universalString(asn1::generated::UniversalString::ValueType&& v) { _universalString = std::move(v); _id = universalString_ID; }
      const asn1::generated::UniversalString::ValueType& get_universalString() const { assert(_id == universalString_ID); return _universalString; }
      asn1::generated::UniversalString::ValueType& get_universalString() { assert(_id == universalString_ID); return _universalString; }
      bool has_universalString_Choosen() const { return _id == universalString_ID; }
      void choose_universalString() { _id = universalString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case teletexString_ID:
            if (_teletexString != other._teletexString)
               return false;
            break;
         case printableString_ID:
            if (_printableString != other._printableString)
               return false;
            break;
         case universalString_ID:
            if (_universalString != other._universalString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         teletexString_ID = 1,
         printableString_ID = 2,
         universalString_ID = 3,
         utf8String_ID = 4,
         bmpString_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::TeletexStringType::ValueType _teletexString;
      asn1::PrintableStringType::ValueType _printableString;
      asn1::generated::UniversalString::ValueType _universalString;
      asn1::generated::UTF8String::ValueType _utf8String;
      asn1::generated::BMPString::ValueType _bmpString;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _teletexString_Type;
   asn1::PrintableStringType _printableString_Type;
   asn1::generated::UniversalString _universalString_Type;
   asn1::generated::UTF8String _utf8String_Type;
   asn1::generated::BMPString _bmpString_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DirectoryString"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Version
class Version : public asn1::IntegerType
{
public:

   explicit Version()
   {
   }

   explicit Version(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
   }

   enum Version_Value
   {
      k_v1 = 0,
      k_v2 = 1,
      k_v3 = 2,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Version"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: version_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Version
class version_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Version : public asn1::TaggingType<asn1::generated::Version>
{
public:

   explicit version_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Version() : asn1::TaggingType<asn1::generated::Version>(new asn1::generated::Version)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "version"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UniqueIdentifier
class UniqueIdentifier : public asn1::BitStringType
{
public:

   explicit UniqueIdentifier()
   {
   }

   explicit UniqueIdentifier(const ValueType& defaultValue, bool hasDefault) : asn1::BitStringType(defaultValue, hasDefault)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UniqueIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: issuerUniqueID_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UniqueIdentifier
class issuerUniqueID_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UniqueIdentifier : public asn1::TaggingType<asn1::generated::UniqueIdentifier>
{
public:

   explicit issuerUniqueID_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UniqueIdentifier() : asn1::TaggingType<asn1::generated::UniqueIdentifier>(new asn1::generated::UniqueIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "issuerUniqueID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: subjectUniqueID_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__UniqueIdentifier
class subjectUniqueID_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__UniqueIdentifier : public asn1::TaggingType<asn1::generated::UniqueIdentifier>
{
public:

   explicit subjectUniqueID_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__UniqueIdentifier() : asn1::TaggingType<asn1::generated::UniqueIdentifier>(new asn1::generated::UniqueIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "subjectUniqueID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Extension
class Extension : public asn1::SequenceType
{
public:

   explicit Extension() : _critical_Type(false, true)
   {
#if defined(ASN1_ENABLE_XER)
      _extnID_Type.setTypeName("extnID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _critical_Type.setTypeName("critical");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extnValue_Type.setTypeName("extnValue");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: extnID
      void set_extnID(const asn1::ObjectIdentifierType::ValueType& v) { _extnID = v;  }
      void set_extnID(asn1::ObjectIdentifierType::ValueType&& v) { _extnID = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_extnID() const { return _extnID; }
      asn1::ObjectIdentifierType::ValueType& get_extnID() { return _extnID; }

      // Component: critical
      void set_critical(const asn1::BooleanType::ValueType& v) { _critical = v;  }
      void set_critical(asn1::BooleanType::ValueType&& v) { _critical = std::move(v);  }
      const asn1::BooleanType::ValueType& get_critical() const { return _critical; }
      asn1::BooleanType::ValueType& get_critical() { return _critical; }

      // Component: extnValue
      void set_extnValue(const asn1::OctetStringType::ValueType& v) { _extnValue = v;  }
      void set_extnValue(asn1::OctetStringType::ValueType&& v) { _extnValue = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_extnValue() const { return _extnValue; }
      asn1::OctetStringType::ValueType& get_extnValue() { return _extnValue; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_extnID != other._extnID)
            return false;
         if (_critical != other._critical)
            return false;
         if (_extnValue != other._extnValue)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _extnID;
      asn1::BooleanType::ValueType _critical;
      asn1::OctetStringType::ValueType _extnValue;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _extnID_Type;
   asn1::BooleanType _critical_Type;
   asn1::OctetStringType _extnValue_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Extension"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Extensions
class Extensions : public asn1::SequenceOfType<asn1::generated::Extension>
{
public:

   explicit Extensions() : asn1::SequenceOfType<asn1::generated::Extension>(new asn1::generated::Extension)
   {
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Extensions"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: extensions_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Extensions
class extensions_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Extensions : public asn1::TaggingType<asn1::generated::Extensions>
{
public:

   explicit extensions_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Extensions() : asn1::TaggingType<asn1::generated::Extensions>(new asn1::generated::Extensions)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "extensions"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificateSerialNumber
class CertificateSerialNumber : public asn1::IntegerType
{
public:

   explicit CertificateSerialNumber()
   {
   }

   explicit CertificateSerialNumber(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificateSerialNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AlgorithmIdentifier
class AlgorithmIdentifier : public asn1::SequenceType
{
public:

   explicit AlgorithmIdentifier()
   {
#if defined(ASN1_ENABLE_XER)
      _algorithm_Type.setTypeName("algorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _parameters_Type.setTypeName("parameters");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _parameters_Present = false;
      }

      // Component: algorithm
      void set_algorithm(const asn1::ObjectIdentifierType::ValueType& v) { _algorithm = v;  }
      void set_algorithm(asn1::ObjectIdentifierType::ValueType&& v) { _algorithm = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_algorithm() const { return _algorithm; }
      asn1::ObjectIdentifierType::ValueType& get_algorithm() { return _algorithm; }

      // Component: parameters
      void set_parameters(const asn1::AnyType::ValueType& v) { _parameters = v; _parameters_Present = true; }
      void set_parameters(asn1::AnyType::ValueType&& v) { _parameters = std::move(v); _parameters_Present = true; }
      const asn1::AnyType::ValueType& get_parameters() const { return _parameters; }
      asn1::AnyType::ValueType& get_parameters() { return _parameters; }
      void set_parameters_Present(bool present = true) { _parameters_Present = present; }
      bool is_parameters_Present() const { return _parameters_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_algorithm != other._algorithm)
            return false;
         if (_parameters_Present != other._parameters_Present)
            return false;
         if (_parameters_Present && other._parameters_Present && _parameters != other._parameters)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _algorithm;
      asn1::AnyType::ValueType _parameters;
      bool _parameters_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _algorithm_Type;
   asn1::AnyType _parameters_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AlgorithmIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Time
class Time : public asn1::ChoiceType
{
public:

   explicit Time()
   {
      _addChoice(&_utcTime_Type);
#if defined(ASN1_ENABLE_XER)
      _utcTime_Type.setTypeName("utcTime");
#endif // ASN1_ENABLE_XER
      _addChoice(&_generalTime_Type);
#if defined(ASN1_ENABLE_XER)
      _generalTime_Type.setTypeName("generalTime");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: utcTime
      void set_utcTime(const asn1::UTCTimeType::ValueType& v) { _utcTime = v; _id = utcTime_ID; }
      void set_utcTime(asn1::UTCTimeType::ValueType&& v) { _utcTime = std::move(v); _id = utcTime_ID; }
      const asn1::UTCTimeType::ValueType& get_utcTime() const { assert(_id == utcTime_ID); return _utcTime; }
      asn1::UTCTimeType::ValueType& get_utcTime() { assert(_id == utcTime_ID); return _utcTime; }
      bool has_utcTime_Choosen() const { return _id == utcTime_ID; }
      void choose_utcTime() { _id = utcTime_ID; }

      // Alternative: generalTime
      void set_generalTime(const asn1::GeneralizedTimeType::ValueType& v) { _generalTime = v; _id = generalTime_ID; }
      void set_generalTime(asn1::GeneralizedTimeType::ValueType&& v) { _generalTime = std::move(v); _id = generalTime_ID; }
      const asn1::GeneralizedTimeType::ValueType& get_generalTime() const { assert(_id == generalTime_ID); return _generalTime; }
      asn1::GeneralizedTimeType::ValueType& get_generalTime() { assert(_id == generalTime_ID); return _generalTime; }
      bool has_generalTime_Choosen() const { return _id == generalTime_ID; }
      void choose_generalTime() { _id = generalTime_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case utcTime_ID:
            if (_utcTime != other._utcTime)
               return false;
            break;
         case generalTime_ID:
            if (_generalTime != other._generalTime)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         utcTime_ID = 1,
         generalTime_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::UTCTimeType::ValueType _utcTime;
      asn1::GeneralizedTimeType::ValueType _generalTime;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::UTCTimeType _utcTime_Type;
   asn1::GeneralizedTimeType _generalTime_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Time"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Validity
class Validity : public asn1::SequenceType
{
public:

   explicit Validity()
   {
#if defined(ASN1_ENABLE_XER)
      _notBefore_Type.setTypeName("notBefore");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _notAfter_Type.setTypeName("notAfter");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: notBefore
      void set_notBefore(const asn1::generated::Time::ValueType& v) { _notBefore = v;  }
      void set_notBefore(asn1::generated::Time::ValueType&& v) { _notBefore = std::move(v);  }
      const asn1::generated::Time::ValueType& get_notBefore() const { return _notBefore; }
      asn1::generated::Time::ValueType& get_notBefore() { return _notBefore; }

      // Component: notAfter
      void set_notAfter(const asn1::generated::Time::ValueType& v) { _notAfter = v;  }
      void set_notAfter(asn1::generated::Time::ValueType&& v) { _notAfter = std::move(v);  }
      const asn1::generated::Time::ValueType& get_notAfter() const { return _notAfter; }
      asn1::generated::Time::ValueType& get_notAfter() { return _notAfter; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_notBefore != other._notBefore)
            return false;
         if (_notAfter != other._notAfter)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::Time::ValueType _notBefore;
      asn1::generated::Time::ValueType _notAfter;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::Time _notBefore_Type;
   asn1::generated::Time _notAfter_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Validity"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SubjectPublicKeyInfo
class SubjectPublicKeyInfo : public asn1::SequenceType
{
public:

   explicit SubjectPublicKeyInfo()
   {
#if defined(ASN1_ENABLE_XER)
      _algorithm_Type.setTypeName("algorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subjectPublicKey_Type.setTypeName("subjectPublicKey");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: algorithm
      void set_algorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _algorithm = v;  }
      void set_algorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _algorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_algorithm() const { return _algorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_algorithm() { return _algorithm; }

      // Component: subjectPublicKey
      void set_subjectPublicKey(const asn1::BitStringType::ValueType& v) { _subjectPublicKey = v;  }
      void set_subjectPublicKey(asn1::BitStringType::ValueType&& v) { _subjectPublicKey = std::move(v);  }
      const asn1::BitStringType::ValueType& get_subjectPublicKey() const { return _subjectPublicKey; }
      asn1::BitStringType::ValueType& get_subjectPublicKey() { return _subjectPublicKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_algorithm != other._algorithm)
            return false;
         if (_subjectPublicKey != other._subjectPublicKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AlgorithmIdentifier::ValueType _algorithm;
      asn1::BitStringType::ValueType _subjectPublicKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AlgorithmIdentifier _algorithm_Type;
   asn1::BitStringType _subjectPublicKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SubjectPublicKeyInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TBSCertificate
class TBSCertificate : public asn1::SequenceType
{
public:

   explicit TBSCertificate()
   {
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _serialNumber_Type.setTypeName("serialNumber");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _validity_Type.setTypeName("validity");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subject_Type.setTypeName("subject");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subjectPublicKeyInfo_Type.setTypeName("subjectPublicKeyInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuerUniqueID_Type.setTypeName("issuerUniqueID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subjectUniqueID_Type.setTypeName("subjectUniqueID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extensions_Type.setTypeName("extensions");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef version_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Version version_Type;
   typedef issuerUniqueID_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UniqueIdentifier issuerUniqueID_Type;
   typedef subjectUniqueID_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__UniqueIdentifier subjectUniqueID_Type;
   typedef extensions_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Extensions extensions_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _issuerUniqueID_Present = false;
         _subjectUniqueID_Present = false;
         _extensions_Present = false;
      }

      // Component: version
      void set_version(const version_Type::ValueType& v) { _version = v;  }
      void set_version(version_Type::ValueType&& v) { _version = std::move(v);  }
      const version_Type::ValueType& get_version() const { return _version; }
      version_Type::ValueType& get_version() { return _version; }

      // Component: serialNumber
      void set_serialNumber(const asn1::generated::CertificateSerialNumber::ValueType& v) { _serialNumber = v;  }
      void set_serialNumber(asn1::generated::CertificateSerialNumber::ValueType&& v) { _serialNumber = std::move(v);  }
      const asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() const { return _serialNumber; }
      asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() { return _serialNumber; }

      // Component: signature
      void set_signature(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signature = v;  }
      void set_signature(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signature = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signature() const { return _signature; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signature() { return _signature; }

      // Component: issuer
      void set_issuer(const asn1::generated::Name::ValueType& v) { _issuer = v;  }
      void set_issuer(asn1::generated::Name::ValueType&& v) { _issuer = std::move(v);  }
      const asn1::generated::Name::ValueType& get_issuer() const { return _issuer; }
      asn1::generated::Name::ValueType& get_issuer() { return _issuer; }

      // Component: validity
      void set_validity(const asn1::generated::Validity::ValueType& v) { _validity = v;  }
      void set_validity(asn1::generated::Validity::ValueType&& v) { _validity = std::move(v);  }
      const asn1::generated::Validity::ValueType& get_validity() const { return _validity; }
      asn1::generated::Validity::ValueType& get_validity() { return _validity; }

      // Component: subject
      void set_subject(const asn1::generated::Name::ValueType& v) { _subject = v;  }
      void set_subject(asn1::generated::Name::ValueType&& v) { _subject = std::move(v);  }
      const asn1::generated::Name::ValueType& get_subject() const { return _subject; }
      asn1::generated::Name::ValueType& get_subject() { return _subject; }

      // Component: subjectPublicKeyInfo
      void set_subjectPublicKeyInfo(const asn1::generated::SubjectPublicKeyInfo::ValueType& v) { _subjectPublicKeyInfo = v;  }
      void set_subjectPublicKeyInfo(asn1::generated::SubjectPublicKeyInfo::ValueType&& v) { _subjectPublicKeyInfo = std::move(v);  }
      const asn1::generated::SubjectPublicKeyInfo::ValueType& get_subjectPublicKeyInfo() const { return _subjectPublicKeyInfo; }
      asn1::generated::SubjectPublicKeyInfo::ValueType& get_subjectPublicKeyInfo() { return _subjectPublicKeyInfo; }

      // Component: issuerUniqueID
      void set_issuerUniqueID(const issuerUniqueID_Type::ValueType& v) { _issuerUniqueID = v; _issuerUniqueID_Present = true; }
      void set_issuerUniqueID(issuerUniqueID_Type::ValueType&& v) { _issuerUniqueID = std::move(v); _issuerUniqueID_Present = true; }
      const issuerUniqueID_Type::ValueType& get_issuerUniqueID() const { return _issuerUniqueID; }
      issuerUniqueID_Type::ValueType& get_issuerUniqueID() { return _issuerUniqueID; }
      void set_issuerUniqueID_Present(bool present = true) { _issuerUniqueID_Present = present; }
      bool is_issuerUniqueID_Present() const { return _issuerUniqueID_Present; }


      // Component: subjectUniqueID
      void set_subjectUniqueID(const subjectUniqueID_Type::ValueType& v) { _subjectUniqueID = v; _subjectUniqueID_Present = true; }
      void set_subjectUniqueID(subjectUniqueID_Type::ValueType&& v) { _subjectUniqueID = std::move(v); _subjectUniqueID_Present = true; }
      const subjectUniqueID_Type::ValueType& get_subjectUniqueID() const { return _subjectUniqueID; }
      subjectUniqueID_Type::ValueType& get_subjectUniqueID() { return _subjectUniqueID; }
      void set_subjectUniqueID_Present(bool present = true) { _subjectUniqueID_Present = present; }
      bool is_subjectUniqueID_Present() const { return _subjectUniqueID_Present; }


      // Component: extensions
      void set_extensions(const extensions_Type::ValueType& v) { _extensions = v; _extensions_Present = true; }
      void set_extensions(extensions_Type::ValueType&& v) { _extensions = std::move(v); _extensions_Present = true; }
      const extensions_Type::ValueType& get_extensions() const { return _extensions; }
      extensions_Type::ValueType& get_extensions() { return _extensions; }
      void set_extensions_Present(bool present = true) { _extensions_Present = present; }
      bool is_extensions_Present() const { return _extensions_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_serialNumber != other._serialNumber)
            return false;
         if (_signature != other._signature)
            return false;
         if (_issuer != other._issuer)
            return false;
         if (_validity != other._validity)
            return false;
         if (_subject != other._subject)
            return false;
         if (_subjectPublicKeyInfo != other._subjectPublicKeyInfo)
            return false;
         if (_issuerUniqueID_Present != other._issuerUniqueID_Present)
            return false;
         if (_issuerUniqueID_Present && other._issuerUniqueID_Present && _issuerUniqueID != other._issuerUniqueID)
            return false;
         if (_subjectUniqueID_Present != other._subjectUniqueID_Present)
            return false;
         if (_subjectUniqueID_Present && other._subjectUniqueID_Present && _subjectUniqueID != other._subjectUniqueID)
            return false;
         if (_extensions_Present != other._extensions_Present)
            return false;
         if (_extensions_Present && other._extensions_Present && _extensions != other._extensions)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      version_Type::ValueType _version;
      asn1::generated::CertificateSerialNumber::ValueType _serialNumber;
      asn1::generated::AlgorithmIdentifier::ValueType _signature;
      asn1::generated::Name::ValueType _issuer;
      asn1::generated::Validity::ValueType _validity;
      asn1::generated::Name::ValueType _subject;
      asn1::generated::SubjectPublicKeyInfo::ValueType _subjectPublicKeyInfo;
      issuerUniqueID_Type::ValueType _issuerUniqueID;
      bool _issuerUniqueID_Present;
      subjectUniqueID_Type::ValueType _subjectUniqueID;
      bool _subjectUniqueID_Present;
      extensions_Type::ValueType _extensions;
      bool _extensions_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   version_Type _version_Type;
   asn1::generated::CertificateSerialNumber _serialNumber_Type;
   asn1::generated::AlgorithmIdentifier _signature_Type;
   asn1::generated::Name _issuer_Type;
   asn1::generated::Validity _validity_Type;
   asn1::generated::Name _subject_Type;
   asn1::generated::SubjectPublicKeyInfo _subjectPublicKeyInfo_Type;
   issuerUniqueID_Type _issuerUniqueID_Type;
   subjectUniqueID_Type _subjectUniqueID_Type;
   extensions_Type _extensions_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TBSCertificate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Certificate
class Certificate : public asn1::SequenceType
{
public:

   explicit Certificate()
   {
#if defined(ASN1_ENABLE_XER)
      _tbsCertificate_Type.setTypeName("tbsCertificate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signatureAlgorithm_Type.setTypeName("signatureAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: tbsCertificate
      void set_tbsCertificate(const asn1::generated::TBSCertificate::ValueType& v) { _tbsCertificate = v;  }
      void set_tbsCertificate(asn1::generated::TBSCertificate::ValueType&& v) { _tbsCertificate = std::move(v);  }
      const asn1::generated::TBSCertificate::ValueType& get_tbsCertificate() const { return _tbsCertificate; }
      asn1::generated::TBSCertificate::ValueType& get_tbsCertificate() { return _tbsCertificate; }

      // Component: signatureAlgorithm
      void set_signatureAlgorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signatureAlgorithm = v;  }
      void set_signatureAlgorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signatureAlgorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() const { return _signatureAlgorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() { return _signatureAlgorithm; }

      // Component: signature
      void set_signature(const asn1::BitStringType::ValueType& v) { _signature = v;  }
      void set_signature(asn1::BitStringType::ValueType&& v) { _signature = std::move(v);  }
      const asn1::BitStringType::ValueType& get_signature() const { return _signature; }
      asn1::BitStringType::ValueType& get_signature() { return _signature; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_tbsCertificate != other._tbsCertificate)
            return false;
         if (_signatureAlgorithm != other._signatureAlgorithm)
            return false;
         if (_signature != other._signature)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::TBSCertificate::ValueType _tbsCertificate;
      asn1::generated::AlgorithmIdentifier::ValueType _signatureAlgorithm;
      asn1::BitStringType::ValueType _signature;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::TBSCertificate _tbsCertificate_Type;
   asn1::generated::AlgorithmIdentifier _signatureAlgorithm_Type;
   asn1::BitStringType _signature_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Certificate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: _INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions
class _INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions : public asn1::SequenceType
{
public:

   explicit _INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions()
   {
#if defined(ASN1_ENABLE_XER)
      _userCertificate_Type.setTypeName("userCertificate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _revocationDate_Type.setTypeName("revocationDate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _crlEntryExtensions_Type.setTypeName("crlEntryExtensions");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _crlEntryExtensions_Present = false;
      }

      // Component: userCertificate
      void set_userCertificate(const asn1::generated::CertificateSerialNumber::ValueType& v) { _userCertificate = v;  }
      void set_userCertificate(asn1::generated::CertificateSerialNumber::ValueType&& v) { _userCertificate = std::move(v);  }
      const asn1::generated::CertificateSerialNumber::ValueType& get_userCertificate() const { return _userCertificate; }
      asn1::generated::CertificateSerialNumber::ValueType& get_userCertificate() { return _userCertificate; }

      // Component: revocationDate
      void set_revocationDate(const asn1::generated::Time::ValueType& v) { _revocationDate = v;  }
      void set_revocationDate(asn1::generated::Time::ValueType&& v) { _revocationDate = std::move(v);  }
      const asn1::generated::Time::ValueType& get_revocationDate() const { return _revocationDate; }
      asn1::generated::Time::ValueType& get_revocationDate() { return _revocationDate; }

      // Component: crlEntryExtensions
      void set_crlEntryExtensions(const asn1::generated::Extensions::ValueType& v) { _crlEntryExtensions = v; _crlEntryExtensions_Present = true; }
      void set_crlEntryExtensions(asn1::generated::Extensions::ValueType&& v) { _crlEntryExtensions = std::move(v); _crlEntryExtensions_Present = true; }
      const asn1::generated::Extensions::ValueType& get_crlEntryExtensions() const { return _crlEntryExtensions; }
      asn1::generated::Extensions::ValueType& get_crlEntryExtensions() { return _crlEntryExtensions; }
      void set_crlEntryExtensions_Present(bool present = true) { _crlEntryExtensions_Present = present; }
      bool is_crlEntryExtensions_Present() const { return _crlEntryExtensions_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_userCertificate != other._userCertificate)
            return false;
         if (_revocationDate != other._revocationDate)
            return false;
         if (_crlEntryExtensions_Present != other._crlEntryExtensions_Present)
            return false;
         if (_crlEntryExtensions_Present && other._crlEntryExtensions_Present && _crlEntryExtensions != other._crlEntryExtensions)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CertificateSerialNumber::ValueType _userCertificate;
      asn1::generated::Time::ValueType _revocationDate;
      asn1::generated::Extensions::ValueType _crlEntryExtensions;
      bool _crlEntryExtensions_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertificateSerialNumber _userCertificate_Type;
   asn1::generated::Time _revocationDate_Type;
   asn1::generated::Extensions _crlEntryExtensions_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: revokedCertificates_INTERNAL__SequenceOfType_INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions
class revokedCertificates_INTERNAL__SequenceOfType_INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions : public asn1::SequenceOfType<_INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions>
{
public:

   explicit revokedCertificates_INTERNAL__SequenceOfType_INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions() : asn1::SequenceOfType<_INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions>(new _INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: crlExtensions_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Extensions
class crlExtensions_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Extensions : public asn1::TaggingType<asn1::generated::Extensions>
{
public:

   explicit crlExtensions_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Extensions() : asn1::TaggingType<asn1::generated::Extensions>(new asn1::generated::Extensions)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "crlExtensions"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TBSCertList
class TBSCertList : public asn1::SequenceType
{
public:

   explicit TBSCertList()
   {
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _thisUpdate_Type.setTypeName("thisUpdate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _nextUpdate_Type.setTypeName("nextUpdate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _revokedCertificates_Type.setTypeName("revokedCertificates");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _crlExtensions_Type.setTypeName("crlExtensions");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef revokedCertificates_INTERNAL__SequenceOfType_INTERNAL__SequenceType_userCertificateuserCertificate_INTERNAL_asn1__generated__CertificateSerialNumber_revocationDaterevocationDate_INTERNAL_asn1__generated__Time_crlEntryExtensionscrlEntryExtensions_INTERNAL_asn1__generated__Extensions revokedCertificates_Type;
   typedef crlExtensions_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Extensions crlExtensions_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _version_Present = false;
         _nextUpdate_Present = false;
         _revokedCertificates_Present = false;
         _crlExtensions_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::Version::ValueType& v) { _version = v; _version_Present = true; }
      void set_version(asn1::generated::Version::ValueType&& v) { _version = std::move(v); _version_Present = true; }
      const asn1::generated::Version::ValueType& get_version() const { return _version; }
      asn1::generated::Version::ValueType& get_version() { return _version; }
      void set_version_Present(bool present = true) { _version_Present = present; }
      bool is_version_Present() const { return _version_Present; }


      // Component: signature
      void set_signature(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signature = v;  }
      void set_signature(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signature = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signature() const { return _signature; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signature() { return _signature; }

      // Component: issuer
      void set_issuer(const asn1::generated::Name::ValueType& v) { _issuer = v;  }
      void set_issuer(asn1::generated::Name::ValueType&& v) { _issuer = std::move(v);  }
      const asn1::generated::Name::ValueType& get_issuer() const { return _issuer; }
      asn1::generated::Name::ValueType& get_issuer() { return _issuer; }

      // Component: thisUpdate
      void set_thisUpdate(const asn1::generated::Time::ValueType& v) { _thisUpdate = v;  }
      void set_thisUpdate(asn1::generated::Time::ValueType&& v) { _thisUpdate = std::move(v);  }
      const asn1::generated::Time::ValueType& get_thisUpdate() const { return _thisUpdate; }
      asn1::generated::Time::ValueType& get_thisUpdate() { return _thisUpdate; }

      // Component: nextUpdate
      void set_nextUpdate(const asn1::generated::Time::ValueType& v) { _nextUpdate = v; _nextUpdate_Present = true; }
      void set_nextUpdate(asn1::generated::Time::ValueType&& v) { _nextUpdate = std::move(v); _nextUpdate_Present = true; }
      const asn1::generated::Time::ValueType& get_nextUpdate() const { return _nextUpdate; }
      asn1::generated::Time::ValueType& get_nextUpdate() { return _nextUpdate; }
      void set_nextUpdate_Present(bool present = true) { _nextUpdate_Present = present; }
      bool is_nextUpdate_Present() const { return _nextUpdate_Present; }


      // Component: revokedCertificates
      void set_revokedCertificates(const revokedCertificates_Type::ValueType& v) { _revokedCertificates = v; _revokedCertificates_Present = true; }
      void set_revokedCertificates(revokedCertificates_Type::ValueType&& v) { _revokedCertificates = std::move(v); _revokedCertificates_Present = true; }
      const revokedCertificates_Type::ValueType& get_revokedCertificates() const { return _revokedCertificates; }
      revokedCertificates_Type::ValueType& get_revokedCertificates() { return _revokedCertificates; }
      void set_revokedCertificates_Present(bool present = true) { _revokedCertificates_Present = present; }
      bool is_revokedCertificates_Present() const { return _revokedCertificates_Present; }


      // Component: crlExtensions
      void set_crlExtensions(const crlExtensions_Type::ValueType& v) { _crlExtensions = v; _crlExtensions_Present = true; }
      void set_crlExtensions(crlExtensions_Type::ValueType&& v) { _crlExtensions = std::move(v); _crlExtensions_Present = true; }
      const crlExtensions_Type::ValueType& get_crlExtensions() const { return _crlExtensions; }
      crlExtensions_Type::ValueType& get_crlExtensions() { return _crlExtensions; }
      void set_crlExtensions_Present(bool present = true) { _crlExtensions_Present = present; }
      bool is_crlExtensions_Present() const { return _crlExtensions_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version_Present != other._version_Present)
            return false;
         if (_version_Present && other._version_Present && _version != other._version)
            return false;
         if (_signature != other._signature)
            return false;
         if (_issuer != other._issuer)
            return false;
         if (_thisUpdate != other._thisUpdate)
            return false;
         if (_nextUpdate_Present != other._nextUpdate_Present)
            return false;
         if (_nextUpdate_Present && other._nextUpdate_Present && _nextUpdate != other._nextUpdate)
            return false;
         if (_revokedCertificates_Present != other._revokedCertificates_Present)
            return false;
         if (_revokedCertificates_Present && other._revokedCertificates_Present && _revokedCertificates != other._revokedCertificates)
            return false;
         if (_crlExtensions_Present != other._crlExtensions_Present)
            return false;
         if (_crlExtensions_Present && other._crlExtensions_Present && _crlExtensions != other._crlExtensions)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::Version::ValueType _version;
      bool _version_Present;
      asn1::generated::AlgorithmIdentifier::ValueType _signature;
      asn1::generated::Name::ValueType _issuer;
      asn1::generated::Time::ValueType _thisUpdate;
      asn1::generated::Time::ValueType _nextUpdate;
      bool _nextUpdate_Present;
      revokedCertificates_Type::ValueType _revokedCertificates;
      bool _revokedCertificates_Present;
      crlExtensions_Type::ValueType _crlExtensions;
      bool _crlExtensions_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::Version _version_Type;
   asn1::generated::AlgorithmIdentifier _signature_Type;
   asn1::generated::Name _issuer_Type;
   asn1::generated::Time _thisUpdate_Type;
   asn1::generated::Time _nextUpdate_Type;
   revokedCertificates_Type _revokedCertificates_Type;
   crlExtensions_Type _crlExtensions_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TBSCertList"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificateList
class CertificateList : public asn1::SequenceType
{
public:

   explicit CertificateList()
   {
#if defined(ASN1_ENABLE_XER)
      _tbsCertList_Type.setTypeName("tbsCertList");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signatureAlgorithm_Type.setTypeName("signatureAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: tbsCertList
      void set_tbsCertList(const asn1::generated::TBSCertList::ValueType& v) { _tbsCertList = v;  }
      void set_tbsCertList(asn1::generated::TBSCertList::ValueType&& v) { _tbsCertList = std::move(v);  }
      const asn1::generated::TBSCertList::ValueType& get_tbsCertList() const { return _tbsCertList; }
      asn1::generated::TBSCertList::ValueType& get_tbsCertList() { return _tbsCertList; }

      // Component: signatureAlgorithm
      void set_signatureAlgorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signatureAlgorithm = v;  }
      void set_signatureAlgorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signatureAlgorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() const { return _signatureAlgorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() { return _signatureAlgorithm; }

      // Component: signature
      void set_signature(const asn1::BitStringType::ValueType& v) { _signature = v;  }
      void set_signature(asn1::BitStringType::ValueType&& v) { _signature = std::move(v);  }
      const asn1::BitStringType::ValueType& get_signature() const { return _signature; }
      asn1::BitStringType::ValueType& get_signature() { return _signature; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_tbsCertList != other._tbsCertList)
            return false;
         if (_signatureAlgorithm != other._signatureAlgorithm)
            return false;
         if (_signature != other._signature)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::TBSCertList::ValueType _tbsCertList;
      asn1::generated::AlgorithmIdentifier::ValueType _signatureAlgorithm;
      asn1::BitStringType::ValueType _signature;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::TBSCertList _tbsCertList_Type;
   asn1::generated::AlgorithmIdentifier _signatureAlgorithm_Type;
   asn1::BitStringType _signature_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificateList"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: X121Address
class X121Address : public asn1::NumericStringType
{
public:

   explicit X121Address()
   {
      addSize(1LL, k_ub_x121_address_length);
   }

   explicit X121Address(const ValueType& defaultValue, bool hasDefault) : asn1::NumericStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_x121_address_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "X121Address"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: NetworkAddress
class NetworkAddress : public asn1::generated::X121Address
{
public:

   explicit NetworkAddress()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "NetworkAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: network_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__NetworkAddress
class network_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__NetworkAddress : public asn1::TaggingType<asn1::generated::NetworkAddress>
{
public:

   explicit network_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__NetworkAddress() : asn1::TaggingType<asn1::generated::NetworkAddress>(new asn1::generated::NetworkAddress)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "network-address"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TerminalIdentifier
class TerminalIdentifier : public asn1::PrintableStringType
{
public:

   explicit TerminalIdentifier()
   {
      addSize(1LL, k_ub_terminal_id_length);
   }

   explicit TerminalIdentifier(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_terminal_id_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TerminalIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: terminal_identifier_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__TerminalIdentifier
class terminal_identifier_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__TerminalIdentifier : public asn1::TaggingType<asn1::generated::TerminalIdentifier>
{
public:

   explicit terminal_identifier_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__TerminalIdentifier() : asn1::TaggingType<asn1::generated::TerminalIdentifier>(new asn1::generated::TerminalIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "terminal-identifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PrivateDomainName
class PrivateDomainName : public asn1::ChoiceType
{
public:

   explicit PrivateDomainName()
   {
      _addChoice(&_numeric_Type);
      _numeric_Type.addSize(1LL, k_ub_domain_name_length);
#if defined(ASN1_ENABLE_XER)
      _numeric_Type.setTypeName("numeric");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printable_Type);
      _printable_Type.addSize(1LL, k_ub_domain_name_length);
#if defined(ASN1_ENABLE_XER)
      _printable_Type.setTypeName("printable");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: numeric
      void set_numeric(const asn1::NumericStringType::ValueType& v) { _numeric = v; _id = numeric_ID; }
      void set_numeric(asn1::NumericStringType::ValueType&& v) { _numeric = std::move(v); _id = numeric_ID; }
      const asn1::NumericStringType::ValueType& get_numeric() const { assert(_id == numeric_ID); return _numeric; }
      asn1::NumericStringType::ValueType& get_numeric() { assert(_id == numeric_ID); return _numeric; }
      bool has_numeric_Choosen() const { return _id == numeric_ID; }
      void choose_numeric() { _id = numeric_ID; }

      // Alternative: printable
      void set_printable(const asn1::PrintableStringType::ValueType& v) { _printable = v; _id = printable_ID; }
      void set_printable(asn1::PrintableStringType::ValueType&& v) { _printable = std::move(v); _id = printable_ID; }
      const asn1::PrintableStringType::ValueType& get_printable() const { assert(_id == printable_ID); return _printable; }
      asn1::PrintableStringType::ValueType& get_printable() { assert(_id == printable_ID); return _printable; }
      bool has_printable_Choosen() const { return _id == printable_ID; }
      void choose_printable() { _id = printable_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case numeric_ID:
            if (_numeric != other._numeric)
               return false;
            break;
         case printable_ID:
            if (_printable != other._printable)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         numeric_ID = 1,
         printable_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::NumericStringType::ValueType _numeric;
      asn1::PrintableStringType::ValueType _printable;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::NumericStringType _numeric_Type;
   asn1::PrintableStringType _printable_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PrivateDomainName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: private_domain_name_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__PrivateDomainName
class private_domain_name_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__PrivateDomainName : public asn1::TaggingType<asn1::generated::PrivateDomainName>
{
public:

   explicit private_domain_name_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__PrivateDomainName() : asn1::TaggingType<asn1::generated::PrivateDomainName>(new asn1::generated::PrivateDomainName)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "private-domain-name"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OrganizationName
class OrganizationName : public asn1::PrintableStringType
{
public:

   explicit OrganizationName()
   {
      addSize(1LL, k_ub_organization_name_length);
   }

   explicit OrganizationName(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_organization_name_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OrganizationName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: organization_name_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OrganizationName
class organization_name_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OrganizationName : public asn1::TaggingType<asn1::generated::OrganizationName>
{
public:

   explicit organization_name_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OrganizationName() : asn1::TaggingType<asn1::generated::OrganizationName>(new asn1::generated::OrganizationName)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "organization-name"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: NumericUserIdentifier
class NumericUserIdentifier : public asn1::NumericStringType
{
public:

   explicit NumericUserIdentifier()
   {
      addSize(1LL, k_ub_numeric_user_id_length);
   }

   explicit NumericUserIdentifier(const ValueType& defaultValue, bool hasDefault) : asn1::NumericStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_numeric_user_id_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "NumericUserIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: numeric_user_identifier_INTERNAL__IMPLICIT_4_INTERNAL_asn1__generated__NumericUserIdentifier
class numeric_user_identifier_INTERNAL__IMPLICIT_4_INTERNAL_asn1__generated__NumericUserIdentifier : public asn1::TaggingType<asn1::generated::NumericUserIdentifier>
{
public:

   explicit numeric_user_identifier_INTERNAL__IMPLICIT_4_INTERNAL_asn1__generated__NumericUserIdentifier() : asn1::TaggingType<asn1::generated::NumericUserIdentifier>(new asn1::generated::NumericUserIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "numeric-user-identifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__PrintableStringType
class surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__PrintableStringType : public asn1::TaggingType<asn1::PrintableStringType>
{
public:

   explicit surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__PrintableStringType() : asn1::TaggingType<asn1::PrintableStringType>(new asn1::PrintableStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      innerType().addSize(1LL, k_ub_surname_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "surname"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__PrintableStringType
class given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__PrintableStringType : public asn1::TaggingType<asn1::PrintableStringType>
{
public:

   explicit given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__PrintableStringType() : asn1::TaggingType<asn1::PrintableStringType>(new asn1::PrintableStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      innerType().addSize(1LL, k_ub_given_name_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "given-name"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__PrintableStringType
class initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__PrintableStringType : public asn1::TaggingType<asn1::PrintableStringType>
{
public:

   explicit initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__PrintableStringType() : asn1::TaggingType<asn1::PrintableStringType>(new asn1::PrintableStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      innerType().addSize(1LL, k_ub_initials_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "initials"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__PrintableStringType
class generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__PrintableStringType : public asn1::TaggingType<asn1::PrintableStringType>
{
public:

   explicit generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__PrintableStringType() : asn1::TaggingType<asn1::PrintableStringType>(new asn1::PrintableStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      innerType().addSize(1LL, k_ub_generation_qualifier_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "generation-qualifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PersonalName
class PersonalName : public asn1::SetType
{
public:

   explicit PersonalName()
   {
#if defined(ASN1_ENABLE_XER)
      _surname_Type.setTypeName("surname");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _given_name_Type.setTypeName("given-name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _initials_Type.setTypeName("initials");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _generation_qualifier_Type.setTypeName("generation-qualifier");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__PrintableStringType surname_Type;
   typedef given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__PrintableStringType given_name_Type;
   typedef initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__PrintableStringType initials_Type;
   typedef generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__PrintableStringType generation_qualifier_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _given_name_Present = false;
         _initials_Present = false;
         _generation_qualifier_Present = false;
      }

      // Component: surname
      void set_surname(const surname_Type::ValueType& v) { _surname = v;  }
      void set_surname(surname_Type::ValueType&& v) { _surname = std::move(v);  }
      const surname_Type::ValueType& get_surname() const { return _surname; }
      surname_Type::ValueType& get_surname() { return _surname; }

      // Component: given-name
      void set_given_name(const given_name_Type::ValueType& v) { _given_name = v; _given_name_Present = true; }
      void set_given_name(given_name_Type::ValueType&& v) { _given_name = std::move(v); _given_name_Present = true; }
      const given_name_Type::ValueType& get_given_name() const { return _given_name; }
      given_name_Type::ValueType& get_given_name() { return _given_name; }
      void set_given_name_Present(bool present = true) { _given_name_Present = present; }
      bool is_given_name_Present() const { return _given_name_Present; }


      // Component: initials
      void set_initials(const initials_Type::ValueType& v) { _initials = v; _initials_Present = true; }
      void set_initials(initials_Type::ValueType&& v) { _initials = std::move(v); _initials_Present = true; }
      const initials_Type::ValueType& get_initials() const { return _initials; }
      initials_Type::ValueType& get_initials() { return _initials; }
      void set_initials_Present(bool present = true) { _initials_Present = present; }
      bool is_initials_Present() const { return _initials_Present; }


      // Component: generation-qualifier
      void set_generation_qualifier(const generation_qualifier_Type::ValueType& v) { _generation_qualifier = v; _generation_qualifier_Present = true; }
      void set_generation_qualifier(generation_qualifier_Type::ValueType&& v) { _generation_qualifier = std::move(v); _generation_qualifier_Present = true; }
      const generation_qualifier_Type::ValueType& get_generation_qualifier() const { return _generation_qualifier; }
      generation_qualifier_Type::ValueType& get_generation_qualifier() { return _generation_qualifier; }
      void set_generation_qualifier_Present(bool present = true) { _generation_qualifier_Present = present; }
      bool is_generation_qualifier_Present() const { return _generation_qualifier_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_surname != other._surname)
            return false;
         if (_given_name_Present != other._given_name_Present)
            return false;
         if (_given_name_Present && other._given_name_Present && _given_name != other._given_name)
            return false;
         if (_initials_Present != other._initials_Present)
            return false;
         if (_initials_Present && other._initials_Present && _initials != other._initials)
            return false;
         if (_generation_qualifier_Present != other._generation_qualifier_Present)
            return false;
         if (_generation_qualifier_Present && other._generation_qualifier_Present && _generation_qualifier != other._generation_qualifier)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      surname_Type::ValueType _surname;
      given_name_Type::ValueType _given_name;
      bool _given_name_Present;
      initials_Type::ValueType _initials;
      bool _initials_Present;
      generation_qualifier_Type::ValueType _generation_qualifier;
      bool _generation_qualifier_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   surname_Type _surname_Type;
   given_name_Type _given_name_Type;
   initials_Type _initials_Type;
   generation_qualifier_Type _generation_qualifier_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PersonalName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: personal_name_INTERNAL__IMPLICIT_5_INTERNAL_asn1__generated__PersonalName
class personal_name_INTERNAL__IMPLICIT_5_INTERNAL_asn1__generated__PersonalName : public asn1::TaggingType<asn1::generated::PersonalName>
{
public:

   explicit personal_name_INTERNAL__IMPLICIT_5_INTERNAL_asn1__generated__PersonalName() : asn1::TaggingType<asn1::generated::PersonalName>(new asn1::generated::PersonalName)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(5);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "generation-qualifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OrganizationalUnitName
class OrganizationalUnitName : public asn1::PrintableStringType
{
public:

   explicit OrganizationalUnitName()
   {
      addSize(1LL, k_ub_organizational_unit_name_length);
   }

   explicit OrganizationalUnitName(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_organizational_unit_name_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OrganizationalUnitName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OrganizationalUnitNames
class OrganizationalUnitNames : public asn1::SequenceOfType<asn1::generated::OrganizationalUnitName>
{
public:

   explicit OrganizationalUnitNames() : asn1::SequenceOfType<asn1::generated::OrganizationalUnitName>(new asn1::generated::OrganizationalUnitName)
   {
      setMinSize(1LL);
      setMaxSize(k_ub_organizational_units);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OrganizationalUnitNames"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: organizational_unit_names_INTERNAL__IMPLICIT_6_INTERNAL_asn1__generated__OrganizationalUnitNames
class organizational_unit_names_INTERNAL__IMPLICIT_6_INTERNAL_asn1__generated__OrganizationalUnitNames : public asn1::TaggingType<asn1::generated::OrganizationalUnitNames>
{
public:

   explicit organizational_unit_names_INTERNAL__IMPLICIT_6_INTERNAL_asn1__generated__OrganizationalUnitNames() : asn1::TaggingType<asn1::generated::OrganizationalUnitNames>(new asn1::generated::OrganizationalUnitNames)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(6);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "organizational-unit-names"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: _APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType
class _APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType : public asn1::ChoiceType
{
public:

   explicit _APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType()
   {
      _addChoice(&_x121_dcc_code_Type);
      _x121_dcc_code_Type.addSize(k_ub_country_name_numeric_length, k_ub_country_name_numeric_length);
#if defined(ASN1_ENABLE_XER)
      _x121_dcc_code_Type.setTypeName("x121-dcc-code");
#endif // ASN1_ENABLE_XER
      _addChoice(&_iso_3166_alpha2_code_Type);
      _iso_3166_alpha2_code_Type.addSize(k_ub_country_name_alpha_length, k_ub_country_name_alpha_length);
#if defined(ASN1_ENABLE_XER)
      _iso_3166_alpha2_code_Type.setTypeName("iso-3166-alpha2-code");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: x121-dcc-code
      void set_x121_dcc_code(const asn1::NumericStringType::ValueType& v) { _x121_dcc_code = v; _id = x121_dcc_code_ID; }
      void set_x121_dcc_code(asn1::NumericStringType::ValueType&& v) { _x121_dcc_code = std::move(v); _id = x121_dcc_code_ID; }
      const asn1::NumericStringType::ValueType& get_x121_dcc_code() const { assert(_id == x121_dcc_code_ID); return _x121_dcc_code; }
      asn1::NumericStringType::ValueType& get_x121_dcc_code() { assert(_id == x121_dcc_code_ID); return _x121_dcc_code; }
      bool has_x121_dcc_code_Choosen() const { return _id == x121_dcc_code_ID; }
      void choose_x121_dcc_code() { _id = x121_dcc_code_ID; }

      // Alternative: iso-3166-alpha2-code
      void set_iso_3166_alpha2_code(const asn1::PrintableStringType::ValueType& v) { _iso_3166_alpha2_code = v; _id = iso_3166_alpha2_code_ID; }
      void set_iso_3166_alpha2_code(asn1::PrintableStringType::ValueType&& v) { _iso_3166_alpha2_code = std::move(v); _id = iso_3166_alpha2_code_ID; }
      const asn1::PrintableStringType::ValueType& get_iso_3166_alpha2_code() const { assert(_id == iso_3166_alpha2_code_ID); return _iso_3166_alpha2_code; }
      asn1::PrintableStringType::ValueType& get_iso_3166_alpha2_code() { assert(_id == iso_3166_alpha2_code_ID); return _iso_3166_alpha2_code; }
      bool has_iso_3166_alpha2_code_Choosen() const { return _id == iso_3166_alpha2_code_ID; }
      void choose_iso_3166_alpha2_code() { _id = iso_3166_alpha2_code_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case x121_dcc_code_ID:
            if (_x121_dcc_code != other._x121_dcc_code)
               return false;
            break;
         case iso_3166_alpha2_code_ID:
            if (_iso_3166_alpha2_code != other._iso_3166_alpha2_code)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         x121_dcc_code_ID = 1,
         iso_3166_alpha2_code_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::NumericStringType::ValueType _x121_dcc_code;
      asn1::PrintableStringType::ValueType _iso_3166_alpha2_code;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::NumericStringType _x121_dcc_code_Type;
   asn1::PrintableStringType _iso_3166_alpha2_code_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "["; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CountryName
class CountryName : public asn1::TaggingType<_APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType>
{
public:

   explicit CountryName() : asn1::TaggingType<_APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType>(new _APPLICATION_1_INTERNAL__ChoiceType_x121_dcc_codex121_dcc_code_INTERNAL_asn1__NumericStringType_iso_3166_alpha2_codeiso_3166_alpha2_code_INTERNAL_asn1__PrintableStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(1);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CountryName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: _APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType
class _APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType : public asn1::ChoiceType
{
public:

   explicit _APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType()
   {
      _addChoice(&_numeric_Type);
      _numeric_Type.addSize(0LL, k_ub_domain_name_length);
#if defined(ASN1_ENABLE_XER)
      _numeric_Type.setTypeName("numeric");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printable_Type);
      _printable_Type.addSize(0LL, k_ub_domain_name_length);
#if defined(ASN1_ENABLE_XER)
      _printable_Type.setTypeName("printable");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: numeric
      void set_numeric(const asn1::NumericStringType::ValueType& v) { _numeric = v; _id = numeric_ID; }
      void set_numeric(asn1::NumericStringType::ValueType&& v) { _numeric = std::move(v); _id = numeric_ID; }
      const asn1::NumericStringType::ValueType& get_numeric() const { assert(_id == numeric_ID); return _numeric; }
      asn1::NumericStringType::ValueType& get_numeric() { assert(_id == numeric_ID); return _numeric; }
      bool has_numeric_Choosen() const { return _id == numeric_ID; }
      void choose_numeric() { _id = numeric_ID; }

      // Alternative: printable
      void set_printable(const asn1::PrintableStringType::ValueType& v) { _printable = v; _id = printable_ID; }
      void set_printable(asn1::PrintableStringType::ValueType&& v) { _printable = std::move(v); _id = printable_ID; }
      const asn1::PrintableStringType::ValueType& get_printable() const { assert(_id == printable_ID); return _printable; }
      asn1::PrintableStringType::ValueType& get_printable() { assert(_id == printable_ID); return _printable; }
      bool has_printable_Choosen() const { return _id == printable_ID; }
      void choose_printable() { _id = printable_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case numeric_ID:
            if (_numeric != other._numeric)
               return false;
            break;
         case printable_ID:
            if (_printable != other._printable)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         numeric_ID = 1,
         printable_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::NumericStringType::ValueType _numeric;
      asn1::PrintableStringType::ValueType _printable;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::NumericStringType _numeric_Type;
   asn1::PrintableStringType _printable_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "["; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AdministrationDomainName
class AdministrationDomainName : public asn1::TaggingType<_APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType>
{
public:

   explicit AdministrationDomainName() : asn1::TaggingType<_APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType>(new _APPLICATION_2_INTERNAL__ChoiceType_numericnumeric_INTERNAL_asn1__NumericStringType_printableprintable_INTERNAL_asn1__PrintableStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(2);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AdministrationDomainName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BuiltInStandardAttributes
class BuiltInStandardAttributes : public asn1::SequenceType
{
public:

   explicit BuiltInStandardAttributes()
   {
#if defined(ASN1_ENABLE_XER)
      _country_name_Type.setTypeName("country-name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _administration_domain_name_Type.setTypeName("administration-domain-name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _network_address_Type.setTypeName("network-address");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _terminal_identifier_Type.setTypeName("terminal-identifier");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _private_domain_name_Type.setTypeName("private-domain-name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _organization_name_Type.setTypeName("organization-name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _numeric_user_identifier_Type.setTypeName("numeric-user-identifier");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _personal_name_Type.setTypeName("personal-name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _organizational_unit_names_Type.setTypeName("organizational-unit-names");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef network_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__NetworkAddress network_address_Type;
   typedef terminal_identifier_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__TerminalIdentifier terminal_identifier_Type;
   typedef private_domain_name_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__PrivateDomainName private_domain_name_Type;
   typedef organization_name_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OrganizationName organization_name_Type;
   typedef numeric_user_identifier_INTERNAL__IMPLICIT_4_INTERNAL_asn1__generated__NumericUserIdentifier numeric_user_identifier_Type;
   typedef personal_name_INTERNAL__IMPLICIT_5_INTERNAL_asn1__generated__PersonalName personal_name_Type;
   typedef organizational_unit_names_INTERNAL__IMPLICIT_6_INTERNAL_asn1__generated__OrganizationalUnitNames organizational_unit_names_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _country_name_Present = false;
         _administration_domain_name_Present = false;
         _network_address_Present = false;
         _terminal_identifier_Present = false;
         _private_domain_name_Present = false;
         _organization_name_Present = false;
         _numeric_user_identifier_Present = false;
         _personal_name_Present = false;
         _organizational_unit_names_Present = false;
      }

      // Component: country-name
      void set_country_name(const asn1::generated::CountryName::ValueType& v) { _country_name = v; _country_name_Present = true; }
      void set_country_name(asn1::generated::CountryName::ValueType&& v) { _country_name = std::move(v); _country_name_Present = true; }
      const asn1::generated::CountryName::ValueType& get_country_name() const { return _country_name; }
      asn1::generated::CountryName::ValueType& get_country_name() { return _country_name; }
      void set_country_name_Present(bool present = true) { _country_name_Present = present; }
      bool is_country_name_Present() const { return _country_name_Present; }


      // Component: administration-domain-name
      void set_administration_domain_name(const asn1::generated::AdministrationDomainName::ValueType& v) { _administration_domain_name = v; _administration_domain_name_Present = true; }
      void set_administration_domain_name(asn1::generated::AdministrationDomainName::ValueType&& v) { _administration_domain_name = std::move(v); _administration_domain_name_Present = true; }
      const asn1::generated::AdministrationDomainName::ValueType& get_administration_domain_name() const { return _administration_domain_name; }
      asn1::generated::AdministrationDomainName::ValueType& get_administration_domain_name() { return _administration_domain_name; }
      void set_administration_domain_name_Present(bool present = true) { _administration_domain_name_Present = present; }
      bool is_administration_domain_name_Present() const { return _administration_domain_name_Present; }


      // Component: network-address
      void set_network_address(const network_address_Type::ValueType& v) { _network_address = v; _network_address_Present = true; }
      void set_network_address(network_address_Type::ValueType&& v) { _network_address = std::move(v); _network_address_Present = true; }
      const network_address_Type::ValueType& get_network_address() const { return _network_address; }
      network_address_Type::ValueType& get_network_address() { return _network_address; }
      void set_network_address_Present(bool present = true) { _network_address_Present = present; }
      bool is_network_address_Present() const { return _network_address_Present; }


      // Component: terminal-identifier
      void set_terminal_identifier(const terminal_identifier_Type::ValueType& v) { _terminal_identifier = v; _terminal_identifier_Present = true; }
      void set_terminal_identifier(terminal_identifier_Type::ValueType&& v) { _terminal_identifier = std::move(v); _terminal_identifier_Present = true; }
      const terminal_identifier_Type::ValueType& get_terminal_identifier() const { return _terminal_identifier; }
      terminal_identifier_Type::ValueType& get_terminal_identifier() { return _terminal_identifier; }
      void set_terminal_identifier_Present(bool present = true) { _terminal_identifier_Present = present; }
      bool is_terminal_identifier_Present() const { return _terminal_identifier_Present; }


      // Component: private-domain-name
      void set_private_domain_name(const private_domain_name_Type::ValueType& v) { _private_domain_name = v; _private_domain_name_Present = true; }
      void set_private_domain_name(private_domain_name_Type::ValueType&& v) { _private_domain_name = std::move(v); _private_domain_name_Present = true; }
      const private_domain_name_Type::ValueType& get_private_domain_name() const { return _private_domain_name; }
      private_domain_name_Type::ValueType& get_private_domain_name() { return _private_domain_name; }
      void set_private_domain_name_Present(bool present = true) { _private_domain_name_Present = present; }
      bool is_private_domain_name_Present() const { return _private_domain_name_Present; }


      // Component: organization-name
      void set_organization_name(const organization_name_Type::ValueType& v) { _organization_name = v; _organization_name_Present = true; }
      void set_organization_name(organization_name_Type::ValueType&& v) { _organization_name = std::move(v); _organization_name_Present = true; }
      const organization_name_Type::ValueType& get_organization_name() const { return _organization_name; }
      organization_name_Type::ValueType& get_organization_name() { return _organization_name; }
      void set_organization_name_Present(bool present = true) { _organization_name_Present = present; }
      bool is_organization_name_Present() const { return _organization_name_Present; }


      // Component: numeric-user-identifier
      void set_numeric_user_identifier(const numeric_user_identifier_Type::ValueType& v) { _numeric_user_identifier = v; _numeric_user_identifier_Present = true; }
      void set_numeric_user_identifier(numeric_user_identifier_Type::ValueType&& v) { _numeric_user_identifier = std::move(v); _numeric_user_identifier_Present = true; }
      const numeric_user_identifier_Type::ValueType& get_numeric_user_identifier() const { return _numeric_user_identifier; }
      numeric_user_identifier_Type::ValueType& get_numeric_user_identifier() { return _numeric_user_identifier; }
      void set_numeric_user_identifier_Present(bool present = true) { _numeric_user_identifier_Present = present; }
      bool is_numeric_user_identifier_Present() const { return _numeric_user_identifier_Present; }


      // Component: personal-name
      void set_personal_name(const personal_name_Type::ValueType& v) { _personal_name = v; _personal_name_Present = true; }
      void set_personal_name(personal_name_Type::ValueType&& v) { _personal_name = std::move(v); _personal_name_Present = true; }
      const personal_name_Type::ValueType& get_personal_name() const { return _personal_name; }
      personal_name_Type::ValueType& get_personal_name() { return _personal_name; }
      void set_personal_name_Present(bool present = true) { _personal_name_Present = present; }
      bool is_personal_name_Present() const { return _personal_name_Present; }


      // Component: organizational-unit-names
      void set_organizational_unit_names(const organizational_unit_names_Type::ValueType& v) { _organizational_unit_names = v; _organizational_unit_names_Present = true; }
      void set_organizational_unit_names(organizational_unit_names_Type::ValueType&& v) { _organizational_unit_names = std::move(v); _organizational_unit_names_Present = true; }
      const organizational_unit_names_Type::ValueType& get_organizational_unit_names() const { return _organizational_unit_names; }
      organizational_unit_names_Type::ValueType& get_organizational_unit_names() { return _organizational_unit_names; }
      void set_organizational_unit_names_Present(bool present = true) { _organizational_unit_names_Present = present; }
      bool is_organizational_unit_names_Present() const { return _organizational_unit_names_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_country_name_Present != other._country_name_Present)
            return false;
         if (_country_name_Present && other._country_name_Present && _country_name != other._country_name)
            return false;
         if (_administration_domain_name_Present != other._administration_domain_name_Present)
            return false;
         if (_administration_domain_name_Present && other._administration_domain_name_Present && _administration_domain_name != other._administration_domain_name)
            return false;
         if (_network_address_Present != other._network_address_Present)
            return false;
         if (_network_address_Present && other._network_address_Present && _network_address != other._network_address)
            return false;
         if (_terminal_identifier_Present != other._terminal_identifier_Present)
            return false;
         if (_terminal_identifier_Present && other._terminal_identifier_Present && _terminal_identifier != other._terminal_identifier)
            return false;
         if (_private_domain_name_Present != other._private_domain_name_Present)
            return false;
         if (_private_domain_name_Present && other._private_domain_name_Present && _private_domain_name != other._private_domain_name)
            return false;
         if (_organization_name_Present != other._organization_name_Present)
            return false;
         if (_organization_name_Present && other._organization_name_Present && _organization_name != other._organization_name)
            return false;
         if (_numeric_user_identifier_Present != other._numeric_user_identifier_Present)
            return false;
         if (_numeric_user_identifier_Present && other._numeric_user_identifier_Present && _numeric_user_identifier != other._numeric_user_identifier)
            return false;
         if (_personal_name_Present != other._personal_name_Present)
            return false;
         if (_personal_name_Present && other._personal_name_Present && _personal_name != other._personal_name)
            return false;
         if (_organizational_unit_names_Present != other._organizational_unit_names_Present)
            return false;
         if (_organizational_unit_names_Present && other._organizational_unit_names_Present && _organizational_unit_names != other._organizational_unit_names)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CountryName::ValueType _country_name;
      bool _country_name_Present;
      asn1::generated::AdministrationDomainName::ValueType _administration_domain_name;
      bool _administration_domain_name_Present;
      network_address_Type::ValueType _network_address;
      bool _network_address_Present;
      terminal_identifier_Type::ValueType _terminal_identifier;
      bool _terminal_identifier_Present;
      private_domain_name_Type::ValueType _private_domain_name;
      bool _private_domain_name_Present;
      organization_name_Type::ValueType _organization_name;
      bool _organization_name_Present;
      numeric_user_identifier_Type::ValueType _numeric_user_identifier;
      bool _numeric_user_identifier_Present;
      personal_name_Type::ValueType _personal_name;
      bool _personal_name_Present;
      organizational_unit_names_Type::ValueType _organizational_unit_names;
      bool _organizational_unit_names_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CountryName _country_name_Type;
   asn1::generated::AdministrationDomainName _administration_domain_name_Type;
   network_address_Type _network_address_Type;
   terminal_identifier_Type _terminal_identifier_Type;
   private_domain_name_Type _private_domain_name_Type;
   organization_name_Type _organization_name_Type;
   numeric_user_identifier_Type _numeric_user_identifier_Type;
   personal_name_Type _personal_name_Type;
   organizational_unit_names_Type _organizational_unit_names_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BuiltInStandardAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BuiltInDomainDefinedAttribute
class BuiltInDomainDefinedAttribute : public asn1::SequenceType
{
public:

   explicit BuiltInDomainDefinedAttribute()
   {
      _type_Type.addSize(1LL, k_ub_domain_defined_attribute_type_length);
#if defined(ASN1_ENABLE_XER)
      _type_Type.setTypeName("type");
#endif // ASN1_ENABLE_XER
      _value_Type.addSize(1LL, k_ub_domain_defined_attribute_value_length);
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: type
      void set_type(const asn1::PrintableStringType::ValueType& v) { _type = v;  }
      void set_type(asn1::PrintableStringType::ValueType&& v) { _type = std::move(v);  }
      const asn1::PrintableStringType::ValueType& get_type() const { return _type; }
      asn1::PrintableStringType::ValueType& get_type() { return _type; }

      // Component: value
      void set_value(const asn1::PrintableStringType::ValueType& v) { _value = v;  }
      void set_value(asn1::PrintableStringType::ValueType&& v) { _value = std::move(v);  }
      const asn1::PrintableStringType::ValueType& get_value() const { return _value; }
      asn1::PrintableStringType::ValueType& get_value() { return _value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type != other._type)
            return false;
         if (_value != other._value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::PrintableStringType::ValueType _type;
      asn1::PrintableStringType::ValueType _value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::PrintableStringType _type_Type;
   asn1::PrintableStringType _value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BuiltInDomainDefinedAttribute"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BuiltInDomainDefinedAttributes
class BuiltInDomainDefinedAttributes : public asn1::SequenceOfType<asn1::generated::BuiltInDomainDefinedAttribute>
{
public:

   explicit BuiltInDomainDefinedAttributes() : asn1::SequenceOfType<asn1::generated::BuiltInDomainDefinedAttribute>(new asn1::generated::BuiltInDomainDefinedAttribute)
   {
      setMinSize(1LL);
      setMaxSize(k_ub_domain_defined_attributes);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BuiltInDomainDefinedAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: extension_attribute_type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__UnsignedIntegerType
class extension_attribute_type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__UnsignedIntegerType : public asn1::TaggingType<asn1::UnsignedIntegerType>
{
public:

   explicit extension_attribute_type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__UnsignedIntegerType() : asn1::TaggingType<asn1::UnsignedIntegerType>(new asn1::UnsignedIntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      innerType().setMinValue(0ULL);
      innerType().setMaxValue(k_ub_extension_attributes);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "extension-attribute-type"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: extension_attribute_value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType
class extension_attribute_value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType : public asn1::TaggingType<asn1::AnyType>
{
public:

   explicit extension_attribute_value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType() : asn1::TaggingType<asn1::AnyType>(new asn1::AnyType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "extension-attribute-value"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtensionAttribute
class ExtensionAttribute : public asn1::SequenceType
{
public:

   explicit ExtensionAttribute()
   {
#if defined(ASN1_ENABLE_XER)
      _extension_attribute_type_Type.setTypeName("extension-attribute-type");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extension_attribute_value_Type.setTypeName("extension-attribute-value");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef extension_attribute_type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__UnsignedIntegerType extension_attribute_type_Type;
   typedef extension_attribute_value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType extension_attribute_value_Type;

   class SequenceValue_Type
   {
   public:

      // Component: extension-attribute-type
      void set_extension_attribute_type(const extension_attribute_type_Type::ValueType& v) { _extension_attribute_type = v;  }
      void set_extension_attribute_type(extension_attribute_type_Type::ValueType&& v) { _extension_attribute_type = std::move(v);  }
      const extension_attribute_type_Type::ValueType& get_extension_attribute_type() const { return _extension_attribute_type; }
      extension_attribute_type_Type::ValueType& get_extension_attribute_type() { return _extension_attribute_type; }

      // Component: extension-attribute-value
      void set_extension_attribute_value(const extension_attribute_value_Type::ValueType& v) { _extension_attribute_value = v;  }
      void set_extension_attribute_value(extension_attribute_value_Type::ValueType&& v) { _extension_attribute_value = std::move(v);  }
      const extension_attribute_value_Type::ValueType& get_extension_attribute_value() const { return _extension_attribute_value; }
      extension_attribute_value_Type::ValueType& get_extension_attribute_value() { return _extension_attribute_value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_extension_attribute_type != other._extension_attribute_type)
            return false;
         if (_extension_attribute_value != other._extension_attribute_value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      extension_attribute_type_Type::ValueType _extension_attribute_type;
      extension_attribute_value_Type::ValueType _extension_attribute_value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   extension_attribute_type_Type _extension_attribute_type_Type;
   extension_attribute_value_Type _extension_attribute_value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtensionAttribute"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtensionAttributes
class ExtensionAttributes : public asn1::SetOfType<asn1::generated::ExtensionAttribute>
{
public:

   explicit ExtensionAttributes() : asn1::SetOfType<asn1::generated::ExtensionAttribute>(new asn1::generated::ExtensionAttribute)
   {
      setMinSize(1LL);
      setMaxSize(k_ub_extension_attributes);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtensionAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ORAddress
class ORAddress : public asn1::SequenceType
{
public:

   explicit ORAddress()
   {
#if defined(ASN1_ENABLE_XER)
      _built_in_standard_attributes_Type.setTypeName("built-in-standard-attributes");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _built_in_domain_defined_attributes_Type.setTypeName("built-in-domain-defined-attributes");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extension_attributes_Type.setTypeName("extension-attributes");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _built_in_domain_defined_attributes_Present = false;
         _extension_attributes_Present = false;
      }

      // Component: built-in-standard-attributes
      void set_built_in_standard_attributes(const asn1::generated::BuiltInStandardAttributes::ValueType& v) { _built_in_standard_attributes = v;  }
      void set_built_in_standard_attributes(asn1::generated::BuiltInStandardAttributes::ValueType&& v) { _built_in_standard_attributes = std::move(v);  }
      const asn1::generated::BuiltInStandardAttributes::ValueType& get_built_in_standard_attributes() const { return _built_in_standard_attributes; }
      asn1::generated::BuiltInStandardAttributes::ValueType& get_built_in_standard_attributes() { return _built_in_standard_attributes; }

      // Component: built-in-domain-defined-attributes
      void set_built_in_domain_defined_attributes(const asn1::generated::BuiltInDomainDefinedAttributes::ValueType& v) { _built_in_domain_defined_attributes = v; _built_in_domain_defined_attributes_Present = true; }
      void set_built_in_domain_defined_attributes(asn1::generated::BuiltInDomainDefinedAttributes::ValueType&& v) { _built_in_domain_defined_attributes = std::move(v); _built_in_domain_defined_attributes_Present = true; }
      const asn1::generated::BuiltInDomainDefinedAttributes::ValueType& get_built_in_domain_defined_attributes() const { return _built_in_domain_defined_attributes; }
      asn1::generated::BuiltInDomainDefinedAttributes::ValueType& get_built_in_domain_defined_attributes() { return _built_in_domain_defined_attributes; }
      void set_built_in_domain_defined_attributes_Present(bool present = true) { _built_in_domain_defined_attributes_Present = present; }
      bool is_built_in_domain_defined_attributes_Present() const { return _built_in_domain_defined_attributes_Present; }


      // Component: extension-attributes
      void set_extension_attributes(const asn1::generated::ExtensionAttributes::ValueType& v) { _extension_attributes = v; _extension_attributes_Present = true; }
      void set_extension_attributes(asn1::generated::ExtensionAttributes::ValueType&& v) { _extension_attributes = std::move(v); _extension_attributes_Present = true; }
      const asn1::generated::ExtensionAttributes::ValueType& get_extension_attributes() const { return _extension_attributes; }
      asn1::generated::ExtensionAttributes::ValueType& get_extension_attributes() { return _extension_attributes; }
      void set_extension_attributes_Present(bool present = true) { _extension_attributes_Present = present; }
      bool is_extension_attributes_Present() const { return _extension_attributes_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_built_in_standard_attributes != other._built_in_standard_attributes)
            return false;
         if (_built_in_domain_defined_attributes_Present != other._built_in_domain_defined_attributes_Present)
            return false;
         if (_built_in_domain_defined_attributes_Present && other._built_in_domain_defined_attributes_Present && _built_in_domain_defined_attributes != other._built_in_domain_defined_attributes)
            return false;
         if (_extension_attributes_Present != other._extension_attributes_Present)
            return false;
         if (_extension_attributes_Present && other._extension_attributes_Present && _extension_attributes != other._extension_attributes)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::BuiltInStandardAttributes::ValueType _built_in_standard_attributes;
      asn1::generated::BuiltInDomainDefinedAttributes::ValueType _built_in_domain_defined_attributes;
      bool _built_in_domain_defined_attributes_Present;
      asn1::generated::ExtensionAttributes::ValueType _extension_attributes;
      bool _extension_attributes_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::BuiltInStandardAttributes _built_in_standard_attributes_Type;
   asn1::generated::BuiltInDomainDefinedAttributes _built_in_domain_defined_attributes_Type;
   asn1::generated::ExtensionAttributes _extension_attributes_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ORAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CommonName
class CommonName : public asn1::PrintableStringType
{
public:

   explicit CommonName()
   {
      addSize(1LL, k_ub_common_name_length);
   }

   explicit CommonName(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_common_name_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CommonName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TeletexCommonName
class TeletexCommonName : public asn1::TeletexStringType
{
public:

   explicit TeletexCommonName()
   {
      addSize(1LL, k_ub_common_name_length);
   }

   explicit TeletexCommonName(const ValueType& defaultValue, bool hasDefault) : asn1::TeletexStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_common_name_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TeletexCommonName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TeletexOrganizationName
class TeletexOrganizationName : public asn1::TeletexStringType
{
public:

   explicit TeletexOrganizationName()
   {
      addSize(1LL, k_ub_organization_name_length);
   }

   explicit TeletexOrganizationName(const ValueType& defaultValue, bool hasDefault) : asn1::TeletexStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_organization_name_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TeletexOrganizationName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__TeletexStringType
class surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__TeletexStringType : public asn1::TaggingType<asn1::TeletexStringType>
{
public:

   explicit surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__TeletexStringType() : asn1::TaggingType<asn1::TeletexStringType>(new asn1::TeletexStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      innerType().addSize(1LL, k_ub_surname_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "surname"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__TeletexStringType
class given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__TeletexStringType : public asn1::TaggingType<asn1::TeletexStringType>
{
public:

   explicit given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__TeletexStringType() : asn1::TaggingType<asn1::TeletexStringType>(new asn1::TeletexStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      innerType().addSize(1LL, k_ub_given_name_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "given-name"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__TeletexStringType
class initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__TeletexStringType : public asn1::TaggingType<asn1::TeletexStringType>
{
public:

   explicit initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__TeletexStringType() : asn1::TaggingType<asn1::TeletexStringType>(new asn1::TeletexStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      innerType().addSize(1LL, k_ub_initials_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "initials"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__TeletexStringType
class generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__TeletexStringType : public asn1::TaggingType<asn1::TeletexStringType>
{
public:

   explicit generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__TeletexStringType() : asn1::TaggingType<asn1::TeletexStringType>(new asn1::TeletexStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      innerType().addSize(1LL, k_ub_generation_qualifier_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "generation-qualifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TeletexPersonalName
class TeletexPersonalName : public asn1::SetType
{
public:

   explicit TeletexPersonalName()
   {
#if defined(ASN1_ENABLE_XER)
      _surname_Type.setTypeName("surname");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _given_name_Type.setTypeName("given-name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _initials_Type.setTypeName("initials");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _generation_qualifier_Type.setTypeName("generation-qualifier");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef surname_INTERNAL__IMPLICIT_0_INTERNAL_asn1__TeletexStringType surname_Type;
   typedef given_name_INTERNAL__IMPLICIT_1_INTERNAL_asn1__TeletexStringType given_name_Type;
   typedef initials_INTERNAL__IMPLICIT_2_INTERNAL_asn1__TeletexStringType initials_Type;
   typedef generation_qualifier_INTERNAL__IMPLICIT_3_INTERNAL_asn1__TeletexStringType generation_qualifier_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _given_name_Present = false;
         _initials_Present = false;
         _generation_qualifier_Present = false;
      }

      // Component: surname
      void set_surname(const surname_Type::ValueType& v) { _surname = v;  }
      void set_surname(surname_Type::ValueType&& v) { _surname = std::move(v);  }
      const surname_Type::ValueType& get_surname() const { return _surname; }
      surname_Type::ValueType& get_surname() { return _surname; }

      // Component: given-name
      void set_given_name(const given_name_Type::ValueType& v) { _given_name = v; _given_name_Present = true; }
      void set_given_name(given_name_Type::ValueType&& v) { _given_name = std::move(v); _given_name_Present = true; }
      const given_name_Type::ValueType& get_given_name() const { return _given_name; }
      given_name_Type::ValueType& get_given_name() { return _given_name; }
      void set_given_name_Present(bool present = true) { _given_name_Present = present; }
      bool is_given_name_Present() const { return _given_name_Present; }


      // Component: initials
      void set_initials(const initials_Type::ValueType& v) { _initials = v; _initials_Present = true; }
      void set_initials(initials_Type::ValueType&& v) { _initials = std::move(v); _initials_Present = true; }
      const initials_Type::ValueType& get_initials() const { return _initials; }
      initials_Type::ValueType& get_initials() { return _initials; }
      void set_initials_Present(bool present = true) { _initials_Present = present; }
      bool is_initials_Present() const { return _initials_Present; }


      // Component: generation-qualifier
      void set_generation_qualifier(const generation_qualifier_Type::ValueType& v) { _generation_qualifier = v; _generation_qualifier_Present = true; }
      void set_generation_qualifier(generation_qualifier_Type::ValueType&& v) { _generation_qualifier = std::move(v); _generation_qualifier_Present = true; }
      const generation_qualifier_Type::ValueType& get_generation_qualifier() const { return _generation_qualifier; }
      generation_qualifier_Type::ValueType& get_generation_qualifier() { return _generation_qualifier; }
      void set_generation_qualifier_Present(bool present = true) { _generation_qualifier_Present = present; }
      bool is_generation_qualifier_Present() const { return _generation_qualifier_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_surname != other._surname)
            return false;
         if (_given_name_Present != other._given_name_Present)
            return false;
         if (_given_name_Present && other._given_name_Present && _given_name != other._given_name)
            return false;
         if (_initials_Present != other._initials_Present)
            return false;
         if (_initials_Present && other._initials_Present && _initials != other._initials)
            return false;
         if (_generation_qualifier_Present != other._generation_qualifier_Present)
            return false;
         if (_generation_qualifier_Present && other._generation_qualifier_Present && _generation_qualifier != other._generation_qualifier)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      surname_Type::ValueType _surname;
      given_name_Type::ValueType _given_name;
      bool _given_name_Present;
      initials_Type::ValueType _initials;
      bool _initials_Present;
      generation_qualifier_Type::ValueType _generation_qualifier;
      bool _generation_qualifier_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   surname_Type _surname_Type;
   given_name_Type _given_name_Type;
   initials_Type _initials_Type;
   generation_qualifier_Type _generation_qualifier_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TeletexPersonalName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TeletexOrganizationalUnitName
class TeletexOrganizationalUnitName : public asn1::TeletexStringType
{
public:

   explicit TeletexOrganizationalUnitName()
   {
      addSize(1LL, k_ub_organizational_unit_name_length);
   }

   explicit TeletexOrganizationalUnitName(const ValueType& defaultValue, bool hasDefault) : asn1::TeletexStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_organizational_unit_name_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TeletexOrganizationalUnitName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TeletexOrganizationalUnitNames
class TeletexOrganizationalUnitNames : public asn1::SequenceOfType<asn1::generated::TeletexOrganizationalUnitName>
{
public:

   explicit TeletexOrganizationalUnitNames() : asn1::SequenceOfType<asn1::generated::TeletexOrganizationalUnitName>(new asn1::generated::TeletexOrganizationalUnitName)
   {
      setMinSize(1LL);
      setMaxSize(k_ub_organizational_units);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TeletexOrganizationalUnitNames"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PDSName
class PDSName : public asn1::PrintableStringType
{
public:

   explicit PDSName()
   {
      addSize(1LL, k_ub_pds_name_length);
   }

   explicit PDSName(const ValueType& defaultValue, bool hasDefault) : asn1::PrintableStringType(defaultValue, hasDefault)
   {
      addSize(1LL, k_ub_pds_name_length);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PDSName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PhysicalDeliveryCountryName
class PhysicalDeliveryCountryName : public asn1::ChoiceType
{
public:

   explicit PhysicalDeliveryCountryName()
   {
      _addChoice(&_x121_dcc_code_Type);
      _x121_dcc_code_Type.addSize(k_ub_country_name_numeric_length, k_ub_country_name_numeric_length);
#if defined(ASN1_ENABLE_XER)
      _x121_dcc_code_Type.setTypeName("x121-dcc-code");
#endif // ASN1_ENABLE_XER
      _addChoice(&_iso_3166_alpha2_code_Type);
      _iso_3166_alpha2_code_Type.addSize(k_ub_country_name_alpha_length, k_ub_country_name_alpha_length);
#if defined(ASN1_ENABLE_XER)
      _iso_3166_alpha2_code_Type.setTypeName("iso-3166-alpha2-code");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: x121-dcc-code
      void set_x121_dcc_code(const asn1::NumericStringType::ValueType& v) { _x121_dcc_code = v; _id = x121_dcc_code_ID; }
      void set_x121_dcc_code(asn1::NumericStringType::ValueType&& v) { _x121_dcc_code = std::move(v); _id = x121_dcc_code_ID; }
      const asn1::NumericStringType::ValueType& get_x121_dcc_code() const { assert(_id == x121_dcc_code_ID); return _x121_dcc_code; }
      asn1::NumericStringType::ValueType& get_x121_dcc_code() { assert(_id == x121_dcc_code_ID); return _x121_dcc_code; }
      bool has_x121_dcc_code_Choosen() const { return _id == x121_dcc_code_ID; }
      void choose_x121_dcc_code() { _id = x121_dcc_code_ID; }

      // Alternative: iso-3166-alpha2-code
      void set_iso_3166_alpha2_code(const asn1::PrintableStringType::ValueType& v) { _iso_3166_alpha2_code = v; _id = iso_3166_alpha2_code_ID; }
      void set_iso_3166_alpha2_code(asn1::PrintableStringType::ValueType&& v) { _iso_3166_alpha2_code = std::move(v); _id = iso_3166_alpha2_code_ID; }
      const asn1::PrintableStringType::ValueType& get_iso_3166_alpha2_code() const { assert(_id == iso_3166_alpha2_code_ID); return _iso_3166_alpha2_code; }
      asn1::PrintableStringType::ValueType& get_iso_3166_alpha2_code() { assert(_id == iso_3166_alpha2_code_ID); return _iso_3166_alpha2_code; }
      bool has_iso_3166_alpha2_code_Choosen() const { return _id == iso_3166_alpha2_code_ID; }
      void choose_iso_3166_alpha2_code() { _id = iso_3166_alpha2_code_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case x121_dcc_code_ID:
            if (_x121_dcc_code != other._x121_dcc_code)
               return false;
            break;
         case iso_3166_alpha2_code_ID:
            if (_iso_3166_alpha2_code != other._iso_3166_alpha2_code)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         x121_dcc_code_ID = 1,
         iso_3166_alpha2_code_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::NumericStringType::ValueType _x121_dcc_code;
      asn1::PrintableStringType::ValueType _iso_3166_alpha2_code;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::NumericStringType _x121_dcc_code_Type;
   asn1::PrintableStringType _iso_3166_alpha2_code_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PhysicalDeliveryCountryName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PostalCode
class PostalCode : public asn1::ChoiceType
{
public:

   explicit PostalCode()
   {
      _addChoice(&_numeric_code_Type);
      _numeric_code_Type.addSize(1LL, k_ub_postal_code_length);
#if defined(ASN1_ENABLE_XER)
      _numeric_code_Type.setTypeName("numeric-code");
#endif // ASN1_ENABLE_XER
      _addChoice(&_printable_code_Type);
      _printable_code_Type.addSize(1LL, k_ub_postal_code_length);
#if defined(ASN1_ENABLE_XER)
      _printable_code_Type.setTypeName("printable-code");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: numeric-code
      void set_numeric_code(const asn1::NumericStringType::ValueType& v) { _numeric_code = v; _id = numeric_code_ID; }
      void set_numeric_code(asn1::NumericStringType::ValueType&& v) { _numeric_code = std::move(v); _id = numeric_code_ID; }
      const asn1::NumericStringType::ValueType& get_numeric_code() const { assert(_id == numeric_code_ID); return _numeric_code; }
      asn1::NumericStringType::ValueType& get_numeric_code() { assert(_id == numeric_code_ID); return _numeric_code; }
      bool has_numeric_code_Choosen() const { return _id == numeric_code_ID; }
      void choose_numeric_code() { _id = numeric_code_ID; }

      // Alternative: printable-code
      void set_printable_code(const asn1::PrintableStringType::ValueType& v) { _printable_code = v; _id = printable_code_ID; }
      void set_printable_code(asn1::PrintableStringType::ValueType&& v) { _printable_code = std::move(v); _id = printable_code_ID; }
      const asn1::PrintableStringType::ValueType& get_printable_code() const { assert(_id == printable_code_ID); return _printable_code; }
      asn1::PrintableStringType::ValueType& get_printable_code() { assert(_id == printable_code_ID); return _printable_code; }
      bool has_printable_code_Choosen() const { return _id == printable_code_ID; }
      void choose_printable_code() { _id = printable_code_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case numeric_code_ID:
            if (_numeric_code != other._numeric_code)
               return false;
            break;
         case printable_code_ID:
            if (_printable_code != other._printable_code)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         numeric_code_ID = 1,
         printable_code_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::NumericStringType::ValueType _numeric_code;
      asn1::PrintableStringType::ValueType _printable_code;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::NumericStringType _numeric_code_Type;
   asn1::PrintableStringType _printable_code_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PostalCode"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PDSParameter
class PDSParameter : public asn1::SetType
{
public:

   explicit PDSParameter()
   {
      _printable_string_Type.addSize(1LL, k_ub_pds_parameter_length);
#if defined(ASN1_ENABLE_XER)
      _printable_string_Type.setTypeName("printable-string");
#endif // ASN1_ENABLE_XER
      _teletex_string_Type.addSize(1LL, k_ub_pds_parameter_length);
#if defined(ASN1_ENABLE_XER)
      _teletex_string_Type.setTypeName("teletex-string");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _printable_string_Present = false;
         _teletex_string_Present = false;
      }

      // Component: printable-string
      void set_printable_string(const asn1::PrintableStringType::ValueType& v) { _printable_string = v; _printable_string_Present = true; }
      void set_printable_string(asn1::PrintableStringType::ValueType&& v) { _printable_string = std::move(v); _printable_string_Present = true; }
      const asn1::PrintableStringType::ValueType& get_printable_string() const { return _printable_string; }
      asn1::PrintableStringType::ValueType& get_printable_string() { return _printable_string; }
      void set_printable_string_Present(bool present = true) { _printable_string_Present = present; }
      bool is_printable_string_Present() const { return _printable_string_Present; }


      // Component: teletex-string
      void set_teletex_string(const asn1::TeletexStringType::ValueType& v) { _teletex_string = v; _teletex_string_Present = true; }
      void set_teletex_string(asn1::TeletexStringType::ValueType&& v) { _teletex_string = std::move(v); _teletex_string_Present = true; }
      const asn1::TeletexStringType::ValueType& get_teletex_string() const { return _teletex_string; }
      asn1::TeletexStringType::ValueType& get_teletex_string() { return _teletex_string; }
      void set_teletex_string_Present(bool present = true) { _teletex_string_Present = present; }
      bool is_teletex_string_Present() const { return _teletex_string_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_printable_string_Present != other._printable_string_Present)
            return false;
         if (_printable_string_Present && other._printable_string_Present && _printable_string != other._printable_string)
            return false;
         if (_teletex_string_Present != other._teletex_string_Present)
            return false;
         if (_teletex_string_Present && other._teletex_string_Present && _teletex_string != other._teletex_string)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::PrintableStringType::ValueType _printable_string;
      bool _printable_string_Present;
      asn1::TeletexStringType::ValueType _teletex_string;
      bool _teletex_string_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::PrintableStringType _printable_string_Type;
   asn1::TeletexStringType _teletex_string_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PDSParameter"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PhysicalDeliveryOfficeName
class PhysicalDeliveryOfficeName : public asn1::generated::PDSParameter
{
public:

   explicit PhysicalDeliveryOfficeName()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PhysicalDeliveryOfficeName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PhysicalDeliveryOfficeNumber
class PhysicalDeliveryOfficeNumber : public asn1::generated::PDSParameter
{
public:

   explicit PhysicalDeliveryOfficeNumber()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PhysicalDeliveryOfficeNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtensionORAddressComponents
class ExtensionORAddressComponents : public asn1::generated::PDSParameter
{
public:

   explicit ExtensionORAddressComponents()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtensionORAddressComponents"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PhysicalDeliveryPersonalName
class PhysicalDeliveryPersonalName : public asn1::generated::PDSParameter
{
public:

   explicit PhysicalDeliveryPersonalName()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PhysicalDeliveryPersonalName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PhysicalDeliveryOrganizationName
class PhysicalDeliveryOrganizationName : public asn1::generated::PDSParameter
{
public:

   explicit PhysicalDeliveryOrganizationName()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PhysicalDeliveryOrganizationName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtensionPhysicalDeliveryAddressComponents
class ExtensionPhysicalDeliveryAddressComponents : public asn1::generated::PDSParameter
{
public:

   explicit ExtensionPhysicalDeliveryAddressComponents()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtensionPhysicalDeliveryAddressComponents"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: printable_address_INTERNAL__SequenceOfType_INTERNAL_asn1__PrintableStringType
class printable_address_INTERNAL__SequenceOfType_INTERNAL_asn1__PrintableStringType : public asn1::SequenceOfType<asn1::PrintableStringType>
{
public:

   explicit printable_address_INTERNAL__SequenceOfType_INTERNAL_asn1__PrintableStringType() : asn1::SequenceOfType<asn1::PrintableStringType>(new asn1::PrintableStringType)
   {
      innerType().addSize(1LL, k_ub_pds_parameter_length);
      setMinSize(1LL);
      setMaxSize(k_ub_pds_physical_address_lines);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "printable-address"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UnformattedPostalAddress
class UnformattedPostalAddress : public asn1::SetType
{
public:

   explicit UnformattedPostalAddress()
   {
#if defined(ASN1_ENABLE_XER)
      _printable_address_Type.setTypeName("printable-address");
#endif // ASN1_ENABLE_XER
      _teletex_string_Type.addSize(1LL, k_ub_unformatted_address_length);
#if defined(ASN1_ENABLE_XER)
      _teletex_string_Type.setTypeName("teletex-string");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef printable_address_INTERNAL__SequenceOfType_INTERNAL_asn1__PrintableStringType printable_address_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _printable_address_Present = false;
         _teletex_string_Present = false;
      }

      // Component: printable-address
      void set_printable_address(const printable_address_Type::ValueType& v) { _printable_address = v; _printable_address_Present = true; }
      void set_printable_address(printable_address_Type::ValueType&& v) { _printable_address = std::move(v); _printable_address_Present = true; }
      const printable_address_Type::ValueType& get_printable_address() const { return _printable_address; }
      printable_address_Type::ValueType& get_printable_address() { return _printable_address; }
      void set_printable_address_Present(bool present = true) { _printable_address_Present = present; }
      bool is_printable_address_Present() const { return _printable_address_Present; }


      // Component: teletex-string
      void set_teletex_string(const asn1::TeletexStringType::ValueType& v) { _teletex_string = v; _teletex_string_Present = true; }
      void set_teletex_string(asn1::TeletexStringType::ValueType&& v) { _teletex_string = std::move(v); _teletex_string_Present = true; }
      const asn1::TeletexStringType::ValueType& get_teletex_string() const { return _teletex_string; }
      asn1::TeletexStringType::ValueType& get_teletex_string() { return _teletex_string; }
      void set_teletex_string_Present(bool present = true) { _teletex_string_Present = present; }
      bool is_teletex_string_Present() const { return _teletex_string_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_printable_address_Present != other._printable_address_Present)
            return false;
         if (_printable_address_Present && other._printable_address_Present && _printable_address != other._printable_address)
            return false;
         if (_teletex_string_Present != other._teletex_string_Present)
            return false;
         if (_teletex_string_Present && other._teletex_string_Present && _teletex_string != other._teletex_string)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      printable_address_Type::ValueType _printable_address;
      bool _printable_address_Present;
      asn1::TeletexStringType::ValueType _teletex_string;
      bool _teletex_string_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   printable_address_Type _printable_address_Type;
   asn1::TeletexStringType _teletex_string_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UnformattedPostalAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: StreetAddress
class StreetAddress : public asn1::generated::PDSParameter
{
public:

   explicit StreetAddress()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "StreetAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PostOfficeBoxAddress
class PostOfficeBoxAddress : public asn1::generated::PDSParameter
{
public:

   explicit PostOfficeBoxAddress()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PostOfficeBoxAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PosteRestanteAddress
class PosteRestanteAddress : public asn1::generated::PDSParameter
{
public:

   explicit PosteRestanteAddress()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PosteRestanteAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UniquePostalName
class UniquePostalName : public asn1::generated::PDSParameter
{
public:

   explicit UniquePostalName()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UniquePostalName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: LocalPostalAttributes
class LocalPostalAttributes : public asn1::generated::PDSParameter
{
public:

   explicit LocalPostalAttributes()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "LocalPostalAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: number_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType
class number_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType : public asn1::TaggingType<asn1::NumericStringType>
{
public:

   explicit number_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType() : asn1::TaggingType<asn1::NumericStringType>(new asn1::NumericStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      innerType().addSize(1LL, k_ub_e163_4_number_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "number"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: sub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType
class sub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType : public asn1::TaggingType<asn1::NumericStringType>
{
public:

   explicit sub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType() : asn1::TaggingType<asn1::NumericStringType>(new asn1::NumericStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      innerType().addSize(1LL, k_ub_e163_4_sub_address_length);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "sub-address"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: e163_4_address_INTERNAL__SequenceType_numbernumber_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType_sub_addresssub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType
class e163_4_address_INTERNAL__SequenceType_numbernumber_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType_sub_addresssub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType : public asn1::SequenceType
{
public:

   explicit e163_4_address_INTERNAL__SequenceType_numbernumber_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType_sub_addresssub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType()
   {
#if defined(ASN1_ENABLE_XER)
      _number_Type.setTypeName("number");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _sub_address_Type.setTypeName("sub-address");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef number_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType number_Type;
   typedef sub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType sub_address_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _sub_address_Present = false;
      }

      // Component: number
      void set_number(const number_Type::ValueType& v) { _number = v;  }
      void set_number(number_Type::ValueType&& v) { _number = std::move(v);  }
      const number_Type::ValueType& get_number() const { return _number; }
      number_Type::ValueType& get_number() { return _number; }

      // Component: sub-address
      void set_sub_address(const sub_address_Type::ValueType& v) { _sub_address = v; _sub_address_Present = true; }
      void set_sub_address(sub_address_Type::ValueType&& v) { _sub_address = std::move(v); _sub_address_Present = true; }
      const sub_address_Type::ValueType& get_sub_address() const { return _sub_address; }
      sub_address_Type::ValueType& get_sub_address() { return _sub_address; }
      void set_sub_address_Present(bool present = true) { _sub_address_Present = present; }
      bool is_sub_address_Present() const { return _sub_address_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_number != other._number)
            return false;
         if (_sub_address_Present != other._sub_address_Present)
            return false;
         if (_sub_address_Present && other._sub_address_Present && _sub_address != other._sub_address)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      number_Type::ValueType _number;
      sub_address_Type::ValueType _sub_address;
      bool _sub_address_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   number_Type _number_Type;
   sub_address_Type _sub_address_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "sub-address"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pSelector_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType
class pSelector_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit pSelector_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "pSelector"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: sSelector_INTERNAL__EXPLICIT_1_INTERNAL_asn1__OctetStringType
class sSelector_INTERNAL__EXPLICIT_1_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit sSelector_INTERNAL__EXPLICIT_1_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "sSelector"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: tSelector_INTERNAL__EXPLICIT_2_INTERNAL_asn1__OctetStringType
class tSelector_INTERNAL__EXPLICIT_2_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit tSelector_INTERNAL__EXPLICIT_2_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "tSelector"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: nAddresses_INTERNAL__EXPLICIT_3_INTERNAL__SequenceOfType_INTERNAL_asn1__OctetStringType
class nAddresses_INTERNAL__EXPLICIT_3_INTERNAL__SequenceOfType_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::SetOfType<asn1::OctetStringType>>
{
public:

   explicit nAddresses_INTERNAL__EXPLICIT_3_INTERNAL__SequenceOfType_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::SetOfType<asn1::OctetStringType>>(new asn1::SetOfType<asn1::OctetStringType>(new asn1::OctetStringType))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "nAddresses"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PresentationAddress
class PresentationAddress : public asn1::SequenceType
{
public:

   explicit PresentationAddress()
   {
#if defined(ASN1_ENABLE_XER)
      _pSelector_Type.setTypeName("pSelector");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _sSelector_Type.setTypeName("sSelector");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _tSelector_Type.setTypeName("tSelector");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _nAddresses_Type.setTypeName("nAddresses");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef pSelector_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType pSelector_Type;
   typedef sSelector_INTERNAL__EXPLICIT_1_INTERNAL_asn1__OctetStringType sSelector_Type;
   typedef tSelector_INTERNAL__EXPLICIT_2_INTERNAL_asn1__OctetStringType tSelector_Type;
   typedef nAddresses_INTERNAL__EXPLICIT_3_INTERNAL__SequenceOfType_INTERNAL_asn1__OctetStringType nAddresses_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _pSelector_Present = false;
         _sSelector_Present = false;
         _tSelector_Present = false;
      }

      // Component: pSelector
      void set_pSelector(const pSelector_Type::ValueType& v) { _pSelector = v; _pSelector_Present = true; }
      void set_pSelector(pSelector_Type::ValueType&& v) { _pSelector = std::move(v); _pSelector_Present = true; }
      const pSelector_Type::ValueType& get_pSelector() const { return _pSelector; }
      pSelector_Type::ValueType& get_pSelector() { return _pSelector; }
      void set_pSelector_Present(bool present = true) { _pSelector_Present = present; }
      bool is_pSelector_Present() const { return _pSelector_Present; }


      // Component: sSelector
      void set_sSelector(const sSelector_Type::ValueType& v) { _sSelector = v; _sSelector_Present = true; }
      void set_sSelector(sSelector_Type::ValueType&& v) { _sSelector = std::move(v); _sSelector_Present = true; }
      const sSelector_Type::ValueType& get_sSelector() const { return _sSelector; }
      sSelector_Type::ValueType& get_sSelector() { return _sSelector; }
      void set_sSelector_Present(bool present = true) { _sSelector_Present = present; }
      bool is_sSelector_Present() const { return _sSelector_Present; }


      // Component: tSelector
      void set_tSelector(const tSelector_Type::ValueType& v) { _tSelector = v; _tSelector_Present = true; }
      void set_tSelector(tSelector_Type::ValueType&& v) { _tSelector = std::move(v); _tSelector_Present = true; }
      const tSelector_Type::ValueType& get_tSelector() const { return _tSelector; }
      tSelector_Type::ValueType& get_tSelector() { return _tSelector; }
      void set_tSelector_Present(bool present = true) { _tSelector_Present = present; }
      bool is_tSelector_Present() const { return _tSelector_Present; }


      // Component: nAddresses
      void set_nAddresses(const nAddresses_Type::ValueType& v) { _nAddresses = v;  }
      void set_nAddresses(nAddresses_Type::ValueType&& v) { _nAddresses = std::move(v);  }
      const nAddresses_Type::ValueType& get_nAddresses() const { return _nAddresses; }
      nAddresses_Type::ValueType& get_nAddresses() { return _nAddresses; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_pSelector_Present != other._pSelector_Present)
            return false;
         if (_pSelector_Present && other._pSelector_Present && _pSelector != other._pSelector)
            return false;
         if (_sSelector_Present != other._sSelector_Present)
            return false;
         if (_sSelector_Present && other._sSelector_Present && _sSelector != other._sSelector)
            return false;
         if (_tSelector_Present != other._tSelector_Present)
            return false;
         if (_tSelector_Present && other._tSelector_Present && _tSelector != other._tSelector)
            return false;
         if (_nAddresses != other._nAddresses)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      pSelector_Type::ValueType _pSelector;
      bool _pSelector_Present;
      sSelector_Type::ValueType _sSelector;
      bool _sSelector_Present;
      tSelector_Type::ValueType _tSelector;
      bool _tSelector_Present;
      nAddresses_Type::ValueType _nAddresses;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   pSelector_Type _pSelector_Type;
   sSelector_Type _sSelector_Type;
   tSelector_Type _tSelector_Type;
   nAddresses_Type _nAddresses_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PresentationAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: psap_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__PresentationAddress
class psap_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__PresentationAddress : public asn1::TaggingType<asn1::generated::PresentationAddress>
{
public:

   explicit psap_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__PresentationAddress() : asn1::TaggingType<asn1::generated::PresentationAddress>(new asn1::generated::PresentationAddress)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "nAddresses"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtendedNetworkAddress
class ExtendedNetworkAddress : public asn1::ChoiceType
{
public:

   explicit ExtendedNetworkAddress()
   {
      _addChoice(&_e163_4_address_Type);
#if defined(ASN1_ENABLE_XER)
      _e163_4_address_Type.setTypeName("e163-4-address");
#endif // ASN1_ENABLE_XER
      _addChoice(&_psap_address_Type);
#if defined(ASN1_ENABLE_XER)
      _psap_address_Type.setTypeName("psap-address");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef e163_4_address_INTERNAL__SequenceType_numbernumber_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NumericStringType_sub_addresssub_address_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NumericStringType e163_4_address_Type;
   typedef psap_address_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__PresentationAddress psap_address_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: e163-4-address
      void set_e163_4_address(const e163_4_address_Type::ValueType& v) { _e163_4_address = v; _id = e163_4_address_ID; }
      void set_e163_4_address(e163_4_address_Type::ValueType&& v) { _e163_4_address = std::move(v); _id = e163_4_address_ID; }
      const e163_4_address_Type::ValueType& get_e163_4_address() const { assert(_id == e163_4_address_ID); return _e163_4_address; }
      e163_4_address_Type::ValueType& get_e163_4_address() { assert(_id == e163_4_address_ID); return _e163_4_address; }
      bool has_e163_4_address_Choosen() const { return _id == e163_4_address_ID; }
      void choose_e163_4_address() { _id = e163_4_address_ID; }

      // Alternative: psap-address
      void set_psap_address(const psap_address_Type::ValueType& v) { _psap_address = v; _id = psap_address_ID; }
      void set_psap_address(psap_address_Type::ValueType&& v) { _psap_address = std::move(v); _id = psap_address_ID; }
      const psap_address_Type::ValueType& get_psap_address() const { assert(_id == psap_address_ID); return _psap_address; }
      psap_address_Type::ValueType& get_psap_address() { assert(_id == psap_address_ID); return _psap_address; }
      bool has_psap_address_Choosen() const { return _id == psap_address_ID; }
      void choose_psap_address() { _id = psap_address_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case e163_4_address_ID:
            if (_e163_4_address != other._e163_4_address)
               return false;
            break;
         case psap_address_ID:
            if (_psap_address != other._psap_address)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         e163_4_address_ID = 1,
         psap_address_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      e163_4_address_Type::ValueType _e163_4_address;
      psap_address_Type::ValueType _psap_address;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   e163_4_address_Type _e163_4_address_Type;
   psap_address_Type _psap_address_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtendedNetworkAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TerminalType
class TerminalType : public asn1::IntegerType
{
public:

   explicit TerminalType()
   {
      setMinValue(0ULL);
      setMaxValue(k_ub_integer_options);
   }

   explicit TerminalType(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
      setMinValue(0ULL);
      setMaxValue(k_ub_integer_options);
   }

   enum TerminalType_Value
   {
      k_telex = 3,
      k_teletex = 4,
      k_g3_facsimile = 5,
      k_g4_facsimile = 6,
      k_ia5_terminal = 7,
      k_videotex = 8,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TerminalType"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TeletexDomainDefinedAttribute
class TeletexDomainDefinedAttribute : public asn1::SequenceType
{
public:

   explicit TeletexDomainDefinedAttribute()
   {
      _type_Type.addSize(1LL, k_ub_domain_defined_attribute_type_length);
#if defined(ASN1_ENABLE_XER)
      _type_Type.setTypeName("type");
#endif // ASN1_ENABLE_XER
      _value_Type.addSize(1LL, k_ub_domain_defined_attribute_value_length);
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: type
      void set_type(const asn1::TeletexStringType::ValueType& v) { _type = v;  }
      void set_type(asn1::TeletexStringType::ValueType&& v) { _type = std::move(v);  }
      const asn1::TeletexStringType::ValueType& get_type() const { return _type; }
      asn1::TeletexStringType::ValueType& get_type() { return _type; }

      // Component: value
      void set_value(const asn1::TeletexStringType::ValueType& v) { _value = v;  }
      void set_value(asn1::TeletexStringType::ValueType&& v) { _value = std::move(v);  }
      const asn1::TeletexStringType::ValueType& get_value() const { return _value; }
      asn1::TeletexStringType::ValueType& get_value() { return _value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type != other._type)
            return false;
         if (_value != other._value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::TeletexStringType::ValueType _type;
      asn1::TeletexStringType::ValueType _value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::TeletexStringType _type_Type;
   asn1::TeletexStringType _value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TeletexDomainDefinedAttribute"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TeletexDomainDefinedAttributes
class TeletexDomainDefinedAttributes : public asn1::SequenceOfType<asn1::generated::TeletexDomainDefinedAttribute>
{
public:

   explicit TeletexDomainDefinedAttributes() : asn1::SequenceOfType<asn1::generated::TeletexDomainDefinedAttribute>(new asn1::generated::TeletexDomainDefinedAttribute)
   {
      setMinSize(1LL);
      setMaxSize(k_ub_domain_defined_attributes);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TeletexDomainDefinedAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyIdentifier
class KeyIdentifier : public asn1::OctetStringType
{
public:

   explicit KeyIdentifier()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit KeyIdentifier(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: keyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyIdentifier
class keyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyIdentifier : public asn1::TaggingType<asn1::generated::KeyIdentifier>
{
public:

   explicit keyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyIdentifier() : asn1::TaggingType<asn1::generated::KeyIdentifier>(new asn1::generated::KeyIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: value_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType
class value_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType : public asn1::TaggingType<asn1::AnyType>
{
public:

   explicit value_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType() : asn1::TaggingType<asn1::AnyType>(new asn1::AnyType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "value"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AnotherName
class AnotherName : public asn1::SequenceType
{
public:

   explicit AnotherName()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _type_id_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _type_id_Type.setTypeName("type-id");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef value_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType value_Type;

   class SequenceValue_Type
   {
   public:

      // Component: type-id
      void set_type_id(const asn1::ObjectIdentifierType::ValueType& v) { _type_id = v;  }
      void set_type_id(asn1::ObjectIdentifierType::ValueType&& v) { _type_id = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_type_id() const { return _type_id; }
      asn1::ObjectIdentifierType::ValueType& get_type_id() { return _type_id; }

      // Component: value
      void set_value(const value_Type::ValueType& v) { _value = v;  }
      void set_value(value_Type::ValueType&& v) { _value = std::move(v);  }
      const value_Type::ValueType& get_value() const { return _value; }
      value_Type::ValueType& get_value() { return _value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type_id != other._type_id)
            return false;
         if (_value != other._value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _type_id;
      value_Type::ValueType _value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _type_id_Type;
   value_Type _value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AnotherName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: otherName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AnotherName
class otherName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AnotherName : public asn1::TaggingType<asn1::generated::AnotherName>
{
public:

   explicit otherName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AnotherName() : asn1::TaggingType<asn1::generated::AnotherName>(new asn1::generated::AnotherName)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "value"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: rfc822Name_INTERNAL__NOTAG_1_INTERNAL_asn1__IA5StringType
class rfc822Name_INTERNAL__NOTAG_1_INTERNAL_asn1__IA5StringType : public asn1::TaggingType<asn1::IA5StringType>
{
public:

   explicit rfc822Name_INTERNAL__NOTAG_1_INTERNAL_asn1__IA5StringType() : asn1::TaggingType<asn1::IA5StringType>(new asn1::IA5StringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "rfc822Name"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: dNSName_INTERNAL__NOTAG_2_INTERNAL_asn1__IA5StringType
class dNSName_INTERNAL__NOTAG_2_INTERNAL_asn1__IA5StringType : public asn1::TaggingType<asn1::IA5StringType>
{
public:

   explicit dNSName_INTERNAL__NOTAG_2_INTERNAL_asn1__IA5StringType() : asn1::TaggingType<asn1::IA5StringType>(new asn1::IA5StringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "dNSName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: x400Address_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__ORAddress
class x400Address_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__ORAddress : public asn1::TaggingType<asn1::generated::ORAddress>
{
public:

   explicit x400Address_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__ORAddress() : asn1::TaggingType<asn1::generated::ORAddress>(new asn1::generated::ORAddress)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "x400Address"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: directoryName_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__Name
class directoryName_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__Name : public asn1::TaggingType<asn1::generated::Name>
{
public:

   explicit directoryName_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__Name() : asn1::TaggingType<asn1::generated::Name>(new asn1::generated::Name)
   {
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "directoryName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: nameAssigner_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DirectoryString
class nameAssigner_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DirectoryString : public asn1::TaggingType<asn1::generated::DirectoryString>
{
public:

   explicit nameAssigner_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DirectoryString() : asn1::TaggingType<asn1::generated::DirectoryString>(new asn1::generated::DirectoryString)
   {
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "nameAssigner"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: partyName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DirectoryString
class partyName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DirectoryString : public asn1::TaggingType<asn1::generated::DirectoryString>
{
public:

   explicit partyName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DirectoryString() : asn1::TaggingType<asn1::generated::DirectoryString>(new asn1::generated::DirectoryString)
   {
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "partyName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EDIPartyName
class EDIPartyName : public asn1::SequenceType
{
public:

   explicit EDIPartyName()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _nameAssigner_Type.setTypeName("nameAssigner");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _partyName_Type.setTypeName("partyName");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef nameAssigner_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DirectoryString nameAssigner_Type;
   typedef partyName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DirectoryString partyName_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _nameAssigner_Present = false;
      }

      // Component: nameAssigner
      void set_nameAssigner(const nameAssigner_Type::ValueType& v) { _nameAssigner = v; _nameAssigner_Present = true; }
      void set_nameAssigner(nameAssigner_Type::ValueType&& v) { _nameAssigner = std::move(v); _nameAssigner_Present = true; }
      const nameAssigner_Type::ValueType& get_nameAssigner() const { return _nameAssigner; }
      nameAssigner_Type::ValueType& get_nameAssigner() { return _nameAssigner; }
      void set_nameAssigner_Present(bool present = true) { _nameAssigner_Present = present; }
      bool is_nameAssigner_Present() const { return _nameAssigner_Present; }


      // Component: partyName
      void set_partyName(const partyName_Type::ValueType& v) { _partyName = v;  }
      void set_partyName(partyName_Type::ValueType&& v) { _partyName = std::move(v);  }
      const partyName_Type::ValueType& get_partyName() const { return _partyName; }
      partyName_Type::ValueType& get_partyName() { return _partyName; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_nameAssigner_Present != other._nameAssigner_Present)
            return false;
         if (_nameAssigner_Present && other._nameAssigner_Present && _nameAssigner != other._nameAssigner)
            return false;
         if (_partyName != other._partyName)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      nameAssigner_Type::ValueType _nameAssigner;
      bool _nameAssigner_Present;
      partyName_Type::ValueType _partyName;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   nameAssigner_Type _nameAssigner_Type;
   partyName_Type _partyName_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EDIPartyName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ediPartyName_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__EDIPartyName
class ediPartyName_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__EDIPartyName : public asn1::TaggingType<asn1::generated::EDIPartyName>
{
public:

   explicit ediPartyName_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__EDIPartyName() : asn1::TaggingType<asn1::generated::EDIPartyName>(new asn1::generated::EDIPartyName)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(5);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "partyName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: uniformResourceIdentifier_INTERNAL__NOTAG_6_INTERNAL_asn1__IA5StringType
class uniformResourceIdentifier_INTERNAL__NOTAG_6_INTERNAL_asn1__IA5StringType : public asn1::TaggingType<asn1::IA5StringType>
{
public:

   explicit uniformResourceIdentifier_INTERNAL__NOTAG_6_INTERNAL_asn1__IA5StringType() : asn1::TaggingType<asn1::IA5StringType>(new asn1::IA5StringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(6);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "uniformResourceIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: iPAddress_INTERNAL__NOTAG_7_INTERNAL_asn1__OctetStringType
class iPAddress_INTERNAL__NOTAG_7_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit iPAddress_INTERNAL__NOTAG_7_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "iPAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: registeredID_INTERNAL__NOTAG_8_INTERNAL_asn1__ObjectIdentifierType
class registeredID_INTERNAL__NOTAG_8_INTERNAL_asn1__ObjectIdentifierType : public asn1::TaggingType<asn1::ObjectIdentifierType>
{
public:

   explicit registeredID_INTERNAL__NOTAG_8_INTERNAL_asn1__ObjectIdentifierType() : asn1::TaggingType<asn1::ObjectIdentifierType>(new asn1::ObjectIdentifierType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(8);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "registeredID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: GeneralName
class GeneralName : public asn1::ChoiceType
{
public:

   explicit GeneralName()
   {
      _addChoice(&_otherName_Type);
#if defined(ASN1_ENABLE_XER)
      _otherName_Type.setTypeName("otherName");
#endif // ASN1_ENABLE_XER
      _addChoice(&_rfc822Name_Type);
#if defined(ASN1_ENABLE_XER)
      _rfc822Name_Type.setTypeName("rfc822Name");
#endif // ASN1_ENABLE_XER
      _addChoice(&_dNSName_Type);
#if defined(ASN1_ENABLE_XER)
      _dNSName_Type.setTypeName("dNSName");
#endif // ASN1_ENABLE_XER
      _addChoice(&_x400Address_Type);
#if defined(ASN1_ENABLE_XER)
      _x400Address_Type.setTypeName("x400Address");
#endif // ASN1_ENABLE_XER
      _addChoice(&_directoryName_Type);
#if defined(ASN1_ENABLE_XER)
      _directoryName_Type.setTypeName("directoryName");
#endif // ASN1_ENABLE_XER
      _addChoice(&_ediPartyName_Type);
#if defined(ASN1_ENABLE_XER)
      _ediPartyName_Type.setTypeName("ediPartyName");
#endif // ASN1_ENABLE_XER
      _addChoice(&_uniformResourceIdentifier_Type);
#if defined(ASN1_ENABLE_XER)
      _uniformResourceIdentifier_Type.setTypeName("uniformResourceIdentifier");
#endif // ASN1_ENABLE_XER
      _addChoice(&_iPAddress_Type);
#if defined(ASN1_ENABLE_XER)
      _iPAddress_Type.setTypeName("iPAddress");
#endif // ASN1_ENABLE_XER
      _addChoice(&_registeredID_Type);
#if defined(ASN1_ENABLE_XER)
      _registeredID_Type.setTypeName("registeredID");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef otherName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AnotherName otherName_Type;
   typedef rfc822Name_INTERNAL__NOTAG_1_INTERNAL_asn1__IA5StringType rfc822Name_Type;
   typedef dNSName_INTERNAL__NOTAG_2_INTERNAL_asn1__IA5StringType dNSName_Type;
   typedef x400Address_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__ORAddress x400Address_Type;
   typedef directoryName_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__Name directoryName_Type;
   typedef ediPartyName_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__EDIPartyName ediPartyName_Type;
   typedef uniformResourceIdentifier_INTERNAL__NOTAG_6_INTERNAL_asn1__IA5StringType uniformResourceIdentifier_Type;
   typedef iPAddress_INTERNAL__NOTAG_7_INTERNAL_asn1__OctetStringType iPAddress_Type;
   typedef registeredID_INTERNAL__NOTAG_8_INTERNAL_asn1__ObjectIdentifierType registeredID_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: otherName
      void set_otherName(const otherName_Type::ValueType& v) { _otherName = v; _id = otherName_ID; }
      void set_otherName(otherName_Type::ValueType&& v) { _otherName = std::move(v); _id = otherName_ID; }
      const otherName_Type::ValueType& get_otherName() const { assert(_id == otherName_ID); return _otherName; }
      otherName_Type::ValueType& get_otherName() { assert(_id == otherName_ID); return _otherName; }
      bool has_otherName_Choosen() const { return _id == otherName_ID; }
      void choose_otherName() { _id = otherName_ID; }

      // Alternative: rfc822Name
      void set_rfc822Name(const rfc822Name_Type::ValueType& v) { _rfc822Name = v; _id = rfc822Name_ID; }
      void set_rfc822Name(rfc822Name_Type::ValueType&& v) { _rfc822Name = std::move(v); _id = rfc822Name_ID; }
      const rfc822Name_Type::ValueType& get_rfc822Name() const { assert(_id == rfc822Name_ID); return _rfc822Name; }
      rfc822Name_Type::ValueType& get_rfc822Name() { assert(_id == rfc822Name_ID); return _rfc822Name; }
      bool has_rfc822Name_Choosen() const { return _id == rfc822Name_ID; }
      void choose_rfc822Name() { _id = rfc822Name_ID; }

      // Alternative: dNSName
      void set_dNSName(const dNSName_Type::ValueType& v) { _dNSName = v; _id = dNSName_ID; }
      void set_dNSName(dNSName_Type::ValueType&& v) { _dNSName = std::move(v); _id = dNSName_ID; }
      const dNSName_Type::ValueType& get_dNSName() const { assert(_id == dNSName_ID); return _dNSName; }
      dNSName_Type::ValueType& get_dNSName() { assert(_id == dNSName_ID); return _dNSName; }
      bool has_dNSName_Choosen() const { return _id == dNSName_ID; }
      void choose_dNSName() { _id = dNSName_ID; }

      // Alternative: x400Address
      void set_x400Address(const x400Address_Type::ValueType& v) { _x400Address = v; _id = x400Address_ID; }
      void set_x400Address(x400Address_Type::ValueType&& v) { _x400Address = std::move(v); _id = x400Address_ID; }
      const x400Address_Type::ValueType& get_x400Address() const { assert(_id == x400Address_ID); return _x400Address; }
      x400Address_Type::ValueType& get_x400Address() { assert(_id == x400Address_ID); return _x400Address; }
      bool has_x400Address_Choosen() const { return _id == x400Address_ID; }
      void choose_x400Address() { _id = x400Address_ID; }

      // Alternative: directoryName
      void set_directoryName(const directoryName_Type::ValueType& v) { _directoryName = v; _id = directoryName_ID; }
      void set_directoryName(directoryName_Type::ValueType&& v) { _directoryName = std::move(v); _id = directoryName_ID; }
      const directoryName_Type::ValueType& get_directoryName() const { assert(_id == directoryName_ID); return _directoryName; }
      directoryName_Type::ValueType& get_directoryName() { assert(_id == directoryName_ID); return _directoryName; }
      bool has_directoryName_Choosen() const { return _id == directoryName_ID; }
      void choose_directoryName() { _id = directoryName_ID; }

      // Alternative: ediPartyName
      void set_ediPartyName(const ediPartyName_Type::ValueType& v) { _ediPartyName = v; _id = ediPartyName_ID; }
      void set_ediPartyName(ediPartyName_Type::ValueType&& v) { _ediPartyName = std::move(v); _id = ediPartyName_ID; }
      const ediPartyName_Type::ValueType& get_ediPartyName() const { assert(_id == ediPartyName_ID); return _ediPartyName; }
      ediPartyName_Type::ValueType& get_ediPartyName() { assert(_id == ediPartyName_ID); return _ediPartyName; }
      bool has_ediPartyName_Choosen() const { return _id == ediPartyName_ID; }
      void choose_ediPartyName() { _id = ediPartyName_ID; }

      // Alternative: uniformResourceIdentifier
      void set_uniformResourceIdentifier(const uniformResourceIdentifier_Type::ValueType& v) { _uniformResourceIdentifier = v; _id = uniformResourceIdentifier_ID; }
      void set_uniformResourceIdentifier(uniformResourceIdentifier_Type::ValueType&& v) { _uniformResourceIdentifier = std::move(v); _id = uniformResourceIdentifier_ID; }
      const uniformResourceIdentifier_Type::ValueType& get_uniformResourceIdentifier() const { assert(_id == uniformResourceIdentifier_ID); return _uniformResourceIdentifier; }
      uniformResourceIdentifier_Type::ValueType& get_uniformResourceIdentifier() { assert(_id == uniformResourceIdentifier_ID); return _uniformResourceIdentifier; }
      bool has_uniformResourceIdentifier_Choosen() const { return _id == uniformResourceIdentifier_ID; }
      void choose_uniformResourceIdentifier() { _id = uniformResourceIdentifier_ID; }

      // Alternative: iPAddress
      void set_iPAddress(const iPAddress_Type::ValueType& v) { _iPAddress = v; _id = iPAddress_ID; }
      void set_iPAddress(iPAddress_Type::ValueType&& v) { _iPAddress = std::move(v); _id = iPAddress_ID; }
      const iPAddress_Type::ValueType& get_iPAddress() const { assert(_id == iPAddress_ID); return _iPAddress; }
      iPAddress_Type::ValueType& get_iPAddress() { assert(_id == iPAddress_ID); return _iPAddress; }
      bool has_iPAddress_Choosen() const { return _id == iPAddress_ID; }
      void choose_iPAddress() { _id = iPAddress_ID; }

      // Alternative: registeredID
      void set_registeredID(const registeredID_Type::ValueType& v) { _registeredID = v; _id = registeredID_ID; }
      void set_registeredID(registeredID_Type::ValueType&& v) { _registeredID = std::move(v); _id = registeredID_ID; }
      const registeredID_Type::ValueType& get_registeredID() const { assert(_id == registeredID_ID); return _registeredID; }
      registeredID_Type::ValueType& get_registeredID() { assert(_id == registeredID_ID); return _registeredID; }
      bool has_registeredID_Choosen() const { return _id == registeredID_ID; }
      void choose_registeredID() { _id = registeredID_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case otherName_ID:
            if (_otherName != other._otherName)
               return false;
            break;
         case rfc822Name_ID:
            if (_rfc822Name != other._rfc822Name)
               return false;
            break;
         case dNSName_ID:
            if (_dNSName != other._dNSName)
               return false;
            break;
         case x400Address_ID:
            if (_x400Address != other._x400Address)
               return false;
            break;
         case directoryName_ID:
            if (_directoryName != other._directoryName)
               return false;
            break;
         case ediPartyName_ID:
            if (_ediPartyName != other._ediPartyName)
               return false;
            break;
         case uniformResourceIdentifier_ID:
            if (_uniformResourceIdentifier != other._uniformResourceIdentifier)
               return false;
            break;
         case iPAddress_ID:
            if (_iPAddress != other._iPAddress)
               return false;
            break;
         case registeredID_ID:
            if (_registeredID != other._registeredID)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         otherName_ID = 1,
         rfc822Name_ID = 2,
         dNSName_ID = 3,
         x400Address_ID = 4,
         directoryName_ID = 5,
         ediPartyName_ID = 6,
         uniformResourceIdentifier_ID = 7,
         iPAddress_ID = 8,
         registeredID_ID = 9,
         __VALUE_NOT_DEFINED__ = -1
      };

      otherName_Type::ValueType _otherName;
      rfc822Name_Type::ValueType _rfc822Name;
      dNSName_Type::ValueType _dNSName;
      x400Address_Type::ValueType _x400Address;
      directoryName_Type::ValueType _directoryName;
      ediPartyName_Type::ValueType _ediPartyName;
      uniformResourceIdentifier_Type::ValueType _uniformResourceIdentifier;
      iPAddress_Type::ValueType _iPAddress;
      registeredID_Type::ValueType _registeredID;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   otherName_Type _otherName_Type;
   rfc822Name_Type _rfc822Name_Type;
   dNSName_Type _dNSName_Type;
   x400Address_Type _x400Address_Type;
   directoryName_Type _directoryName_Type;
   ediPartyName_Type _ediPartyName_Type;
   uniformResourceIdentifier_Type _uniformResourceIdentifier_Type;
   iPAddress_Type _iPAddress_Type;
   registeredID_Type _registeredID_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "GeneralName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: GeneralNames
class GeneralNames : public asn1::SequenceOfType<asn1::generated::GeneralName>
{
public:

   explicit GeneralNames() : asn1::SequenceOfType<asn1::generated::GeneralName>(new asn1::generated::GeneralName)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "GeneralNames"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: authorityCertIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames
class authorityCertIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames : public asn1::TaggingType<asn1::generated::GeneralNames>
{
public:

   explicit authorityCertIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames() : asn1::TaggingType<asn1::generated::GeneralNames>(new asn1::generated::GeneralNames)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "registeredID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: authorityCertSerialNumber_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertificateSerialNumber
class authorityCertSerialNumber_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertificateSerialNumber : public asn1::TaggingType<asn1::generated::CertificateSerialNumber>
{
public:

   explicit authorityCertSerialNumber_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertificateSerialNumber() : asn1::TaggingType<asn1::generated::CertificateSerialNumber>(new asn1::generated::CertificateSerialNumber)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "authorityCertSerialNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AuthorityKeyIdentifier
class AuthorityKeyIdentifier : public asn1::SequenceType
{
public:

   explicit AuthorityKeyIdentifier()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _keyIdentifier_Type.setTypeName("keyIdentifier");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _authorityCertIssuer_Type.setTypeName("authorityCertIssuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _authorityCertSerialNumber_Type.setTypeName("authorityCertSerialNumber");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef keyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyIdentifier keyIdentifier_Type;
   typedef authorityCertIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames authorityCertIssuer_Type;
   typedef authorityCertSerialNumber_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertificateSerialNumber authorityCertSerialNumber_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _keyIdentifier_Present = false;
         _authorityCertIssuer_Present = false;
         _authorityCertSerialNumber_Present = false;
      }

      // Component: keyIdentifier
      void set_keyIdentifier(const keyIdentifier_Type::ValueType& v) { _keyIdentifier = v; _keyIdentifier_Present = true; }
      void set_keyIdentifier(keyIdentifier_Type::ValueType&& v) { _keyIdentifier = std::move(v); _keyIdentifier_Present = true; }
      const keyIdentifier_Type::ValueType& get_keyIdentifier() const { return _keyIdentifier; }
      keyIdentifier_Type::ValueType& get_keyIdentifier() { return _keyIdentifier; }
      void set_keyIdentifier_Present(bool present = true) { _keyIdentifier_Present = present; }
      bool is_keyIdentifier_Present() const { return _keyIdentifier_Present; }


      // Component: authorityCertIssuer
      void set_authorityCertIssuer(const authorityCertIssuer_Type::ValueType& v) { _authorityCertIssuer = v; _authorityCertIssuer_Present = true; }
      void set_authorityCertIssuer(authorityCertIssuer_Type::ValueType&& v) { _authorityCertIssuer = std::move(v); _authorityCertIssuer_Present = true; }
      const authorityCertIssuer_Type::ValueType& get_authorityCertIssuer() const { return _authorityCertIssuer; }
      authorityCertIssuer_Type::ValueType& get_authorityCertIssuer() { return _authorityCertIssuer; }
      void set_authorityCertIssuer_Present(bool present = true) { _authorityCertIssuer_Present = present; }
      bool is_authorityCertIssuer_Present() const { return _authorityCertIssuer_Present; }


      // Component: authorityCertSerialNumber
      void set_authorityCertSerialNumber(const authorityCertSerialNumber_Type::ValueType& v) { _authorityCertSerialNumber = v; _authorityCertSerialNumber_Present = true; }
      void set_authorityCertSerialNumber(authorityCertSerialNumber_Type::ValueType&& v) { _authorityCertSerialNumber = std::move(v); _authorityCertSerialNumber_Present = true; }
      const authorityCertSerialNumber_Type::ValueType& get_authorityCertSerialNumber() const { return _authorityCertSerialNumber; }
      authorityCertSerialNumber_Type::ValueType& get_authorityCertSerialNumber() { return _authorityCertSerialNumber; }
      void set_authorityCertSerialNumber_Present(bool present = true) { _authorityCertSerialNumber_Present = present; }
      bool is_authorityCertSerialNumber_Present() const { return _authorityCertSerialNumber_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_keyIdentifier_Present != other._keyIdentifier_Present)
            return false;
         if (_keyIdentifier_Present && other._keyIdentifier_Present && _keyIdentifier != other._keyIdentifier)
            return false;
         if (_authorityCertIssuer_Present != other._authorityCertIssuer_Present)
            return false;
         if (_authorityCertIssuer_Present && other._authorityCertIssuer_Present && _authorityCertIssuer != other._authorityCertIssuer)
            return false;
         if (_authorityCertSerialNumber_Present != other._authorityCertSerialNumber_Present)
            return false;
         if (_authorityCertSerialNumber_Present && other._authorityCertSerialNumber_Present && _authorityCertSerialNumber != other._authorityCertSerialNumber)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      keyIdentifier_Type::ValueType _keyIdentifier;
      bool _keyIdentifier_Present;
      authorityCertIssuer_Type::ValueType _authorityCertIssuer;
      bool _authorityCertIssuer_Present;
      authorityCertSerialNumber_Type::ValueType _authorityCertSerialNumber;
      bool _authorityCertSerialNumber_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   keyIdentifier_Type _keyIdentifier_Type;
   authorityCertIssuer_Type _authorityCertIssuer_Type;
   authorityCertSerialNumber_Type _authorityCertSerialNumber_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AuthorityKeyIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SubjectKeyIdentifier
class SubjectKeyIdentifier : public asn1::generated::KeyIdentifier
{
public:

   explicit SubjectKeyIdentifier()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SubjectKeyIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyUsage
class KeyUsage : public asn1::BitStringType
{
public:

   explicit KeyUsage()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit KeyUsage(const ValueType& defaultValue, bool hasDefault) : asn1::BitStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum KeyUsage_Value
   {
      k_digitalSignature = 0,
      k_nonRepudiation = 1,
      k_keyEncipherment = 2,
      k_dataEncipherment = 3,
      k_keyAgreement = 4,
      k_keyCertSign = 5,
      k_cRLSign = 6,
      k_encipherOnly = 7,
      k_decipherOnly = 8,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyUsage"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType
class notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType : public asn1::TaggingType<asn1::GeneralizedTimeType>
{
public:

   explicit notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType() : asn1::TaggingType<asn1::GeneralizedTimeType>(new asn1::GeneralizedTimeType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "notBefore"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__GeneralizedTimeType
class notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__GeneralizedTimeType : public asn1::TaggingType<asn1::GeneralizedTimeType>
{
public:

   explicit notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__GeneralizedTimeType() : asn1::TaggingType<asn1::GeneralizedTimeType>(new asn1::GeneralizedTimeType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "notAfter"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PrivateKeyUsagePeriod
class PrivateKeyUsagePeriod : public asn1::SequenceType
{
public:

   explicit PrivateKeyUsagePeriod()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _notBefore_Type.setTypeName("notBefore");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _notAfter_Type.setTypeName("notAfter");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType notBefore_Type;
   typedef notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__GeneralizedTimeType notAfter_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _notBefore_Present = false;
         _notAfter_Present = false;
      }

      // Component: notBefore
      void set_notBefore(const notBefore_Type::ValueType& v) { _notBefore = v; _notBefore_Present = true; }
      void set_notBefore(notBefore_Type::ValueType&& v) { _notBefore = std::move(v); _notBefore_Present = true; }
      const notBefore_Type::ValueType& get_notBefore() const { return _notBefore; }
      notBefore_Type::ValueType& get_notBefore() { return _notBefore; }
      void set_notBefore_Present(bool present = true) { _notBefore_Present = present; }
      bool is_notBefore_Present() const { return _notBefore_Present; }


      // Component: notAfter
      void set_notAfter(const notAfter_Type::ValueType& v) { _notAfter = v; _notAfter_Present = true; }
      void set_notAfter(notAfter_Type::ValueType&& v) { _notAfter = std::move(v); _notAfter_Present = true; }
      const notAfter_Type::ValueType& get_notAfter() const { return _notAfter; }
      notAfter_Type::ValueType& get_notAfter() { return _notAfter; }
      void set_notAfter_Present(bool present = true) { _notAfter_Present = present; }
      bool is_notAfter_Present() const { return _notAfter_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_notBefore_Present != other._notBefore_Present)
            return false;
         if (_notBefore_Present && other._notBefore_Present && _notBefore != other._notBefore)
            return false;
         if (_notAfter_Present != other._notAfter_Present)
            return false;
         if (_notAfter_Present && other._notAfter_Present && _notAfter != other._notAfter)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      notBefore_Type::ValueType _notBefore;
      bool _notBefore_Present;
      notAfter_Type::ValueType _notAfter;
      bool _notAfter_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   notBefore_Type _notBefore_Type;
   notAfter_Type _notAfter_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PrivateKeyUsagePeriod"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PolicyQualifierId
class PolicyQualifierId : public asn1::ObjectIdentifierType
{
public:

   explicit PolicyQualifierId()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit PolicyQualifierId(const ValueType& defaultValue, bool hasDefault) : asn1::ObjectIdentifierType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PolicyQualifierId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PolicyQualifierInfo
class PolicyQualifierInfo : public asn1::SequenceType
{
public:

   explicit PolicyQualifierInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _policyQualifierId_Type.setTypeName("policyQualifierId");
#endif // ASN1_ENABLE_XER
      _qualifier_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _qualifier_Type.setTypeName("qualifier");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: policyQualifierId
      void set_policyQualifierId(const asn1::generated::PolicyQualifierId::ValueType& v) { _policyQualifierId = v;  }
      void set_policyQualifierId(asn1::generated::PolicyQualifierId::ValueType&& v) { _policyQualifierId = std::move(v);  }
      const asn1::generated::PolicyQualifierId::ValueType& get_policyQualifierId() const { return _policyQualifierId; }
      asn1::generated::PolicyQualifierId::ValueType& get_policyQualifierId() { return _policyQualifierId; }

      // Component: qualifier
      void set_qualifier(const asn1::AnyType::ValueType& v) { _qualifier = v;  }
      void set_qualifier(asn1::AnyType::ValueType&& v) { _qualifier = std::move(v);  }
      const asn1::AnyType::ValueType& get_qualifier() const { return _qualifier; }
      asn1::AnyType::ValueType& get_qualifier() { return _qualifier; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_policyQualifierId != other._policyQualifierId)
            return false;
         if (_qualifier != other._qualifier)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PolicyQualifierId::ValueType _policyQualifierId;
      asn1::AnyType::ValueType _qualifier;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PolicyQualifierId _policyQualifierId_Type;
   asn1::AnyType _qualifier_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PolicyQualifierInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: policyQualifiers_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PolicyQualifierInfo
class policyQualifiers_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PolicyQualifierInfo : public asn1::SequenceOfType<asn1::generated::PolicyQualifierInfo>
{
public:

   explicit policyQualifiers_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PolicyQualifierInfo() : asn1::SequenceOfType<asn1::generated::PolicyQualifierInfo>(new asn1::generated::PolicyQualifierInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "policyQualifiers"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertPolicyId
class CertPolicyId : public asn1::ObjectIdentifierType
{
public:

   explicit CertPolicyId()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit CertPolicyId(const ValueType& defaultValue, bool hasDefault) : asn1::ObjectIdentifierType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertPolicyId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PolicyInformation
class PolicyInformation : public asn1::SequenceType
{
public:

   explicit PolicyInformation()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _policyIdentifier_Type.setTypeName("policyIdentifier");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _policyQualifiers_Type.setTypeName("policyQualifiers");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef policyQualifiers_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PolicyQualifierInfo policyQualifiers_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _policyQualifiers_Present = false;
      }

      // Component: policyIdentifier
      void set_policyIdentifier(const asn1::generated::CertPolicyId::ValueType& v) { _policyIdentifier = v;  }
      void set_policyIdentifier(asn1::generated::CertPolicyId::ValueType&& v) { _policyIdentifier = std::move(v);  }
      const asn1::generated::CertPolicyId::ValueType& get_policyIdentifier() const { return _policyIdentifier; }
      asn1::generated::CertPolicyId::ValueType& get_policyIdentifier() { return _policyIdentifier; }

      // Component: policyQualifiers
      void set_policyQualifiers(const policyQualifiers_Type::ValueType& v) { _policyQualifiers = v; _policyQualifiers_Present = true; }
      void set_policyQualifiers(policyQualifiers_Type::ValueType&& v) { _policyQualifiers = std::move(v); _policyQualifiers_Present = true; }
      const policyQualifiers_Type::ValueType& get_policyQualifiers() const { return _policyQualifiers; }
      policyQualifiers_Type::ValueType& get_policyQualifiers() { return _policyQualifiers; }
      void set_policyQualifiers_Present(bool present = true) { _policyQualifiers_Present = present; }
      bool is_policyQualifiers_Present() const { return _policyQualifiers_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_policyIdentifier != other._policyIdentifier)
            return false;
         if (_policyQualifiers_Present != other._policyQualifiers_Present)
            return false;
         if (_policyQualifiers_Present && other._policyQualifiers_Present && _policyQualifiers != other._policyQualifiers)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CertPolicyId::ValueType _policyIdentifier;
      policyQualifiers_Type::ValueType _policyQualifiers;
      bool _policyQualifiers_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertPolicyId _policyIdentifier_Type;
   policyQualifiers_Type _policyQualifiers_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PolicyInformation"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificatePolicies
class CertificatePolicies : public asn1::SequenceOfType<asn1::generated::PolicyInformation>
{
public:

   explicit CertificatePolicies() : asn1::SequenceOfType<asn1::generated::PolicyInformation>(new asn1::generated::PolicyInformation)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificatePolicies"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CPSuri
class CPSuri : public asn1::IA5StringType
{
public:

   explicit CPSuri()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit CPSuri(const ValueType& defaultValue, bool hasDefault) : asn1::IA5StringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CPSuri"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: noticeNumbers_INTERNAL__SequenceOfType_INTERNAL_asn1__IntegerType
class noticeNumbers_INTERNAL__SequenceOfType_INTERNAL_asn1__IntegerType : public asn1::SequenceOfType<asn1::IntegerType>
{
public:

   explicit noticeNumbers_INTERNAL__SequenceOfType_INTERNAL_asn1__IntegerType() : asn1::SequenceOfType<asn1::IntegerType>(new asn1::IntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "noticeNumbers"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DisplayText
class DisplayText : public asn1::ChoiceType
{
public:

   explicit DisplayText()
   {
      _addChoice(&_ia5String_Type);
      _ia5String_Type.addSize(1LL, 200LL);
      _ia5String_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _ia5String_Type.setTypeName("ia5String");
#endif // ASN1_ENABLE_XER
      _addChoice(&_visibleString_Type);
#if defined(ASN1_ENABLE_XER)
      _visibleString_Type.setTypeName("visibleString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_bmpString_Type);
#if defined(ASN1_ENABLE_XER)
      _bmpString_Type.setTypeName("bmpString");
#endif // ASN1_ENABLE_XER
      _addChoice(&_utf8String_Type);
#if defined(ASN1_ENABLE_XER)
      _utf8String_Type.setTypeName("utf8String");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: ia5String
      void set_ia5String(const asn1::IA5StringType::ValueType& v) { _ia5String = v; _id = ia5String_ID; }
      void set_ia5String(asn1::IA5StringType::ValueType&& v) { _ia5String = std::move(v); _id = ia5String_ID; }
      const asn1::IA5StringType::ValueType& get_ia5String() const { assert(_id == ia5String_ID); return _ia5String; }
      asn1::IA5StringType::ValueType& get_ia5String() { assert(_id == ia5String_ID); return _ia5String; }
      bool has_ia5String_Choosen() const { return _id == ia5String_ID; }
      void choose_ia5String() { _id = ia5String_ID; }

      // Alternative: visibleString
      void set_visibleString(const asn1::generated::VisibleString::ValueType& v) { _visibleString = v; _id = visibleString_ID; }
      void set_visibleString(asn1::generated::VisibleString::ValueType&& v) { _visibleString = std::move(v); _id = visibleString_ID; }
      const asn1::generated::VisibleString::ValueType& get_visibleString() const { assert(_id == visibleString_ID); return _visibleString; }
      asn1::generated::VisibleString::ValueType& get_visibleString() { assert(_id == visibleString_ID); return _visibleString; }
      bool has_visibleString_Choosen() const { return _id == visibleString_ID; }
      void choose_visibleString() { _id = visibleString_ID; }

      // Alternative: bmpString
      void set_bmpString(const asn1::generated::BMPString::ValueType& v) { _bmpString = v; _id = bmpString_ID; }
      void set_bmpString(asn1::generated::BMPString::ValueType&& v) { _bmpString = std::move(v); _id = bmpString_ID; }
      const asn1::generated::BMPString::ValueType& get_bmpString() const { assert(_id == bmpString_ID); return _bmpString; }
      asn1::generated::BMPString::ValueType& get_bmpString() { assert(_id == bmpString_ID); return _bmpString; }
      bool has_bmpString_Choosen() const { return _id == bmpString_ID; }
      void choose_bmpString() { _id = bmpString_ID; }

      // Alternative: utf8String
      void set_utf8String(const asn1::generated::UTF8String::ValueType& v) { _utf8String = v; _id = utf8String_ID; }
      void set_utf8String(asn1::generated::UTF8String::ValueType&& v) { _utf8String = std::move(v); _id = utf8String_ID; }
      const asn1::generated::UTF8String::ValueType& get_utf8String() const { assert(_id == utf8String_ID); return _utf8String; }
      asn1::generated::UTF8String::ValueType& get_utf8String() { assert(_id == utf8String_ID); return _utf8String; }
      bool has_utf8String_Choosen() const { return _id == utf8String_ID; }
      void choose_utf8String() { _id = utf8String_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case ia5String_ID:
            if (_ia5String != other._ia5String)
               return false;
            break;
         case visibleString_ID:
            if (_visibleString != other._visibleString)
               return false;
            break;
         case bmpString_ID:
            if (_bmpString != other._bmpString)
               return false;
            break;
         case utf8String_ID:
            if (_utf8String != other._utf8String)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         ia5String_ID = 1,
         visibleString_ID = 2,
         bmpString_ID = 3,
         utf8String_ID = 4,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::IA5StringType::ValueType _ia5String;
      asn1::generated::VisibleString::ValueType _visibleString;
      asn1::generated::BMPString::ValueType _bmpString;
      asn1::generated::UTF8String::ValueType _utf8String;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IA5StringType _ia5String_Type;
   asn1::generated::VisibleString _visibleString_Type;
   asn1::generated::BMPString _bmpString_Type;
   asn1::generated::UTF8String _utf8String_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DisplayText"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: NoticeReference
class NoticeReference : public asn1::SequenceType
{
public:

   explicit NoticeReference()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _organization_Type.setTypeName("organization");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _noticeNumbers_Type.setTypeName("noticeNumbers");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef noticeNumbers_INTERNAL__SequenceOfType_INTERNAL_asn1__IntegerType noticeNumbers_Type;

   class SequenceValue_Type
   {
   public:

      // Component: organization
      void set_organization(const asn1::generated::DisplayText::ValueType& v) { _organization = v;  }
      void set_organization(asn1::generated::DisplayText::ValueType&& v) { _organization = std::move(v);  }
      const asn1::generated::DisplayText::ValueType& get_organization() const { return _organization; }
      asn1::generated::DisplayText::ValueType& get_organization() { return _organization; }

      // Component: noticeNumbers
      void set_noticeNumbers(const noticeNumbers_Type::ValueType& v) { _noticeNumbers = v;  }
      void set_noticeNumbers(noticeNumbers_Type::ValueType&& v) { _noticeNumbers = std::move(v);  }
      const noticeNumbers_Type::ValueType& get_noticeNumbers() const { return _noticeNumbers; }
      noticeNumbers_Type::ValueType& get_noticeNumbers() { return _noticeNumbers; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_organization != other._organization)
            return false;
         if (_noticeNumbers != other._noticeNumbers)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::DisplayText::ValueType _organization;
      noticeNumbers_Type::ValueType _noticeNumbers;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::DisplayText _organization_Type;
   noticeNumbers_Type _noticeNumbers_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "NoticeReference"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UserNotice
class UserNotice : public asn1::SequenceType
{
public:

   explicit UserNotice()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _noticeRef_Type.setTypeName("noticeRef");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _explicitText_Type.setTypeName("explicitText");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _noticeRef_Present = false;
         _explicitText_Present = false;
      }

      // Component: noticeRef
      void set_noticeRef(const asn1::generated::NoticeReference::ValueType& v) { _noticeRef = v; _noticeRef_Present = true; }
      void set_noticeRef(asn1::generated::NoticeReference::ValueType&& v) { _noticeRef = std::move(v); _noticeRef_Present = true; }
      const asn1::generated::NoticeReference::ValueType& get_noticeRef() const { return _noticeRef; }
      asn1::generated::NoticeReference::ValueType& get_noticeRef() { return _noticeRef; }
      void set_noticeRef_Present(bool present = true) { _noticeRef_Present = present; }
      bool is_noticeRef_Present() const { return _noticeRef_Present; }


      // Component: explicitText
      void set_explicitText(const asn1::generated::DisplayText::ValueType& v) { _explicitText = v; _explicitText_Present = true; }
      void set_explicitText(asn1::generated::DisplayText::ValueType&& v) { _explicitText = std::move(v); _explicitText_Present = true; }
      const asn1::generated::DisplayText::ValueType& get_explicitText() const { return _explicitText; }
      asn1::generated::DisplayText::ValueType& get_explicitText() { return _explicitText; }
      void set_explicitText_Present(bool present = true) { _explicitText_Present = present; }
      bool is_explicitText_Present() const { return _explicitText_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_noticeRef_Present != other._noticeRef_Present)
            return false;
         if (_noticeRef_Present && other._noticeRef_Present && _noticeRef != other._noticeRef)
            return false;
         if (_explicitText_Present != other._explicitText_Present)
            return false;
         if (_explicitText_Present && other._explicitText_Present && _explicitText != other._explicitText)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::NoticeReference::ValueType _noticeRef;
      bool _noticeRef_Present;
      asn1::generated::DisplayText::ValueType _explicitText;
      bool _explicitText_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::NoticeReference _noticeRef_Type;
   asn1::generated::DisplayText _explicitText_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UserNotice"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: _INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId
class _INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId : public asn1::SequenceType
{
public:

   explicit _INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _issuerDomainPolicy_Type.setTypeName("issuerDomainPolicy");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subjectDomainPolicy_Type.setTypeName("subjectDomainPolicy");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: issuerDomainPolicy
      void set_issuerDomainPolicy(const asn1::generated::CertPolicyId::ValueType& v) { _issuerDomainPolicy = v;  }
      void set_issuerDomainPolicy(asn1::generated::CertPolicyId::ValueType&& v) { _issuerDomainPolicy = std::move(v);  }
      const asn1::generated::CertPolicyId::ValueType& get_issuerDomainPolicy() const { return _issuerDomainPolicy; }
      asn1::generated::CertPolicyId::ValueType& get_issuerDomainPolicy() { return _issuerDomainPolicy; }

      // Component: subjectDomainPolicy
      void set_subjectDomainPolicy(const asn1::generated::CertPolicyId::ValueType& v) { _subjectDomainPolicy = v;  }
      void set_subjectDomainPolicy(asn1::generated::CertPolicyId::ValueType&& v) { _subjectDomainPolicy = std::move(v);  }
      const asn1::generated::CertPolicyId::ValueType& get_subjectDomainPolicy() const { return _subjectDomainPolicy; }
      asn1::generated::CertPolicyId::ValueType& get_subjectDomainPolicy() { return _subjectDomainPolicy; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_issuerDomainPolicy != other._issuerDomainPolicy)
            return false;
         if (_subjectDomainPolicy != other._subjectDomainPolicy)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CertPolicyId::ValueType _issuerDomainPolicy;
      asn1::generated::CertPolicyId::ValueType _subjectDomainPolicy;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertPolicyId _issuerDomainPolicy_Type;
   asn1::generated::CertPolicyId _subjectDomainPolicy_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PolicyMappings
class PolicyMappings : public asn1::SequenceOfType<_INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId>
{
public:

   explicit PolicyMappings() : asn1::SequenceOfType<_INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId>(new _INTERNAL__SequenceType_issuerDomainPolicyissuerDomainPolicy_INTERNAL_asn1__generated__CertPolicyId_subjectDomainPolicysubjectDomainPolicy_INTERNAL_asn1__generated__CertPolicyId)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PolicyMappings"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SubjectAltName
class SubjectAltName : public asn1::generated::GeneralNames
{
public:

   explicit SubjectAltName()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SubjectAltName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: IssuerAltName
class IssuerAltName : public asn1::generated::GeneralNames
{
public:

   explicit IssuerAltName()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "IssuerAltName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SubjectDirectoryAttributes
class SubjectDirectoryAttributes : public asn1::SequenceOfType<asn1::generated::Attribute>
{
public:

   explicit SubjectDirectoryAttributes() : asn1::SequenceOfType<asn1::generated::Attribute>(new asn1::generated::Attribute)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SubjectDirectoryAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BasicConstraints
class BasicConstraints : public asn1::SequenceType
{
public:

   explicit BasicConstraints() : _cA_Type(false, true)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _cA_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _cA_Type.setTypeName("cA");
#endif // ASN1_ENABLE_XER
      _pathLenConstraint_Type.setMaxValue(std::numeric_limits<asn1::UnsignedIntegerType::ValueType>::max());
      _pathLenConstraint_Type.setMinValue(0ULL);
      _pathLenConstraint_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _pathLenConstraint_Type.setTypeName("pathLenConstraint");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _pathLenConstraint_Present = false;
      }

      // Component: cA
      void set_cA(const asn1::BooleanType::ValueType& v) { _cA = v;  }
      void set_cA(asn1::BooleanType::ValueType&& v) { _cA = std::move(v);  }
      const asn1::BooleanType::ValueType& get_cA() const { return _cA; }
      asn1::BooleanType::ValueType& get_cA() { return _cA; }

      // Component: pathLenConstraint
      void set_pathLenConstraint(const asn1::UnsignedIntegerType::ValueType& v) { _pathLenConstraint = v; _pathLenConstraint_Present = true; }
      void set_pathLenConstraint(asn1::UnsignedIntegerType::ValueType&& v) { _pathLenConstraint = std::move(v); _pathLenConstraint_Present = true; }
      const asn1::UnsignedIntegerType::ValueType& get_pathLenConstraint() const { return _pathLenConstraint; }
      asn1::UnsignedIntegerType::ValueType& get_pathLenConstraint() { return _pathLenConstraint; }
      void set_pathLenConstraint_Present(bool present = true) { _pathLenConstraint_Present = present; }
      bool is_pathLenConstraint_Present() const { return _pathLenConstraint_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_cA != other._cA)
            return false;
         if (_pathLenConstraint_Present != other._pathLenConstraint_Present)
            return false;
         if (_pathLenConstraint_Present && other._pathLenConstraint_Present && _pathLenConstraint != other._pathLenConstraint)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::BooleanType::ValueType _cA;
      asn1::UnsignedIntegerType::ValueType _pathLenConstraint;
      bool _pathLenConstraint_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::BooleanType _cA_Type;
   asn1::UnsignedIntegerType _pathLenConstraint_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BasicConstraints"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BaseDistance
class BaseDistance : public asn1::UnsignedIntegerType
{
public:

   explicit BaseDistance()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMaxValue(std::numeric_limits<asn1::UnsignedIntegerType::ValueType>::max());
      setMinValue(0ULL);
   }

   explicit BaseDistance(const ValueType& defaultValue, bool hasDefault) : asn1::UnsignedIntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMaxValue(std::numeric_limits<asn1::UnsignedIntegerType::ValueType>::max());
      setMinValue(0ULL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BaseDistance"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SkipCerts
class SkipCerts : public asn1::UnsignedIntegerType
{
public:

   explicit SkipCerts()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMaxValue(std::numeric_limits<asn1::UnsignedIntegerType::ValueType>::max());
      setMinValue(0ULL);
   }

   explicit SkipCerts(const ValueType& defaultValue, bool hasDefault) : asn1::UnsignedIntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMaxValue(std::numeric_limits<asn1::UnsignedIntegerType::ValueType>::max());
      setMinValue(0ULL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SkipCerts"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: requireExplicitPolicy_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SkipCerts
class requireExplicitPolicy_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SkipCerts : public asn1::TaggingType<asn1::generated::SkipCerts>
{
public:

   explicit requireExplicitPolicy_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SkipCerts() : asn1::TaggingType<asn1::generated::SkipCerts>(new asn1::generated::SkipCerts)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "requireExplicitPolicy"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: inhibitPolicyMapping_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SkipCerts
class inhibitPolicyMapping_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SkipCerts : public asn1::TaggingType<asn1::generated::SkipCerts>
{
public:

   explicit inhibitPolicyMapping_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SkipCerts() : asn1::TaggingType<asn1::generated::SkipCerts>(new asn1::generated::SkipCerts)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "inhibitPolicyMapping"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PolicyConstraints
class PolicyConstraints : public asn1::SequenceType
{
public:

   explicit PolicyConstraints()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _requireExplicitPolicy_Type.setTypeName("requireExplicitPolicy");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _inhibitPolicyMapping_Type.setTypeName("inhibitPolicyMapping");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef requireExplicitPolicy_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SkipCerts requireExplicitPolicy_Type;
   typedef inhibitPolicyMapping_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SkipCerts inhibitPolicyMapping_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _requireExplicitPolicy_Present = false;
         _inhibitPolicyMapping_Present = false;
      }

      // Component: requireExplicitPolicy
      void set_requireExplicitPolicy(const requireExplicitPolicy_Type::ValueType& v) { _requireExplicitPolicy = v; _requireExplicitPolicy_Present = true; }
      void set_requireExplicitPolicy(requireExplicitPolicy_Type::ValueType&& v) { _requireExplicitPolicy = std::move(v); _requireExplicitPolicy_Present = true; }
      const requireExplicitPolicy_Type::ValueType& get_requireExplicitPolicy() const { return _requireExplicitPolicy; }
      requireExplicitPolicy_Type::ValueType& get_requireExplicitPolicy() { return _requireExplicitPolicy; }
      void set_requireExplicitPolicy_Present(bool present = true) { _requireExplicitPolicy_Present = present; }
      bool is_requireExplicitPolicy_Present() const { return _requireExplicitPolicy_Present; }


      // Component: inhibitPolicyMapping
      void set_inhibitPolicyMapping(const inhibitPolicyMapping_Type::ValueType& v) { _inhibitPolicyMapping = v; _inhibitPolicyMapping_Present = true; }
      void set_inhibitPolicyMapping(inhibitPolicyMapping_Type::ValueType&& v) { _inhibitPolicyMapping = std::move(v); _inhibitPolicyMapping_Present = true; }
      const inhibitPolicyMapping_Type::ValueType& get_inhibitPolicyMapping() const { return _inhibitPolicyMapping; }
      inhibitPolicyMapping_Type::ValueType& get_inhibitPolicyMapping() { return _inhibitPolicyMapping; }
      void set_inhibitPolicyMapping_Present(bool present = true) { _inhibitPolicyMapping_Present = present; }
      bool is_inhibitPolicyMapping_Present() const { return _inhibitPolicyMapping_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_requireExplicitPolicy_Present != other._requireExplicitPolicy_Present)
            return false;
         if (_requireExplicitPolicy_Present && other._requireExplicitPolicy_Present && _requireExplicitPolicy != other._requireExplicitPolicy)
            return false;
         if (_inhibitPolicyMapping_Present != other._inhibitPolicyMapping_Present)
            return false;
         if (_inhibitPolicyMapping_Present && other._inhibitPolicyMapping_Present && _inhibitPolicyMapping != other._inhibitPolicyMapping)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      requireExplicitPolicy_Type::ValueType _requireExplicitPolicy;
      bool _requireExplicitPolicy_Present;
      inhibitPolicyMapping_Type::ValueType _inhibitPolicyMapping;
      bool _inhibitPolicyMapping_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   requireExplicitPolicy_Type _requireExplicitPolicy_Type;
   inhibitPolicyMapping_Type _inhibitPolicyMapping_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PolicyConstraints"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: fullName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames
class fullName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames : public asn1::TaggingType<asn1::generated::GeneralNames>
{
public:

   explicit fullName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames() : asn1::TaggingType<asn1::generated::GeneralNames>(new asn1::generated::GeneralNames)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "fullName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: nameRelativeToCRLIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__RelativeDistinguishedName
class nameRelativeToCRLIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__RelativeDistinguishedName : public asn1::TaggingType<asn1::generated::RelativeDistinguishedName>
{
public:

   explicit nameRelativeToCRLIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__RelativeDistinguishedName() : asn1::TaggingType<asn1::generated::RelativeDistinguishedName>(new asn1::generated::RelativeDistinguishedName)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "nameRelativeToCRLIssuer"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DistributionPointName
class DistributionPointName : public asn1::ChoiceType
{
public:

   explicit DistributionPointName()
   {
      _addChoice(&_fullName_Type);
#if defined(ASN1_ENABLE_XER)
      _fullName_Type.setTypeName("fullName");
#endif // ASN1_ENABLE_XER
      _addChoice(&_nameRelativeToCRLIssuer_Type);
#if defined(ASN1_ENABLE_XER)
      _nameRelativeToCRLIssuer_Type.setTypeName("nameRelativeToCRLIssuer");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef fullName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames fullName_Type;
   typedef nameRelativeToCRLIssuer_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__RelativeDistinguishedName nameRelativeToCRLIssuer_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: fullName
      void set_fullName(const fullName_Type::ValueType& v) { _fullName = v; _id = fullName_ID; }
      void set_fullName(fullName_Type::ValueType&& v) { _fullName = std::move(v); _id = fullName_ID; }
      const fullName_Type::ValueType& get_fullName() const { assert(_id == fullName_ID); return _fullName; }
      fullName_Type::ValueType& get_fullName() { assert(_id == fullName_ID); return _fullName; }
      bool has_fullName_Choosen() const { return _id == fullName_ID; }
      void choose_fullName() { _id = fullName_ID; }

      // Alternative: nameRelativeToCRLIssuer
      void set_nameRelativeToCRLIssuer(const nameRelativeToCRLIssuer_Type::ValueType& v) { _nameRelativeToCRLIssuer = v; _id = nameRelativeToCRLIssuer_ID; }
      void set_nameRelativeToCRLIssuer(nameRelativeToCRLIssuer_Type::ValueType&& v) { _nameRelativeToCRLIssuer = std::move(v); _id = nameRelativeToCRLIssuer_ID; }
      const nameRelativeToCRLIssuer_Type::ValueType& get_nameRelativeToCRLIssuer() const { assert(_id == nameRelativeToCRLIssuer_ID); return _nameRelativeToCRLIssuer; }
      nameRelativeToCRLIssuer_Type::ValueType& get_nameRelativeToCRLIssuer() { assert(_id == nameRelativeToCRLIssuer_ID); return _nameRelativeToCRLIssuer; }
      bool has_nameRelativeToCRLIssuer_Choosen() const { return _id == nameRelativeToCRLIssuer_ID; }
      void choose_nameRelativeToCRLIssuer() { _id = nameRelativeToCRLIssuer_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case fullName_ID:
            if (_fullName != other._fullName)
               return false;
            break;
         case nameRelativeToCRLIssuer_ID:
            if (_nameRelativeToCRLIssuer != other._nameRelativeToCRLIssuer)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         fullName_ID = 1,
         nameRelativeToCRLIssuer_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      fullName_Type::ValueType _fullName;
      nameRelativeToCRLIssuer_Type::ValueType _nameRelativeToCRLIssuer;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   fullName_Type _fullName_Type;
   nameRelativeToCRLIssuer_Type _nameRelativeToCRLIssuer_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DistributionPointName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: distributionPoint_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DistributionPointName
class distributionPoint_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DistributionPointName : public asn1::TaggingType<asn1::generated::DistributionPointName>
{
public:

   explicit distributionPoint_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DistributionPointName() : asn1::TaggingType<asn1::generated::DistributionPointName>(new asn1::generated::DistributionPointName)
   {
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "nameRelativeToCRLIssuer"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ReasonFlags
class ReasonFlags : public asn1::BitStringType
{
public:

   explicit ReasonFlags()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit ReasonFlags(const ValueType& defaultValue, bool hasDefault) : asn1::BitStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum ReasonFlags_Value
   {
      k_unused = 0,
      k_keyCompromise = 1,
      k_cACompromise = 2,
      k_affiliationChanged = 3,
      k_superseded = 4,
      k_cessationOfOperation = 5,
      k_certificateHold = 6,
      k_privilegeWithdrawn = 7,
      k_aACompromise = 8,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ReasonFlags"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: reasons_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ReasonFlags
class reasons_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ReasonFlags : public asn1::TaggingType<asn1::generated::ReasonFlags>
{
public:

   explicit reasons_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ReasonFlags() : asn1::TaggingType<asn1::generated::ReasonFlags>(new asn1::generated::ReasonFlags)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "reasons"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: cRLIssuer_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__GeneralNames
class cRLIssuer_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__GeneralNames : public asn1::TaggingType<asn1::generated::GeneralNames>
{
public:

   explicit cRLIssuer_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__GeneralNames() : asn1::TaggingType<asn1::generated::GeneralNames>(new asn1::generated::GeneralNames)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "cRLIssuer"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DistributionPoint
class DistributionPoint : public asn1::SequenceType
{
public:

   explicit DistributionPoint()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _distributionPoint_Type.setTypeName("distributionPoint");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _reasons_Type.setTypeName("reasons");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _cRLIssuer_Type.setTypeName("cRLIssuer");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef distributionPoint_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__DistributionPointName distributionPoint_Type;
   typedef reasons_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ReasonFlags reasons_Type;
   typedef cRLIssuer_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__GeneralNames cRLIssuer_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _distributionPoint_Present = false;
         _reasons_Present = false;
         _cRLIssuer_Present = false;
      }

      // Component: distributionPoint
      void set_distributionPoint(const distributionPoint_Type::ValueType& v) { _distributionPoint = v; _distributionPoint_Present = true; }
      void set_distributionPoint(distributionPoint_Type::ValueType&& v) { _distributionPoint = std::move(v); _distributionPoint_Present = true; }
      const distributionPoint_Type::ValueType& get_distributionPoint() const { return _distributionPoint; }
      distributionPoint_Type::ValueType& get_distributionPoint() { return _distributionPoint; }
      void set_distributionPoint_Present(bool present = true) { _distributionPoint_Present = present; }
      bool is_distributionPoint_Present() const { return _distributionPoint_Present; }


      // Component: reasons
      void set_reasons(const reasons_Type::ValueType& v) { _reasons = v; _reasons_Present = true; }
      void set_reasons(reasons_Type::ValueType&& v) { _reasons = std::move(v); _reasons_Present = true; }
      const reasons_Type::ValueType& get_reasons() const { return _reasons; }
      reasons_Type::ValueType& get_reasons() { return _reasons; }
      void set_reasons_Present(bool present = true) { _reasons_Present = present; }
      bool is_reasons_Present() const { return _reasons_Present; }


      // Component: cRLIssuer
      void set_cRLIssuer(const cRLIssuer_Type::ValueType& v) { _cRLIssuer = v; _cRLIssuer_Present = true; }
      void set_cRLIssuer(cRLIssuer_Type::ValueType&& v) { _cRLIssuer = std::move(v); _cRLIssuer_Present = true; }
      const cRLIssuer_Type::ValueType& get_cRLIssuer() const { return _cRLIssuer; }
      cRLIssuer_Type::ValueType& get_cRLIssuer() { return _cRLIssuer; }
      void set_cRLIssuer_Present(bool present = true) { _cRLIssuer_Present = present; }
      bool is_cRLIssuer_Present() const { return _cRLIssuer_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_distributionPoint_Present != other._distributionPoint_Present)
            return false;
         if (_distributionPoint_Present && other._distributionPoint_Present && _distributionPoint != other._distributionPoint)
            return false;
         if (_reasons_Present != other._reasons_Present)
            return false;
         if (_reasons_Present && other._reasons_Present && _reasons != other._reasons)
            return false;
         if (_cRLIssuer_Present != other._cRLIssuer_Present)
            return false;
         if (_cRLIssuer_Present && other._cRLIssuer_Present && _cRLIssuer != other._cRLIssuer)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      distributionPoint_Type::ValueType _distributionPoint;
      bool _distributionPoint_Present;
      reasons_Type::ValueType _reasons;
      bool _reasons_Present;
      cRLIssuer_Type::ValueType _cRLIssuer;
      bool _cRLIssuer_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   distributionPoint_Type _distributionPoint_Type;
   reasons_Type _reasons_Type;
   cRLIssuer_Type _cRLIssuer_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DistributionPoint"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CRLDistributionPoints
class CRLDistributionPoints : public asn1::SequenceOfType<asn1::generated::DistributionPoint>
{
public:

   explicit CRLDistributionPoints() : asn1::SequenceOfType<asn1::generated::DistributionPoint>(new asn1::generated::DistributionPoint)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CRLDistributionPoints"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyPurposeId
class KeyPurposeId : public asn1::ObjectIdentifierType
{
public:

   explicit KeyPurposeId()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit KeyPurposeId(const ValueType& defaultValue, bool hasDefault) : asn1::ObjectIdentifierType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyPurposeId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtKeyUsageSyntax
class ExtKeyUsageSyntax : public asn1::SequenceOfType<asn1::generated::KeyPurposeId>
{
public:

   explicit ExtKeyUsageSyntax() : asn1::SequenceOfType<asn1::generated::KeyPurposeId>(new asn1::generated::KeyPurposeId)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtKeyUsageSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: InhibitAnyPolicy
class InhibitAnyPolicy : public asn1::generated::SkipCerts
{
public:

   explicit InhibitAnyPolicy()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "InhibitAnyPolicy"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: FreshestCRL
class FreshestCRL : public asn1::generated::CRLDistributionPoints
{
public:

   explicit FreshestCRL()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "FreshestCRL"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AccessDescription
class AccessDescription : public asn1::SequenceType
{
public:

   explicit AccessDescription()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _accessMethod_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _accessMethod_Type.setTypeName("accessMethod");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _accessLocation_Type.setTypeName("accessLocation");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: accessMethod
      void set_accessMethod(const asn1::ObjectIdentifierType::ValueType& v) { _accessMethod = v;  }
      void set_accessMethod(asn1::ObjectIdentifierType::ValueType&& v) { _accessMethod = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_accessMethod() const { return _accessMethod; }
      asn1::ObjectIdentifierType::ValueType& get_accessMethod() { return _accessMethod; }

      // Component: accessLocation
      void set_accessLocation(const asn1::generated::GeneralName::ValueType& v) { _accessLocation = v;  }
      void set_accessLocation(asn1::generated::GeneralName::ValueType&& v) { _accessLocation = std::move(v);  }
      const asn1::generated::GeneralName::ValueType& get_accessLocation() const { return _accessLocation; }
      asn1::generated::GeneralName::ValueType& get_accessLocation() { return _accessLocation; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_accessMethod != other._accessMethod)
            return false;
         if (_accessLocation != other._accessLocation)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _accessMethod;
      asn1::generated::GeneralName::ValueType _accessLocation;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _accessMethod_Type;
   asn1::generated::GeneralName _accessLocation_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AccessDescription"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AuthorityInfoAccessSyntax
class AuthorityInfoAccessSyntax : public asn1::SequenceOfType<asn1::generated::AccessDescription>
{
public:

   explicit AuthorityInfoAccessSyntax() : asn1::SequenceOfType<asn1::generated::AccessDescription>(new asn1::generated::AccessDescription)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AuthorityInfoAccessSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SubjectInfoAccessSyntax
class SubjectInfoAccessSyntax : public asn1::SequenceOfType<asn1::generated::AccessDescription>
{
public:

   explicit SubjectInfoAccessSyntax() : asn1::SequenceOfType<asn1::generated::AccessDescription>(new asn1::generated::AccessDescription)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SubjectInfoAccessSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CRLNumber
class CRLNumber : public asn1::UnsignedIntegerType
{
public:

   explicit CRLNumber()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMaxValue(std::numeric_limits<asn1::UnsignedIntegerType::ValueType>::max());
      setMinValue(0ULL);
   }

   explicit CRLNumber(const ValueType& defaultValue, bool hasDefault) : asn1::UnsignedIntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMaxValue(std::numeric_limits<asn1::UnsignedIntegerType::ValueType>::max());
      setMinValue(0ULL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CRLNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BaseCRLNumber
class BaseCRLNumber : public asn1::generated::CRLNumber
{
public:

   explicit BaseCRLNumber()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BaseCRLNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CRLReason
class CRLReason : public asn1::EnumeratedType
{
public:

   explicit CRLReason()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _addEnumValue(k_unspecified);
      _addEnumValue(k_keyCompromise);
      _addEnumValue(k_cACompromise);
      _addEnumValue(k_affiliationChanged);
      _addEnumValue(k_superseded);
      _addEnumValue(k_cessationOfOperation);
      _addEnumValue(k_certificateHold);
      _addEnumValue(k_removeFromCRL);
      _addEnumValue(k_privilegeWithdrawn);
      _addEnumValue(k_aACompromise);
   }

   explicit CRLReason(const ValueType& defaultValue, bool hasDefault) : asn1::EnumeratedType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _addEnumValue(k_unspecified);
      _addEnumValue(k_keyCompromise);
      _addEnumValue(k_cACompromise);
      _addEnumValue(k_affiliationChanged);
      _addEnumValue(k_superseded);
      _addEnumValue(k_cessationOfOperation);
      _addEnumValue(k_certificateHold);
      _addEnumValue(k_removeFromCRL);
      _addEnumValue(k_privilegeWithdrawn);
      _addEnumValue(k_aACompromise);
   }

   enum EnumeratedValue_Type
   {
      k_unspecified = 0,
      k_keyCompromise = 1,
      k_cACompromise = 2,
      k_affiliationChanged = 3,
      k_superseded = 4,
      k_cessationOfOperation = 5,
      k_certificateHold = 6,
      k_removeFromCRL = 8,
      k_privilegeWithdrawn = 9,
      k_aACompromise = 10,
   };

   typedef EnumeratedValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const
   {
      asn1::EnumeratedType::ValueType v;
      asn1::EnumeratedType::read(reader, v);
      value = static_cast<ValueType>(v);
   }

   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      asn1::EnumeratedType::write(writer, value);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CRLReason"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificateIssuer
class CertificateIssuer : public asn1::generated::GeneralNames
{
public:

   explicit CertificateIssuer()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificateIssuer"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: HoldInstructionCode
class HoldInstructionCode : public asn1::ObjectIdentifierType
{
public:

   explicit HoldInstructionCode()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit HoldInstructionCode(const ValueType& defaultValue, bool hasDefault) : asn1::ObjectIdentifierType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "HoldInstructionCode"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: InvalidityDate
class InvalidityDate : public asn1::GeneralizedTimeType
{
public:

   explicit InvalidityDate()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit InvalidityDate(const ValueType& defaultValue, bool hasDefault) : asn1::GeneralizedTimeType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "InvalidityDate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: attributes_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute
class attributes_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute : public asn1::SequenceOfType<asn1::generated::Attribute>
{
public:

   explicit attributes_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute() : asn1::SequenceOfType<asn1::generated::Attribute>(new asn1::generated::Attribute)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "attributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttCertVersion
class AttCertVersion : public asn1::IntegerType
{
public:

   explicit AttCertVersion()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit AttCertVersion(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum AttCertVersion_Value
   {
      k_v2 = 1,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttCertVersion"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: IssuerSerial
class IssuerSerial : public asn1::SequenceType
{
public:

   explicit IssuerSerial()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _serial_Type.setTypeName("serial");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuerUID_Type.setTypeName("issuerUID");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _issuerUID_Present = false;
      }

      // Component: issuer
      void set_issuer(const asn1::generated::GeneralNames::ValueType& v) { _issuer = v;  }
      void set_issuer(asn1::generated::GeneralNames::ValueType&& v) { _issuer = std::move(v);  }
      const asn1::generated::GeneralNames::ValueType& get_issuer() const { return _issuer; }
      asn1::generated::GeneralNames::ValueType& get_issuer() { return _issuer; }

      // Component: serial
      void set_serial(const asn1::generated::CertificateSerialNumber::ValueType& v) { _serial = v;  }
      void set_serial(asn1::generated::CertificateSerialNumber::ValueType&& v) { _serial = std::move(v);  }
      const asn1::generated::CertificateSerialNumber::ValueType& get_serial() const { return _serial; }
      asn1::generated::CertificateSerialNumber::ValueType& get_serial() { return _serial; }

      // Component: issuerUID
      void set_issuerUID(const asn1::generated::UniqueIdentifier::ValueType& v) { _issuerUID = v; _issuerUID_Present = true; }
      void set_issuerUID(asn1::generated::UniqueIdentifier::ValueType&& v) { _issuerUID = std::move(v); _issuerUID_Present = true; }
      const asn1::generated::UniqueIdentifier::ValueType& get_issuerUID() const { return _issuerUID; }
      asn1::generated::UniqueIdentifier::ValueType& get_issuerUID() { return _issuerUID; }
      void set_issuerUID_Present(bool present = true) { _issuerUID_Present = present; }
      bool is_issuerUID_Present() const { return _issuerUID_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_issuer != other._issuer)
            return false;
         if (_serial != other._serial)
            return false;
         if (_issuerUID_Present != other._issuerUID_Present)
            return false;
         if (_issuerUID_Present && other._issuerUID_Present && _issuerUID != other._issuerUID)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::GeneralNames::ValueType _issuer;
      asn1::generated::CertificateSerialNumber::ValueType _serial;
      asn1::generated::UniqueIdentifier::ValueType _issuerUID;
      bool _issuerUID_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::GeneralNames _issuer_Type;
   asn1::generated::CertificateSerialNumber _serial_Type;
   asn1::generated::UniqueIdentifier _issuerUID_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "IssuerSerial"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial
class baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial : public asn1::TaggingType<asn1::generated::IssuerSerial>
{
public:

   explicit baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial() : asn1::TaggingType<asn1::generated::IssuerSerial>(new asn1::generated::IssuerSerial)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "baseCertificateID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: entityName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames
class entityName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames : public asn1::TaggingType<asn1::generated::GeneralNames>
{
public:

   explicit entityName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames() : asn1::TaggingType<asn1::generated::GeneralNames>(new asn1::generated::GeneralNames)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "entityName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: digestedObjectType_INTERNAL__EnumeratedTypepublicKey0publicKeyCert1otherObjectTypes2
class digestedObjectType_INTERNAL__EnumeratedTypepublicKey0publicKeyCert1otherObjectTypes2 : public asn1::EnumeratedType
{
public:

   explicit digestedObjectType_INTERNAL__EnumeratedTypepublicKey0publicKeyCert1otherObjectTypes2()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _addEnumValue(k_publicKey);
      _addEnumValue(k_publicKeyCert);
      _addEnumValue(k_otherObjectTypes);
   }

   explicit digestedObjectType_INTERNAL__EnumeratedTypepublicKey0publicKeyCert1otherObjectTypes2(const ValueType& defaultValue, bool hasDefault) : asn1::EnumeratedType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _addEnumValue(k_publicKey);
      _addEnumValue(k_publicKeyCert);
      _addEnumValue(k_otherObjectTypes);
   }

   enum EnumeratedValue_Type
   {
      k_publicKey = 0,
      k_publicKeyCert = 1,
      k_otherObjectTypes = 2,
   };

   typedef EnumeratedValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const
   {
      asn1::EnumeratedType::ValueType v;
      asn1::EnumeratedType::read(reader, v);
      value = static_cast<ValueType>(v);
   }

   void write(ASN1ValueWriter& writer, const ValueType& value) const
   {
      asn1::EnumeratedType::write(writer, value);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "digestedObjectType"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ObjectDigestInfo
class ObjectDigestInfo : public asn1::SequenceType
{
public:

   explicit ObjectDigestInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _digestedObjectType_Type.setTypeName("digestedObjectType");
#endif // ASN1_ENABLE_XER
      _otherObjectTypeID_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _otherObjectTypeID_Type.setTypeName("otherObjectTypeID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _digestAlgorithm_Type.setTypeName("digestAlgorithm");
#endif // ASN1_ENABLE_XER
      _objectDigest_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _objectDigest_Type.setTypeName("objectDigest");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef digestedObjectType_INTERNAL__EnumeratedTypepublicKey0publicKeyCert1otherObjectTypes2 digestedObjectType_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _otherObjectTypeID_Present = false;
      }

      // Component: digestedObjectType
      void set_digestedObjectType(const digestedObjectType_Type::ValueType& v) { _digestedObjectType = v;  }
      void set_digestedObjectType(digestedObjectType_Type::ValueType&& v) { _digestedObjectType = std::move(v);  }
      const digestedObjectType_Type::ValueType& get_digestedObjectType() const { return _digestedObjectType; }
      digestedObjectType_Type::ValueType& get_digestedObjectType() { return _digestedObjectType; }

      // Component: otherObjectTypeID
      void set_otherObjectTypeID(const asn1::ObjectIdentifierType::ValueType& v) { _otherObjectTypeID = v; _otherObjectTypeID_Present = true; }
      void set_otherObjectTypeID(asn1::ObjectIdentifierType::ValueType&& v) { _otherObjectTypeID = std::move(v); _otherObjectTypeID_Present = true; }
      const asn1::ObjectIdentifierType::ValueType& get_otherObjectTypeID() const { return _otherObjectTypeID; }
      asn1::ObjectIdentifierType::ValueType& get_otherObjectTypeID() { return _otherObjectTypeID; }
      void set_otherObjectTypeID_Present(bool present = true) { _otherObjectTypeID_Present = present; }
      bool is_otherObjectTypeID_Present() const { return _otherObjectTypeID_Present; }


      // Component: digestAlgorithm
      void set_digestAlgorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _digestAlgorithm = v;  }
      void set_digestAlgorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _digestAlgorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_digestAlgorithm() const { return _digestAlgorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_digestAlgorithm() { return _digestAlgorithm; }

      // Component: objectDigest
      void set_objectDigest(const asn1::BitStringType::ValueType& v) { _objectDigest = v;  }
      void set_objectDigest(asn1::BitStringType::ValueType&& v) { _objectDigest = std::move(v);  }
      const asn1::BitStringType::ValueType& get_objectDigest() const { return _objectDigest; }
      asn1::BitStringType::ValueType& get_objectDigest() { return _objectDigest; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_digestedObjectType != other._digestedObjectType)
            return false;
         if (_otherObjectTypeID_Present != other._otherObjectTypeID_Present)
            return false;
         if (_otherObjectTypeID_Present && other._otherObjectTypeID_Present && _otherObjectTypeID != other._otherObjectTypeID)
            return false;
         if (_digestAlgorithm != other._digestAlgorithm)
            return false;
         if (_objectDigest != other._objectDigest)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      digestedObjectType_Type::ValueType _digestedObjectType;
      asn1::ObjectIdentifierType::ValueType _otherObjectTypeID;
      bool _otherObjectTypeID_Present;
      asn1::generated::AlgorithmIdentifier::ValueType _digestAlgorithm;
      asn1::BitStringType::ValueType _objectDigest;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   digestedObjectType_Type _digestedObjectType_Type;
   asn1::ObjectIdentifierType _otherObjectTypeID_Type;
   asn1::generated::AlgorithmIdentifier _digestAlgorithm_Type;
   asn1::BitStringType _objectDigest_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ObjectDigestInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: objectDigestInfo_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__ObjectDigestInfo
class objectDigestInfo_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__ObjectDigestInfo : public asn1::TaggingType<asn1::generated::ObjectDigestInfo>
{
public:

   explicit objectDigestInfo_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__ObjectDigestInfo() : asn1::TaggingType<asn1::generated::ObjectDigestInfo>(new asn1::generated::ObjectDigestInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "digestedObjectType"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Holder
class Holder : public asn1::SequenceType
{
public:

   explicit Holder()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _baseCertificateID_Type.setTypeName("baseCertificateID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _entityName_Type.setTypeName("entityName");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _objectDigestInfo_Type.setTypeName("objectDigestInfo");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial baseCertificateID_Type;
   typedef entityName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames entityName_Type;
   typedef objectDigestInfo_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__ObjectDigestInfo objectDigestInfo_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _baseCertificateID_Present = false;
         _entityName_Present = false;
         _objectDigestInfo_Present = false;
      }

      // Component: baseCertificateID
      void set_baseCertificateID(const baseCertificateID_Type::ValueType& v) { _baseCertificateID = v; _baseCertificateID_Present = true; }
      void set_baseCertificateID(baseCertificateID_Type::ValueType&& v) { _baseCertificateID = std::move(v); _baseCertificateID_Present = true; }
      const baseCertificateID_Type::ValueType& get_baseCertificateID() const { return _baseCertificateID; }
      baseCertificateID_Type::ValueType& get_baseCertificateID() { return _baseCertificateID; }
      void set_baseCertificateID_Present(bool present = true) { _baseCertificateID_Present = present; }
      bool is_baseCertificateID_Present() const { return _baseCertificateID_Present; }


      // Component: entityName
      void set_entityName(const entityName_Type::ValueType& v) { _entityName = v; _entityName_Present = true; }
      void set_entityName(entityName_Type::ValueType&& v) { _entityName = std::move(v); _entityName_Present = true; }
      const entityName_Type::ValueType& get_entityName() const { return _entityName; }
      entityName_Type::ValueType& get_entityName() { return _entityName; }
      void set_entityName_Present(bool present = true) { _entityName_Present = present; }
      bool is_entityName_Present() const { return _entityName_Present; }


      // Component: objectDigestInfo
      void set_objectDigestInfo(const objectDigestInfo_Type::ValueType& v) { _objectDigestInfo = v; _objectDigestInfo_Present = true; }
      void set_objectDigestInfo(objectDigestInfo_Type::ValueType&& v) { _objectDigestInfo = std::move(v); _objectDigestInfo_Present = true; }
      const objectDigestInfo_Type::ValueType& get_objectDigestInfo() const { return _objectDigestInfo; }
      objectDigestInfo_Type::ValueType& get_objectDigestInfo() { return _objectDigestInfo; }
      void set_objectDigestInfo_Present(bool present = true) { _objectDigestInfo_Present = present; }
      bool is_objectDigestInfo_Present() const { return _objectDigestInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_baseCertificateID_Present != other._baseCertificateID_Present)
            return false;
         if (_baseCertificateID_Present && other._baseCertificateID_Present && _baseCertificateID != other._baseCertificateID)
            return false;
         if (_entityName_Present != other._entityName_Present)
            return false;
         if (_entityName_Present && other._entityName_Present && _entityName != other._entityName)
            return false;
         if (_objectDigestInfo_Present != other._objectDigestInfo_Present)
            return false;
         if (_objectDigestInfo_Present && other._objectDigestInfo_Present && _objectDigestInfo != other._objectDigestInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      baseCertificateID_Type::ValueType _baseCertificateID;
      bool _baseCertificateID_Present;
      entityName_Type::ValueType _entityName;
      bool _entityName_Present;
      objectDigestInfo_Type::ValueType _objectDigestInfo;
      bool _objectDigestInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   baseCertificateID_Type _baseCertificateID_Type;
   entityName_Type _entityName_Type;
   objectDigestInfo_Type _objectDigestInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Holder"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: objectDigestInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ObjectDigestInfo
class objectDigestInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ObjectDigestInfo : public asn1::TaggingType<asn1::generated::ObjectDigestInfo>
{
public:

   explicit objectDigestInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ObjectDigestInfo() : asn1::TaggingType<asn1::generated::ObjectDigestInfo>(new asn1::generated::ObjectDigestInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "objectDigestInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: V2Form
class V2Form : public asn1::SequenceType
{
public:

   explicit V2Form()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _issuerName_Type.setTypeName("issuerName");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _baseCertificateID_Type.setTypeName("baseCertificateID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _objectDigestInfo_Type.setTypeName("objectDigestInfo");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial baseCertificateID_Type;
   typedef objectDigestInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ObjectDigestInfo objectDigestInfo_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _issuerName_Present = false;
         _baseCertificateID_Present = false;
         _objectDigestInfo_Present = false;
      }

      // Component: issuerName
      void set_issuerName(const asn1::generated::GeneralNames::ValueType& v) { _issuerName = v; _issuerName_Present = true; }
      void set_issuerName(asn1::generated::GeneralNames::ValueType&& v) { _issuerName = std::move(v); _issuerName_Present = true; }
      const asn1::generated::GeneralNames::ValueType& get_issuerName() const { return _issuerName; }
      asn1::generated::GeneralNames::ValueType& get_issuerName() { return _issuerName; }
      void set_issuerName_Present(bool present = true) { _issuerName_Present = present; }
      bool is_issuerName_Present() const { return _issuerName_Present; }


      // Component: baseCertificateID
      void set_baseCertificateID(const baseCertificateID_Type::ValueType& v) { _baseCertificateID = v; _baseCertificateID_Present = true; }
      void set_baseCertificateID(baseCertificateID_Type::ValueType&& v) { _baseCertificateID = std::move(v); _baseCertificateID_Present = true; }
      const baseCertificateID_Type::ValueType& get_baseCertificateID() const { return _baseCertificateID; }
      baseCertificateID_Type::ValueType& get_baseCertificateID() { return _baseCertificateID; }
      void set_baseCertificateID_Present(bool present = true) { _baseCertificateID_Present = present; }
      bool is_baseCertificateID_Present() const { return _baseCertificateID_Present; }


      // Component: objectDigestInfo
      void set_objectDigestInfo(const objectDigestInfo_Type::ValueType& v) { _objectDigestInfo = v; _objectDigestInfo_Present = true; }
      void set_objectDigestInfo(objectDigestInfo_Type::ValueType&& v) { _objectDigestInfo = std::move(v); _objectDigestInfo_Present = true; }
      const objectDigestInfo_Type::ValueType& get_objectDigestInfo() const { return _objectDigestInfo; }
      objectDigestInfo_Type::ValueType& get_objectDigestInfo() { return _objectDigestInfo; }
      void set_objectDigestInfo_Present(bool present = true) { _objectDigestInfo_Present = present; }
      bool is_objectDigestInfo_Present() const { return _objectDigestInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_issuerName_Present != other._issuerName_Present)
            return false;
         if (_issuerName_Present && other._issuerName_Present && _issuerName != other._issuerName)
            return false;
         if (_baseCertificateID_Present != other._baseCertificateID_Present)
            return false;
         if (_baseCertificateID_Present && other._baseCertificateID_Present && _baseCertificateID != other._baseCertificateID)
            return false;
         if (_objectDigestInfo_Present != other._objectDigestInfo_Present)
            return false;
         if (_objectDigestInfo_Present && other._objectDigestInfo_Present && _objectDigestInfo != other._objectDigestInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::GeneralNames::ValueType _issuerName;
      bool _issuerName_Present;
      baseCertificateID_Type::ValueType _baseCertificateID;
      bool _baseCertificateID_Present;
      objectDigestInfo_Type::ValueType _objectDigestInfo;
      bool _objectDigestInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::GeneralNames _issuerName_Type;
   baseCertificateID_Type _baseCertificateID_Type;
   objectDigestInfo_Type _objectDigestInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "V2Form"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: v2Form_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__V2Form
class v2Form_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__V2Form : public asn1::TaggingType<asn1::generated::V2Form>
{
public:

   explicit v2Form_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__V2Form() : asn1::TaggingType<asn1::generated::V2Form>(new asn1::generated::V2Form)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "objectDigestInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttCertIssuer
class AttCertIssuer : public asn1::ChoiceType
{
public:

   explicit AttCertIssuer()
   {
      _addChoice(&_v1Form_Type);
#if defined(ASN1_ENABLE_XER)
      _v1Form_Type.setTypeName("v1Form");
#endif // ASN1_ENABLE_XER
      _addChoice(&_v2Form_Type);
#if defined(ASN1_ENABLE_XER)
      _v2Form_Type.setTypeName("v2Form");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef v2Form_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__V2Form v2Form_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: v1Form
      void set_v1Form(const asn1::generated::GeneralNames::ValueType& v) { _v1Form = v; _id = v1Form_ID; }
      void set_v1Form(asn1::generated::GeneralNames::ValueType&& v) { _v1Form = std::move(v); _id = v1Form_ID; }
      const asn1::generated::GeneralNames::ValueType& get_v1Form() const { assert(_id == v1Form_ID); return _v1Form; }
      asn1::generated::GeneralNames::ValueType& get_v1Form() { assert(_id == v1Form_ID); return _v1Form; }
      bool has_v1Form_Choosen() const { return _id == v1Form_ID; }
      void choose_v1Form() { _id = v1Form_ID; }

      // Alternative: v2Form
      void set_v2Form(const v2Form_Type::ValueType& v) { _v2Form = v; _id = v2Form_ID; }
      void set_v2Form(v2Form_Type::ValueType&& v) { _v2Form = std::move(v); _id = v2Form_ID; }
      const v2Form_Type::ValueType& get_v2Form() const { assert(_id == v2Form_ID); return _v2Form; }
      v2Form_Type::ValueType& get_v2Form() { assert(_id == v2Form_ID); return _v2Form; }
      bool has_v2Form_Choosen() const { return _id == v2Form_ID; }
      void choose_v2Form() { _id = v2Form_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case v1Form_ID:
            if (_v1Form != other._v1Form)
               return false;
            break;
         case v2Form_ID:
            if (_v2Form != other._v2Form)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         v1Form_ID = 1,
         v2Form_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::GeneralNames::ValueType _v1Form;
      v2Form_Type::ValueType _v2Form;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::GeneralNames _v1Form_Type;
   v2Form_Type _v2Form_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttCertIssuer"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttCertValidityPeriod
class AttCertValidityPeriod : public asn1::SequenceType
{
public:

   explicit AttCertValidityPeriod()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _notBeforeTime_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _notBeforeTime_Type.setTypeName("notBeforeTime");
#endif // ASN1_ENABLE_XER
      _notAfterTime_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _notAfterTime_Type.setTypeName("notAfterTime");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: notBeforeTime
      void set_notBeforeTime(const asn1::GeneralizedTimeType::ValueType& v) { _notBeforeTime = v;  }
      void set_notBeforeTime(asn1::GeneralizedTimeType::ValueType&& v) { _notBeforeTime = std::move(v);  }
      const asn1::GeneralizedTimeType::ValueType& get_notBeforeTime() const { return _notBeforeTime; }
      asn1::GeneralizedTimeType::ValueType& get_notBeforeTime() { return _notBeforeTime; }

      // Component: notAfterTime
      void set_notAfterTime(const asn1::GeneralizedTimeType::ValueType& v) { _notAfterTime = v;  }
      void set_notAfterTime(asn1::GeneralizedTimeType::ValueType&& v) { _notAfterTime = std::move(v);  }
      const asn1::GeneralizedTimeType::ValueType& get_notAfterTime() const { return _notAfterTime; }
      asn1::GeneralizedTimeType::ValueType& get_notAfterTime() { return _notAfterTime; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_notBeforeTime != other._notBeforeTime)
            return false;
         if (_notAfterTime != other._notAfterTime)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::GeneralizedTimeType::ValueType _notBeforeTime;
      asn1::GeneralizedTimeType::ValueType _notAfterTime;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::GeneralizedTimeType _notBeforeTime_Type;
   asn1::GeneralizedTimeType _notAfterTime_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttCertValidityPeriod"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeCertificateInfo
class AttributeCertificateInfo : public asn1::SequenceType
{
public:

   explicit AttributeCertificateInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _holder_Type.setTypeName("holder");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _serialNumber_Type.setTypeName("serialNumber");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attrCertValidityPeriod_Type.setTypeName("attrCertValidityPeriod");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attributes_Type.setTypeName("attributes");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuerUniqueID_Type.setTypeName("issuerUniqueID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extensions_Type.setTypeName("extensions");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef attributes_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute attributes_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _issuerUniqueID_Present = false;
         _extensions_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::AttCertVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::AttCertVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::AttCertVersion::ValueType& get_version() const { return _version; }
      asn1::generated::AttCertVersion::ValueType& get_version() { return _version; }

      // Component: holder
      void set_holder(const asn1::generated::Holder::ValueType& v) { _holder = v;  }
      void set_holder(asn1::generated::Holder::ValueType&& v) { _holder = std::move(v);  }
      const asn1::generated::Holder::ValueType& get_holder() const { return _holder; }
      asn1::generated::Holder::ValueType& get_holder() { return _holder; }

      // Component: issuer
      void set_issuer(const asn1::generated::AttCertIssuer::ValueType& v) { _issuer = v;  }
      void set_issuer(asn1::generated::AttCertIssuer::ValueType&& v) { _issuer = std::move(v);  }
      const asn1::generated::AttCertIssuer::ValueType& get_issuer() const { return _issuer; }
      asn1::generated::AttCertIssuer::ValueType& get_issuer() { return _issuer; }

      // Component: signature
      void set_signature(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signature = v;  }
      void set_signature(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signature = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signature() const { return _signature; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signature() { return _signature; }

      // Component: serialNumber
      void set_serialNumber(const asn1::generated::CertificateSerialNumber::ValueType& v) { _serialNumber = v;  }
      void set_serialNumber(asn1::generated::CertificateSerialNumber::ValueType&& v) { _serialNumber = std::move(v);  }
      const asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() const { return _serialNumber; }
      asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() { return _serialNumber; }

      // Component: attrCertValidityPeriod
      void set_attrCertValidityPeriod(const asn1::generated::AttCertValidityPeriod::ValueType& v) { _attrCertValidityPeriod = v;  }
      void set_attrCertValidityPeriod(asn1::generated::AttCertValidityPeriod::ValueType&& v) { _attrCertValidityPeriod = std::move(v);  }
      const asn1::generated::AttCertValidityPeriod::ValueType& get_attrCertValidityPeriod() const { return _attrCertValidityPeriod; }
      asn1::generated::AttCertValidityPeriod::ValueType& get_attrCertValidityPeriod() { return _attrCertValidityPeriod; }

      // Component: attributes
      void set_attributes(const attributes_Type::ValueType& v) { _attributes = v;  }
      void set_attributes(attributes_Type::ValueType&& v) { _attributes = std::move(v);  }
      const attributes_Type::ValueType& get_attributes() const { return _attributes; }
      attributes_Type::ValueType& get_attributes() { return _attributes; }

      // Component: issuerUniqueID
      void set_issuerUniqueID(const asn1::generated::UniqueIdentifier::ValueType& v) { _issuerUniqueID = v; _issuerUniqueID_Present = true; }
      void set_issuerUniqueID(asn1::generated::UniqueIdentifier::ValueType&& v) { _issuerUniqueID = std::move(v); _issuerUniqueID_Present = true; }
      const asn1::generated::UniqueIdentifier::ValueType& get_issuerUniqueID() const { return _issuerUniqueID; }
      asn1::generated::UniqueIdentifier::ValueType& get_issuerUniqueID() { return _issuerUniqueID; }
      void set_issuerUniqueID_Present(bool present = true) { _issuerUniqueID_Present = present; }
      bool is_issuerUniqueID_Present() const { return _issuerUniqueID_Present; }


      // Component: extensions
      void set_extensions(const asn1::generated::Extensions::ValueType& v) { _extensions = v; _extensions_Present = true; }
      void set_extensions(asn1::generated::Extensions::ValueType&& v) { _extensions = std::move(v); _extensions_Present = true; }
      const asn1::generated::Extensions::ValueType& get_extensions() const { return _extensions; }
      asn1::generated::Extensions::ValueType& get_extensions() { return _extensions; }
      void set_extensions_Present(bool present = true) { _extensions_Present = present; }
      bool is_extensions_Present() const { return _extensions_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_holder != other._holder)
            return false;
         if (_issuer != other._issuer)
            return false;
         if (_signature != other._signature)
            return false;
         if (_serialNumber != other._serialNumber)
            return false;
         if (_attrCertValidityPeriod != other._attrCertValidityPeriod)
            return false;
         if (_attributes != other._attributes)
            return false;
         if (_issuerUniqueID_Present != other._issuerUniqueID_Present)
            return false;
         if (_issuerUniqueID_Present && other._issuerUniqueID_Present && _issuerUniqueID != other._issuerUniqueID)
            return false;
         if (_extensions_Present != other._extensions_Present)
            return false;
         if (_extensions_Present && other._extensions_Present && _extensions != other._extensions)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AttCertVersion::ValueType _version;
      asn1::generated::Holder::ValueType _holder;
      asn1::generated::AttCertIssuer::ValueType _issuer;
      asn1::generated::AlgorithmIdentifier::ValueType _signature;
      asn1::generated::CertificateSerialNumber::ValueType _serialNumber;
      asn1::generated::AttCertValidityPeriod::ValueType _attrCertValidityPeriod;
      attributes_Type::ValueType _attributes;
      asn1::generated::UniqueIdentifier::ValueType _issuerUniqueID;
      bool _issuerUniqueID_Present;
      asn1::generated::Extensions::ValueType _extensions;
      bool _extensions_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AttCertVersion _version_Type;
   asn1::generated::Holder _holder_Type;
   asn1::generated::AttCertIssuer _issuer_Type;
   asn1::generated::AlgorithmIdentifier _signature_Type;
   asn1::generated::CertificateSerialNumber _serialNumber_Type;
   asn1::generated::AttCertValidityPeriod _attrCertValidityPeriod_Type;
   attributes_Type _attributes_Type;
   asn1::generated::UniqueIdentifier _issuerUniqueID_Type;
   asn1::generated::Extensions _extensions_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeCertificateInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeCertificate
class AttributeCertificate : public asn1::SequenceType
{
public:

   explicit AttributeCertificate()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _acinfo_Type.setTypeName("acinfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signatureAlgorithm_Type.setTypeName("signatureAlgorithm");
#endif // ASN1_ENABLE_XER
      _signatureValue_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _signatureValue_Type.setTypeName("signatureValue");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: acinfo
      void set_acinfo(const asn1::generated::AttributeCertificateInfo::ValueType& v) { _acinfo = v;  }
      void set_acinfo(asn1::generated::AttributeCertificateInfo::ValueType&& v) { _acinfo = std::move(v);  }
      const asn1::generated::AttributeCertificateInfo::ValueType& get_acinfo() const { return _acinfo; }
      asn1::generated::AttributeCertificateInfo::ValueType& get_acinfo() { return _acinfo; }

      // Component: signatureAlgorithm
      void set_signatureAlgorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signatureAlgorithm = v;  }
      void set_signatureAlgorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signatureAlgorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() const { return _signatureAlgorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() { return _signatureAlgorithm; }

      // Component: signatureValue
      void set_signatureValue(const asn1::BitStringType::ValueType& v) { _signatureValue = v;  }
      void set_signatureValue(asn1::BitStringType::ValueType&& v) { _signatureValue = std::move(v);  }
      const asn1::BitStringType::ValueType& get_signatureValue() const { return _signatureValue; }
      asn1::BitStringType::ValueType& get_signatureValue() { return _signatureValue; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_acinfo != other._acinfo)
            return false;
         if (_signatureAlgorithm != other._signatureAlgorithm)
            return false;
         if (_signatureValue != other._signatureValue)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AttributeCertificateInfo::ValueType _acinfo;
      asn1::generated::AlgorithmIdentifier::ValueType _signatureAlgorithm;
      asn1::BitStringType::ValueType _signatureValue;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AttributeCertificateInfo _acinfo_Type;
   asn1::generated::AlgorithmIdentifier _signatureAlgorithm_Type;
   asn1::BitStringType _signatureValue_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeCertificate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: targetName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName
class targetName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName : public asn1::TaggingType<asn1::generated::GeneralName>
{
public:

   explicit targetName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName() : asn1::TaggingType<asn1::generated::GeneralName>(new asn1::generated::GeneralName)
   {
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "targetName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: targetGroup_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName
class targetGroup_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName : public asn1::TaggingType<asn1::generated::GeneralName>
{
public:

   explicit targetGroup_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName() : asn1::TaggingType<asn1::generated::GeneralName>(new asn1::generated::GeneralName)
   {
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "targetGroup"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TargetCert
class TargetCert : public asn1::SequenceType
{
public:

   explicit TargetCert()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _targetCertificate_Type.setTypeName("targetCertificate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _targetName_Type.setTypeName("targetName");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certDigestInfo_Type.setTypeName("certDigestInfo");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _targetName_Present = false;
         _certDigestInfo_Present = false;
      }

      // Component: targetCertificate
      void set_targetCertificate(const asn1::generated::IssuerSerial::ValueType& v) { _targetCertificate = v;  }
      void set_targetCertificate(asn1::generated::IssuerSerial::ValueType&& v) { _targetCertificate = std::move(v);  }
      const asn1::generated::IssuerSerial::ValueType& get_targetCertificate() const { return _targetCertificate; }
      asn1::generated::IssuerSerial::ValueType& get_targetCertificate() { return _targetCertificate; }

      // Component: targetName
      void set_targetName(const asn1::generated::GeneralName::ValueType& v) { _targetName = v; _targetName_Present = true; }
      void set_targetName(asn1::generated::GeneralName::ValueType&& v) { _targetName = std::move(v); _targetName_Present = true; }
      const asn1::generated::GeneralName::ValueType& get_targetName() const { return _targetName; }
      asn1::generated::GeneralName::ValueType& get_targetName() { return _targetName; }
      void set_targetName_Present(bool present = true) { _targetName_Present = present; }
      bool is_targetName_Present() const { return _targetName_Present; }


      // Component: certDigestInfo
      void set_certDigestInfo(const asn1::generated::ObjectDigestInfo::ValueType& v) { _certDigestInfo = v; _certDigestInfo_Present = true; }
      void set_certDigestInfo(asn1::generated::ObjectDigestInfo::ValueType&& v) { _certDigestInfo = std::move(v); _certDigestInfo_Present = true; }
      const asn1::generated::ObjectDigestInfo::ValueType& get_certDigestInfo() const { return _certDigestInfo; }
      asn1::generated::ObjectDigestInfo::ValueType& get_certDigestInfo() { return _certDigestInfo; }
      void set_certDigestInfo_Present(bool present = true) { _certDigestInfo_Present = present; }
      bool is_certDigestInfo_Present() const { return _certDigestInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_targetCertificate != other._targetCertificate)
            return false;
         if (_targetName_Present != other._targetName_Present)
            return false;
         if (_targetName_Present && other._targetName_Present && _targetName != other._targetName)
            return false;
         if (_certDigestInfo_Present != other._certDigestInfo_Present)
            return false;
         if (_certDigestInfo_Present && other._certDigestInfo_Present && _certDigestInfo != other._certDigestInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::IssuerSerial::ValueType _targetCertificate;
      asn1::generated::GeneralName::ValueType _targetName;
      bool _targetName_Present;
      asn1::generated::ObjectDigestInfo::ValueType _certDigestInfo;
      bool _certDigestInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::IssuerSerial _targetCertificate_Type;
   asn1::generated::GeneralName _targetName_Type;
   asn1::generated::ObjectDigestInfo _certDigestInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TargetCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: targetCert_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__TargetCert
class targetCert_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__TargetCert : public asn1::TaggingType<asn1::generated::TargetCert>
{
public:

   explicit targetCert_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__TargetCert() : asn1::TaggingType<asn1::generated::TargetCert>(new asn1::generated::TargetCert)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "targetCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Target
class Target : public asn1::ChoiceType
{
public:

   explicit Target()
   {
      _addChoice(&_targetName_Type);
#if defined(ASN1_ENABLE_XER)
      _targetName_Type.setTypeName("targetName");
#endif // ASN1_ENABLE_XER
      _addChoice(&_targetGroup_Type);
#if defined(ASN1_ENABLE_XER)
      _targetGroup_Type.setTypeName("targetGroup");
#endif // ASN1_ENABLE_XER
      _addChoice(&_targetCert_Type);
#if defined(ASN1_ENABLE_XER)
      _targetCert_Type.setTypeName("targetCert");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef targetName_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName targetName_Type;
   typedef targetGroup_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName targetGroup_Type;
   typedef targetCert_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__TargetCert targetCert_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: targetName
      void set_targetName(const targetName_Type::ValueType& v) { _targetName = v; _id = targetName_ID; }
      void set_targetName(targetName_Type::ValueType&& v) { _targetName = std::move(v); _id = targetName_ID; }
      const targetName_Type::ValueType& get_targetName() const { assert(_id == targetName_ID); return _targetName; }
      targetName_Type::ValueType& get_targetName() { assert(_id == targetName_ID); return _targetName; }
      bool has_targetName_Choosen() const { return _id == targetName_ID; }
      void choose_targetName() { _id = targetName_ID; }

      // Alternative: targetGroup
      void set_targetGroup(const targetGroup_Type::ValueType& v) { _targetGroup = v; _id = targetGroup_ID; }
      void set_targetGroup(targetGroup_Type::ValueType&& v) { _targetGroup = std::move(v); _id = targetGroup_ID; }
      const targetGroup_Type::ValueType& get_targetGroup() const { assert(_id == targetGroup_ID); return _targetGroup; }
      targetGroup_Type::ValueType& get_targetGroup() { assert(_id == targetGroup_ID); return _targetGroup; }
      bool has_targetGroup_Choosen() const { return _id == targetGroup_ID; }
      void choose_targetGroup() { _id = targetGroup_ID; }

      // Alternative: targetCert
      void set_targetCert(const targetCert_Type::ValueType& v) { _targetCert = v; _id = targetCert_ID; }
      void set_targetCert(targetCert_Type::ValueType&& v) { _targetCert = std::move(v); _id = targetCert_ID; }
      const targetCert_Type::ValueType& get_targetCert() const { assert(_id == targetCert_ID); return _targetCert; }
      targetCert_Type::ValueType& get_targetCert() { assert(_id == targetCert_ID); return _targetCert; }
      bool has_targetCert_Choosen() const { return _id == targetCert_ID; }
      void choose_targetCert() { _id = targetCert_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case targetName_ID:
            if (_targetName != other._targetName)
               return false;
            break;
         case targetGroup_ID:
            if (_targetGroup != other._targetGroup)
               return false;
            break;
         case targetCert_ID:
            if (_targetCert != other._targetCert)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         targetName_ID = 1,
         targetGroup_ID = 2,
         targetCert_ID = 3,
         __VALUE_NOT_DEFINED__ = -1
      };

      targetName_Type::ValueType _targetName;
      targetGroup_Type::ValueType _targetGroup;
      targetCert_Type::ValueType _targetCert;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   targetName_Type _targetName_Type;
   targetGroup_Type _targetGroup_Type;
   targetCert_Type _targetCert_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Target"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Targets
class Targets : public asn1::SequenceOfType<asn1::generated::Target>
{
public:

   explicit Targets() : asn1::SequenceOfType<asn1::generated::Target>(new asn1::generated::Target)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Targets"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: policyAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames
class policyAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames : public asn1::TaggingType<asn1::generated::GeneralNames>
{
public:

   explicit policyAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames() : asn1::TaggingType<asn1::generated::GeneralNames>(new asn1::generated::GeneralNames)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "policyAuthority"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: _INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String
class _INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String : public asn1::ChoiceType
{
public:

   explicit _INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String()
   {
      _addChoice(&_octets_Type);
      _octets_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _octets_Type.setTypeName("octets");
#endif // ASN1_ENABLE_XER
      _addChoice(&_oid_Type);
      _oid_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _oid_Type.setTypeName("oid");
#endif // ASN1_ENABLE_XER
      _addChoice(&_string_Type);
#if defined(ASN1_ENABLE_XER)
      _string_Type.setTypeName("string");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: octets
      void set_octets(const asn1::OctetStringType::ValueType& v) { _octets = v; _id = octets_ID; }
      void set_octets(asn1::OctetStringType::ValueType&& v) { _octets = std::move(v); _id = octets_ID; }
      const asn1::OctetStringType::ValueType& get_octets() const { assert(_id == octets_ID); return _octets; }
      asn1::OctetStringType::ValueType& get_octets() { assert(_id == octets_ID); return _octets; }
      bool has_octets_Choosen() const { return _id == octets_ID; }
      void choose_octets() { _id = octets_ID; }

      // Alternative: oid
      void set_oid(const asn1::ObjectIdentifierType::ValueType& v) { _oid = v; _id = oid_ID; }
      void set_oid(asn1::ObjectIdentifierType::ValueType&& v) { _oid = std::move(v); _id = oid_ID; }
      const asn1::ObjectIdentifierType::ValueType& get_oid() const { assert(_id == oid_ID); return _oid; }
      asn1::ObjectIdentifierType::ValueType& get_oid() { assert(_id == oid_ID); return _oid; }
      bool has_oid_Choosen() const { return _id == oid_ID; }
      void choose_oid() { _id = oid_ID; }

      // Alternative: string
      void set_string(const asn1::generated::UTF8String::ValueType& v) { _string = v; _id = string_ID; }
      void set_string(asn1::generated::UTF8String::ValueType&& v) { _string = std::move(v); _id = string_ID; }
      const asn1::generated::UTF8String::ValueType& get_string() const { assert(_id == string_ID); return _string; }
      asn1::generated::UTF8String::ValueType& get_string() { assert(_id == string_ID); return _string; }
      bool has_string_Choosen() const { return _id == string_ID; }
      void choose_string() { _id = string_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case octets_ID:
            if (_octets != other._octets)
               return false;
            break;
         case oid_ID:
            if (_oid != other._oid)
               return false;
            break;
         case string_ID:
            if (_string != other._string)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         octets_ID = 1,
         oid_ID = 2,
         string_ID = 3,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::OctetStringType::ValueType _octets;
      asn1::ObjectIdentifierType::ValueType _oid;
      asn1::generated::UTF8String::ValueType _string;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::OctetStringType _octets_Type;
   asn1::ObjectIdentifierType _oid_Type;
   asn1::generated::UTF8String _string_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: values_INTERNAL__SequenceOfType_INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String
class values_INTERNAL__SequenceOfType_INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String : public asn1::SequenceOfType<_INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String>
{
public:

   explicit values_INTERNAL__SequenceOfType_INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String() : asn1::SequenceOfType<_INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String>(new _INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: IetfAttrSyntax
class IetfAttrSyntax : public asn1::SequenceType
{
public:

   explicit IetfAttrSyntax()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _policyAuthority_Type.setTypeName("policyAuthority");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _values_Type.setTypeName("values");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef policyAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames policyAuthority_Type;
   typedef values_INTERNAL__SequenceOfType_INTERNAL__ChoiceType_octetsoctets_INTERNAL_asn1__OctetStringType_oidoid_INTERNAL_asn1__ObjectIdentifierType_stringstring_INTERNAL_asn1__generated__UTF8String values_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _policyAuthority_Present = false;
      }

      // Component: policyAuthority
      void set_policyAuthority(const policyAuthority_Type::ValueType& v) { _policyAuthority = v; _policyAuthority_Present = true; }
      void set_policyAuthority(policyAuthority_Type::ValueType&& v) { _policyAuthority = std::move(v); _policyAuthority_Present = true; }
      const policyAuthority_Type::ValueType& get_policyAuthority() const { return _policyAuthority; }
      policyAuthority_Type::ValueType& get_policyAuthority() { return _policyAuthority; }
      void set_policyAuthority_Present(bool present = true) { _policyAuthority_Present = present; }
      bool is_policyAuthority_Present() const { return _policyAuthority_Present; }


      // Component: values
      void set_values(const values_Type::ValueType& v) { _values = v;  }
      void set_values(values_Type::ValueType&& v) { _values = std::move(v);  }
      const values_Type::ValueType& get_values() const { return _values; }
      values_Type::ValueType& get_values() { return _values; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_policyAuthority_Present != other._policyAuthority_Present)
            return false;
         if (_policyAuthority_Present && other._policyAuthority_Present && _policyAuthority != other._policyAuthority)
            return false;
         if (_values != other._values)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      policyAuthority_Type::ValueType _policyAuthority;
      bool _policyAuthority_Present;
      values_Type::ValueType _values;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   policyAuthority_Type _policyAuthority_Type;
   values_Type _values_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "IetfAttrSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SvceAuthInfo
class SvceAuthInfo : public asn1::SequenceType
{
public:

   explicit SvceAuthInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _service_Type.setTypeName("service");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _ident_Type.setTypeName("ident");
#endif // ASN1_ENABLE_XER
      _authInfo_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _authInfo_Type.setTypeName("authInfo");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _authInfo_Present = false;
      }

      // Component: service
      void set_service(const asn1::generated::GeneralName::ValueType& v) { _service = v;  }
      void set_service(asn1::generated::GeneralName::ValueType&& v) { _service = std::move(v);  }
      const asn1::generated::GeneralName::ValueType& get_service() const { return _service; }
      asn1::generated::GeneralName::ValueType& get_service() { return _service; }

      // Component: ident
      void set_ident(const asn1::generated::GeneralName::ValueType& v) { _ident = v;  }
      void set_ident(asn1::generated::GeneralName::ValueType&& v) { _ident = std::move(v);  }
      const asn1::generated::GeneralName::ValueType& get_ident() const { return _ident; }
      asn1::generated::GeneralName::ValueType& get_ident() { return _ident; }

      // Component: authInfo
      void set_authInfo(const asn1::OctetStringType::ValueType& v) { _authInfo = v; _authInfo_Present = true; }
      void set_authInfo(asn1::OctetStringType::ValueType&& v) { _authInfo = std::move(v); _authInfo_Present = true; }
      const asn1::OctetStringType::ValueType& get_authInfo() const { return _authInfo; }
      asn1::OctetStringType::ValueType& get_authInfo() { return _authInfo; }
      void set_authInfo_Present(bool present = true) { _authInfo_Present = present; }
      bool is_authInfo_Present() const { return _authInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_service != other._service)
            return false;
         if (_ident != other._ident)
            return false;
         if (_authInfo_Present != other._authInfo_Present)
            return false;
         if (_authInfo_Present && other._authInfo_Present && _authInfo != other._authInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::GeneralName::ValueType _service;
      asn1::generated::GeneralName::ValueType _ident;
      asn1::OctetStringType::ValueType _authInfo;
      bool _authInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::GeneralName _service_Type;
   asn1::generated::GeneralName _ident_Type;
   asn1::OctetStringType _authInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SvceAuthInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: roleAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames
class roleAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames : public asn1::TaggingType<asn1::generated::GeneralNames>
{
public:

   explicit roleAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames() : asn1::TaggingType<asn1::generated::GeneralNames>(new asn1::generated::GeneralNames)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "roleAuthority"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: roleName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName
class roleName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName : public asn1::TaggingType<asn1::generated::GeneralName>
{
public:

   explicit roleName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName() : asn1::TaggingType<asn1::generated::GeneralName>(new asn1::generated::GeneralName)
   {
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "roleName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RoleSyntax
class RoleSyntax : public asn1::SequenceType
{
public:

   explicit RoleSyntax()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _roleAuthority_Type.setTypeName("roleAuthority");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _roleName_Type.setTypeName("roleName");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef roleAuthority_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralNames roleAuthority_Type;
   typedef roleName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralName roleName_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _roleAuthority_Present = false;
      }

      // Component: roleAuthority
      void set_roleAuthority(const roleAuthority_Type::ValueType& v) { _roleAuthority = v; _roleAuthority_Present = true; }
      void set_roleAuthority(roleAuthority_Type::ValueType&& v) { _roleAuthority = std::move(v); _roleAuthority_Present = true; }
      const roleAuthority_Type::ValueType& get_roleAuthority() const { return _roleAuthority; }
      roleAuthority_Type::ValueType& get_roleAuthority() { return _roleAuthority; }
      void set_roleAuthority_Present(bool present = true) { _roleAuthority_Present = present; }
      bool is_roleAuthority_Present() const { return _roleAuthority_Present; }


      // Component: roleName
      void set_roleName(const roleName_Type::ValueType& v) { _roleName = v;  }
      void set_roleName(roleName_Type::ValueType&& v) { _roleName = std::move(v);  }
      const roleName_Type::ValueType& get_roleName() const { return _roleName; }
      roleName_Type::ValueType& get_roleName() { return _roleName; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_roleAuthority_Present != other._roleAuthority_Present)
            return false;
         if (_roleAuthority_Present && other._roleAuthority_Present && _roleAuthority != other._roleAuthority)
            return false;
         if (_roleName != other._roleName)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      roleAuthority_Type::ValueType _roleAuthority;
      bool _roleAuthority_Present;
      roleName_Type::ValueType _roleName;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   roleAuthority_Type _roleAuthority_Type;
   roleName_Type _roleName_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RoleSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: policyId_INTERNAL__NOTAG_0_INTERNAL_asn1__ObjectIdentifierType
class policyId_INTERNAL__NOTAG_0_INTERNAL_asn1__ObjectIdentifierType : public asn1::TaggingType<asn1::ObjectIdentifierType>
{
public:

   explicit policyId_INTERNAL__NOTAG_0_INTERNAL_asn1__ObjectIdentifierType() : asn1::TaggingType<asn1::ObjectIdentifierType>(new asn1::ObjectIdentifierType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "policyId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ClassList
class ClassList : public asn1::BitStringType
{
public:

   explicit ClassList()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit ClassList(const ValueType& defaultValue, bool hasDefault) : asn1::BitStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum ClassList_Value
   {
      k_unmarked = 0,
      k_unclassified = 1,
      k_restricted = 2,
      k_confidential = 3,
      k_secret = 4,
      k_topSecret = 5,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ClassList"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: classList_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ClassList
class classList_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ClassList : public asn1::TaggingType<asn1::generated::ClassList>
{
public:

   explicit classList_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ClassList() : asn1::TaggingType<asn1::generated::ClassList>(new asn1::generated::ClassList)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "classList"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__ObjectIdentifierType
class type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__ObjectIdentifierType : public asn1::TaggingType<asn1::ObjectIdentifierType>
{
public:

   explicit type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__ObjectIdentifierType() : asn1::TaggingType<asn1::ObjectIdentifierType>(new asn1::ObjectIdentifierType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "type"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType
class value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType : public asn1::TaggingType<asn1::AnyType>
{
public:

   explicit value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType() : asn1::TaggingType<asn1::AnyType>(new asn1::AnyType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "value"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SecurityCategory
class SecurityCategory : public asn1::SequenceType
{
public:

   explicit SecurityCategory()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _type_Type.setTypeName("type");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef type_INTERNAL__IMPLICIT_0_INTERNAL_asn1__ObjectIdentifierType type_Type;
   typedef value_INTERNAL__NOTAG_1_INTERNAL_asn1__AnyType value_Type;

   class SequenceValue_Type
   {
   public:

      // Component: type
      void set_type(const type_Type::ValueType& v) { _type = v;  }
      void set_type(type_Type::ValueType&& v) { _type = std::move(v);  }
      const type_Type::ValueType& get_type() const { return _type; }
      type_Type::ValueType& get_type() { return _type; }

      // Component: value
      void set_value(const value_Type::ValueType& v) { _value = v;  }
      void set_value(value_Type::ValueType&& v) { _value = std::move(v);  }
      const value_Type::ValueType& get_value() const { return _value; }
      value_Type::ValueType& get_value() { return _value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type != other._type)
            return false;
         if (_value != other._value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      type_Type::ValueType _type;
      value_Type::ValueType _value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   type_Type _type_Type;
   value_Type _value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SecurityCategory"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: securityCategories_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SecurityCategory
class securityCategories_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SecurityCategory : public asn1::TaggingType<asn1::SetOfType<asn1::generated::SecurityCategory>>
{
public:

   explicit securityCategories_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SecurityCategory() : asn1::TaggingType<asn1::SetOfType<asn1::generated::SecurityCategory>>(new asn1::SetOfType<asn1::generated::SecurityCategory>(new asn1::generated::SecurityCategory))
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "value"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Clearance
class Clearance : public asn1::SequenceType
{
public:

   explicit Clearance()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _policyId_Type.setTypeName("policyId");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _classList_Type.setTypeName("classList");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _securityCategories_Type.setTypeName("securityCategories");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef policyId_INTERNAL__NOTAG_0_INTERNAL_asn1__ObjectIdentifierType policyId_Type;
   typedef classList_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__ClassList classList_Type;
   typedef securityCategories_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SecurityCategory securityCategories_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _securityCategories_Present = false;
      }

      // Component: policyId
      void set_policyId(const policyId_Type::ValueType& v) { _policyId = v;  }
      void set_policyId(policyId_Type::ValueType&& v) { _policyId = std::move(v);  }
      const policyId_Type::ValueType& get_policyId() const { return _policyId; }
      policyId_Type::ValueType& get_policyId() { return _policyId; }

      // Component: classList
      void set_classList(const classList_Type::ValueType& v) { _classList = v;  }
      void set_classList(classList_Type::ValueType&& v) { _classList = std::move(v);  }
      const classList_Type::ValueType& get_classList() const { return _classList; }
      classList_Type::ValueType& get_classList() { return _classList; }

      // Component: securityCategories
      void set_securityCategories(const securityCategories_Type::ValueType& v) { _securityCategories = v; _securityCategories_Present = true; }
      void set_securityCategories(securityCategories_Type::ValueType&& v) { _securityCategories = std::move(v); _securityCategories_Present = true; }
      const securityCategories_Type::ValueType& get_securityCategories() const { return _securityCategories; }
      securityCategories_Type::ValueType& get_securityCategories() { return _securityCategories; }
      void set_securityCategories_Present(bool present = true) { _securityCategories_Present = present; }
      bool is_securityCategories_Present() const { return _securityCategories_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_policyId != other._policyId)
            return false;
         if (_classList != other._classList)
            return false;
         if (_securityCategories_Present != other._securityCategories_Present)
            return false;
         if (_securityCategories_Present && other._securityCategories_Present && _securityCategories != other._securityCategories)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      policyId_Type::ValueType _policyId;
      classList_Type::ValueType _classList;
      securityCategories_Type::ValueType _securityCategories;
      bool _securityCategories_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   policyId_Type _policyId_Type;
   classList_Type _classList_Type;
   securityCategories_Type _securityCategories_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Clearance"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttrSpec
class AttrSpec : public asn1::SequenceOfType<asn1::ObjectIdentifierType>
{
public:

   explicit AttrSpec() : asn1::SequenceOfType<asn1::ObjectIdentifierType>(new asn1::ObjectIdentifierType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttrSpec"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: attrs_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute
class attrs_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute : public asn1::SequenceOfType<asn1::generated::Attribute>
{
public:

   explicit attrs_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute() : asn1::SequenceOfType<asn1::generated::Attribute>(new asn1::generated::Attribute)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "attrs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ACClearAttrs
class ACClearAttrs : public asn1::SequenceType
{
public:

   explicit ACClearAttrs()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _acIssuer_Type.setTypeName("acIssuer");
#endif // ASN1_ENABLE_XER
      _acSerial_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _acSerial_Type.setTypeName("acSerial");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attrs_Type.setTypeName("attrs");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef attrs_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute attrs_Type;

   class SequenceValue_Type
   {
   public:

      // Component: acIssuer
      void set_acIssuer(const asn1::generated::GeneralName::ValueType& v) { _acIssuer = v;  }
      void set_acIssuer(asn1::generated::GeneralName::ValueType&& v) { _acIssuer = std::move(v);  }
      const asn1::generated::GeneralName::ValueType& get_acIssuer() const { return _acIssuer; }
      asn1::generated::GeneralName::ValueType& get_acIssuer() { return _acIssuer; }

      // Component: acSerial
      void set_acSerial(const asn1::IntegerType::ValueType& v) { _acSerial = v;  }
      void set_acSerial(asn1::IntegerType::ValueType&& v) { _acSerial = std::move(v);  }
      const asn1::IntegerType::ValueType& get_acSerial() const { return _acSerial; }
      asn1::IntegerType::ValueType& get_acSerial() { return _acSerial; }

      // Component: attrs
      void set_attrs(const attrs_Type::ValueType& v) { _attrs = v;  }
      void set_attrs(attrs_Type::ValueType&& v) { _attrs = std::move(v);  }
      const attrs_Type::ValueType& get_attrs() const { return _attrs; }
      attrs_Type::ValueType& get_attrs() { return _attrs; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_acIssuer != other._acIssuer)
            return false;
         if (_acSerial != other._acSerial)
            return false;
         if (_attrs != other._attrs)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::GeneralName::ValueType _acIssuer;
      asn1::IntegerType::ValueType _acSerial;
      attrs_Type::ValueType _attrs;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::GeneralName _acIssuer_Type;
   asn1::IntegerType _acSerial_Type;
   attrs_Type _attrs_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ACClearAttrs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ProxyInfo
class ProxyInfo : public asn1::SequenceOfType<asn1::generated::Targets>
{
public:

   explicit ProxyInfo() : asn1::SequenceOfType<asn1::generated::Targets>(new asn1::generated::Targets)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ProxyInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: subjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames
class subjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames : public asn1::TaggingType<asn1::generated::GeneralNames>
{
public:

   explicit subjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames() : asn1::TaggingType<asn1::generated::GeneralNames>(new asn1::generated::GeneralNames)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "subjectName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: subject_INTERNAL__ChoiceType_baseCertificateIDbaseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial_subjectNamesubjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames
class subject_INTERNAL__ChoiceType_baseCertificateIDbaseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial_subjectNamesubjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames : public asn1::ChoiceType
{
public:

   explicit subject_INTERNAL__ChoiceType_baseCertificateIDbaseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial_subjectNamesubjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames()
   {
      _addChoice(&_baseCertificateID_Type);
#if defined(ASN1_ENABLE_XER)
      _baseCertificateID_Type.setTypeName("baseCertificateID");
#endif // ASN1_ENABLE_XER
      _addChoice(&_subjectName_Type);
#if defined(ASN1_ENABLE_XER)
      _subjectName_Type.setTypeName("subjectName");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef baseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial baseCertificateID_Type;
   typedef subjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames subjectName_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: baseCertificateID
      void set_baseCertificateID(const baseCertificateID_Type::ValueType& v) { _baseCertificateID = v; _id = baseCertificateID_ID; }
      void set_baseCertificateID(baseCertificateID_Type::ValueType&& v) { _baseCertificateID = std::move(v); _id = baseCertificateID_ID; }
      const baseCertificateID_Type::ValueType& get_baseCertificateID() const { assert(_id == baseCertificateID_ID); return _baseCertificateID; }
      baseCertificateID_Type::ValueType& get_baseCertificateID() { assert(_id == baseCertificateID_ID); return _baseCertificateID; }
      bool has_baseCertificateID_Choosen() const { return _id == baseCertificateID_ID; }
      void choose_baseCertificateID() { _id = baseCertificateID_ID; }

      // Alternative: subjectName
      void set_subjectName(const subjectName_Type::ValueType& v) { _subjectName = v; _id = subjectName_ID; }
      void set_subjectName(subjectName_Type::ValueType&& v) { _subjectName = std::move(v); _id = subjectName_ID; }
      const subjectName_Type::ValueType& get_subjectName() const { assert(_id == subjectName_ID); return _subjectName; }
      subjectName_Type::ValueType& get_subjectName() { assert(_id == subjectName_ID); return _subjectName; }
      bool has_subjectName_Choosen() const { return _id == subjectName_ID; }
      void choose_subjectName() { _id = subjectName_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case baseCertificateID_ID:
            if (_baseCertificateID != other._baseCertificateID)
               return false;
            break;
         case subjectName_ID:
            if (_subjectName != other._subjectName)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         baseCertificateID_ID = 1,
         subjectName_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      baseCertificateID_Type::ValueType _baseCertificateID;
      subjectName_Type::ValueType _subjectName;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   baseCertificateID_Type _baseCertificateID_Type;
   subjectName_Type _subjectName_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "subjectName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttCertVersionV1
class AttCertVersionV1 : public asn1::IntegerType
{
public:

   explicit AttCertVersionV1()
   {
   }

   explicit AttCertVersionV1(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
   }

   enum AttCertVersionV1_Value
   {
      k_v1 = 0,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttCertVersionV1"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeCertificateInfoV1
class AttributeCertificateInfoV1 : public asn1::SequenceType
{
public:

   explicit AttributeCertificateInfoV1() : _version_Type(asn1::generated::AttCertVersionV1::k_v1, true)
   {
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subject_Type.setTypeName("subject");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _serialNumber_Type.setTypeName("serialNumber");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attCertValidityPeriod_Type.setTypeName("attCertValidityPeriod");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attributes_Type.setTypeName("attributes");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuerUniqueID_Type.setTypeName("issuerUniqueID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extensions_Type.setTypeName("extensions");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef subject_INTERNAL__ChoiceType_baseCertificateIDbaseCertificateID_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__IssuerSerial_subjectNamesubjectName_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__GeneralNames subject_Type;
   typedef attributes_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__Attribute attributes_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _issuerUniqueID_Present = false;
         _extensions_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::AttCertVersionV1::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::AttCertVersionV1::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::AttCertVersionV1::ValueType& get_version() const { return _version; }
      asn1::generated::AttCertVersionV1::ValueType& get_version() { return _version; }

      // Component: subject
      void set_subject(const subject_Type::ValueType& v) { _subject = v;  }
      void set_subject(subject_Type::ValueType&& v) { _subject = std::move(v);  }
      const subject_Type::ValueType& get_subject() const { return _subject; }
      subject_Type::ValueType& get_subject() { return _subject; }

      // Component: issuer
      void set_issuer(const asn1::generated::GeneralNames::ValueType& v) { _issuer = v;  }
      void set_issuer(asn1::generated::GeneralNames::ValueType&& v) { _issuer = std::move(v);  }
      const asn1::generated::GeneralNames::ValueType& get_issuer() const { return _issuer; }
      asn1::generated::GeneralNames::ValueType& get_issuer() { return _issuer; }

      // Component: signature
      void set_signature(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signature = v;  }
      void set_signature(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signature = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signature() const { return _signature; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signature() { return _signature; }

      // Component: serialNumber
      void set_serialNumber(const asn1::generated::CertificateSerialNumber::ValueType& v) { _serialNumber = v;  }
      void set_serialNumber(asn1::generated::CertificateSerialNumber::ValueType&& v) { _serialNumber = std::move(v);  }
      const asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() const { return _serialNumber; }
      asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() { return _serialNumber; }

      // Component: attCertValidityPeriod
      void set_attCertValidityPeriod(const asn1::generated::AttCertValidityPeriod::ValueType& v) { _attCertValidityPeriod = v;  }
      void set_attCertValidityPeriod(asn1::generated::AttCertValidityPeriod::ValueType&& v) { _attCertValidityPeriod = std::move(v);  }
      const asn1::generated::AttCertValidityPeriod::ValueType& get_attCertValidityPeriod() const { return _attCertValidityPeriod; }
      asn1::generated::AttCertValidityPeriod::ValueType& get_attCertValidityPeriod() { return _attCertValidityPeriod; }

      // Component: attributes
      void set_attributes(const attributes_Type::ValueType& v) { _attributes = v;  }
      void set_attributes(attributes_Type::ValueType&& v) { _attributes = std::move(v);  }
      const attributes_Type::ValueType& get_attributes() const { return _attributes; }
      attributes_Type::ValueType& get_attributes() { return _attributes; }

      // Component: issuerUniqueID
      void set_issuerUniqueID(const asn1::generated::UniqueIdentifier::ValueType& v) { _issuerUniqueID = v; _issuerUniqueID_Present = true; }
      void set_issuerUniqueID(asn1::generated::UniqueIdentifier::ValueType&& v) { _issuerUniqueID = std::move(v); _issuerUniqueID_Present = true; }
      const asn1::generated::UniqueIdentifier::ValueType& get_issuerUniqueID() const { return _issuerUniqueID; }
      asn1::generated::UniqueIdentifier::ValueType& get_issuerUniqueID() { return _issuerUniqueID; }
      void set_issuerUniqueID_Present(bool present = true) { _issuerUniqueID_Present = present; }
      bool is_issuerUniqueID_Present() const { return _issuerUniqueID_Present; }


      // Component: extensions
      void set_extensions(const asn1::generated::Extensions::ValueType& v) { _extensions = v; _extensions_Present = true; }
      void set_extensions(asn1::generated::Extensions::ValueType&& v) { _extensions = std::move(v); _extensions_Present = true; }
      const asn1::generated::Extensions::ValueType& get_extensions() const { return _extensions; }
      asn1::generated::Extensions::ValueType& get_extensions() { return _extensions; }
      void set_extensions_Present(bool present = true) { _extensions_Present = present; }
      bool is_extensions_Present() const { return _extensions_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_subject != other._subject)
            return false;
         if (_issuer != other._issuer)
            return false;
         if (_signature != other._signature)
            return false;
         if (_serialNumber != other._serialNumber)
            return false;
         if (_attCertValidityPeriod != other._attCertValidityPeriod)
            return false;
         if (_attributes != other._attributes)
            return false;
         if (_issuerUniqueID_Present != other._issuerUniqueID_Present)
            return false;
         if (_issuerUniqueID_Present && other._issuerUniqueID_Present && _issuerUniqueID != other._issuerUniqueID)
            return false;
         if (_extensions_Present != other._extensions_Present)
            return false;
         if (_extensions_Present && other._extensions_Present && _extensions != other._extensions)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AttCertVersionV1::ValueType _version;
      subject_Type::ValueType _subject;
      asn1::generated::GeneralNames::ValueType _issuer;
      asn1::generated::AlgorithmIdentifier::ValueType _signature;
      asn1::generated::CertificateSerialNumber::ValueType _serialNumber;
      asn1::generated::AttCertValidityPeriod::ValueType _attCertValidityPeriod;
      attributes_Type::ValueType _attributes;
      asn1::generated::UniqueIdentifier::ValueType _issuerUniqueID;
      bool _issuerUniqueID_Present;
      asn1::generated::Extensions::ValueType _extensions;
      bool _extensions_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AttCertVersionV1 _version_Type;
   subject_Type _subject_Type;
   asn1::generated::GeneralNames _issuer_Type;
   asn1::generated::AlgorithmIdentifier _signature_Type;
   asn1::generated::CertificateSerialNumber _serialNumber_Type;
   asn1::generated::AttCertValidityPeriod _attCertValidityPeriod_Type;
   attributes_Type _attributes_Type;
   asn1::generated::UniqueIdentifier _issuerUniqueID_Type;
   asn1::generated::Extensions _extensions_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeCertificateInfoV1"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeCertificateV1
class AttributeCertificateV1 : public asn1::SequenceType
{
public:

   explicit AttributeCertificateV1()
   {
#if defined(ASN1_ENABLE_XER)
      _acInfo_Type.setTypeName("acInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signatureAlgorithm_Type.setTypeName("signatureAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: acInfo
      void set_acInfo(const asn1::generated::AttributeCertificateInfoV1::ValueType& v) { _acInfo = v;  }
      void set_acInfo(asn1::generated::AttributeCertificateInfoV1::ValueType&& v) { _acInfo = std::move(v);  }
      const asn1::generated::AttributeCertificateInfoV1::ValueType& get_acInfo() const { return _acInfo; }
      asn1::generated::AttributeCertificateInfoV1::ValueType& get_acInfo() { return _acInfo; }

      // Component: signatureAlgorithm
      void set_signatureAlgorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _signatureAlgorithm = v;  }
      void set_signatureAlgorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _signatureAlgorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() const { return _signatureAlgorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_signatureAlgorithm() { return _signatureAlgorithm; }

      // Component: signature
      void set_signature(const asn1::BitStringType::ValueType& v) { _signature = v;  }
      void set_signature(asn1::BitStringType::ValueType&& v) { _signature = std::move(v);  }
      const asn1::BitStringType::ValueType& get_signature() const { return _signature; }
      asn1::BitStringType::ValueType& get_signature() { return _signature; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_acInfo != other._acInfo)
            return false;
         if (_signatureAlgorithm != other._signatureAlgorithm)
            return false;
         if (_signature != other._signature)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AttributeCertificateInfoV1::ValueType _acInfo;
      asn1::generated::AlgorithmIdentifier::ValueType _signatureAlgorithm;
      asn1::BitStringType::ValueType _signature;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AttributeCertificateInfoV1 _acInfo_Type;
   asn1::generated::AlgorithmIdentifier _signatureAlgorithm_Type;
   asn1::BitStringType _signature_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeCertificateV1"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: content_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType
class content_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType : public asn1::TaggingType<asn1::AnyType>
{
public:

   explicit content_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType() : asn1::TaggingType<asn1::AnyType>(new asn1::AnyType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "content"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ContentType
class ContentType : public asn1::ObjectIdentifierType
{
public:

   explicit ContentType()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit ContentType(const ValueType& defaultValue, bool hasDefault) : asn1::ObjectIdentifierType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ContentType"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ContentInfo
class ContentInfo : public asn1::SequenceType
{
public:

   explicit ContentInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _contentType_Type.setTypeName("contentType");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _content_Type.setTypeName("content");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef content_INTERNAL__EXPLICIT_0_INTERNAL_asn1__AnyType content_Type;

   class SequenceValue_Type
   {
   public:

      // Component: contentType
      void set_contentType(const asn1::generated::ContentType::ValueType& v) { _contentType = v;  }
      void set_contentType(asn1::generated::ContentType::ValueType&& v) { _contentType = std::move(v);  }
      const asn1::generated::ContentType::ValueType& get_contentType() const { return _contentType; }
      asn1::generated::ContentType::ValueType& get_contentType() { return _contentType; }

      // Component: content
      void set_content(const content_Type::ValueType& v) { _content = v;  }
      void set_content(content_Type::ValueType&& v) { _content = std::move(v);  }
      const content_Type::ValueType& get_content() const { return _content; }
      content_Type::ValueType& get_content() { return _content; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_contentType != other._contentType)
            return false;
         if (_content != other._content)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::ContentType::ValueType _contentType;
      content_Type::ValueType _content;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::ContentType _contentType_Type;
   content_Type _content_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ContentInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CMSVersion
class CMSVersion : public asn1::IntegerType
{
public:

   explicit CMSVersion()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit CMSVersion(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum CMSVersion_Value
   {
      k_v0 = 0,
      k_v1 = 1,
      k_v2 = 2,
      k_v3 = 3,
      k_v4 = 4,
      k_v5 = 5,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CMSVersion"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeValueImplicit
class AttributeValueImplicit : public asn1::AnyType
{
public:

   explicit AttributeValueImplicit()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeValueImplicit"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: attrValues_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValueImplicit
class attrValues_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValueImplicit : public asn1::SetOfType<asn1::generated::AttributeValueImplicit>
{
public:

   explicit attrValues_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValueImplicit() : asn1::SetOfType<asn1::generated::AttributeValueImplicit>(new asn1::generated::AttributeValueImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "attrValues"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeImplicit
class AttributeImplicit : public asn1::SequenceType
{
public:

   explicit AttributeImplicit()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _attrType_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _attrType_Type.setTypeName("attrType");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attrValues_Type.setTypeName("attrValues");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef attrValues_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValueImplicit attrValues_Type;

   class SequenceValue_Type
   {
   public:

      // Component: attrType
      void set_attrType(const asn1::ObjectIdentifierType::ValueType& v) { _attrType = v;  }
      void set_attrType(asn1::ObjectIdentifierType::ValueType&& v) { _attrType = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_attrType() const { return _attrType; }
      asn1::ObjectIdentifierType::ValueType& get_attrType() { return _attrType; }

      // Component: attrValues
      void set_attrValues(const attrValues_Type::ValueType& v) { _attrValues = v;  }
      void set_attrValues(attrValues_Type::ValueType&& v) { _attrValues = std::move(v);  }
      const attrValues_Type::ValueType& get_attrValues() const { return _attrValues; }
      attrValues_Type::ValueType& get_attrValues() { return _attrValues; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_attrType != other._attrType)
            return false;
         if (_attrValues != other._attrValues)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _attrType;
      attrValues_Type::ValueType _attrValues;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _attrType_Type;
   attrValues_Type _attrValues_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeImplicit"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UnauthAttributes
class UnauthAttributes : public asn1::SetOfType<asn1::generated::AttributeImplicit>
{
public:

   explicit UnauthAttributes() : asn1::SetOfType<asn1::generated::AttributeImplicit>(new asn1::generated::AttributeImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UnauthAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtendedCertificateInfo
class ExtendedCertificateInfo : public asn1::SequenceType
{
public:

   explicit ExtendedCertificateInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certificate_Type.setTypeName("certificate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attributes_Type.setTypeName("attributes");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: certificate
      void set_certificate(const asn1::generated::Certificate::ValueType& v) { _certificate = v;  }
      void set_certificate(asn1::generated::Certificate::ValueType&& v) { _certificate = std::move(v);  }
      const asn1::generated::Certificate::ValueType& get_certificate() const { return _certificate; }
      asn1::generated::Certificate::ValueType& get_certificate() { return _certificate; }

      // Component: attributes
      void set_attributes(const asn1::generated::UnauthAttributes::ValueType& v) { _attributes = v;  }
      void set_attributes(asn1::generated::UnauthAttributes::ValueType&& v) { _attributes = std::move(v);  }
      const asn1::generated::UnauthAttributes::ValueType& get_attributes() const { return _attributes; }
      asn1::generated::UnauthAttributes::ValueType& get_attributes() { return _attributes; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_certificate != other._certificate)
            return false;
         if (_attributes != other._attributes)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      asn1::generated::Certificate::ValueType _certificate;
      asn1::generated::UnauthAttributes::ValueType _attributes;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   asn1::generated::Certificate _certificate_Type;
   asn1::generated::UnauthAttributes _attributes_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtendedCertificateInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SignatureAlgorithmIdentifier
class SignatureAlgorithmIdentifier : public asn1::generated::AlgorithmIdentifier
{
public:

   explicit SignatureAlgorithmIdentifier()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SignatureAlgorithmIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Signature
class Signature : public asn1::BitStringType
{
public:

   explicit Signature()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit Signature(const ValueType& defaultValue, bool hasDefault) : asn1::BitStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Signature"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtendedCertificate
class ExtendedCertificate : public asn1::SequenceType
{
public:

   explicit ExtendedCertificate()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _extendedCertificateInfo_Type.setTypeName("extendedCertificateInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signatureAlgorithm_Type.setTypeName("signatureAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: extendedCertificateInfo
      void set_extendedCertificateInfo(const asn1::generated::ExtendedCertificateInfo::ValueType& v) { _extendedCertificateInfo = v;  }
      void set_extendedCertificateInfo(asn1::generated::ExtendedCertificateInfo::ValueType&& v) { _extendedCertificateInfo = std::move(v);  }
      const asn1::generated::ExtendedCertificateInfo::ValueType& get_extendedCertificateInfo() const { return _extendedCertificateInfo; }
      asn1::generated::ExtendedCertificateInfo::ValueType& get_extendedCertificateInfo() { return _extendedCertificateInfo; }

      // Component: signatureAlgorithm
      void set_signatureAlgorithm(const asn1::generated::SignatureAlgorithmIdentifier::ValueType& v) { _signatureAlgorithm = v;  }
      void set_signatureAlgorithm(asn1::generated::SignatureAlgorithmIdentifier::ValueType&& v) { _signatureAlgorithm = std::move(v);  }
      const asn1::generated::SignatureAlgorithmIdentifier::ValueType& get_signatureAlgorithm() const { return _signatureAlgorithm; }
      asn1::generated::SignatureAlgorithmIdentifier::ValueType& get_signatureAlgorithm() { return _signatureAlgorithm; }

      // Component: signature
      void set_signature(const asn1::generated::Signature::ValueType& v) { _signature = v;  }
      void set_signature(asn1::generated::Signature::ValueType&& v) { _signature = std::move(v);  }
      const asn1::generated::Signature::ValueType& get_signature() const { return _signature; }
      asn1::generated::Signature::ValueType& get_signature() { return _signature; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_extendedCertificateInfo != other._extendedCertificateInfo)
            return false;
         if (_signatureAlgorithm != other._signatureAlgorithm)
            return false;
         if (_signature != other._signature)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::ExtendedCertificateInfo::ValueType _extendedCertificateInfo;
      asn1::generated::SignatureAlgorithmIdentifier::ValueType _signatureAlgorithm;
      asn1::generated::Signature::ValueType _signature;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::ExtendedCertificateInfo _extendedCertificateInfo_Type;
   asn1::generated::SignatureAlgorithmIdentifier _signatureAlgorithm_Type;
   asn1::generated::Signature _signature_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtendedCertificate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: extendedCertificate_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__ExtendedCertificate
class extendedCertificate_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__ExtendedCertificate : public asn1::TaggingType<asn1::generated::ExtendedCertificate>
{
public:

   explicit extendedCertificate_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__ExtendedCertificate() : asn1::TaggingType<asn1::generated::ExtendedCertificate>(new asn1::generated::ExtendedCertificate)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "attrValues"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: v1AttrCert_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__AttributeCertificateV1
class v1AttrCert_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__AttributeCertificateV1 : public asn1::TaggingType<asn1::generated::AttributeCertificateV1>
{
public:

   explicit v1AttrCert_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__AttributeCertificateV1() : asn1::TaggingType<asn1::generated::AttributeCertificateV1>(new asn1::generated::AttributeCertificateV1)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "v1AttrCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeCertificateV2
class AttributeCertificateV2 : public asn1::generated::AttributeCertificate
{
public:

   explicit AttributeCertificateV2()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeCertificateV2"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: v2AttrCert_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AttributeCertificateV2
class v2AttrCert_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AttributeCertificateV2 : public asn1::TaggingType<asn1::generated::AttributeCertificateV2>
{
public:

   explicit v2AttrCert_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AttributeCertificateV2() : asn1::TaggingType<asn1::generated::AttributeCertificateV2>(new asn1::generated::AttributeCertificateV2)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "v2AttrCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OtherCertificateFormat
class OtherCertificateFormat : public asn1::SequenceType
{
public:

   explicit OtherCertificateFormat()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _otherCertFormat_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _otherCertFormat_Type.setTypeName("otherCertFormat");
#endif // ASN1_ENABLE_XER
      _otherCert_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _otherCert_Type.setTypeName("otherCert");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: otherCertFormat
      void set_otherCertFormat(const asn1::ObjectIdentifierType::ValueType& v) { _otherCertFormat = v;  }
      void set_otherCertFormat(asn1::ObjectIdentifierType::ValueType&& v) { _otherCertFormat = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_otherCertFormat() const { return _otherCertFormat; }
      asn1::ObjectIdentifierType::ValueType& get_otherCertFormat() { return _otherCertFormat; }

      // Component: otherCert
      void set_otherCert(const asn1::AnyType::ValueType& v) { _otherCert = v;  }
      void set_otherCert(asn1::AnyType::ValueType&& v) { _otherCert = std::move(v);  }
      const asn1::AnyType::ValueType& get_otherCert() const { return _otherCert; }
      asn1::AnyType::ValueType& get_otherCert() { return _otherCert; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_otherCertFormat != other._otherCertFormat)
            return false;
         if (_otherCert != other._otherCert)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _otherCertFormat;
      asn1::AnyType::ValueType _otherCert;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _otherCertFormat_Type;
   asn1::AnyType _otherCert_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OtherCertificateFormat"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: other_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OtherCertificateFormat
class other_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OtherCertificateFormat : public asn1::TaggingType<asn1::generated::OtherCertificateFormat>
{
public:

   explicit other_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OtherCertificateFormat() : asn1::TaggingType<asn1::generated::OtherCertificateFormat>(new asn1::generated::OtherCertificateFormat)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "other"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificateChoices
class CertificateChoices : public asn1::ChoiceType
{
public:

   explicit CertificateChoices()
   {
      _addChoice(&_certificate_Type);
#if defined(ASN1_ENABLE_XER)
      _certificate_Type.setTypeName("certificate");
#endif // ASN1_ENABLE_XER
      _addChoice(&_extendedCertificate_Type);
#if defined(ASN1_ENABLE_XER)
      _extendedCertificate_Type.setTypeName("extendedCertificate");
#endif // ASN1_ENABLE_XER
      _addChoice(&_v1AttrCert_Type);
#if defined(ASN1_ENABLE_XER)
      _v1AttrCert_Type.setTypeName("v1AttrCert");
#endif // ASN1_ENABLE_XER
      _addChoice(&_v2AttrCert_Type);
#if defined(ASN1_ENABLE_XER)
      _v2AttrCert_Type.setTypeName("v2AttrCert");
#endif // ASN1_ENABLE_XER
      _addChoice(&_other_Type);
#if defined(ASN1_ENABLE_XER)
      _other_Type.setTypeName("other");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef extendedCertificate_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__ExtendedCertificate extendedCertificate_Type;
   typedef v1AttrCert_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__AttributeCertificateV1 v1AttrCert_Type;
   typedef v2AttrCert_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AttributeCertificateV2 v2AttrCert_Type;
   typedef other_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__OtherCertificateFormat other_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: certificate
      void set_certificate(const asn1::generated::Certificate::ValueType& v) { _certificate = v; _id = certificate_ID; }
      void set_certificate(asn1::generated::Certificate::ValueType&& v) { _certificate = std::move(v); _id = certificate_ID; }
      const asn1::generated::Certificate::ValueType& get_certificate() const { assert(_id == certificate_ID); return _certificate; }
      asn1::generated::Certificate::ValueType& get_certificate() { assert(_id == certificate_ID); return _certificate; }
      bool has_certificate_Choosen() const { return _id == certificate_ID; }
      void choose_certificate() { _id = certificate_ID; }

      // Alternative: extendedCertificate
      void set_extendedCertificate(const extendedCertificate_Type::ValueType& v) { _extendedCertificate = v; _id = extendedCertificate_ID; }
      void set_extendedCertificate(extendedCertificate_Type::ValueType&& v) { _extendedCertificate = std::move(v); _id = extendedCertificate_ID; }
      const extendedCertificate_Type::ValueType& get_extendedCertificate() const { assert(_id == extendedCertificate_ID); return _extendedCertificate; }
      extendedCertificate_Type::ValueType& get_extendedCertificate() { assert(_id == extendedCertificate_ID); return _extendedCertificate; }
      bool has_extendedCertificate_Choosen() const { return _id == extendedCertificate_ID; }
      void choose_extendedCertificate() { _id = extendedCertificate_ID; }

      // Alternative: v1AttrCert
      void set_v1AttrCert(const v1AttrCert_Type::ValueType& v) { _v1AttrCert = v; _id = v1AttrCert_ID; }
      void set_v1AttrCert(v1AttrCert_Type::ValueType&& v) { _v1AttrCert = std::move(v); _id = v1AttrCert_ID; }
      const v1AttrCert_Type::ValueType& get_v1AttrCert() const { assert(_id == v1AttrCert_ID); return _v1AttrCert; }
      v1AttrCert_Type::ValueType& get_v1AttrCert() { assert(_id == v1AttrCert_ID); return _v1AttrCert; }
      bool has_v1AttrCert_Choosen() const { return _id == v1AttrCert_ID; }
      void choose_v1AttrCert() { _id = v1AttrCert_ID; }

      // Alternative: v2AttrCert
      void set_v2AttrCert(const v2AttrCert_Type::ValueType& v) { _v2AttrCert = v; _id = v2AttrCert_ID; }
      void set_v2AttrCert(v2AttrCert_Type::ValueType&& v) { _v2AttrCert = std::move(v); _id = v2AttrCert_ID; }
      const v2AttrCert_Type::ValueType& get_v2AttrCert() const { assert(_id == v2AttrCert_ID); return _v2AttrCert; }
      v2AttrCert_Type::ValueType& get_v2AttrCert() { assert(_id == v2AttrCert_ID); return _v2AttrCert; }
      bool has_v2AttrCert_Choosen() const { return _id == v2AttrCert_ID; }
      void choose_v2AttrCert() { _id = v2AttrCert_ID; }

      // Alternative: other
      void set_other(const other_Type::ValueType& v) { _other = v; _id = other_ID; }
      void set_other(other_Type::ValueType&& v) { _other = std::move(v); _id = other_ID; }
      const other_Type::ValueType& get_other() const { assert(_id == other_ID); return _other; }
      other_Type::ValueType& get_other() { assert(_id == other_ID); return _other; }
      bool has_other_Choosen() const { return _id == other_ID; }
      void choose_other() { _id = other_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case certificate_ID:
            if (_certificate != other._certificate)
               return false;
            break;
         case extendedCertificate_ID:
            if (_extendedCertificate != other._extendedCertificate)
               return false;
            break;
         case v1AttrCert_ID:
            if (_v1AttrCert != other._v1AttrCert)
               return false;
            break;
         case v2AttrCert_ID:
            if (_v2AttrCert != other._v2AttrCert)
               return false;
            break;
         case other_ID:
            if (_other != other._other)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         certificate_ID = 1,
         extendedCertificate_ID = 2,
         v1AttrCert_ID = 3,
         v2AttrCert_ID = 4,
         other_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::Certificate::ValueType _certificate;
      extendedCertificate_Type::ValueType _extendedCertificate;
      v1AttrCert_Type::ValueType _v1AttrCert;
      v2AttrCert_Type::ValueType _v2AttrCert;
      other_Type::ValueType _other;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::Certificate _certificate_Type;
   extendedCertificate_Type _extendedCertificate_Type;
   v1AttrCert_Type _v1AttrCert_Type;
   v2AttrCert_Type _v2AttrCert_Type;
   other_Type _other_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificateChoices"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificateSet
class CertificateSet : public asn1::SetOfType<asn1::generated::CertificateChoices>
{
public:

   explicit CertificateSet() : asn1::SetOfType<asn1::generated::CertificateChoices>(new asn1::generated::CertificateChoices)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificateSet"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: certificates_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet
class certificates_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet : public asn1::TaggingType<asn1::generated::CertificateSet>
{
public:

   explicit certificates_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet() : asn1::TaggingType<asn1::generated::CertificateSet>(new asn1::generated::CertificateSet)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "other"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OtherRevocationInfoFormat
class OtherRevocationInfoFormat : public asn1::SequenceType
{
public:

   explicit OtherRevocationInfoFormat()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _otherRevInfoFormat_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _otherRevInfoFormat_Type.setTypeName("otherRevInfoFormat");
#endif // ASN1_ENABLE_XER
      _otherRevInfo_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _otherRevInfo_Type.setTypeName("otherRevInfo");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: otherRevInfoFormat
      void set_otherRevInfoFormat(const asn1::ObjectIdentifierType::ValueType& v) { _otherRevInfoFormat = v;  }
      void set_otherRevInfoFormat(asn1::ObjectIdentifierType::ValueType&& v) { _otherRevInfoFormat = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_otherRevInfoFormat() const { return _otherRevInfoFormat; }
      asn1::ObjectIdentifierType::ValueType& get_otherRevInfoFormat() { return _otherRevInfoFormat; }

      // Component: otherRevInfo
      void set_otherRevInfo(const asn1::AnyType::ValueType& v) { _otherRevInfo = v;  }
      void set_otherRevInfo(asn1::AnyType::ValueType&& v) { _otherRevInfo = std::move(v);  }
      const asn1::AnyType::ValueType& get_otherRevInfo() const { return _otherRevInfo; }
      asn1::AnyType::ValueType& get_otherRevInfo() { return _otherRevInfo; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_otherRevInfoFormat != other._otherRevInfoFormat)
            return false;
         if (_otherRevInfo != other._otherRevInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _otherRevInfoFormat;
      asn1::AnyType::ValueType _otherRevInfo;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _otherRevInfoFormat_Type;
   asn1::AnyType _otherRevInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OtherRevocationInfoFormat"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: other_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__OtherRevocationInfoFormat
class other_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__OtherRevocationInfoFormat : public asn1::TaggingType<asn1::generated::OtherRevocationInfoFormat>
{
public:

   explicit other_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__OtherRevocationInfoFormat() : asn1::TaggingType<asn1::generated::OtherRevocationInfoFormat>(new asn1::generated::OtherRevocationInfoFormat)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "other"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RevocationInfoChoice
class RevocationInfoChoice : public asn1::ChoiceType
{
public:

   explicit RevocationInfoChoice()
   {
      _addChoice(&_crl_Type);
#if defined(ASN1_ENABLE_XER)
      _crl_Type.setTypeName("crl");
#endif // ASN1_ENABLE_XER
      _addChoice(&_other_Type);
#if defined(ASN1_ENABLE_XER)
      _other_Type.setTypeName("other");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef other_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__OtherRevocationInfoFormat other_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: crl
      void set_crl(const asn1::generated::CertificateList::ValueType& v) { _crl = v; _id = crl_ID; }
      void set_crl(asn1::generated::CertificateList::ValueType&& v) { _crl = std::move(v); _id = crl_ID; }
      const asn1::generated::CertificateList::ValueType& get_crl() const { assert(_id == crl_ID); return _crl; }
      asn1::generated::CertificateList::ValueType& get_crl() { assert(_id == crl_ID); return _crl; }
      bool has_crl_Choosen() const { return _id == crl_ID; }
      void choose_crl() { _id = crl_ID; }

      // Alternative: other
      void set_other(const other_Type::ValueType& v) { _other = v; _id = other_ID; }
      void set_other(other_Type::ValueType&& v) { _other = std::move(v); _id = other_ID; }
      const other_Type::ValueType& get_other() const { assert(_id == other_ID); return _other; }
      other_Type::ValueType& get_other() { assert(_id == other_ID); return _other; }
      bool has_other_Choosen() const { return _id == other_ID; }
      void choose_other() { _id = other_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case crl_ID:
            if (_crl != other._crl)
               return false;
            break;
         case other_ID:
            if (_other != other._other)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         crl_ID = 1,
         other_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::CertificateList::ValueType _crl;
      other_Type::ValueType _other;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertificateList _crl_Type;
   other_Type _other_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RevocationInfoChoice"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RevocationInfoChoices
class RevocationInfoChoices : public asn1::SetOfType<asn1::generated::RevocationInfoChoice>
{
public:

   explicit RevocationInfoChoices() : asn1::SetOfType<asn1::generated::RevocationInfoChoice>(new asn1::generated::RevocationInfoChoice)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RevocationInfoChoices"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: crls_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__RevocationInfoChoices
class crls_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__RevocationInfoChoices : public asn1::TaggingType<asn1::generated::RevocationInfoChoices>
{
public:

   explicit crls_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__RevocationInfoChoices() : asn1::TaggingType<asn1::generated::RevocationInfoChoices>(new asn1::generated::RevocationInfoChoices)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "other"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DigestAlgorithmIdentifier
class DigestAlgorithmIdentifier : public asn1::generated::AlgorithmIdentifier
{
public:

   explicit DigestAlgorithmIdentifier()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DigestAlgorithmIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DigestAlgorithmIdentifiers
class DigestAlgorithmIdentifiers : public asn1::SetOfType<asn1::generated::DigestAlgorithmIdentifier>
{
public:

   explicit DigestAlgorithmIdentifiers() : asn1::SetOfType<asn1::generated::DigestAlgorithmIdentifier>(new asn1::generated::DigestAlgorithmIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DigestAlgorithmIdentifiers"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: eContent_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType
class eContent_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit eContent_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "eContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncapsulatedContentInfo
class EncapsulatedContentInfo : public asn1::SequenceType
{
public:

   explicit EncapsulatedContentInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _eContentType_Type.setTypeName("eContentType");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _eContent_Type.setTypeName("eContent");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef eContent_INTERNAL__EXPLICIT_0_INTERNAL_asn1__OctetStringType eContent_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _eContent_Present = false;
      }

      // Component: eContentType
      void set_eContentType(const asn1::generated::ContentType::ValueType& v) { _eContentType = v;  }
      void set_eContentType(asn1::generated::ContentType::ValueType&& v) { _eContentType = std::move(v);  }
      const asn1::generated::ContentType::ValueType& get_eContentType() const { return _eContentType; }
      asn1::generated::ContentType::ValueType& get_eContentType() { return _eContentType; }

      // Component: eContent
      void set_eContent(const eContent_Type::ValueType& v) { _eContent = v; _eContent_Present = true; }
      void set_eContent(eContent_Type::ValueType&& v) { _eContent = std::move(v); _eContent_Present = true; }
      const eContent_Type::ValueType& get_eContent() const { return _eContent; }
      eContent_Type::ValueType& get_eContent() { return _eContent; }
      void set_eContent_Present(bool present = true) { _eContent_Present = present; }
      bool is_eContent_Present() const { return _eContent_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_eContentType != other._eContentType)
            return false;
         if (_eContent_Present != other._eContent_Present)
            return false;
         if (_eContent_Present && other._eContent_Present && _eContent != other._eContent)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::ContentType::ValueType _eContentType;
      eContent_Type::ValueType _eContent;
      bool _eContent_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::ContentType _eContentType_Type;
   eContent_Type _eContent_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncapsulatedContentInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SignedAttributes
class SignedAttributes : public asn1::SetOfType<asn1::generated::AttributeImplicit>
{
public:

   explicit SignedAttributes() : asn1::SetOfType<asn1::generated::AttributeImplicit>(new asn1::generated::AttributeImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SignedAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: signedAttrs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__SignedAttributes
class signedAttrs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__SignedAttributes : public asn1::TaggingType<asn1::generated::SignedAttributes>
{
public:

   explicit signedAttrs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__SignedAttributes() : asn1::TaggingType<asn1::generated::SignedAttributes>(new asn1::generated::SignedAttributes)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "signedAttrs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UnsignedAttributes
class UnsignedAttributes : public asn1::SetOfType<asn1::generated::AttributeImplicit>
{
public:

   explicit UnsignedAttributes() : asn1::SetOfType<asn1::generated::AttributeImplicit>(new asn1::generated::AttributeImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UnsignedAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: unsignedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnsignedAttributes
class unsignedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnsignedAttributes : public asn1::TaggingType<asn1::generated::UnsignedAttributes>
{
public:

   explicit unsignedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnsignedAttributes() : asn1::TaggingType<asn1::generated::UnsignedAttributes>(new asn1::generated::UnsignedAttributes)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "unsignedAttrs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier
class subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier : public asn1::TaggingType<asn1::generated::SubjectKeyIdentifier>
{
public:

   explicit subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier() : asn1::TaggingType<asn1::generated::SubjectKeyIdentifier>(new asn1::generated::SubjectKeyIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "subjectKeyIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: IssuerAndSerialNumber
class IssuerAndSerialNumber : public asn1::SequenceType
{
public:

   explicit IssuerAndSerialNumber()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _serialNumber_Type.setTypeName("serialNumber");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: issuer
      void set_issuer(const asn1::generated::Name::ValueType& v) { _issuer = v;  }
      void set_issuer(asn1::generated::Name::ValueType&& v) { _issuer = std::move(v);  }
      const asn1::generated::Name::ValueType& get_issuer() const { return _issuer; }
      asn1::generated::Name::ValueType& get_issuer() { return _issuer; }

      // Component: serialNumber
      void set_serialNumber(const asn1::generated::CertificateSerialNumber::ValueType& v) { _serialNumber = v;  }
      void set_serialNumber(asn1::generated::CertificateSerialNumber::ValueType&& v) { _serialNumber = std::move(v);  }
      const asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() const { return _serialNumber; }
      asn1::generated::CertificateSerialNumber::ValueType& get_serialNumber() { return _serialNumber; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_issuer != other._issuer)
            return false;
         if (_serialNumber != other._serialNumber)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::Name::ValueType _issuer;
      asn1::generated::CertificateSerialNumber::ValueType _serialNumber;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::Name _issuer_Type;
   asn1::generated::CertificateSerialNumber _serialNumber_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "IssuerAndSerialNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SignerIdentifier
class SignerIdentifier : public asn1::ChoiceType
{
public:

   explicit SignerIdentifier()
   {
      _addChoice(&_issuerAndSerialNumber_Type);
#if defined(ASN1_ENABLE_XER)
      _issuerAndSerialNumber_Type.setTypeName("issuerAndSerialNumber");
#endif // ASN1_ENABLE_XER
      _addChoice(&_subjectKeyIdentifier_Type);
#if defined(ASN1_ENABLE_XER)
      _subjectKeyIdentifier_Type.setTypeName("subjectKeyIdentifier");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier subjectKeyIdentifier_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: issuerAndSerialNumber
      void set_issuerAndSerialNumber(const asn1::generated::IssuerAndSerialNumber::ValueType& v) { _issuerAndSerialNumber = v; _id = issuerAndSerialNumber_ID; }
      void set_issuerAndSerialNumber(asn1::generated::IssuerAndSerialNumber::ValueType&& v) { _issuerAndSerialNumber = std::move(v); _id = issuerAndSerialNumber_ID; }
      const asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() const { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      bool has_issuerAndSerialNumber_Choosen() const { return _id == issuerAndSerialNumber_ID; }
      void choose_issuerAndSerialNumber() { _id = issuerAndSerialNumber_ID; }

      // Alternative: subjectKeyIdentifier
      void set_subjectKeyIdentifier(const subjectKeyIdentifier_Type::ValueType& v) { _subjectKeyIdentifier = v; _id = subjectKeyIdentifier_ID; }
      void set_subjectKeyIdentifier(subjectKeyIdentifier_Type::ValueType&& v) { _subjectKeyIdentifier = std::move(v); _id = subjectKeyIdentifier_ID; }
      const subjectKeyIdentifier_Type::ValueType& get_subjectKeyIdentifier() const { assert(_id == subjectKeyIdentifier_ID); return _subjectKeyIdentifier; }
      subjectKeyIdentifier_Type::ValueType& get_subjectKeyIdentifier() { assert(_id == subjectKeyIdentifier_ID); return _subjectKeyIdentifier; }
      bool has_subjectKeyIdentifier_Choosen() const { return _id == subjectKeyIdentifier_ID; }
      void choose_subjectKeyIdentifier() { _id = subjectKeyIdentifier_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case issuerAndSerialNumber_ID:
            if (_issuerAndSerialNumber != other._issuerAndSerialNumber)
               return false;
            break;
         case subjectKeyIdentifier_ID:
            if (_subjectKeyIdentifier != other._subjectKeyIdentifier)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         issuerAndSerialNumber_ID = 1,
         subjectKeyIdentifier_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::IssuerAndSerialNumber::ValueType _issuerAndSerialNumber;
      subjectKeyIdentifier_Type::ValueType _subjectKeyIdentifier;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::IssuerAndSerialNumber _issuerAndSerialNumber_Type;
   subjectKeyIdentifier_Type _subjectKeyIdentifier_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SignerIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SignatureValue
class SignatureValue : public asn1::OctetStringType
{
public:

   explicit SignatureValue()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit SignatureValue(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SignatureValue"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SignerInfo
class SignerInfo : public asn1::SequenceType
{
public:

   explicit SignerInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _sid_Type.setTypeName("sid");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _digestAlgorithm_Type.setTypeName("digestAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signedAttrs_Type.setTypeName("signedAttrs");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signatureAlgorithm_Type.setTypeName("signatureAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _unsignedAttrs_Type.setTypeName("unsignedAttrs");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef signedAttrs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__SignedAttributes signedAttrs_Type;
   typedef unsignedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnsignedAttributes unsignedAttrs_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _signedAttrs_Present = false;
         _unsignedAttrs_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: sid
      void set_sid(const asn1::generated::SignerIdentifier::ValueType& v) { _sid = v;  }
      void set_sid(asn1::generated::SignerIdentifier::ValueType&& v) { _sid = std::move(v);  }
      const asn1::generated::SignerIdentifier::ValueType& get_sid() const { return _sid; }
      asn1::generated::SignerIdentifier::ValueType& get_sid() { return _sid; }

      // Component: digestAlgorithm
      void set_digestAlgorithm(const asn1::generated::DigestAlgorithmIdentifier::ValueType& v) { _digestAlgorithm = v;  }
      void set_digestAlgorithm(asn1::generated::DigestAlgorithmIdentifier::ValueType&& v) { _digestAlgorithm = std::move(v);  }
      const asn1::generated::DigestAlgorithmIdentifier::ValueType& get_digestAlgorithm() const { return _digestAlgorithm; }
      asn1::generated::DigestAlgorithmIdentifier::ValueType& get_digestAlgorithm() { return _digestAlgorithm; }

      // Component: signedAttrs
      void set_signedAttrs(const signedAttrs_Type::ValueType& v) { _signedAttrs = v; _signedAttrs_Present = true; }
      void set_signedAttrs(signedAttrs_Type::ValueType&& v) { _signedAttrs = std::move(v); _signedAttrs_Present = true; }
      const signedAttrs_Type::ValueType& get_signedAttrs() const { return _signedAttrs; }
      signedAttrs_Type::ValueType& get_signedAttrs() { return _signedAttrs; }
      void set_signedAttrs_Present(bool present = true) { _signedAttrs_Present = present; }
      bool is_signedAttrs_Present() const { return _signedAttrs_Present; }


      // Component: signatureAlgorithm
      void set_signatureAlgorithm(const asn1::generated::SignatureAlgorithmIdentifier::ValueType& v) { _signatureAlgorithm = v;  }
      void set_signatureAlgorithm(asn1::generated::SignatureAlgorithmIdentifier::ValueType&& v) { _signatureAlgorithm = std::move(v);  }
      const asn1::generated::SignatureAlgorithmIdentifier::ValueType& get_signatureAlgorithm() const { return _signatureAlgorithm; }
      asn1::generated::SignatureAlgorithmIdentifier::ValueType& get_signatureAlgorithm() { return _signatureAlgorithm; }

      // Component: signature
      void set_signature(const asn1::generated::SignatureValue::ValueType& v) { _signature = v;  }
      void set_signature(asn1::generated::SignatureValue::ValueType&& v) { _signature = std::move(v);  }
      const asn1::generated::SignatureValue::ValueType& get_signature() const { return _signature; }
      asn1::generated::SignatureValue::ValueType& get_signature() { return _signature; }

      // Component: unsignedAttrs
      void set_unsignedAttrs(const unsignedAttrs_Type::ValueType& v) { _unsignedAttrs = v; _unsignedAttrs_Present = true; }
      void set_unsignedAttrs(unsignedAttrs_Type::ValueType&& v) { _unsignedAttrs = std::move(v); _unsignedAttrs_Present = true; }
      const unsignedAttrs_Type::ValueType& get_unsignedAttrs() const { return _unsignedAttrs; }
      unsignedAttrs_Type::ValueType& get_unsignedAttrs() { return _unsignedAttrs; }
      void set_unsignedAttrs_Present(bool present = true) { _unsignedAttrs_Present = present; }
      bool is_unsignedAttrs_Present() const { return _unsignedAttrs_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_sid != other._sid)
            return false;
         if (_digestAlgorithm != other._digestAlgorithm)
            return false;
         if (_signedAttrs_Present != other._signedAttrs_Present)
            return false;
         if (_signedAttrs_Present && other._signedAttrs_Present && _signedAttrs != other._signedAttrs)
            return false;
         if (_signatureAlgorithm != other._signatureAlgorithm)
            return false;
         if (_signature != other._signature)
            return false;
         if (_unsignedAttrs_Present != other._unsignedAttrs_Present)
            return false;
         if (_unsignedAttrs_Present && other._unsignedAttrs_Present && _unsignedAttrs != other._unsignedAttrs)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      asn1::generated::SignerIdentifier::ValueType _sid;
      asn1::generated::DigestAlgorithmIdentifier::ValueType _digestAlgorithm;
      signedAttrs_Type::ValueType _signedAttrs;
      bool _signedAttrs_Present;
      asn1::generated::SignatureAlgorithmIdentifier::ValueType _signatureAlgorithm;
      asn1::generated::SignatureValue::ValueType _signature;
      unsignedAttrs_Type::ValueType _unsignedAttrs;
      bool _unsignedAttrs_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   asn1::generated::SignerIdentifier _sid_Type;
   asn1::generated::DigestAlgorithmIdentifier _digestAlgorithm_Type;
   signedAttrs_Type _signedAttrs_Type;
   asn1::generated::SignatureAlgorithmIdentifier _signatureAlgorithm_Type;
   asn1::generated::SignatureValue _signature_Type;
   unsignedAttrs_Type _unsignedAttrs_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SignerInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SignerInfos
class SignerInfos : public asn1::SetOfType<asn1::generated::SignerInfo>
{
public:

   explicit SignerInfos() : asn1::SetOfType<asn1::generated::SignerInfo>(new asn1::generated::SignerInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SignerInfos"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SignedData
class SignedData : public asn1::SequenceType
{
public:

   explicit SignedData()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _digestAlgorithms_Type.setTypeName("digestAlgorithms");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encapContentInfo_Type.setTypeName("encapContentInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certificates_Type.setTypeName("certificates");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _crls_Type.setTypeName("crls");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signerInfos_Type.setTypeName("signerInfos");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef certificates_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet certificates_Type;
   typedef crls_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__RevocationInfoChoices crls_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _certificates_Present = false;
         _crls_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: digestAlgorithms
      void set_digestAlgorithms(const asn1::generated::DigestAlgorithmIdentifiers::ValueType& v) { _digestAlgorithms = v;  }
      void set_digestAlgorithms(asn1::generated::DigestAlgorithmIdentifiers::ValueType&& v) { _digestAlgorithms = std::move(v);  }
      const asn1::generated::DigestAlgorithmIdentifiers::ValueType& get_digestAlgorithms() const { return _digestAlgorithms; }
      asn1::generated::DigestAlgorithmIdentifiers::ValueType& get_digestAlgorithms() { return _digestAlgorithms; }

      // Component: encapContentInfo
      void set_encapContentInfo(const asn1::generated::EncapsulatedContentInfo::ValueType& v) { _encapContentInfo = v;  }
      void set_encapContentInfo(asn1::generated::EncapsulatedContentInfo::ValueType&& v) { _encapContentInfo = std::move(v);  }
      const asn1::generated::EncapsulatedContentInfo::ValueType& get_encapContentInfo() const { return _encapContentInfo; }
      asn1::generated::EncapsulatedContentInfo::ValueType& get_encapContentInfo() { return _encapContentInfo; }

      // Component: certificates
      void set_certificates(const certificates_Type::ValueType& v) { _certificates = v; _certificates_Present = true; }
      void set_certificates(certificates_Type::ValueType&& v) { _certificates = std::move(v); _certificates_Present = true; }
      const certificates_Type::ValueType& get_certificates() const { return _certificates; }
      certificates_Type::ValueType& get_certificates() { return _certificates; }
      void set_certificates_Present(bool present = true) { _certificates_Present = present; }
      bool is_certificates_Present() const { return _certificates_Present; }


      // Component: crls
      void set_crls(const crls_Type::ValueType& v) { _crls = v; _crls_Present = true; }
      void set_crls(crls_Type::ValueType&& v) { _crls = std::move(v); _crls_Present = true; }
      const crls_Type::ValueType& get_crls() const { return _crls; }
      crls_Type::ValueType& get_crls() { return _crls; }
      void set_crls_Present(bool present = true) { _crls_Present = present; }
      bool is_crls_Present() const { return _crls_Present; }


      // Component: signerInfos
      void set_signerInfos(const asn1::generated::SignerInfos::ValueType& v) { _signerInfos = v;  }
      void set_signerInfos(asn1::generated::SignerInfos::ValueType&& v) { _signerInfos = std::move(v);  }
      const asn1::generated::SignerInfos::ValueType& get_signerInfos() const { return _signerInfos; }
      asn1::generated::SignerInfos::ValueType& get_signerInfos() { return _signerInfos; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_digestAlgorithms != other._digestAlgorithms)
            return false;
         if (_encapContentInfo != other._encapContentInfo)
            return false;
         if (_certificates_Present != other._certificates_Present)
            return false;
         if (_certificates_Present && other._certificates_Present && _certificates != other._certificates)
            return false;
         if (_crls_Present != other._crls_Present)
            return false;
         if (_crls_Present && other._crls_Present && _crls != other._crls)
            return false;
         if (_signerInfos != other._signerInfos)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      asn1::generated::DigestAlgorithmIdentifiers::ValueType _digestAlgorithms;
      asn1::generated::EncapsulatedContentInfo::ValueType _encapContentInfo;
      certificates_Type::ValueType _certificates;
      bool _certificates_Present;
      crls_Type::ValueType _crls;
      bool _crls_Present;
      asn1::generated::SignerInfos::ValueType _signerInfos;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   asn1::generated::DigestAlgorithmIdentifiers _digestAlgorithms_Type;
   asn1::generated::EncapsulatedContentInfo _encapContentInfo_Type;
   certificates_Type _certificates_Type;
   crls_Type _crls_Type;
   asn1::generated::SignerInfos _signerInfos_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SignedData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: certs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet
class certs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet : public asn1::TaggingType<asn1::generated::CertificateSet>
{
public:

   explicit certs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet() : asn1::TaggingType<asn1::generated::CertificateSet>(new asn1::generated::CertificateSet)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "certs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OriginatorInfo
class OriginatorInfo : public asn1::SequenceType
{
public:

   explicit OriginatorInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _certs_Type.setTypeName("certs");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _crls_Type.setTypeName("crls");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef certs_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__CertificateSet certs_Type;
   typedef crls_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__RevocationInfoChoices crls_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _certs_Present = false;
         _crls_Present = false;
      }

      // Component: certs
      void set_certs(const certs_Type::ValueType& v) { _certs = v; _certs_Present = true; }
      void set_certs(certs_Type::ValueType&& v) { _certs = std::move(v); _certs_Present = true; }
      const certs_Type::ValueType& get_certs() const { return _certs; }
      certs_Type::ValueType& get_certs() { return _certs; }
      void set_certs_Present(bool present = true) { _certs_Present = present; }
      bool is_certs_Present() const { return _certs_Present; }


      // Component: crls
      void set_crls(const crls_Type::ValueType& v) { _crls = v; _crls_Present = true; }
      void set_crls(crls_Type::ValueType&& v) { _crls = std::move(v); _crls_Present = true; }
      const crls_Type::ValueType& get_crls() const { return _crls; }
      crls_Type::ValueType& get_crls() { return _crls; }
      void set_crls_Present(bool present = true) { _crls_Present = present; }
      bool is_crls_Present() const { return _crls_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certs_Present != other._certs_Present)
            return false;
         if (_certs_Present && other._certs_Present && _certs != other._certs)
            return false;
         if (_crls_Present != other._crls_Present)
            return false;
         if (_crls_Present && other._crls_Present && _crls != other._crls)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      certs_Type::ValueType _certs;
      bool _certs_Present;
      crls_Type::ValueType _crls;
      bool _crls_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   certs_Type _certs_Type;
   crls_Type _crls_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OriginatorInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: originatorInfo_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__OriginatorInfo
class originatorInfo_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__OriginatorInfo : public asn1::TaggingType<asn1::generated::OriginatorInfo>
{
public:

   explicit originatorInfo_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__OriginatorInfo() : asn1::TaggingType<asn1::generated::OriginatorInfo>(new asn1::generated::OriginatorInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "certs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UnprotectedAttributes
class UnprotectedAttributes : public asn1::SetOfType<asn1::generated::AttributeImplicit>
{
public:

   explicit UnprotectedAttributes() : asn1::SetOfType<asn1::generated::AttributeImplicit>(new asn1::generated::AttributeImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UnprotectedAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: unprotectedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnprotectedAttributes
class unprotectedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnprotectedAttributes : public asn1::TaggingType<asn1::generated::UnprotectedAttributes>
{
public:

   explicit unprotectedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnprotectedAttributes() : asn1::TaggingType<asn1::generated::UnprotectedAttributes>(new asn1::generated::UnprotectedAttributes)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "unprotectedAttrs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OriginatorPublicKey
class OriginatorPublicKey : public asn1::SequenceType
{
public:

   explicit OriginatorPublicKey()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _algorithm_Type.setTypeName("algorithm");
#endif // ASN1_ENABLE_XER
      _publicKey_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _publicKey_Type.setTypeName("publicKey");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: algorithm
      void set_algorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _algorithm = v;  }
      void set_algorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _algorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_algorithm() const { return _algorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_algorithm() { return _algorithm; }

      // Component: publicKey
      void set_publicKey(const asn1::BitStringType::ValueType& v) { _publicKey = v;  }
      void set_publicKey(asn1::BitStringType::ValueType&& v) { _publicKey = std::move(v);  }
      const asn1::BitStringType::ValueType& get_publicKey() const { return _publicKey; }
      asn1::BitStringType::ValueType& get_publicKey() { return _publicKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_algorithm != other._algorithm)
            return false;
         if (_publicKey != other._publicKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AlgorithmIdentifier::ValueType _algorithm;
      asn1::BitStringType::ValueType _publicKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AlgorithmIdentifier _algorithm_Type;
   asn1::BitStringType _publicKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OriginatorPublicKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: originatorKey_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__OriginatorPublicKey
class originatorKey_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__OriginatorPublicKey : public asn1::TaggingType<asn1::generated::OriginatorPublicKey>
{
public:

   explicit originatorKey_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__OriginatorPublicKey() : asn1::TaggingType<asn1::generated::OriginatorPublicKey>(new asn1::generated::OriginatorPublicKey)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "originatorKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OriginatorIdentifierOrKey
class OriginatorIdentifierOrKey : public asn1::ChoiceType
{
public:

   explicit OriginatorIdentifierOrKey()
   {
      _addChoice(&_issuerAndSerialNumber_Type);
#if defined(ASN1_ENABLE_XER)
      _issuerAndSerialNumber_Type.setTypeName("issuerAndSerialNumber");
#endif // ASN1_ENABLE_XER
      _addChoice(&_subjectKeyIdentifier_Type);
#if defined(ASN1_ENABLE_XER)
      _subjectKeyIdentifier_Type.setTypeName("subjectKeyIdentifier");
#endif // ASN1_ENABLE_XER
      _addChoice(&_originatorKey_Type);
#if defined(ASN1_ENABLE_XER)
      _originatorKey_Type.setTypeName("originatorKey");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier subjectKeyIdentifier_Type;
   typedef originatorKey_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__OriginatorPublicKey originatorKey_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: issuerAndSerialNumber
      void set_issuerAndSerialNumber(const asn1::generated::IssuerAndSerialNumber::ValueType& v) { _issuerAndSerialNumber = v; _id = issuerAndSerialNumber_ID; }
      void set_issuerAndSerialNumber(asn1::generated::IssuerAndSerialNumber::ValueType&& v) { _issuerAndSerialNumber = std::move(v); _id = issuerAndSerialNumber_ID; }
      const asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() const { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      bool has_issuerAndSerialNumber_Choosen() const { return _id == issuerAndSerialNumber_ID; }
      void choose_issuerAndSerialNumber() { _id = issuerAndSerialNumber_ID; }

      // Alternative: subjectKeyIdentifier
      void set_subjectKeyIdentifier(const subjectKeyIdentifier_Type::ValueType& v) { _subjectKeyIdentifier = v; _id = subjectKeyIdentifier_ID; }
      void set_subjectKeyIdentifier(subjectKeyIdentifier_Type::ValueType&& v) { _subjectKeyIdentifier = std::move(v); _id = subjectKeyIdentifier_ID; }
      const subjectKeyIdentifier_Type::ValueType& get_subjectKeyIdentifier() const { assert(_id == subjectKeyIdentifier_ID); return _subjectKeyIdentifier; }
      subjectKeyIdentifier_Type::ValueType& get_subjectKeyIdentifier() { assert(_id == subjectKeyIdentifier_ID); return _subjectKeyIdentifier; }
      bool has_subjectKeyIdentifier_Choosen() const { return _id == subjectKeyIdentifier_ID; }
      void choose_subjectKeyIdentifier() { _id = subjectKeyIdentifier_ID; }

      // Alternative: originatorKey
      void set_originatorKey(const originatorKey_Type::ValueType& v) { _originatorKey = v; _id = originatorKey_ID; }
      void set_originatorKey(originatorKey_Type::ValueType&& v) { _originatorKey = std::move(v); _id = originatorKey_ID; }
      const originatorKey_Type::ValueType& get_originatorKey() const { assert(_id == originatorKey_ID); return _originatorKey; }
      originatorKey_Type::ValueType& get_originatorKey() { assert(_id == originatorKey_ID); return _originatorKey; }
      bool has_originatorKey_Choosen() const { return _id == originatorKey_ID; }
      void choose_originatorKey() { _id = originatorKey_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case issuerAndSerialNumber_ID:
            if (_issuerAndSerialNumber != other._issuerAndSerialNumber)
               return false;
            break;
         case subjectKeyIdentifier_ID:
            if (_subjectKeyIdentifier != other._subjectKeyIdentifier)
               return false;
            break;
         case originatorKey_ID:
            if (_originatorKey != other._originatorKey)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         issuerAndSerialNumber_ID = 1,
         subjectKeyIdentifier_ID = 2,
         originatorKey_ID = 3,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::IssuerAndSerialNumber::ValueType _issuerAndSerialNumber;
      subjectKeyIdentifier_Type::ValueType _subjectKeyIdentifier;
      originatorKey_Type::ValueType _originatorKey;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::IssuerAndSerialNumber _issuerAndSerialNumber_Type;
   subjectKeyIdentifier_Type _subjectKeyIdentifier_Type;
   originatorKey_Type _originatorKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OriginatorIdentifierOrKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: originator_INTERNAL__EXPLICIT_0_INTERNAL_asn1__generated__OriginatorIdentifierOrKey
class originator_INTERNAL__EXPLICIT_0_INTERNAL_asn1__generated__OriginatorIdentifierOrKey : public asn1::TaggingType<asn1::generated::OriginatorIdentifierOrKey>
{
public:

   explicit originator_INTERNAL__EXPLICIT_0_INTERNAL_asn1__generated__OriginatorIdentifierOrKey() : asn1::TaggingType<asn1::generated::OriginatorIdentifierOrKey>(new asn1::generated::OriginatorIdentifierOrKey)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "originatorKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UserKeyingMaterial
class UserKeyingMaterial : public asn1::OctetStringType
{
public:

   explicit UserKeyingMaterial()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit UserKeyingMaterial(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UserKeyingMaterial"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ukm_INTERNAL__EXPLICIT_1_INTERNAL_asn1__generated__UserKeyingMaterial
class ukm_INTERNAL__EXPLICIT_1_INTERNAL_asn1__generated__UserKeyingMaterial : public asn1::TaggingType<asn1::generated::UserKeyingMaterial>
{
public:

   explicit ukm_INTERNAL__EXPLICIT_1_INTERNAL_asn1__generated__UserKeyingMaterial() : asn1::TaggingType<asn1::generated::UserKeyingMaterial>(new asn1::generated::UserKeyingMaterial)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ukm"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyEncryptionAlgorithmIdentifier
class KeyEncryptionAlgorithmIdentifier : public asn1::generated::AlgorithmIdentifier
{
public:

   explicit KeyEncryptionAlgorithmIdentifier()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyEncryptionAlgorithmIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OtherKeyAttribute
class OtherKeyAttribute : public asn1::SequenceType
{
public:

   explicit OtherKeyAttribute()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _keyAttrId_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _keyAttrId_Type.setTypeName("keyAttrId");
#endif // ASN1_ENABLE_XER
      _keyAttr_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _keyAttr_Type.setTypeName("keyAttr");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _keyAttr_Present = false;
      }

      // Component: keyAttrId
      void set_keyAttrId(const asn1::ObjectIdentifierType::ValueType& v) { _keyAttrId = v;  }
      void set_keyAttrId(asn1::ObjectIdentifierType::ValueType&& v) { _keyAttrId = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_keyAttrId() const { return _keyAttrId; }
      asn1::ObjectIdentifierType::ValueType& get_keyAttrId() { return _keyAttrId; }

      // Component: keyAttr
      void set_keyAttr(const asn1::AnyType::ValueType& v) { _keyAttr = v; _keyAttr_Present = true; }
      void set_keyAttr(asn1::AnyType::ValueType&& v) { _keyAttr = std::move(v); _keyAttr_Present = true; }
      const asn1::AnyType::ValueType& get_keyAttr() const { return _keyAttr; }
      asn1::AnyType::ValueType& get_keyAttr() { return _keyAttr; }
      void set_keyAttr_Present(bool present = true) { _keyAttr_Present = present; }
      bool is_keyAttr_Present() const { return _keyAttr_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_keyAttrId != other._keyAttrId)
            return false;
         if (_keyAttr_Present != other._keyAttr_Present)
            return false;
         if (_keyAttr_Present && other._keyAttr_Present && _keyAttr != other._keyAttr)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _keyAttrId;
      asn1::AnyType::ValueType _keyAttr;
      bool _keyAttr_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _keyAttrId_Type;
   asn1::AnyType _keyAttr_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OtherKeyAttribute"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RecipientKeyIdentifier
class RecipientKeyIdentifier : public asn1::SequenceType
{
public:

   explicit RecipientKeyIdentifier()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _subjectKeyIdentifier_Type.setTypeName("subjectKeyIdentifier");
#endif // ASN1_ENABLE_XER
      _date_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _date_Type.setTypeName("date");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _other_Type.setTypeName("other");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _date_Present = false;
         _other_Present = false;
      }

      // Component: subjectKeyIdentifier
      void set_subjectKeyIdentifier(const asn1::generated::SubjectKeyIdentifier::ValueType& v) { _subjectKeyIdentifier = v;  }
      void set_subjectKeyIdentifier(asn1::generated::SubjectKeyIdentifier::ValueType&& v) { _subjectKeyIdentifier = std::move(v);  }
      const asn1::generated::SubjectKeyIdentifier::ValueType& get_subjectKeyIdentifier() const { return _subjectKeyIdentifier; }
      asn1::generated::SubjectKeyIdentifier::ValueType& get_subjectKeyIdentifier() { return _subjectKeyIdentifier; }

      // Component: date
      void set_date(const asn1::GeneralizedTimeType::ValueType& v) { _date = v; _date_Present = true; }
      void set_date(asn1::GeneralizedTimeType::ValueType&& v) { _date = std::move(v); _date_Present = true; }
      const asn1::GeneralizedTimeType::ValueType& get_date() const { return _date; }
      asn1::GeneralizedTimeType::ValueType& get_date() { return _date; }
      void set_date_Present(bool present = true) { _date_Present = present; }
      bool is_date_Present() const { return _date_Present; }


      // Component: other
      void set_other(const asn1::generated::OtherKeyAttribute::ValueType& v) { _other = v; _other_Present = true; }
      void set_other(asn1::generated::OtherKeyAttribute::ValueType&& v) { _other = std::move(v); _other_Present = true; }
      const asn1::generated::OtherKeyAttribute::ValueType& get_other() const { return _other; }
      asn1::generated::OtherKeyAttribute::ValueType& get_other() { return _other; }
      void set_other_Present(bool present = true) { _other_Present = present; }
      bool is_other_Present() const { return _other_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_subjectKeyIdentifier != other._subjectKeyIdentifier)
            return false;
         if (_date_Present != other._date_Present)
            return false;
         if (_date_Present && other._date_Present && _date != other._date)
            return false;
         if (_other_Present != other._other_Present)
            return false;
         if (_other_Present && other._other_Present && _other != other._other)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::SubjectKeyIdentifier::ValueType _subjectKeyIdentifier;
      asn1::GeneralizedTimeType::ValueType _date;
      bool _date_Present;
      asn1::generated::OtherKeyAttribute::ValueType _other;
      bool _other_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::SubjectKeyIdentifier _subjectKeyIdentifier_Type;
   asn1::GeneralizedTimeType _date_Type;
   asn1::generated::OtherKeyAttribute _other_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RecipientKeyIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: rKeyId_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__RecipientKeyIdentifier
class rKeyId_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__RecipientKeyIdentifier : public asn1::TaggingType<asn1::generated::RecipientKeyIdentifier>
{
public:

   explicit rKeyId_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__RecipientKeyIdentifier() : asn1::TaggingType<asn1::generated::RecipientKeyIdentifier>(new asn1::generated::RecipientKeyIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "rKeyId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyAgreeRecipientIdentifier
class KeyAgreeRecipientIdentifier : public asn1::ChoiceType
{
public:

   explicit KeyAgreeRecipientIdentifier()
   {
      _addChoice(&_issuerAndSerialNumber_Type);
#if defined(ASN1_ENABLE_XER)
      _issuerAndSerialNumber_Type.setTypeName("issuerAndSerialNumber");
#endif // ASN1_ENABLE_XER
      _addChoice(&_rKeyId_Type);
#if defined(ASN1_ENABLE_XER)
      _rKeyId_Type.setTypeName("rKeyId");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef rKeyId_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__RecipientKeyIdentifier rKeyId_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: issuerAndSerialNumber
      void set_issuerAndSerialNumber(const asn1::generated::IssuerAndSerialNumber::ValueType& v) { _issuerAndSerialNumber = v; _id = issuerAndSerialNumber_ID; }
      void set_issuerAndSerialNumber(asn1::generated::IssuerAndSerialNumber::ValueType&& v) { _issuerAndSerialNumber = std::move(v); _id = issuerAndSerialNumber_ID; }
      const asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() const { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      bool has_issuerAndSerialNumber_Choosen() const { return _id == issuerAndSerialNumber_ID; }
      void choose_issuerAndSerialNumber() { _id = issuerAndSerialNumber_ID; }

      // Alternative: rKeyId
      void set_rKeyId(const rKeyId_Type::ValueType& v) { _rKeyId = v; _id = rKeyId_ID; }
      void set_rKeyId(rKeyId_Type::ValueType&& v) { _rKeyId = std::move(v); _id = rKeyId_ID; }
      const rKeyId_Type::ValueType& get_rKeyId() const { assert(_id == rKeyId_ID); return _rKeyId; }
      rKeyId_Type::ValueType& get_rKeyId() { assert(_id == rKeyId_ID); return _rKeyId; }
      bool has_rKeyId_Choosen() const { return _id == rKeyId_ID; }
      void choose_rKeyId() { _id = rKeyId_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case issuerAndSerialNumber_ID:
            if (_issuerAndSerialNumber != other._issuerAndSerialNumber)
               return false;
            break;
         case rKeyId_ID:
            if (_rKeyId != other._rKeyId)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         issuerAndSerialNumber_ID = 1,
         rKeyId_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::IssuerAndSerialNumber::ValueType _issuerAndSerialNumber;
      rKeyId_Type::ValueType _rKeyId;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::IssuerAndSerialNumber _issuerAndSerialNumber_Type;
   rKeyId_Type _rKeyId_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyAgreeRecipientIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncryptedKey
class EncryptedKey : public asn1::OctetStringType
{
public:

   explicit EncryptedKey()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit EncryptedKey(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncryptedKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RecipientEncryptedKey
class RecipientEncryptedKey : public asn1::SequenceType
{
public:

   explicit RecipientEncryptedKey()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _rid_Type.setTypeName("rid");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encryptedKey_Type.setTypeName("encryptedKey");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: rid
      void set_rid(const asn1::generated::KeyAgreeRecipientIdentifier::ValueType& v) { _rid = v;  }
      void set_rid(asn1::generated::KeyAgreeRecipientIdentifier::ValueType&& v) { _rid = std::move(v);  }
      const asn1::generated::KeyAgreeRecipientIdentifier::ValueType& get_rid() const { return _rid; }
      asn1::generated::KeyAgreeRecipientIdentifier::ValueType& get_rid() { return _rid; }

      // Component: encryptedKey
      void set_encryptedKey(const asn1::generated::EncryptedKey::ValueType& v) { _encryptedKey = v;  }
      void set_encryptedKey(asn1::generated::EncryptedKey::ValueType&& v) { _encryptedKey = std::move(v);  }
      const asn1::generated::EncryptedKey::ValueType& get_encryptedKey() const { return _encryptedKey; }
      asn1::generated::EncryptedKey::ValueType& get_encryptedKey() { return _encryptedKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_rid != other._rid)
            return false;
         if (_encryptedKey != other._encryptedKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::KeyAgreeRecipientIdentifier::ValueType _rid;
      asn1::generated::EncryptedKey::ValueType _encryptedKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::KeyAgreeRecipientIdentifier _rid_Type;
   asn1::generated::EncryptedKey _encryptedKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RecipientEncryptedKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RecipientEncryptedKeys
class RecipientEncryptedKeys : public asn1::SequenceOfType<asn1::generated::RecipientEncryptedKey>
{
public:

   explicit RecipientEncryptedKeys() : asn1::SequenceOfType<asn1::generated::RecipientEncryptedKey>(new asn1::generated::RecipientEncryptedKey)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RecipientEncryptedKeys"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyAgreeRecipientInfo
class KeyAgreeRecipientInfo : public asn1::SequenceType
{
public:

   explicit KeyAgreeRecipientInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _originator_Type.setTypeName("originator");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _ukm_Type.setTypeName("ukm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _keyEncryptionAlgorithm_Type.setTypeName("keyEncryptionAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _recipientEncryptedKeys_Type.setTypeName("recipientEncryptedKeys");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef originator_INTERNAL__EXPLICIT_0_INTERNAL_asn1__generated__OriginatorIdentifierOrKey originator_Type;
   typedef ukm_INTERNAL__EXPLICIT_1_INTERNAL_asn1__generated__UserKeyingMaterial ukm_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _ukm_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: originator
      void set_originator(const originator_Type::ValueType& v) { _originator = v;  }
      void set_originator(originator_Type::ValueType&& v) { _originator = std::move(v);  }
      const originator_Type::ValueType& get_originator() const { return _originator; }
      originator_Type::ValueType& get_originator() { return _originator; }

      // Component: ukm
      void set_ukm(const ukm_Type::ValueType& v) { _ukm = v; _ukm_Present = true; }
      void set_ukm(ukm_Type::ValueType&& v) { _ukm = std::move(v); _ukm_Present = true; }
      const ukm_Type::ValueType& get_ukm() const { return _ukm; }
      ukm_Type::ValueType& get_ukm() { return _ukm; }
      void set_ukm_Present(bool present = true) { _ukm_Present = present; }
      bool is_ukm_Present() const { return _ukm_Present; }


      // Component: keyEncryptionAlgorithm
      void set_keyEncryptionAlgorithm(const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& v) { _keyEncryptionAlgorithm = v;  }
      void set_keyEncryptionAlgorithm(asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType&& v) { _keyEncryptionAlgorithm = std::move(v);  }
      const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() const { return _keyEncryptionAlgorithm; }
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() { return _keyEncryptionAlgorithm; }

      // Component: recipientEncryptedKeys
      void set_recipientEncryptedKeys(const asn1::generated::RecipientEncryptedKeys::ValueType& v) { _recipientEncryptedKeys = v;  }
      void set_recipientEncryptedKeys(asn1::generated::RecipientEncryptedKeys::ValueType&& v) { _recipientEncryptedKeys = std::move(v);  }
      const asn1::generated::RecipientEncryptedKeys::ValueType& get_recipientEncryptedKeys() const { return _recipientEncryptedKeys; }
      asn1::generated::RecipientEncryptedKeys::ValueType& get_recipientEncryptedKeys() { return _recipientEncryptedKeys; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_originator != other._originator)
            return false;
         if (_ukm_Present != other._ukm_Present)
            return false;
         if (_ukm_Present && other._ukm_Present && _ukm != other._ukm)
            return false;
         if (_keyEncryptionAlgorithm != other._keyEncryptionAlgorithm)
            return false;
         if (_recipientEncryptedKeys != other._recipientEncryptedKeys)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      originator_Type::ValueType _originator;
      ukm_Type::ValueType _ukm;
      bool _ukm_Present;
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType _keyEncryptionAlgorithm;
      asn1::generated::RecipientEncryptedKeys::ValueType _recipientEncryptedKeys;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   originator_Type _originator_Type;
   ukm_Type _ukm_Type;
   asn1::generated::KeyEncryptionAlgorithmIdentifier _keyEncryptionAlgorithm_Type;
   asn1::generated::RecipientEncryptedKeys _recipientEncryptedKeys_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyAgreeRecipientInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: kari_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyAgreeRecipientInfo
class kari_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyAgreeRecipientInfo : public asn1::TaggingType<asn1::generated::KeyAgreeRecipientInfo>
{
public:

   explicit kari_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyAgreeRecipientInfo() : asn1::TaggingType<asn1::generated::KeyAgreeRecipientInfo>(new asn1::generated::KeyAgreeRecipientInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "rKeyId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KEKIdentifier
class KEKIdentifier : public asn1::SequenceType
{
public:

   explicit KEKIdentifier()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _keyIdentifier_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _keyIdentifier_Type.setTypeName("keyIdentifier");
#endif // ASN1_ENABLE_XER
      _date_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _date_Type.setTypeName("date");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _other_Type.setTypeName("other");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _date_Present = false;
         _other_Present = false;
      }

      // Component: keyIdentifier
      void set_keyIdentifier(const asn1::OctetStringType::ValueType& v) { _keyIdentifier = v;  }
      void set_keyIdentifier(asn1::OctetStringType::ValueType&& v) { _keyIdentifier = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_keyIdentifier() const { return _keyIdentifier; }
      asn1::OctetStringType::ValueType& get_keyIdentifier() { return _keyIdentifier; }

      // Component: date
      void set_date(const asn1::GeneralizedTimeType::ValueType& v) { _date = v; _date_Present = true; }
      void set_date(asn1::GeneralizedTimeType::ValueType&& v) { _date = std::move(v); _date_Present = true; }
      const asn1::GeneralizedTimeType::ValueType& get_date() const { return _date; }
      asn1::GeneralizedTimeType::ValueType& get_date() { return _date; }
      void set_date_Present(bool present = true) { _date_Present = present; }
      bool is_date_Present() const { return _date_Present; }


      // Component: other
      void set_other(const asn1::generated::OtherKeyAttribute::ValueType& v) { _other = v; _other_Present = true; }
      void set_other(asn1::generated::OtherKeyAttribute::ValueType&& v) { _other = std::move(v); _other_Present = true; }
      const asn1::generated::OtherKeyAttribute::ValueType& get_other() const { return _other; }
      asn1::generated::OtherKeyAttribute::ValueType& get_other() { return _other; }
      void set_other_Present(bool present = true) { _other_Present = present; }
      bool is_other_Present() const { return _other_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_keyIdentifier != other._keyIdentifier)
            return false;
         if (_date_Present != other._date_Present)
            return false;
         if (_date_Present && other._date_Present && _date != other._date)
            return false;
         if (_other_Present != other._other_Present)
            return false;
         if (_other_Present && other._other_Present && _other != other._other)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::OctetStringType::ValueType _keyIdentifier;
      asn1::GeneralizedTimeType::ValueType _date;
      bool _date_Present;
      asn1::generated::OtherKeyAttribute::ValueType _other;
      bool _other_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::OctetStringType _keyIdentifier_Type;
   asn1::GeneralizedTimeType _date_Type;
   asn1::generated::OtherKeyAttribute _other_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KEKIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KEKRecipientInfo
class KEKRecipientInfo : public asn1::SequenceType
{
public:

   explicit KEKRecipientInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _kekid_Type.setTypeName("kekid");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _keyEncryptionAlgorithm_Type.setTypeName("keyEncryptionAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encryptedKey_Type.setTypeName("encryptedKey");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: kekid
      void set_kekid(const asn1::generated::KEKIdentifier::ValueType& v) { _kekid = v;  }
      void set_kekid(asn1::generated::KEKIdentifier::ValueType&& v) { _kekid = std::move(v);  }
      const asn1::generated::KEKIdentifier::ValueType& get_kekid() const { return _kekid; }
      asn1::generated::KEKIdentifier::ValueType& get_kekid() { return _kekid; }

      // Component: keyEncryptionAlgorithm
      void set_keyEncryptionAlgorithm(const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& v) { _keyEncryptionAlgorithm = v;  }
      void set_keyEncryptionAlgorithm(asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType&& v) { _keyEncryptionAlgorithm = std::move(v);  }
      const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() const { return _keyEncryptionAlgorithm; }
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() { return _keyEncryptionAlgorithm; }

      // Component: encryptedKey
      void set_encryptedKey(const asn1::generated::EncryptedKey::ValueType& v) { _encryptedKey = v;  }
      void set_encryptedKey(asn1::generated::EncryptedKey::ValueType&& v) { _encryptedKey = std::move(v);  }
      const asn1::generated::EncryptedKey::ValueType& get_encryptedKey() const { return _encryptedKey; }
      asn1::generated::EncryptedKey::ValueType& get_encryptedKey() { return _encryptedKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_kekid != other._kekid)
            return false;
         if (_keyEncryptionAlgorithm != other._keyEncryptionAlgorithm)
            return false;
         if (_encryptedKey != other._encryptedKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      asn1::generated::KEKIdentifier::ValueType _kekid;
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType _keyEncryptionAlgorithm;
      asn1::generated::EncryptedKey::ValueType _encryptedKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   asn1::generated::KEKIdentifier _kekid_Type;
   asn1::generated::KeyEncryptionAlgorithmIdentifier _keyEncryptionAlgorithm_Type;
   asn1::generated::EncryptedKey _encryptedKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KEKRecipientInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: kekri_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KEKRecipientInfo
class kekri_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KEKRecipientInfo : public asn1::TaggingType<asn1::generated::KEKRecipientInfo>
{
public:

   explicit kekri_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KEKRecipientInfo() : asn1::TaggingType<asn1::generated::KEKRecipientInfo>(new asn1::generated::KEKRecipientInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "kekri"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyDerivationAlgorithmIdentifier
class KeyDerivationAlgorithmIdentifier : public asn1::generated::AlgorithmIdentifier
{
public:

   explicit KeyDerivationAlgorithmIdentifier()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyDerivationAlgorithmIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: keyDerivationAlgorithm_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyDerivationAlgorithmIdentifier
class keyDerivationAlgorithm_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyDerivationAlgorithmIdentifier : public asn1::TaggingType<asn1::generated::KeyDerivationAlgorithmIdentifier>
{
public:

   explicit keyDerivationAlgorithm_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyDerivationAlgorithmIdentifier() : asn1::TaggingType<asn1::generated::KeyDerivationAlgorithmIdentifier>(new asn1::generated::KeyDerivationAlgorithmIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyDerivationAlgorithm"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PasswordRecipientInfo
class PasswordRecipientInfo : public asn1::SequenceType
{
public:

   explicit PasswordRecipientInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _keyDerivationAlgorithm_Type.setTypeName("keyDerivationAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _keyEncryptionAlgorithm_Type.setTypeName("keyEncryptionAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encryptedKey_Type.setTypeName("encryptedKey");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef keyDerivationAlgorithm_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__KeyDerivationAlgorithmIdentifier keyDerivationAlgorithm_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _keyDerivationAlgorithm_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: keyDerivationAlgorithm
      void set_keyDerivationAlgorithm(const keyDerivationAlgorithm_Type::ValueType& v) { _keyDerivationAlgorithm = v; _keyDerivationAlgorithm_Present = true; }
      void set_keyDerivationAlgorithm(keyDerivationAlgorithm_Type::ValueType&& v) { _keyDerivationAlgorithm = std::move(v); _keyDerivationAlgorithm_Present = true; }
      const keyDerivationAlgorithm_Type::ValueType& get_keyDerivationAlgorithm() const { return _keyDerivationAlgorithm; }
      keyDerivationAlgorithm_Type::ValueType& get_keyDerivationAlgorithm() { return _keyDerivationAlgorithm; }
      void set_keyDerivationAlgorithm_Present(bool present = true) { _keyDerivationAlgorithm_Present = present; }
      bool is_keyDerivationAlgorithm_Present() const { return _keyDerivationAlgorithm_Present; }


      // Component: keyEncryptionAlgorithm
      void set_keyEncryptionAlgorithm(const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& v) { _keyEncryptionAlgorithm = v;  }
      void set_keyEncryptionAlgorithm(asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType&& v) { _keyEncryptionAlgorithm = std::move(v);  }
      const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() const { return _keyEncryptionAlgorithm; }
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() { return _keyEncryptionAlgorithm; }

      // Component: encryptedKey
      void set_encryptedKey(const asn1::generated::EncryptedKey::ValueType& v) { _encryptedKey = v;  }
      void set_encryptedKey(asn1::generated::EncryptedKey::ValueType&& v) { _encryptedKey = std::move(v);  }
      const asn1::generated::EncryptedKey::ValueType& get_encryptedKey() const { return _encryptedKey; }
      asn1::generated::EncryptedKey::ValueType& get_encryptedKey() { return _encryptedKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_keyDerivationAlgorithm_Present != other._keyDerivationAlgorithm_Present)
            return false;
         if (_keyDerivationAlgorithm_Present && other._keyDerivationAlgorithm_Present && _keyDerivationAlgorithm != other._keyDerivationAlgorithm)
            return false;
         if (_keyEncryptionAlgorithm != other._keyEncryptionAlgorithm)
            return false;
         if (_encryptedKey != other._encryptedKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      keyDerivationAlgorithm_Type::ValueType _keyDerivationAlgorithm;
      bool _keyDerivationAlgorithm_Present;
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType _keyEncryptionAlgorithm;
      asn1::generated::EncryptedKey::ValueType _encryptedKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   keyDerivationAlgorithm_Type _keyDerivationAlgorithm_Type;
   asn1::generated::KeyEncryptionAlgorithmIdentifier _keyEncryptionAlgorithm_Type;
   asn1::generated::EncryptedKey _encryptedKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PasswordRecipientInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pwri_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PasswordRecipientInfo
class pwri_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PasswordRecipientInfo : public asn1::TaggingType<asn1::generated::PasswordRecipientInfo>
{
public:

   explicit pwri_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PasswordRecipientInfo() : asn1::TaggingType<asn1::generated::PasswordRecipientInfo>(new asn1::generated::PasswordRecipientInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyDerivationAlgorithm"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OtherRecipientInfo
class OtherRecipientInfo : public asn1::SequenceType
{
public:

   explicit OtherRecipientInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _oriType_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _oriType_Type.setTypeName("oriType");
#endif // ASN1_ENABLE_XER
      _oriValue_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _oriValue_Type.setTypeName("oriValue");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: oriType
      void set_oriType(const asn1::ObjectIdentifierType::ValueType& v) { _oriType = v;  }
      void set_oriType(asn1::ObjectIdentifierType::ValueType&& v) { _oriType = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_oriType() const { return _oriType; }
      asn1::ObjectIdentifierType::ValueType& get_oriType() { return _oriType; }

      // Component: oriValue
      void set_oriValue(const asn1::AnyType::ValueType& v) { _oriValue = v;  }
      void set_oriValue(asn1::AnyType::ValueType&& v) { _oriValue = std::move(v);  }
      const asn1::AnyType::ValueType& get_oriValue() const { return _oriValue; }
      asn1::AnyType::ValueType& get_oriValue() { return _oriValue; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_oriType != other._oriType)
            return false;
         if (_oriValue != other._oriValue)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _oriType;
      asn1::AnyType::ValueType _oriValue;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _oriType_Type;
   asn1::AnyType _oriValue_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OtherRecipientInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ori_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OtherRecipientInfo
class ori_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OtherRecipientInfo : public asn1::TaggingType<asn1::generated::OtherRecipientInfo>
{
public:

   explicit ori_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OtherRecipientInfo() : asn1::TaggingType<asn1::generated::OtherRecipientInfo>(new asn1::generated::OtherRecipientInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ori"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RecipientIdentifier
class RecipientIdentifier : public asn1::ChoiceType
{
public:

   explicit RecipientIdentifier()
   {
      _addChoice(&_issuerAndSerialNumber_Type);
#if defined(ASN1_ENABLE_XER)
      _issuerAndSerialNumber_Type.setTypeName("issuerAndSerialNumber");
#endif // ASN1_ENABLE_XER
      _addChoice(&_subjectKeyIdentifier_Type);
#if defined(ASN1_ENABLE_XER)
      _subjectKeyIdentifier_Type.setTypeName("subjectKeyIdentifier");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef subjectKeyIdentifier_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__SubjectKeyIdentifier subjectKeyIdentifier_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: issuerAndSerialNumber
      void set_issuerAndSerialNumber(const asn1::generated::IssuerAndSerialNumber::ValueType& v) { _issuerAndSerialNumber = v; _id = issuerAndSerialNumber_ID; }
      void set_issuerAndSerialNumber(asn1::generated::IssuerAndSerialNumber::ValueType&& v) { _issuerAndSerialNumber = std::move(v); _id = issuerAndSerialNumber_ID; }
      const asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() const { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      asn1::generated::IssuerAndSerialNumber::ValueType& get_issuerAndSerialNumber() { assert(_id == issuerAndSerialNumber_ID); return _issuerAndSerialNumber; }
      bool has_issuerAndSerialNumber_Choosen() const { return _id == issuerAndSerialNumber_ID; }
      void choose_issuerAndSerialNumber() { _id = issuerAndSerialNumber_ID; }

      // Alternative: subjectKeyIdentifier
      void set_subjectKeyIdentifier(const subjectKeyIdentifier_Type::ValueType& v) { _subjectKeyIdentifier = v; _id = subjectKeyIdentifier_ID; }
      void set_subjectKeyIdentifier(subjectKeyIdentifier_Type::ValueType&& v) { _subjectKeyIdentifier = std::move(v); _id = subjectKeyIdentifier_ID; }
      const subjectKeyIdentifier_Type::ValueType& get_subjectKeyIdentifier() const { assert(_id == subjectKeyIdentifier_ID); return _subjectKeyIdentifier; }
      subjectKeyIdentifier_Type::ValueType& get_subjectKeyIdentifier() { assert(_id == subjectKeyIdentifier_ID); return _subjectKeyIdentifier; }
      bool has_subjectKeyIdentifier_Choosen() const { return _id == subjectKeyIdentifier_ID; }
      void choose_subjectKeyIdentifier() { _id = subjectKeyIdentifier_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case issuerAndSerialNumber_ID:
            if (_issuerAndSerialNumber != other._issuerAndSerialNumber)
               return false;
            break;
         case subjectKeyIdentifier_ID:
            if (_subjectKeyIdentifier != other._subjectKeyIdentifier)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         issuerAndSerialNumber_ID = 1,
         subjectKeyIdentifier_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::IssuerAndSerialNumber::ValueType _issuerAndSerialNumber;
      subjectKeyIdentifier_Type::ValueType _subjectKeyIdentifier;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::IssuerAndSerialNumber _issuerAndSerialNumber_Type;
   subjectKeyIdentifier_Type _subjectKeyIdentifier_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RecipientIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyTransRecipientInfo
class KeyTransRecipientInfo : public asn1::SequenceType
{
public:

   explicit KeyTransRecipientInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _rid_Type.setTypeName("rid");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _keyEncryptionAlgorithm_Type.setTypeName("keyEncryptionAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encryptedKey_Type.setTypeName("encryptedKey");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: rid
      void set_rid(const asn1::generated::RecipientIdentifier::ValueType& v) { _rid = v;  }
      void set_rid(asn1::generated::RecipientIdentifier::ValueType&& v) { _rid = std::move(v);  }
      const asn1::generated::RecipientIdentifier::ValueType& get_rid() const { return _rid; }
      asn1::generated::RecipientIdentifier::ValueType& get_rid() { return _rid; }

      // Component: keyEncryptionAlgorithm
      void set_keyEncryptionAlgorithm(const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& v) { _keyEncryptionAlgorithm = v;  }
      void set_keyEncryptionAlgorithm(asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType&& v) { _keyEncryptionAlgorithm = std::move(v);  }
      const asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() const { return _keyEncryptionAlgorithm; }
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType& get_keyEncryptionAlgorithm() { return _keyEncryptionAlgorithm; }

      // Component: encryptedKey
      void set_encryptedKey(const asn1::generated::EncryptedKey::ValueType& v) { _encryptedKey = v;  }
      void set_encryptedKey(asn1::generated::EncryptedKey::ValueType&& v) { _encryptedKey = std::move(v);  }
      const asn1::generated::EncryptedKey::ValueType& get_encryptedKey() const { return _encryptedKey; }
      asn1::generated::EncryptedKey::ValueType& get_encryptedKey() { return _encryptedKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_rid != other._rid)
            return false;
         if (_keyEncryptionAlgorithm != other._keyEncryptionAlgorithm)
            return false;
         if (_encryptedKey != other._encryptedKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      asn1::generated::RecipientIdentifier::ValueType _rid;
      asn1::generated::KeyEncryptionAlgorithmIdentifier::ValueType _keyEncryptionAlgorithm;
      asn1::generated::EncryptedKey::ValueType _encryptedKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   asn1::generated::RecipientIdentifier _rid_Type;
   asn1::generated::KeyEncryptionAlgorithmIdentifier _keyEncryptionAlgorithm_Type;
   asn1::generated::EncryptedKey _encryptedKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyTransRecipientInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RecipientInfo
class RecipientInfo : public asn1::ChoiceType
{
public:

   explicit RecipientInfo()
   {
      _addChoice(&_ktri_Type);
#if defined(ASN1_ENABLE_XER)
      _ktri_Type.setTypeName("ktri");
#endif // ASN1_ENABLE_XER
      _addChoice(&_kari_Type);
#if defined(ASN1_ENABLE_XER)
      _kari_Type.setTypeName("kari");
#endif // ASN1_ENABLE_XER
      _addChoice(&_kekri_Type);
#if defined(ASN1_ENABLE_XER)
      _kekri_Type.setTypeName("kekri");
#endif // ASN1_ENABLE_XER
      _addChoice(&_pwri_Type);
#if defined(ASN1_ENABLE_XER)
      _pwri_Type.setTypeName("pwri");
#endif // ASN1_ENABLE_XER
      _addChoice(&_ori_Type);
#if defined(ASN1_ENABLE_XER)
      _ori_Type.setTypeName("ori");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef kari_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyAgreeRecipientInfo kari_Type;
   typedef kekri_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KEKRecipientInfo kekri_Type;
   typedef pwri_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PasswordRecipientInfo pwri_Type;
   typedef ori_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OtherRecipientInfo ori_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: ktri
      void set_ktri(const asn1::generated::KeyTransRecipientInfo::ValueType& v) { _ktri = v; _id = ktri_ID; }
      void set_ktri(asn1::generated::KeyTransRecipientInfo::ValueType&& v) { _ktri = std::move(v); _id = ktri_ID; }
      const asn1::generated::KeyTransRecipientInfo::ValueType& get_ktri() const { assert(_id == ktri_ID); return _ktri; }
      asn1::generated::KeyTransRecipientInfo::ValueType& get_ktri() { assert(_id == ktri_ID); return _ktri; }
      bool has_ktri_Choosen() const { return _id == ktri_ID; }
      void choose_ktri() { _id = ktri_ID; }

      // Alternative: kari
      void set_kari(const kari_Type::ValueType& v) { _kari = v; _id = kari_ID; }
      void set_kari(kari_Type::ValueType&& v) { _kari = std::move(v); _id = kari_ID; }
      const kari_Type::ValueType& get_kari() const { assert(_id == kari_ID); return _kari; }
      kari_Type::ValueType& get_kari() { assert(_id == kari_ID); return _kari; }
      bool has_kari_Choosen() const { return _id == kari_ID; }
      void choose_kari() { _id = kari_ID; }

      // Alternative: kekri
      void set_kekri(const kekri_Type::ValueType& v) { _kekri = v; _id = kekri_ID; }
      void set_kekri(kekri_Type::ValueType&& v) { _kekri = std::move(v); _id = kekri_ID; }
      const kekri_Type::ValueType& get_kekri() const { assert(_id == kekri_ID); return _kekri; }
      kekri_Type::ValueType& get_kekri() { assert(_id == kekri_ID); return _kekri; }
      bool has_kekri_Choosen() const { return _id == kekri_ID; }
      void choose_kekri() { _id = kekri_ID; }

      // Alternative: pwri
      void set_pwri(const pwri_Type::ValueType& v) { _pwri = v; _id = pwri_ID; }
      void set_pwri(pwri_Type::ValueType&& v) { _pwri = std::move(v); _id = pwri_ID; }
      const pwri_Type::ValueType& get_pwri() const { assert(_id == pwri_ID); return _pwri; }
      pwri_Type::ValueType& get_pwri() { assert(_id == pwri_ID); return _pwri; }
      bool has_pwri_Choosen() const { return _id == pwri_ID; }
      void choose_pwri() { _id = pwri_ID; }

      // Alternative: ori
      void set_ori(const ori_Type::ValueType& v) { _ori = v; _id = ori_ID; }
      void set_ori(ori_Type::ValueType&& v) { _ori = std::move(v); _id = ori_ID; }
      const ori_Type::ValueType& get_ori() const { assert(_id == ori_ID); return _ori; }
      ori_Type::ValueType& get_ori() { assert(_id == ori_ID); return _ori; }
      bool has_ori_Choosen() const { return _id == ori_ID; }
      void choose_ori() { _id = ori_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case ktri_ID:
            if (_ktri != other._ktri)
               return false;
            break;
         case kari_ID:
            if (_kari != other._kari)
               return false;
            break;
         case kekri_ID:
            if (_kekri != other._kekri)
               return false;
            break;
         case pwri_ID:
            if (_pwri != other._pwri)
               return false;
            break;
         case ori_ID:
            if (_ori != other._ori)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         ktri_ID = 1,
         kari_ID = 2,
         kekri_ID = 3,
         pwri_ID = 4,
         ori_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::KeyTransRecipientInfo::ValueType _ktri;
      kari_Type::ValueType _kari;
      kekri_Type::ValueType _kekri;
      pwri_Type::ValueType _pwri;
      ori_Type::ValueType _ori;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::KeyTransRecipientInfo _ktri_Type;
   kari_Type _kari_Type;
   kekri_Type _kekri_Type;
   pwri_Type _pwri_Type;
   ori_Type _ori_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RecipientInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RecipientInfos
class RecipientInfos : public asn1::SetOfType<asn1::generated::RecipientInfo>
{
public:

   explicit RecipientInfos() : asn1::SetOfType<asn1::generated::RecipientInfo>(new asn1::generated::RecipientInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RecipientInfos"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncryptedContent
class EncryptedContent : public asn1::OctetStringType
{
public:

   explicit EncryptedContent()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit EncryptedContent(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncryptedContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: encryptedContent_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__EncryptedContent
class encryptedContent_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__EncryptedContent : public asn1::TaggingType<asn1::generated::EncryptedContent>
{
public:

   explicit encryptedContent_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__EncryptedContent() : asn1::TaggingType<asn1::generated::EncryptedContent>(new asn1::generated::EncryptedContent)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "encryptedContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ContentEncryptionAlgorithmIdentifier
class ContentEncryptionAlgorithmIdentifier : public asn1::generated::AlgorithmIdentifier
{
public:

   explicit ContentEncryptionAlgorithmIdentifier()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ContentEncryptionAlgorithmIdentifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncryptedContentInfo
class EncryptedContentInfo : public asn1::SequenceType
{
public:

   explicit EncryptedContentInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _contentType_Type.setTypeName("contentType");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _contentEncryptionAlgorithm_Type.setTypeName("contentEncryptionAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encryptedContent_Type.setTypeName("encryptedContent");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef encryptedContent_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__EncryptedContent encryptedContent_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _encryptedContent_Present = false;
      }

      // Component: contentType
      void set_contentType(const asn1::generated::ContentType::ValueType& v) { _contentType = v;  }
      void set_contentType(asn1::generated::ContentType::ValueType&& v) { _contentType = std::move(v);  }
      const asn1::generated::ContentType::ValueType& get_contentType() const { return _contentType; }
      asn1::generated::ContentType::ValueType& get_contentType() { return _contentType; }

      // Component: contentEncryptionAlgorithm
      void set_contentEncryptionAlgorithm(const asn1::generated::ContentEncryptionAlgorithmIdentifier::ValueType& v) { _contentEncryptionAlgorithm = v;  }
      void set_contentEncryptionAlgorithm(asn1::generated::ContentEncryptionAlgorithmIdentifier::ValueType&& v) { _contentEncryptionAlgorithm = std::move(v);  }
      const asn1::generated::ContentEncryptionAlgorithmIdentifier::ValueType& get_contentEncryptionAlgorithm() const { return _contentEncryptionAlgorithm; }
      asn1::generated::ContentEncryptionAlgorithmIdentifier::ValueType& get_contentEncryptionAlgorithm() { return _contentEncryptionAlgorithm; }

      // Component: encryptedContent
      void set_encryptedContent(const encryptedContent_Type::ValueType& v) { _encryptedContent = v; _encryptedContent_Present = true; }
      void set_encryptedContent(encryptedContent_Type::ValueType&& v) { _encryptedContent = std::move(v); _encryptedContent_Present = true; }
      const encryptedContent_Type::ValueType& get_encryptedContent() const { return _encryptedContent; }
      encryptedContent_Type::ValueType& get_encryptedContent() { return _encryptedContent; }
      void set_encryptedContent_Present(bool present = true) { _encryptedContent_Present = present; }
      bool is_encryptedContent_Present() const { return _encryptedContent_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_contentType != other._contentType)
            return false;
         if (_contentEncryptionAlgorithm != other._contentEncryptionAlgorithm)
            return false;
         if (_encryptedContent_Present != other._encryptedContent_Present)
            return false;
         if (_encryptedContent_Present && other._encryptedContent_Present && _encryptedContent != other._encryptedContent)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::ContentType::ValueType _contentType;
      asn1::generated::ContentEncryptionAlgorithmIdentifier::ValueType _contentEncryptionAlgorithm;
      encryptedContent_Type::ValueType _encryptedContent;
      bool _encryptedContent_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::ContentType _contentType_Type;
   asn1::generated::ContentEncryptionAlgorithmIdentifier _contentEncryptionAlgorithm_Type;
   encryptedContent_Type _encryptedContent_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncryptedContentInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EnvelopedData
class EnvelopedData : public asn1::SequenceType
{
public:

   explicit EnvelopedData()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _originatorInfo_Type.setTypeName("originatorInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _recipientInfos_Type.setTypeName("recipientInfos");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encryptedContentInfo_Type.setTypeName("encryptedContentInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _unprotectedAttrs_Type.setTypeName("unprotectedAttrs");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef originatorInfo_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__OriginatorInfo originatorInfo_Type;
   typedef unprotectedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnprotectedAttributes unprotectedAttrs_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _originatorInfo_Present = false;
         _unprotectedAttrs_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: originatorInfo
      void set_originatorInfo(const originatorInfo_Type::ValueType& v) { _originatorInfo = v; _originatorInfo_Present = true; }
      void set_originatorInfo(originatorInfo_Type::ValueType&& v) { _originatorInfo = std::move(v); _originatorInfo_Present = true; }
      const originatorInfo_Type::ValueType& get_originatorInfo() const { return _originatorInfo; }
      originatorInfo_Type::ValueType& get_originatorInfo() { return _originatorInfo; }
      void set_originatorInfo_Present(bool present = true) { _originatorInfo_Present = present; }
      bool is_originatorInfo_Present() const { return _originatorInfo_Present; }


      // Component: recipientInfos
      void set_recipientInfos(const asn1::generated::RecipientInfos::ValueType& v) { _recipientInfos = v;  }
      void set_recipientInfos(asn1::generated::RecipientInfos::ValueType&& v) { _recipientInfos = std::move(v);  }
      const asn1::generated::RecipientInfos::ValueType& get_recipientInfos() const { return _recipientInfos; }
      asn1::generated::RecipientInfos::ValueType& get_recipientInfos() { return _recipientInfos; }

      // Component: encryptedContentInfo
      void set_encryptedContentInfo(const asn1::generated::EncryptedContentInfo::ValueType& v) { _encryptedContentInfo = v;  }
      void set_encryptedContentInfo(asn1::generated::EncryptedContentInfo::ValueType&& v) { _encryptedContentInfo = std::move(v);  }
      const asn1::generated::EncryptedContentInfo::ValueType& get_encryptedContentInfo() const { return _encryptedContentInfo; }
      asn1::generated::EncryptedContentInfo::ValueType& get_encryptedContentInfo() { return _encryptedContentInfo; }

      // Component: unprotectedAttrs
      void set_unprotectedAttrs(const unprotectedAttrs_Type::ValueType& v) { _unprotectedAttrs = v; _unprotectedAttrs_Present = true; }
      void set_unprotectedAttrs(unprotectedAttrs_Type::ValueType&& v) { _unprotectedAttrs = std::move(v); _unprotectedAttrs_Present = true; }
      const unprotectedAttrs_Type::ValueType& get_unprotectedAttrs() const { return _unprotectedAttrs; }
      unprotectedAttrs_Type::ValueType& get_unprotectedAttrs() { return _unprotectedAttrs; }
      void set_unprotectedAttrs_Present(bool present = true) { _unprotectedAttrs_Present = present; }
      bool is_unprotectedAttrs_Present() const { return _unprotectedAttrs_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_originatorInfo_Present != other._originatorInfo_Present)
            return false;
         if (_originatorInfo_Present && other._originatorInfo_Present && _originatorInfo != other._originatorInfo)
            return false;
         if (_recipientInfos != other._recipientInfos)
            return false;
         if (_encryptedContentInfo != other._encryptedContentInfo)
            return false;
         if (_unprotectedAttrs_Present != other._unprotectedAttrs_Present)
            return false;
         if (_unprotectedAttrs_Present && other._unprotectedAttrs_Present && _unprotectedAttrs != other._unprotectedAttrs)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      originatorInfo_Type::ValueType _originatorInfo;
      bool _originatorInfo_Present;
      asn1::generated::RecipientInfos::ValueType _recipientInfos;
      asn1::generated::EncryptedContentInfo::ValueType _encryptedContentInfo;
      unprotectedAttrs_Type::ValueType _unprotectedAttrs;
      bool _unprotectedAttrs_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   originatorInfo_Type _originatorInfo_Type;
   asn1::generated::RecipientInfos _recipientInfos_Type;
   asn1::generated::EncryptedContentInfo _encryptedContentInfo_Type;
   unprotectedAttrs_Type _unprotectedAttrs_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EnvelopedData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Digest
class Digest : public asn1::OctetStringType
{
public:

   explicit Digest()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit Digest(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Digest"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DigestedData
class DigestedData : public asn1::SequenceType
{
public:

   explicit DigestedData()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _digestAlgorithm_Type.setTypeName("digestAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encapContentInfo_Type.setTypeName("encapContentInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _digest_Type.setTypeName("digest");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: digestAlgorithm
      void set_digestAlgorithm(const asn1::generated::DigestAlgorithmIdentifier::ValueType& v) { _digestAlgorithm = v;  }
      void set_digestAlgorithm(asn1::generated::DigestAlgorithmIdentifier::ValueType&& v) { _digestAlgorithm = std::move(v);  }
      const asn1::generated::DigestAlgorithmIdentifier::ValueType& get_digestAlgorithm() const { return _digestAlgorithm; }
      asn1::generated::DigestAlgorithmIdentifier::ValueType& get_digestAlgorithm() { return _digestAlgorithm; }

      // Component: encapContentInfo
      void set_encapContentInfo(const asn1::generated::EncapsulatedContentInfo::ValueType& v) { _encapContentInfo = v;  }
      void set_encapContentInfo(asn1::generated::EncapsulatedContentInfo::ValueType&& v) { _encapContentInfo = std::move(v);  }
      const asn1::generated::EncapsulatedContentInfo::ValueType& get_encapContentInfo() const { return _encapContentInfo; }
      asn1::generated::EncapsulatedContentInfo::ValueType& get_encapContentInfo() { return _encapContentInfo; }

      // Component: digest
      void set_digest(const asn1::generated::Digest::ValueType& v) { _digest = v;  }
      void set_digest(asn1::generated::Digest::ValueType&& v) { _digest = std::move(v);  }
      const asn1::generated::Digest::ValueType& get_digest() const { return _digest; }
      asn1::generated::Digest::ValueType& get_digest() { return _digest; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_digestAlgorithm != other._digestAlgorithm)
            return false;
         if (_encapContentInfo != other._encapContentInfo)
            return false;
         if (_digest != other._digest)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      asn1::generated::DigestAlgorithmIdentifier::ValueType _digestAlgorithm;
      asn1::generated::EncapsulatedContentInfo::ValueType _encapContentInfo;
      asn1::generated::Digest::ValueType _digest;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   asn1::generated::DigestAlgorithmIdentifier _digestAlgorithm_Type;
   asn1::generated::EncapsulatedContentInfo _encapContentInfo_Type;
   asn1::generated::Digest _digest_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DigestedData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncryptedData
class EncryptedData : public asn1::SequenceType
{
public:

   explicit EncryptedData()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encryptedContentInfo_Type.setTypeName("encryptedContentInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _unprotectedAttrs_Type.setTypeName("unprotectedAttrs");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef unprotectedAttrs_INTERNAL__IMPLICIT_1_INTERNAL_asn1__generated__UnprotectedAttributes unprotectedAttrs_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _unprotectedAttrs_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: encryptedContentInfo
      void set_encryptedContentInfo(const asn1::generated::EncryptedContentInfo::ValueType& v) { _encryptedContentInfo = v;  }
      void set_encryptedContentInfo(asn1::generated::EncryptedContentInfo::ValueType&& v) { _encryptedContentInfo = std::move(v);  }
      const asn1::generated::EncryptedContentInfo::ValueType& get_encryptedContentInfo() const { return _encryptedContentInfo; }
      asn1::generated::EncryptedContentInfo::ValueType& get_encryptedContentInfo() { return _encryptedContentInfo; }

      // Component: unprotectedAttrs
      void set_unprotectedAttrs(const unprotectedAttrs_Type::ValueType& v) { _unprotectedAttrs = v; _unprotectedAttrs_Present = true; }
      void set_unprotectedAttrs(unprotectedAttrs_Type::ValueType&& v) { _unprotectedAttrs = std::move(v); _unprotectedAttrs_Present = true; }
      const unprotectedAttrs_Type::ValueType& get_unprotectedAttrs() const { return _unprotectedAttrs; }
      unprotectedAttrs_Type::ValueType& get_unprotectedAttrs() { return _unprotectedAttrs; }
      void set_unprotectedAttrs_Present(bool present = true) { _unprotectedAttrs_Present = present; }
      bool is_unprotectedAttrs_Present() const { return _unprotectedAttrs_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_encryptedContentInfo != other._encryptedContentInfo)
            return false;
         if (_unprotectedAttrs_Present != other._unprotectedAttrs_Present)
            return false;
         if (_unprotectedAttrs_Present && other._unprotectedAttrs_Present && _unprotectedAttrs != other._unprotectedAttrs)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      asn1::generated::EncryptedContentInfo::ValueType _encryptedContentInfo;
      unprotectedAttrs_Type::ValueType _unprotectedAttrs;
      bool _unprotectedAttrs_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   asn1::generated::EncryptedContentInfo _encryptedContentInfo_Type;
   unprotectedAttrs_Type _unprotectedAttrs_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncryptedData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: digestAlgorithm_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DigestAlgorithmIdentifier
class digestAlgorithm_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DigestAlgorithmIdentifier : public asn1::TaggingType<asn1::generated::DigestAlgorithmIdentifier>
{
public:

   explicit digestAlgorithm_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DigestAlgorithmIdentifier() : asn1::TaggingType<asn1::generated::DigestAlgorithmIdentifier>(new asn1::generated::DigestAlgorithmIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "digestAlgorithm"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AuthAttributes
class AuthAttributes : public asn1::SetOfType<asn1::generated::AttributeImplicit>
{
public:

   explicit AuthAttributes() : asn1::SetOfType<asn1::generated::AttributeImplicit>(new asn1::generated::AttributeImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AuthAttributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: authAttrs_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AuthAttributes
class authAttrs_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AuthAttributes : public asn1::TaggingType<asn1::generated::AuthAttributes>
{
public:

   explicit authAttrs_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AuthAttributes() : asn1::TaggingType<asn1::generated::AuthAttributes>(new asn1::generated::AuthAttributes)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "authAttrs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: unauthAttrs_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__UnauthAttributes
class unauthAttrs_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__UnauthAttributes : public asn1::TaggingType<asn1::generated::UnauthAttributes>
{
public:

   explicit unauthAttrs_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__UnauthAttributes() : asn1::TaggingType<asn1::generated::UnauthAttributes>(new asn1::generated::UnauthAttributes)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "unauthAttrs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: MessageAuthenticationCodeAlgorithm
class MessageAuthenticationCodeAlgorithm : public asn1::generated::AlgorithmIdentifier
{
public:

   explicit MessageAuthenticationCodeAlgorithm()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "MessageAuthenticationCodeAlgorithm"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: MessageAuthenticationCode
class MessageAuthenticationCode : public asn1::OctetStringType
{
public:

   explicit MessageAuthenticationCode()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit MessageAuthenticationCode(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "MessageAuthenticationCode"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AuthenticatedData
class AuthenticatedData : public asn1::SequenceType
{
public:

   explicit AuthenticatedData()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _originatorInfo_Type.setTypeName("originatorInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _recipientInfos_Type.setTypeName("recipientInfos");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _macAlgorithm_Type.setTypeName("macAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _digestAlgorithm_Type.setTypeName("digestAlgorithm");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encapContentInfo_Type.setTypeName("encapContentInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _authAttrs_Type.setTypeName("authAttrs");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _mac_Type.setTypeName("mac");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _unauthAttrs_Type.setTypeName("unauthAttrs");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef originatorInfo_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__OriginatorInfo originatorInfo_Type;
   typedef digestAlgorithm_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__DigestAlgorithmIdentifier digestAlgorithm_Type;
   typedef authAttrs_INTERNAL__IMPLICIT_2_INTERNAL_asn1__generated__AuthAttributes authAttrs_Type;
   typedef unauthAttrs_INTERNAL__IMPLICIT_3_INTERNAL_asn1__generated__UnauthAttributes unauthAttrs_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _originatorInfo_Present = false;
         _digestAlgorithm_Present = false;
         _authAttrs_Present = false;
         _unauthAttrs_Present = false;
      }

      // Component: version
      void set_version(const asn1::generated::CMSVersion::ValueType& v) { _version = v;  }
      void set_version(asn1::generated::CMSVersion::ValueType&& v) { _version = std::move(v);  }
      const asn1::generated::CMSVersion::ValueType& get_version() const { return _version; }
      asn1::generated::CMSVersion::ValueType& get_version() { return _version; }

      // Component: originatorInfo
      void set_originatorInfo(const originatorInfo_Type::ValueType& v) { _originatorInfo = v; _originatorInfo_Present = true; }
      void set_originatorInfo(originatorInfo_Type::ValueType&& v) { _originatorInfo = std::move(v); _originatorInfo_Present = true; }
      const originatorInfo_Type::ValueType& get_originatorInfo() const { return _originatorInfo; }
      originatorInfo_Type::ValueType& get_originatorInfo() { return _originatorInfo; }
      void set_originatorInfo_Present(bool present = true) { _originatorInfo_Present = present; }
      bool is_originatorInfo_Present() const { return _originatorInfo_Present; }


      // Component: recipientInfos
      void set_recipientInfos(const asn1::generated::RecipientInfos::ValueType& v) { _recipientInfos = v;  }
      void set_recipientInfos(asn1::generated::RecipientInfos::ValueType&& v) { _recipientInfos = std::move(v);  }
      const asn1::generated::RecipientInfos::ValueType& get_recipientInfos() const { return _recipientInfos; }
      asn1::generated::RecipientInfos::ValueType& get_recipientInfos() { return _recipientInfos; }

      // Component: macAlgorithm
      void set_macAlgorithm(const asn1::generated::MessageAuthenticationCodeAlgorithm::ValueType& v) { _macAlgorithm = v;  }
      void set_macAlgorithm(asn1::generated::MessageAuthenticationCodeAlgorithm::ValueType&& v) { _macAlgorithm = std::move(v);  }
      const asn1::generated::MessageAuthenticationCodeAlgorithm::ValueType& get_macAlgorithm() const { return _macAlgorithm; }
      asn1::generated::MessageAuthenticationCodeAlgorithm::ValueType& get_macAlgorithm() { return _macAlgorithm; }

      // Component: digestAlgorithm
      void set_digestAlgorithm(const digestAlgorithm_Type::ValueType& v) { _digestAlgorithm = v; _digestAlgorithm_Present = true; }
      void set_digestAlgorithm(digestAlgorithm_Type::ValueType&& v) { _digestAlgorithm = std::move(v); _digestAlgorithm_Present = true; }
      const digestAlgorithm_Type::ValueType& get_digestAlgorithm() const { return _digestAlgorithm; }
      digestAlgorithm_Type::ValueType& get_digestAlgorithm() { return _digestAlgorithm; }
      void set_digestAlgorithm_Present(bool present = true) { _digestAlgorithm_Present = present; }
      bool is_digestAlgorithm_Present() const { return _digestAlgorithm_Present; }


      // Component: encapContentInfo
      void set_encapContentInfo(const asn1::generated::EncapsulatedContentInfo::ValueType& v) { _encapContentInfo = v;  }
      void set_encapContentInfo(asn1::generated::EncapsulatedContentInfo::ValueType&& v) { _encapContentInfo = std::move(v);  }
      const asn1::generated::EncapsulatedContentInfo::ValueType& get_encapContentInfo() const { return _encapContentInfo; }
      asn1::generated::EncapsulatedContentInfo::ValueType& get_encapContentInfo() { return _encapContentInfo; }

      // Component: authAttrs
      void set_authAttrs(const authAttrs_Type::ValueType& v) { _authAttrs = v; _authAttrs_Present = true; }
      void set_authAttrs(authAttrs_Type::ValueType&& v) { _authAttrs = std::move(v); _authAttrs_Present = true; }
      const authAttrs_Type::ValueType& get_authAttrs() const { return _authAttrs; }
      authAttrs_Type::ValueType& get_authAttrs() { return _authAttrs; }
      void set_authAttrs_Present(bool present = true) { _authAttrs_Present = present; }
      bool is_authAttrs_Present() const { return _authAttrs_Present; }


      // Component: mac
      void set_mac(const asn1::generated::MessageAuthenticationCode::ValueType& v) { _mac = v;  }
      void set_mac(asn1::generated::MessageAuthenticationCode::ValueType&& v) { _mac = std::move(v);  }
      const asn1::generated::MessageAuthenticationCode::ValueType& get_mac() const { return _mac; }
      asn1::generated::MessageAuthenticationCode::ValueType& get_mac() { return _mac; }

      // Component: unauthAttrs
      void set_unauthAttrs(const unauthAttrs_Type::ValueType& v) { _unauthAttrs = v; _unauthAttrs_Present = true; }
      void set_unauthAttrs(unauthAttrs_Type::ValueType&& v) { _unauthAttrs = std::move(v); _unauthAttrs_Present = true; }
      const unauthAttrs_Type::ValueType& get_unauthAttrs() const { return _unauthAttrs; }
      unauthAttrs_Type::ValueType& get_unauthAttrs() { return _unauthAttrs; }
      void set_unauthAttrs_Present(bool present = true) { _unauthAttrs_Present = present; }
      bool is_unauthAttrs_Present() const { return _unauthAttrs_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_originatorInfo_Present != other._originatorInfo_Present)
            return false;
         if (_originatorInfo_Present && other._originatorInfo_Present && _originatorInfo != other._originatorInfo)
            return false;
         if (_recipientInfos != other._recipientInfos)
            return false;
         if (_macAlgorithm != other._macAlgorithm)
            return false;
         if (_digestAlgorithm_Present != other._digestAlgorithm_Present)
            return false;
         if (_digestAlgorithm_Present && other._digestAlgorithm_Present && _digestAlgorithm != other._digestAlgorithm)
            return false;
         if (_encapContentInfo != other._encapContentInfo)
            return false;
         if (_authAttrs_Present != other._authAttrs_Present)
            return false;
         if (_authAttrs_Present && other._authAttrs_Present && _authAttrs != other._authAttrs)
            return false;
         if (_mac != other._mac)
            return false;
         if (_unauthAttrs_Present != other._unauthAttrs_Present)
            return false;
         if (_unauthAttrs_Present && other._unauthAttrs_Present && _unauthAttrs != other._unauthAttrs)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMSVersion::ValueType _version;
      originatorInfo_Type::ValueType _originatorInfo;
      bool _originatorInfo_Present;
      asn1::generated::RecipientInfos::ValueType _recipientInfos;
      asn1::generated::MessageAuthenticationCodeAlgorithm::ValueType _macAlgorithm;
      digestAlgorithm_Type::ValueType _digestAlgorithm;
      bool _digestAlgorithm_Present;
      asn1::generated::EncapsulatedContentInfo::ValueType _encapContentInfo;
      authAttrs_Type::ValueType _authAttrs;
      bool _authAttrs_Present;
      asn1::generated::MessageAuthenticationCode::ValueType _mac;
      unauthAttrs_Type::ValueType _unauthAttrs;
      bool _unauthAttrs_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMSVersion _version_Type;
   originatorInfo_Type _originatorInfo_Type;
   asn1::generated::RecipientInfos _recipientInfos_Type;
   asn1::generated::MessageAuthenticationCodeAlgorithm _macAlgorithm_Type;
   digestAlgorithm_Type _digestAlgorithm_Type;
   asn1::generated::EncapsulatedContentInfo _encapContentInfo_Type;
   authAttrs_Type _authAttrs_Type;
   asn1::generated::MessageAuthenticationCode _mac_Type;
   unauthAttrs_Type _unauthAttrs_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AuthenticatedData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: MessageDigest
class MessageDigest : public asn1::OctetStringType
{
public:

   explicit MessageDigest()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit MessageDigest(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "MessageDigest"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TimeImplicit
class TimeImplicit : public asn1::ChoiceType
{
public:

   explicit TimeImplicit()
   {
      _addChoice(&_utcTime_Type);
      _utcTime_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _utcTime_Type.setTypeName("utcTime");
#endif // ASN1_ENABLE_XER
      _addChoice(&_generalTime_Type);
      _generalTime_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _generalTime_Type.setTypeName("generalTime");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: utcTime
      void set_utcTime(const asn1::UTCTimeType::ValueType& v) { _utcTime = v; _id = utcTime_ID; }
      void set_utcTime(asn1::UTCTimeType::ValueType&& v) { _utcTime = std::move(v); _id = utcTime_ID; }
      const asn1::UTCTimeType::ValueType& get_utcTime() const { assert(_id == utcTime_ID); return _utcTime; }
      asn1::UTCTimeType::ValueType& get_utcTime() { assert(_id == utcTime_ID); return _utcTime; }
      bool has_utcTime_Choosen() const { return _id == utcTime_ID; }
      void choose_utcTime() { _id = utcTime_ID; }

      // Alternative: generalTime
      void set_generalTime(const asn1::GeneralizedTimeType::ValueType& v) { _generalTime = v; _id = generalTime_ID; }
      void set_generalTime(asn1::GeneralizedTimeType::ValueType&& v) { _generalTime = std::move(v); _id = generalTime_ID; }
      const asn1::GeneralizedTimeType::ValueType& get_generalTime() const { assert(_id == generalTime_ID); return _generalTime; }
      asn1::GeneralizedTimeType::ValueType& get_generalTime() { assert(_id == generalTime_ID); return _generalTime; }
      bool has_generalTime_Choosen() const { return _id == generalTime_ID; }
      void choose_generalTime() { _id = generalTime_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case utcTime_ID:
            if (_utcTime != other._utcTime)
               return false;
            break;
         case generalTime_ID:
            if (_generalTime != other._generalTime)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         utcTime_ID = 1,
         generalTime_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::UTCTimeType::ValueType _utcTime;
      asn1::GeneralizedTimeType::ValueType _generalTime;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::UTCTimeType _utcTime_Type;
   asn1::GeneralizedTimeType _generalTime_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TimeImplicit"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SigningTime
class SigningTime : public asn1::generated::TimeImplicit
{
public:

   explicit SigningTime()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SigningTime"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Countersignature
class Countersignature : public asn1::generated::SignerInfo
{
public:

   explicit Countersignature()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Countersignature"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ExtendedCertificateOrCertificate
class ExtendedCertificateOrCertificate : public asn1::ChoiceType
{
public:

   explicit ExtendedCertificateOrCertificate()
   {
      _addChoice(&_certificate_Type);
#if defined(ASN1_ENABLE_XER)
      _certificate_Type.setTypeName("certificate");
#endif // ASN1_ENABLE_XER
      _addChoice(&_extendedCertificate_Type);
#if defined(ASN1_ENABLE_XER)
      _extendedCertificate_Type.setTypeName("extendedCertificate");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef extendedCertificate_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__ExtendedCertificate extendedCertificate_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: certificate
      void set_certificate(const asn1::generated::Certificate::ValueType& v) { _certificate = v; _id = certificate_ID; }
      void set_certificate(asn1::generated::Certificate::ValueType&& v) { _certificate = std::move(v); _id = certificate_ID; }
      const asn1::generated::Certificate::ValueType& get_certificate() const { assert(_id == certificate_ID); return _certificate; }
      asn1::generated::Certificate::ValueType& get_certificate() { assert(_id == certificate_ID); return _certificate; }
      bool has_certificate_Choosen() const { return _id == certificate_ID; }
      void choose_certificate() { _id = certificate_ID; }

      // Alternative: extendedCertificate
      void set_extendedCertificate(const extendedCertificate_Type::ValueType& v) { _extendedCertificate = v; _id = extendedCertificate_ID; }
      void set_extendedCertificate(extendedCertificate_Type::ValueType&& v) { _extendedCertificate = std::move(v); _id = extendedCertificate_ID; }
      const extendedCertificate_Type::ValueType& get_extendedCertificate() const { assert(_id == extendedCertificate_ID); return _extendedCertificate; }
      extendedCertificate_Type::ValueType& get_extendedCertificate() { assert(_id == extendedCertificate_ID); return _extendedCertificate; }
      bool has_extendedCertificate_Choosen() const { return _id == extendedCertificate_ID; }
      void choose_extendedCertificate() { _id = extendedCertificate_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case certificate_ID:
            if (_certificate != other._certificate)
               return false;
            break;
         case extendedCertificate_ID:
            if (_extendedCertificate != other._extendedCertificate)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         certificate_ID = 1,
         extendedCertificate_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::Certificate::ValueType _certificate;
      extendedCertificate_Type::ValueType _extendedCertificate;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::Certificate _certificate_Type;
   extendedCertificate_Type _extendedCertificate_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ExtendedCertificateOrCertificate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeTypeAndValueImplicit
class AttributeTypeAndValueImplicit : public asn1::SequenceType
{
public:

   explicit AttributeTypeAndValueImplicit()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _type_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _type_Type.setTypeName("type");
#endif // ASN1_ENABLE_XER
      _value_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: type
      void set_type(const asn1::ObjectIdentifierType::ValueType& v) { _type = v;  }
      void set_type(asn1::ObjectIdentifierType::ValueType&& v) { _type = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_type() const { return _type; }
      asn1::ObjectIdentifierType::ValueType& get_type() { return _type; }

      // Component: value
      void set_value(const asn1::AnyType::ValueType& v) { _value = v;  }
      void set_value(asn1::AnyType::ValueType&& v) { _value = std::move(v);  }
      const asn1::AnyType::ValueType& get_value() const { return _value; }
      asn1::AnyType::ValueType& get_value() { return _value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type != other._type)
            return false;
         if (_value != other._value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _type;
      asn1::AnyType::ValueType _value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _type_Type;
   asn1::AnyType _value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeTypeAndValueImplicit"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: regInfo_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeTypeAndValueImplicit
class regInfo_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeTypeAndValueImplicit : public asn1::SequenceOfType<asn1::generated::AttributeTypeAndValueImplicit>
{
public:

   explicit regInfo_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeTypeAndValueImplicit() : asn1::SequenceOfType<asn1::generated::AttributeTypeAndValueImplicit>(new asn1::generated::AttributeTypeAndValueImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "regInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: serialNumber_INTERNAL__NOTAG_1_INTERNAL_asn1__IntegerType
class serialNumber_INTERNAL__NOTAG_1_INTERNAL_asn1__IntegerType : public asn1::TaggingType<asn1::IntegerType>
{
public:

   explicit serialNumber_INTERNAL__NOTAG_1_INTERNAL_asn1__IntegerType() : asn1::TaggingType<asn1::IntegerType>(new asn1::IntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "serialNumber"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: signingAlg_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__AlgorithmIdentifier
class signingAlg_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__AlgorithmIdentifier : public asn1::TaggingType<asn1::generated::AlgorithmIdentifier>
{
public:

   explicit signingAlg_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__AlgorithmIdentifier() : asn1::TaggingType<asn1::generated::AlgorithmIdentifier>(new asn1::generated::AlgorithmIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "signingAlg"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: issuer_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Name
class issuer_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Name : public asn1::TaggingType<asn1::generated::Name>
{
public:

   explicit issuer_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Name() : asn1::TaggingType<asn1::generated::Name>(new asn1::generated::Name)
   {
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "issuer"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Time
class notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Time : public asn1::TaggingType<asn1::generated::Time>
{
public:

   explicit notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Time() : asn1::TaggingType<asn1::generated::Time>(new asn1::generated::Time)
   {
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "notBefore"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__Time
class notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__Time : public asn1::TaggingType<asn1::generated::Time>
{
public:

   explicit notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__Time() : asn1::TaggingType<asn1::generated::Time>(new asn1::generated::Time)
   {
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "notAfter"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OptionalValidity
class OptionalValidity : public asn1::SequenceType
{
public:

   explicit OptionalValidity()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _notBefore_Type.setTypeName("notBefore");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _notAfter_Type.setTypeName("notAfter");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef notBefore_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Time notBefore_Type;
   typedef notAfter_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__Time notAfter_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _notBefore_Present = false;
         _notAfter_Present = false;
      }

      // Component: notBefore
      void set_notBefore(const notBefore_Type::ValueType& v) { _notBefore = v; _notBefore_Present = true; }
      void set_notBefore(notBefore_Type::ValueType&& v) { _notBefore = std::move(v); _notBefore_Present = true; }
      const notBefore_Type::ValueType& get_notBefore() const { return _notBefore; }
      notBefore_Type::ValueType& get_notBefore() { return _notBefore; }
      void set_notBefore_Present(bool present = true) { _notBefore_Present = present; }
      bool is_notBefore_Present() const { return _notBefore_Present; }


      // Component: notAfter
      void set_notAfter(const notAfter_Type::ValueType& v) { _notAfter = v; _notAfter_Present = true; }
      void set_notAfter(notAfter_Type::ValueType&& v) { _notAfter = std::move(v); _notAfter_Present = true; }
      const notAfter_Type::ValueType& get_notAfter() const { return _notAfter; }
      notAfter_Type::ValueType& get_notAfter() { return _notAfter; }
      void set_notAfter_Present(bool present = true) { _notAfter_Present = present; }
      bool is_notAfter_Present() const { return _notAfter_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_notBefore_Present != other._notBefore_Present)
            return false;
         if (_notBefore_Present && other._notBefore_Present && _notBefore != other._notBefore)
            return false;
         if (_notAfter_Present != other._notAfter_Present)
            return false;
         if (_notAfter_Present && other._notAfter_Present && _notAfter != other._notAfter)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      notBefore_Type::ValueType _notBefore;
      bool _notBefore_Present;
      notAfter_Type::ValueType _notAfter;
      bool _notAfter_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   notBefore_Type _notBefore_Type;
   notAfter_Type _notAfter_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OptionalValidity"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: validity_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OptionalValidity
class validity_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OptionalValidity : public asn1::TaggingType<asn1::generated::OptionalValidity>
{
public:

   explicit validity_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OptionalValidity() : asn1::TaggingType<asn1::generated::OptionalValidity>(new asn1::generated::OptionalValidity)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "notAfter"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: subject_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__Name
class subject_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__Name : public asn1::TaggingType<asn1::generated::Name>
{
public:

   explicit subject_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__Name() : asn1::TaggingType<asn1::generated::Name>(new asn1::generated::Name)
   {
      setTagNumber(5);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "subject"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: publicKey_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__SubjectPublicKeyInfo
class publicKey_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__SubjectPublicKeyInfo : public asn1::TaggingType<asn1::generated::SubjectPublicKeyInfo>
{
public:

   explicit publicKey_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__SubjectPublicKeyInfo() : asn1::TaggingType<asn1::generated::SubjectPublicKeyInfo>(new asn1::generated::SubjectPublicKeyInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(6);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "publicKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: issuerUID_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__UniqueIdentifier
class issuerUID_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__UniqueIdentifier : public asn1::TaggingType<asn1::generated::UniqueIdentifier>
{
public:

   explicit issuerUID_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__UniqueIdentifier() : asn1::TaggingType<asn1::generated::UniqueIdentifier>(new asn1::generated::UniqueIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "issuerUID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: subjectUID_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__UniqueIdentifier
class subjectUID_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__UniqueIdentifier : public asn1::TaggingType<asn1::generated::UniqueIdentifier>
{
public:

   explicit subjectUID_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__UniqueIdentifier() : asn1::TaggingType<asn1::generated::UniqueIdentifier>(new asn1::generated::UniqueIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(8);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "subjectUID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: extensions_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__Extensions
class extensions_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__Extensions : public asn1::TaggingType<asn1::generated::Extensions>
{
public:

   explicit extensions_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__Extensions() : asn1::TaggingType<asn1::generated::Extensions>(new asn1::generated::Extensions)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(9);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "extensions"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertTemplate
class CertTemplate : public asn1::SequenceType
{
public:

   explicit CertTemplate()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _serialNumber_Type.setTypeName("serialNumber");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signingAlg_Type.setTypeName("signingAlg");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _validity_Type.setTypeName("validity");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subject_Type.setTypeName("subject");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _publicKey_Type.setTypeName("publicKey");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _issuerUID_Type.setTypeName("issuerUID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subjectUID_Type.setTypeName("subjectUID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extensions_Type.setTypeName("extensions");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef version_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Version version_Type;
   typedef serialNumber_INTERNAL__NOTAG_1_INTERNAL_asn1__IntegerType serialNumber_Type;
   typedef signingAlg_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__AlgorithmIdentifier signingAlg_Type;
   typedef issuer_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__Name issuer_Type;
   typedef validity_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__OptionalValidity validity_Type;
   typedef subject_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__Name subject_Type;
   typedef publicKey_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__SubjectPublicKeyInfo publicKey_Type;
   typedef issuerUID_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__UniqueIdentifier issuerUID_Type;
   typedef subjectUID_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__UniqueIdentifier subjectUID_Type;
   typedef extensions_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__Extensions extensions_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _version_Present = false;
         _serialNumber_Present = false;
         _signingAlg_Present = false;
         _issuer_Present = false;
         _validity_Present = false;
         _subject_Present = false;
         _publicKey_Present = false;
         _issuerUID_Present = false;
         _subjectUID_Present = false;
         _extensions_Present = false;
      }

      // Component: version
      void set_version(const version_Type::ValueType& v) { _version = v; _version_Present = true; }
      void set_version(version_Type::ValueType&& v) { _version = std::move(v); _version_Present = true; }
      const version_Type::ValueType& get_version() const { return _version; }
      version_Type::ValueType& get_version() { return _version; }
      void set_version_Present(bool present = true) { _version_Present = present; }
      bool is_version_Present() const { return _version_Present; }


      // Component: serialNumber
      void set_serialNumber(const serialNumber_Type::ValueType& v) { _serialNumber = v; _serialNumber_Present = true; }
      void set_serialNumber(serialNumber_Type::ValueType&& v) { _serialNumber = std::move(v); _serialNumber_Present = true; }
      const serialNumber_Type::ValueType& get_serialNumber() const { return _serialNumber; }
      serialNumber_Type::ValueType& get_serialNumber() { return _serialNumber; }
      void set_serialNumber_Present(bool present = true) { _serialNumber_Present = present; }
      bool is_serialNumber_Present() const { return _serialNumber_Present; }


      // Component: signingAlg
      void set_signingAlg(const signingAlg_Type::ValueType& v) { _signingAlg = v; _signingAlg_Present = true; }
      void set_signingAlg(signingAlg_Type::ValueType&& v) { _signingAlg = std::move(v); _signingAlg_Present = true; }
      const signingAlg_Type::ValueType& get_signingAlg() const { return _signingAlg; }
      signingAlg_Type::ValueType& get_signingAlg() { return _signingAlg; }
      void set_signingAlg_Present(bool present = true) { _signingAlg_Present = present; }
      bool is_signingAlg_Present() const { return _signingAlg_Present; }


      // Component: issuer
      void set_issuer(const issuer_Type::ValueType& v) { _issuer = v; _issuer_Present = true; }
      void set_issuer(issuer_Type::ValueType&& v) { _issuer = std::move(v); _issuer_Present = true; }
      const issuer_Type::ValueType& get_issuer() const { return _issuer; }
      issuer_Type::ValueType& get_issuer() { return _issuer; }
      void set_issuer_Present(bool present = true) { _issuer_Present = present; }
      bool is_issuer_Present() const { return _issuer_Present; }


      // Component: validity
      void set_validity(const validity_Type::ValueType& v) { _validity = v; _validity_Present = true; }
      void set_validity(validity_Type::ValueType&& v) { _validity = std::move(v); _validity_Present = true; }
      const validity_Type::ValueType& get_validity() const { return _validity; }
      validity_Type::ValueType& get_validity() { return _validity; }
      void set_validity_Present(bool present = true) { _validity_Present = present; }
      bool is_validity_Present() const { return _validity_Present; }


      // Component: subject
      void set_subject(const subject_Type::ValueType& v) { _subject = v; _subject_Present = true; }
      void set_subject(subject_Type::ValueType&& v) { _subject = std::move(v); _subject_Present = true; }
      const subject_Type::ValueType& get_subject() const { return _subject; }
      subject_Type::ValueType& get_subject() { return _subject; }
      void set_subject_Present(bool present = true) { _subject_Present = present; }
      bool is_subject_Present() const { return _subject_Present; }


      // Component: publicKey
      void set_publicKey(const publicKey_Type::ValueType& v) { _publicKey = v; _publicKey_Present = true; }
      void set_publicKey(publicKey_Type::ValueType&& v) { _publicKey = std::move(v); _publicKey_Present = true; }
      const publicKey_Type::ValueType& get_publicKey() const { return _publicKey; }
      publicKey_Type::ValueType& get_publicKey() { return _publicKey; }
      void set_publicKey_Present(bool present = true) { _publicKey_Present = present; }
      bool is_publicKey_Present() const { return _publicKey_Present; }


      // Component: issuerUID
      void set_issuerUID(const issuerUID_Type::ValueType& v) { _issuerUID = v; _issuerUID_Present = true; }
      void set_issuerUID(issuerUID_Type::ValueType&& v) { _issuerUID = std::move(v); _issuerUID_Present = true; }
      const issuerUID_Type::ValueType& get_issuerUID() const { return _issuerUID; }
      issuerUID_Type::ValueType& get_issuerUID() { return _issuerUID; }
      void set_issuerUID_Present(bool present = true) { _issuerUID_Present = present; }
      bool is_issuerUID_Present() const { return _issuerUID_Present; }


      // Component: subjectUID
      void set_subjectUID(const subjectUID_Type::ValueType& v) { _subjectUID = v; _subjectUID_Present = true; }
      void set_subjectUID(subjectUID_Type::ValueType&& v) { _subjectUID = std::move(v); _subjectUID_Present = true; }
      const subjectUID_Type::ValueType& get_subjectUID() const { return _subjectUID; }
      subjectUID_Type::ValueType& get_subjectUID() { return _subjectUID; }
      void set_subjectUID_Present(bool present = true) { _subjectUID_Present = present; }
      bool is_subjectUID_Present() const { return _subjectUID_Present; }


      // Component: extensions
      void set_extensions(const extensions_Type::ValueType& v) { _extensions = v; _extensions_Present = true; }
      void set_extensions(extensions_Type::ValueType&& v) { _extensions = std::move(v); _extensions_Present = true; }
      const extensions_Type::ValueType& get_extensions() const { return _extensions; }
      extensions_Type::ValueType& get_extensions() { return _extensions; }
      void set_extensions_Present(bool present = true) { _extensions_Present = present; }
      bool is_extensions_Present() const { return _extensions_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version_Present != other._version_Present)
            return false;
         if (_version_Present && other._version_Present && _version != other._version)
            return false;
         if (_serialNumber_Present != other._serialNumber_Present)
            return false;
         if (_serialNumber_Present && other._serialNumber_Present && _serialNumber != other._serialNumber)
            return false;
         if (_signingAlg_Present != other._signingAlg_Present)
            return false;
         if (_signingAlg_Present && other._signingAlg_Present && _signingAlg != other._signingAlg)
            return false;
         if (_issuer_Present != other._issuer_Present)
            return false;
         if (_issuer_Present && other._issuer_Present && _issuer != other._issuer)
            return false;
         if (_validity_Present != other._validity_Present)
            return false;
         if (_validity_Present && other._validity_Present && _validity != other._validity)
            return false;
         if (_subject_Present != other._subject_Present)
            return false;
         if (_subject_Present && other._subject_Present && _subject != other._subject)
            return false;
         if (_publicKey_Present != other._publicKey_Present)
            return false;
         if (_publicKey_Present && other._publicKey_Present && _publicKey != other._publicKey)
            return false;
         if (_issuerUID_Present != other._issuerUID_Present)
            return false;
         if (_issuerUID_Present && other._issuerUID_Present && _issuerUID != other._issuerUID)
            return false;
         if (_subjectUID_Present != other._subjectUID_Present)
            return false;
         if (_subjectUID_Present && other._subjectUID_Present && _subjectUID != other._subjectUID)
            return false;
         if (_extensions_Present != other._extensions_Present)
            return false;
         if (_extensions_Present && other._extensions_Present && _extensions != other._extensions)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      version_Type::ValueType _version;
      bool _version_Present;
      serialNumber_Type::ValueType _serialNumber;
      bool _serialNumber_Present;
      signingAlg_Type::ValueType _signingAlg;
      bool _signingAlg_Present;
      issuer_Type::ValueType _issuer;
      bool _issuer_Present;
      validity_Type::ValueType _validity;
      bool _validity_Present;
      subject_Type::ValueType _subject;
      bool _subject_Present;
      publicKey_Type::ValueType _publicKey;
      bool _publicKey_Present;
      issuerUID_Type::ValueType _issuerUID;
      bool _issuerUID_Present;
      subjectUID_Type::ValueType _subjectUID;
      bool _subjectUID_Present;
      extensions_Type::ValueType _extensions;
      bool _extensions_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   version_Type _version_Type;
   serialNumber_Type _serialNumber_Type;
   signingAlg_Type _signingAlg_Type;
   issuer_Type _issuer_Type;
   validity_Type _validity_Type;
   subject_Type _subject_Type;
   publicKey_Type _publicKey_Type;
   issuerUID_Type _issuerUID_Type;
   subjectUID_Type _subjectUID_Type;
   extensions_Type _extensions_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertTemplate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Controls
class Controls : public asn1::SequenceOfType<asn1::generated::AttributeTypeAndValueImplicit>
{
public:

   explicit Controls() : asn1::SequenceOfType<asn1::generated::AttributeTypeAndValueImplicit>(new asn1::generated::AttributeTypeAndValueImplicit)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Controls"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertRequest
class CertRequest : public asn1::SequenceType
{
public:

   explicit CertRequest()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _certReqId_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _certReqId_Type.setTypeName("certReqId");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certTemplate_Type.setTypeName("certTemplate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _controls_Type.setTypeName("controls");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _controls_Present = false;
      }

      // Component: certReqId
      void set_certReqId(const asn1::IntegerType::ValueType& v) { _certReqId = v;  }
      void set_certReqId(asn1::IntegerType::ValueType&& v) { _certReqId = std::move(v);  }
      const asn1::IntegerType::ValueType& get_certReqId() const { return _certReqId; }
      asn1::IntegerType::ValueType& get_certReqId() { return _certReqId; }

      // Component: certTemplate
      void set_certTemplate(const asn1::generated::CertTemplate::ValueType& v) { _certTemplate = v;  }
      void set_certTemplate(asn1::generated::CertTemplate::ValueType&& v) { _certTemplate = std::move(v);  }
      const asn1::generated::CertTemplate::ValueType& get_certTemplate() const { return _certTemplate; }
      asn1::generated::CertTemplate::ValueType& get_certTemplate() { return _certTemplate; }

      // Component: controls
      void set_controls(const asn1::generated::Controls::ValueType& v) { _controls = v; _controls_Present = true; }
      void set_controls(asn1::generated::Controls::ValueType&& v) { _controls = std::move(v); _controls_Present = true; }
      const asn1::generated::Controls::ValueType& get_controls() const { return _controls; }
      asn1::generated::Controls::ValueType& get_controls() { return _controls; }
      void set_controls_Present(bool present = true) { _controls_Present = present; }
      bool is_controls_Present() const { return _controls_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certReqId != other._certReqId)
            return false;
         if (_certTemplate != other._certTemplate)
            return false;
         if (_controls_Present != other._controls_Present)
            return false;
         if (_controls_Present && other._controls_Present && _controls != other._controls)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _certReqId;
      asn1::generated::CertTemplate::ValueType _certTemplate;
      asn1::generated::Controls::ValueType _controls;
      bool _controls_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _certReqId_Type;
   asn1::generated::CertTemplate _certTemplate_Type;
   asn1::generated::Controls _controls_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertRequest"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: raVerified_INTERNAL__NOTAG_0_INTERNAL_asn1__NullType
class raVerified_INTERNAL__NOTAG_0_INTERNAL_asn1__NullType : public asn1::TaggingType<asn1::NullType>
{
public:

   explicit raVerified_INTERNAL__NOTAG_0_INTERNAL_asn1__NullType() : asn1::TaggingType<asn1::NullType>(new asn1::NullType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "raVerified"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: sender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName
class sender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName : public asn1::TaggingType<asn1::generated::GeneralName>
{
public:

   explicit sender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName() : asn1::TaggingType<asn1::generated::GeneralName>(new asn1::generated::GeneralName)
   {
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "sender"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKMACValue
class PKMACValue : public asn1::SequenceType
{
public:

   explicit PKMACValue()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _algId_Type.setTypeName("algId");
#endif // ASN1_ENABLE_XER
      _value_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: algId
      void set_algId(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _algId = v;  }
      void set_algId(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _algId = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_algId() const { return _algId; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_algId() { return _algId; }

      // Component: value
      void set_value(const asn1::BitStringType::ValueType& v) { _value = v;  }
      void set_value(asn1::BitStringType::ValueType&& v) { _value = std::move(v);  }
      const asn1::BitStringType::ValueType& get_value() const { return _value; }
      asn1::BitStringType::ValueType& get_value() { return _value; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_algId != other._algId)
            return false;
         if (_value != other._value)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AlgorithmIdentifier::ValueType _algId;
      asn1::BitStringType::ValueType _value;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AlgorithmIdentifier _algId_Type;
   asn1::BitStringType _value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKMACValue"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: authInfo_INTERNAL__ChoiceType_sendersender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName_publicKeyMACpublicKeyMAC_INTERNAL_asn1__generated__PKMACValue
class authInfo_INTERNAL__ChoiceType_sendersender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName_publicKeyMACpublicKeyMAC_INTERNAL_asn1__generated__PKMACValue : public asn1::ChoiceType
{
public:

   explicit authInfo_INTERNAL__ChoiceType_sendersender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName_publicKeyMACpublicKeyMAC_INTERNAL_asn1__generated__PKMACValue()
   {
      _addChoice(&_sender_Type);
#if defined(ASN1_ENABLE_XER)
      _sender_Type.setTypeName("sender");
#endif // ASN1_ENABLE_XER
      _addChoice(&_publicKeyMAC_Type);
#if defined(ASN1_ENABLE_XER)
      _publicKeyMAC_Type.setTypeName("publicKeyMAC");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef sender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName sender_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: sender
      void set_sender(const sender_Type::ValueType& v) { _sender = v; _id = sender_ID; }
      void set_sender(sender_Type::ValueType&& v) { _sender = std::move(v); _id = sender_ID; }
      const sender_Type::ValueType& get_sender() const { assert(_id == sender_ID); return _sender; }
      sender_Type::ValueType& get_sender() { assert(_id == sender_ID); return _sender; }
      bool has_sender_Choosen() const { return _id == sender_ID; }
      void choose_sender() { _id = sender_ID; }

      // Alternative: publicKeyMAC
      void set_publicKeyMAC(const asn1::generated::PKMACValue::ValueType& v) { _publicKeyMAC = v; _id = publicKeyMAC_ID; }
      void set_publicKeyMAC(asn1::generated::PKMACValue::ValueType&& v) { _publicKeyMAC = std::move(v); _id = publicKeyMAC_ID; }
      const asn1::generated::PKMACValue::ValueType& get_publicKeyMAC() const { assert(_id == publicKeyMAC_ID); return _publicKeyMAC; }
      asn1::generated::PKMACValue::ValueType& get_publicKeyMAC() { assert(_id == publicKeyMAC_ID); return _publicKeyMAC; }
      bool has_publicKeyMAC_Choosen() const { return _id == publicKeyMAC_ID; }
      void choose_publicKeyMAC() { _id = publicKeyMAC_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case sender_ID:
            if (_sender != other._sender)
               return false;
            break;
         case publicKeyMAC_ID:
            if (_publicKeyMAC != other._publicKeyMAC)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         sender_ID = 1,
         publicKeyMAC_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      sender_Type::ValueType _sender;
      asn1::generated::PKMACValue::ValueType _publicKeyMAC;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   sender_Type _sender_Type;
   asn1::generated::PKMACValue _publicKeyMAC_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "sender"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: POPOSigningKeyInput
class POPOSigningKeyInput : public asn1::SequenceType
{
public:

   explicit POPOSigningKeyInput()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _authInfo_Type.setTypeName("authInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _publicKey_Type.setTypeName("publicKey");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef authInfo_INTERNAL__ChoiceType_sendersender_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__GeneralName_publicKeyMACpublicKeyMAC_INTERNAL_asn1__generated__PKMACValue authInfo_Type;

   class SequenceValue_Type
   {
   public:

      // Component: authInfo
      void set_authInfo(const authInfo_Type::ValueType& v) { _authInfo = v;  }
      void set_authInfo(authInfo_Type::ValueType&& v) { _authInfo = std::move(v);  }
      const authInfo_Type::ValueType& get_authInfo() const { return _authInfo; }
      authInfo_Type::ValueType& get_authInfo() { return _authInfo; }

      // Component: publicKey
      void set_publicKey(const asn1::generated::SubjectPublicKeyInfo::ValueType& v) { _publicKey = v;  }
      void set_publicKey(asn1::generated::SubjectPublicKeyInfo::ValueType&& v) { _publicKey = std::move(v);  }
      const asn1::generated::SubjectPublicKeyInfo::ValueType& get_publicKey() const { return _publicKey; }
      asn1::generated::SubjectPublicKeyInfo::ValueType& get_publicKey() { return _publicKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_authInfo != other._authInfo)
            return false;
         if (_publicKey != other._publicKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      authInfo_Type::ValueType _authInfo;
      asn1::generated::SubjectPublicKeyInfo::ValueType _publicKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   authInfo_Type _authInfo_Type;
   asn1::generated::SubjectPublicKeyInfo _publicKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "POPOSigningKeyInput"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: poposkInput_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__POPOSigningKeyInput
class poposkInput_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__POPOSigningKeyInput : public asn1::TaggingType<asn1::generated::POPOSigningKeyInput>
{
public:

   explicit poposkInput_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__POPOSigningKeyInput() : asn1::TaggingType<asn1::generated::POPOSigningKeyInput>(new asn1::generated::POPOSigningKeyInput)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "sender"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: POPOSigningKey
class POPOSigningKey : public asn1::SequenceType
{
public:

   explicit POPOSigningKey()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _poposkInput_Type.setTypeName("poposkInput");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _algorithmIdentifier_Type.setTypeName("algorithmIdentifier");
#endif // ASN1_ENABLE_XER
      _signature_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef poposkInput_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__POPOSigningKeyInput poposkInput_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _poposkInput_Present = false;
      }

      // Component: poposkInput
      void set_poposkInput(const poposkInput_Type::ValueType& v) { _poposkInput = v; _poposkInput_Present = true; }
      void set_poposkInput(poposkInput_Type::ValueType&& v) { _poposkInput = std::move(v); _poposkInput_Present = true; }
      const poposkInput_Type::ValueType& get_poposkInput() const { return _poposkInput; }
      poposkInput_Type::ValueType& get_poposkInput() { return _poposkInput; }
      void set_poposkInput_Present(bool present = true) { _poposkInput_Present = present; }
      bool is_poposkInput_Present() const { return _poposkInput_Present; }


      // Component: algorithmIdentifier
      void set_algorithmIdentifier(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _algorithmIdentifier = v;  }
      void set_algorithmIdentifier(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _algorithmIdentifier = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_algorithmIdentifier() const { return _algorithmIdentifier; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_algorithmIdentifier() { return _algorithmIdentifier; }

      // Component: signature
      void set_signature(const asn1::BitStringType::ValueType& v) { _signature = v;  }
      void set_signature(asn1::BitStringType::ValueType&& v) { _signature = std::move(v);  }
      const asn1::BitStringType::ValueType& get_signature() const { return _signature; }
      asn1::BitStringType::ValueType& get_signature() { return _signature; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_poposkInput_Present != other._poposkInput_Present)
            return false;
         if (_poposkInput_Present && other._poposkInput_Present && _poposkInput != other._poposkInput)
            return false;
         if (_algorithmIdentifier != other._algorithmIdentifier)
            return false;
         if (_signature != other._signature)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      poposkInput_Type::ValueType _poposkInput;
      bool _poposkInput_Present;
      asn1::generated::AlgorithmIdentifier::ValueType _algorithmIdentifier;
      asn1::BitStringType::ValueType _signature;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   poposkInput_Type _poposkInput_Type;
   asn1::generated::AlgorithmIdentifier _algorithmIdentifier_Type;
   asn1::BitStringType _signature_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "POPOSigningKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: signature_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__POPOSigningKey
class signature_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__POPOSigningKey : public asn1::TaggingType<asn1::generated::POPOSigningKey>
{
public:

   explicit signature_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__POPOSigningKey() : asn1::TaggingType<asn1::generated::POPOSigningKey>(new asn1::generated::POPOSigningKey)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "sender"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: thisMessage_INTERNAL__NOTAG_0_INTERNAL_asn1__BitStringType
class thisMessage_INTERNAL__NOTAG_0_INTERNAL_asn1__BitStringType : public asn1::TaggingType<asn1::BitStringType>
{
public:

   explicit thisMessage_INTERNAL__NOTAG_0_INTERNAL_asn1__BitStringType() : asn1::TaggingType<asn1::BitStringType>(new asn1::BitStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "thisMessage"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SubsequentMessage
class SubsequentMessage : public asn1::IntegerType
{
public:

   explicit SubsequentMessage()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit SubsequentMessage(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum SubsequentMessage_Value
   {
      k_encrCert = 0,
      k_challengeResp = 1,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SubsequentMessage"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: subsequentMessage_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SubsequentMessage
class subsequentMessage_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SubsequentMessage : public asn1::TaggingType<asn1::generated::SubsequentMessage>
{
public:

   explicit subsequentMessage_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SubsequentMessage() : asn1::TaggingType<asn1::generated::SubsequentMessage>(new asn1::generated::SubsequentMessage)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "subsequentMessage"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: dhMAC_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType
class dhMAC_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType : public asn1::TaggingType<asn1::BitStringType>
{
public:

   explicit dhMAC_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType() : asn1::TaggingType<asn1::BitStringType>(new asn1::BitStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "dhMAC"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: agreeMAC_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PKMACValue
class agreeMAC_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PKMACValue : public asn1::TaggingType<asn1::generated::PKMACValue>
{
public:

   explicit agreeMAC_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PKMACValue() : asn1::TaggingType<asn1::generated::PKMACValue>(new asn1::generated::PKMACValue)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "agreeMAC"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: encryptedKey_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__EnvelopedData
class encryptedKey_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__EnvelopedData : public asn1::TaggingType<asn1::generated::EnvelopedData>
{
public:

   explicit encryptedKey_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__EnvelopedData() : asn1::TaggingType<asn1::generated::EnvelopedData>(new asn1::generated::EnvelopedData)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "encryptedKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: POPOPrivKey
class POPOPrivKey : public asn1::ChoiceType
{
public:

   explicit POPOPrivKey()
   {
      _addChoice(&_thisMessage_Type);
#if defined(ASN1_ENABLE_XER)
      _thisMessage_Type.setTypeName("thisMessage");
#endif // ASN1_ENABLE_XER
      _addChoice(&_subsequentMessage_Type);
#if defined(ASN1_ENABLE_XER)
      _subsequentMessage_Type.setTypeName("subsequentMessage");
#endif // ASN1_ENABLE_XER
      _addChoice(&_dhMAC_Type);
#if defined(ASN1_ENABLE_XER)
      _dhMAC_Type.setTypeName("dhMAC");
#endif // ASN1_ENABLE_XER
      _addChoice(&_agreeMAC_Type);
#if defined(ASN1_ENABLE_XER)
      _agreeMAC_Type.setTypeName("agreeMAC");
#endif // ASN1_ENABLE_XER
      _addChoice(&_encryptedKey_Type);
#if defined(ASN1_ENABLE_XER)
      _encryptedKey_Type.setTypeName("encryptedKey");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef thisMessage_INTERNAL__NOTAG_0_INTERNAL_asn1__BitStringType thisMessage_Type;
   typedef subsequentMessage_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__SubsequentMessage subsequentMessage_Type;
   typedef dhMAC_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType dhMAC_Type;
   typedef agreeMAC_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__PKMACValue agreeMAC_Type;
   typedef encryptedKey_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__EnvelopedData encryptedKey_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: thisMessage
      void set_thisMessage(const thisMessage_Type::ValueType& v) { _thisMessage = v; _id = thisMessage_ID; }
      void set_thisMessage(thisMessage_Type::ValueType&& v) { _thisMessage = std::move(v); _id = thisMessage_ID; }
      const thisMessage_Type::ValueType& get_thisMessage() const { assert(_id == thisMessage_ID); return _thisMessage; }
      thisMessage_Type::ValueType& get_thisMessage() { assert(_id == thisMessage_ID); return _thisMessage; }
      bool has_thisMessage_Choosen() const { return _id == thisMessage_ID; }
      void choose_thisMessage() { _id = thisMessage_ID; }

      // Alternative: subsequentMessage
      void set_subsequentMessage(const subsequentMessage_Type::ValueType& v) { _subsequentMessage = v; _id = subsequentMessage_ID; }
      void set_subsequentMessage(subsequentMessage_Type::ValueType&& v) { _subsequentMessage = std::move(v); _id = subsequentMessage_ID; }
      const subsequentMessage_Type::ValueType& get_subsequentMessage() const { assert(_id == subsequentMessage_ID); return _subsequentMessage; }
      subsequentMessage_Type::ValueType& get_subsequentMessage() { assert(_id == subsequentMessage_ID); return _subsequentMessage; }
      bool has_subsequentMessage_Choosen() const { return _id == subsequentMessage_ID; }
      void choose_subsequentMessage() { _id = subsequentMessage_ID; }

      // Alternative: dhMAC
      void set_dhMAC(const dhMAC_Type::ValueType& v) { _dhMAC = v; _id = dhMAC_ID; }
      void set_dhMAC(dhMAC_Type::ValueType&& v) { _dhMAC = std::move(v); _id = dhMAC_ID; }
      const dhMAC_Type::ValueType& get_dhMAC() const { assert(_id == dhMAC_ID); return _dhMAC; }
      dhMAC_Type::ValueType& get_dhMAC() { assert(_id == dhMAC_ID); return _dhMAC; }
      bool has_dhMAC_Choosen() const { return _id == dhMAC_ID; }
      void choose_dhMAC() { _id = dhMAC_ID; }

      // Alternative: agreeMAC
      void set_agreeMAC(const agreeMAC_Type::ValueType& v) { _agreeMAC = v; _id = agreeMAC_ID; }
      void set_agreeMAC(agreeMAC_Type::ValueType&& v) { _agreeMAC = std::move(v); _id = agreeMAC_ID; }
      const agreeMAC_Type::ValueType& get_agreeMAC() const { assert(_id == agreeMAC_ID); return _agreeMAC; }
      agreeMAC_Type::ValueType& get_agreeMAC() { assert(_id == agreeMAC_ID); return _agreeMAC; }
      bool has_agreeMAC_Choosen() const { return _id == agreeMAC_ID; }
      void choose_agreeMAC() { _id = agreeMAC_ID; }

      // Alternative: encryptedKey
      void set_encryptedKey(const encryptedKey_Type::ValueType& v) { _encryptedKey = v; _id = encryptedKey_ID; }
      void set_encryptedKey(encryptedKey_Type::ValueType&& v) { _encryptedKey = std::move(v); _id = encryptedKey_ID; }
      const encryptedKey_Type::ValueType& get_encryptedKey() const { assert(_id == encryptedKey_ID); return _encryptedKey; }
      encryptedKey_Type::ValueType& get_encryptedKey() { assert(_id == encryptedKey_ID); return _encryptedKey; }
      bool has_encryptedKey_Choosen() const { return _id == encryptedKey_ID; }
      void choose_encryptedKey() { _id = encryptedKey_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case thisMessage_ID:
            if (_thisMessage != other._thisMessage)
               return false;
            break;
         case subsequentMessage_ID:
            if (_subsequentMessage != other._subsequentMessage)
               return false;
            break;
         case dhMAC_ID:
            if (_dhMAC != other._dhMAC)
               return false;
            break;
         case agreeMAC_ID:
            if (_agreeMAC != other._agreeMAC)
               return false;
            break;
         case encryptedKey_ID:
            if (_encryptedKey != other._encryptedKey)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         thisMessage_ID = 1,
         subsequentMessage_ID = 2,
         dhMAC_ID = 3,
         agreeMAC_ID = 4,
         encryptedKey_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      thisMessage_Type::ValueType _thisMessage;
      subsequentMessage_Type::ValueType _subsequentMessage;
      dhMAC_Type::ValueType _dhMAC;
      agreeMAC_Type::ValueType _agreeMAC;
      encryptedKey_Type::ValueType _encryptedKey;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   thisMessage_Type _thisMessage_Type;
   subsequentMessage_Type _subsequentMessage_Type;
   dhMAC_Type _dhMAC_Type;
   agreeMAC_Type _agreeMAC_Type;
   encryptedKey_Type _encryptedKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "POPOPrivKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: keyEncipherment_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__POPOPrivKey
class keyEncipherment_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__POPOPrivKey : public asn1::TaggingType<asn1::generated::POPOPrivKey>
{
public:

   explicit keyEncipherment_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__POPOPrivKey() : asn1::TaggingType<asn1::generated::POPOPrivKey>(new asn1::generated::POPOPrivKey)
   {
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "encryptedKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: keyAgreement_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__POPOPrivKey
class keyAgreement_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__POPOPrivKey : public asn1::TaggingType<asn1::generated::POPOPrivKey>
{
public:

   explicit keyAgreement_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__POPOPrivKey() : asn1::TaggingType<asn1::generated::POPOPrivKey>(new asn1::generated::POPOPrivKey)
   {
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyAgreement"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ProofOfPossession
class ProofOfPossession : public asn1::ChoiceType
{
public:

   explicit ProofOfPossession()
   {
      _addChoice(&_raVerified_Type);
#if defined(ASN1_ENABLE_XER)
      _raVerified_Type.setTypeName("raVerified");
#endif // ASN1_ENABLE_XER
      _addChoice(&_signature_Type);
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
      _addChoice(&_keyEncipherment_Type);
#if defined(ASN1_ENABLE_XER)
      _keyEncipherment_Type.setTypeName("keyEncipherment");
#endif // ASN1_ENABLE_XER
      _addChoice(&_keyAgreement_Type);
#if defined(ASN1_ENABLE_XER)
      _keyAgreement_Type.setTypeName("keyAgreement");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef raVerified_INTERNAL__NOTAG_0_INTERNAL_asn1__NullType raVerified_Type;
   typedef signature_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__POPOSigningKey signature_Type;
   typedef keyEncipherment_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__POPOPrivKey keyEncipherment_Type;
   typedef keyAgreement_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__POPOPrivKey keyAgreement_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: raVerified
      void set_raVerified(const raVerified_Type::ValueType& v) { _raVerified = v; _id = raVerified_ID; }
      void set_raVerified(raVerified_Type::ValueType&& v) { _raVerified = std::move(v); _id = raVerified_ID; }
      const raVerified_Type::ValueType& get_raVerified() const { assert(_id == raVerified_ID); return _raVerified; }
      raVerified_Type::ValueType& get_raVerified() { assert(_id == raVerified_ID); return _raVerified; }
      bool has_raVerified_Choosen() const { return _id == raVerified_ID; }
      void choose_raVerified() { _id = raVerified_ID; }

      // Alternative: signature
      void set_signature(const signature_Type::ValueType& v) { _signature = v; _id = signature_ID; }
      void set_signature(signature_Type::ValueType&& v) { _signature = std::move(v); _id = signature_ID; }
      const signature_Type::ValueType& get_signature() const { assert(_id == signature_ID); return _signature; }
      signature_Type::ValueType& get_signature() { assert(_id == signature_ID); return _signature; }
      bool has_signature_Choosen() const { return _id == signature_ID; }
      void choose_signature() { _id = signature_ID; }

      // Alternative: keyEncipherment
      void set_keyEncipherment(const keyEncipherment_Type::ValueType& v) { _keyEncipherment = v; _id = keyEncipherment_ID; }
      void set_keyEncipherment(keyEncipherment_Type::ValueType&& v) { _keyEncipherment = std::move(v); _id = keyEncipherment_ID; }
      const keyEncipherment_Type::ValueType& get_keyEncipherment() const { assert(_id == keyEncipherment_ID); return _keyEncipherment; }
      keyEncipherment_Type::ValueType& get_keyEncipherment() { assert(_id == keyEncipherment_ID); return _keyEncipherment; }
      bool has_keyEncipherment_Choosen() const { return _id == keyEncipherment_ID; }
      void choose_keyEncipherment() { _id = keyEncipherment_ID; }

      // Alternative: keyAgreement
      void set_keyAgreement(const keyAgreement_Type::ValueType& v) { _keyAgreement = v; _id = keyAgreement_ID; }
      void set_keyAgreement(keyAgreement_Type::ValueType&& v) { _keyAgreement = std::move(v); _id = keyAgreement_ID; }
      const keyAgreement_Type::ValueType& get_keyAgreement() const { assert(_id == keyAgreement_ID); return _keyAgreement; }
      keyAgreement_Type::ValueType& get_keyAgreement() { assert(_id == keyAgreement_ID); return _keyAgreement; }
      bool has_keyAgreement_Choosen() const { return _id == keyAgreement_ID; }
      void choose_keyAgreement() { _id = keyAgreement_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case raVerified_ID:
            if (_raVerified != other._raVerified)
               return false;
            break;
         case signature_ID:
            if (_signature != other._signature)
               return false;
            break;
         case keyEncipherment_ID:
            if (_keyEncipherment != other._keyEncipherment)
               return false;
            break;
         case keyAgreement_ID:
            if (_keyAgreement != other._keyAgreement)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         raVerified_ID = 1,
         signature_ID = 2,
         keyEncipherment_ID = 3,
         keyAgreement_ID = 4,
         __VALUE_NOT_DEFINED__ = -1
      };

      raVerified_Type::ValueType _raVerified;
      signature_Type::ValueType _signature;
      keyEncipherment_Type::ValueType _keyEncipherment;
      keyAgreement_Type::ValueType _keyAgreement;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   raVerified_Type _raVerified_Type;
   signature_Type _signature_Type;
   keyEncipherment_Type _keyEncipherment_Type;
   keyAgreement_Type _keyAgreement_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ProofOfPossession"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertReqMsg
class CertReqMsg : public asn1::SequenceType
{
public:

   explicit CertReqMsg()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _certReq_Type.setTypeName("certReq");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _popo_Type.setTypeName("popo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _regInfo_Type.setTypeName("regInfo");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef regInfo_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeTypeAndValueImplicit regInfo_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _popo_Present = false;
         _regInfo_Present = false;
      }

      // Component: certReq
      void set_certReq(const asn1::generated::CertRequest::ValueType& v) { _certReq = v;  }
      void set_certReq(asn1::generated::CertRequest::ValueType&& v) { _certReq = std::move(v);  }
      const asn1::generated::CertRequest::ValueType& get_certReq() const { return _certReq; }
      asn1::generated::CertRequest::ValueType& get_certReq() { return _certReq; }

      // Component: popo
      void set_popo(const asn1::generated::ProofOfPossession::ValueType& v) { _popo = v; _popo_Present = true; }
      void set_popo(asn1::generated::ProofOfPossession::ValueType&& v) { _popo = std::move(v); _popo_Present = true; }
      const asn1::generated::ProofOfPossession::ValueType& get_popo() const { return _popo; }
      asn1::generated::ProofOfPossession::ValueType& get_popo() { return _popo; }
      void set_popo_Present(bool present = true) { _popo_Present = present; }
      bool is_popo_Present() const { return _popo_Present; }


      // Component: regInfo
      void set_regInfo(const regInfo_Type::ValueType& v) { _regInfo = v; _regInfo_Present = true; }
      void set_regInfo(regInfo_Type::ValueType&& v) { _regInfo = std::move(v); _regInfo_Present = true; }
      const regInfo_Type::ValueType& get_regInfo() const { return _regInfo; }
      regInfo_Type::ValueType& get_regInfo() { return _regInfo; }
      void set_regInfo_Present(bool present = true) { _regInfo_Present = present; }
      bool is_regInfo_Present() const { return _regInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certReq != other._certReq)
            return false;
         if (_popo_Present != other._popo_Present)
            return false;
         if (_popo_Present && other._popo_Present && _popo != other._popo)
            return false;
         if (_regInfo_Present != other._regInfo_Present)
            return false;
         if (_regInfo_Present && other._regInfo_Present && _regInfo != other._regInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CertRequest::ValueType _certReq;
      asn1::generated::ProofOfPossession::ValueType _popo;
      bool _popo_Present;
      regInfo_Type::ValueType _regInfo;
      bool _regInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertRequest _certReq_Type;
   asn1::generated::ProofOfPossession _popo_Type;
   regInfo_Type _regInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertReqMsg"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertReqMessages
class CertReqMessages : public asn1::SequenceOfType<asn1::generated::CertReqMsg>
{
public:

   explicit CertReqMessages() : asn1::SequenceOfType<asn1::generated::CertReqMsg>(new asn1::generated::CertReqMsg)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertReqMessages"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PBMParameter-2005
class PBMParameter_2005 : public asn1::SequenceType
{
public:

   explicit PBMParameter_2005()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _salt_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _salt_Type.setTypeName("salt");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _owf_Type.setTypeName("owf");
#endif // ASN1_ENABLE_XER
      _iterationCount_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _iterationCount_Type.setTypeName("iterationCount");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _mac_Type.setTypeName("mac");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: salt
      void set_salt(const asn1::OctetStringType::ValueType& v) { _salt = v;  }
      void set_salt(asn1::OctetStringType::ValueType&& v) { _salt = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_salt() const { return _salt; }
      asn1::OctetStringType::ValueType& get_salt() { return _salt; }

      // Component: owf
      void set_owf(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _owf = v;  }
      void set_owf(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _owf = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_owf() const { return _owf; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_owf() { return _owf; }

      // Component: iterationCount
      void set_iterationCount(const asn1::IntegerType::ValueType& v) { _iterationCount = v;  }
      void set_iterationCount(asn1::IntegerType::ValueType&& v) { _iterationCount = std::move(v);  }
      const asn1::IntegerType::ValueType& get_iterationCount() const { return _iterationCount; }
      asn1::IntegerType::ValueType& get_iterationCount() { return _iterationCount; }

      // Component: mac
      void set_mac(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _mac = v;  }
      void set_mac(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _mac = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_mac() const { return _mac; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_mac() { return _mac; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_salt != other._salt)
            return false;
         if (_owf != other._owf)
            return false;
         if (_iterationCount != other._iterationCount)
            return false;
         if (_mac != other._mac)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::OctetStringType::ValueType _salt;
      asn1::generated::AlgorithmIdentifier::ValueType _owf;
      asn1::IntegerType::ValueType _iterationCount;
      asn1::generated::AlgorithmIdentifier::ValueType _mac;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::OctetStringType _salt_Type;
   asn1::generated::AlgorithmIdentifier _owf_Type;
   asn1::IntegerType _iterationCount_Type;
   asn1::generated::AlgorithmIdentifier _mac_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PBMParameter-2005"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RegToken
class RegToken : public asn1::generated::UTF8String
{
public:

   explicit RegToken()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RegToken"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Authenticator
class Authenticator : public asn1::generated::UTF8String
{
public:

   explicit Authenticator()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Authenticator"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: action_INTERNAL_
class action_INTERNAL_ : public asn1::IntegerType
{
public:

   explicit action_INTERNAL_()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit action_INTERNAL_(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum action_INTERNAL__Value
   {
      k_dontPublish = 0,
      k_pleasePublish = 1,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "action"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pubMethod_INTERNAL_
class pubMethod_INTERNAL_ : public asn1::IntegerType
{
public:

   explicit pubMethod_INTERNAL_()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit pubMethod_INTERNAL_(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   enum pubMethod_INTERNAL__Value
   {
      k_dontCare = 0,
      k_x500 = 1,
      k_web = 2,
      k_ldap = 3,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "pubMethod"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SinglePubInfo
class SinglePubInfo : public asn1::SequenceType
{
public:

   explicit SinglePubInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _pubMethod_Type.setTypeName("pubMethod");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _pubLocation_Type.setTypeName("pubLocation");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef pubMethod_INTERNAL_ pubMethod_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _pubLocation_Present = false;
      }

      // Component: pubMethod
      void set_pubMethod(const pubMethod_Type::ValueType& v) { _pubMethod = v;  }
      void set_pubMethod(pubMethod_Type::ValueType&& v) { _pubMethod = std::move(v);  }
      const pubMethod_Type::ValueType& get_pubMethod() const { return _pubMethod; }
      pubMethod_Type::ValueType& get_pubMethod() { return _pubMethod; }

      // Component: pubLocation
      void set_pubLocation(const asn1::generated::GeneralName::ValueType& v) { _pubLocation = v; _pubLocation_Present = true; }
      void set_pubLocation(asn1::generated::GeneralName::ValueType&& v) { _pubLocation = std::move(v); _pubLocation_Present = true; }
      const asn1::generated::GeneralName::ValueType& get_pubLocation() const { return _pubLocation; }
      asn1::generated::GeneralName::ValueType& get_pubLocation() { return _pubLocation; }
      void set_pubLocation_Present(bool present = true) { _pubLocation_Present = present; }
      bool is_pubLocation_Present() const { return _pubLocation_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_pubMethod != other._pubMethod)
            return false;
         if (_pubLocation_Present != other._pubLocation_Present)
            return false;
         if (_pubLocation_Present && other._pubLocation_Present && _pubLocation != other._pubLocation)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      pubMethod_Type::ValueType _pubMethod;
      asn1::generated::GeneralName::ValueType _pubLocation;
      bool _pubLocation_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   pubMethod_Type _pubMethod_Type;
   asn1::generated::GeneralName _pubLocation_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SinglePubInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pubInfos_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SinglePubInfo
class pubInfos_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SinglePubInfo : public asn1::SequenceOfType<asn1::generated::SinglePubInfo>
{
public:

   explicit pubInfos_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SinglePubInfo() : asn1::SequenceOfType<asn1::generated::SinglePubInfo>(new asn1::generated::SinglePubInfo)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "pubMethod"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIPublicationInfo
class PKIPublicationInfo : public asn1::SequenceType
{
public:

   explicit PKIPublicationInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _action_Type.setTypeName("action");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _pubInfos_Type.setTypeName("pubInfos");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef action_INTERNAL_ action_Type;
   typedef pubInfos_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__SinglePubInfo pubInfos_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _pubInfos_Present = false;
      }

      // Component: action
      void set_action(const action_Type::ValueType& v) { _action = v;  }
      void set_action(action_Type::ValueType&& v) { _action = std::move(v);  }
      const action_Type::ValueType& get_action() const { return _action; }
      action_Type::ValueType& get_action() { return _action; }

      // Component: pubInfos
      void set_pubInfos(const pubInfos_Type::ValueType& v) { _pubInfos = v; _pubInfos_Present = true; }
      void set_pubInfos(pubInfos_Type::ValueType&& v) { _pubInfos = std::move(v); _pubInfos_Present = true; }
      const pubInfos_Type::ValueType& get_pubInfos() const { return _pubInfos; }
      pubInfos_Type::ValueType& get_pubInfos() { return _pubInfos; }
      void set_pubInfos_Present(bool present = true) { _pubInfos_Present = present; }
      bool is_pubInfos_Present() const { return _pubInfos_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_action != other._action)
            return false;
         if (_pubInfos_Present != other._pubInfos_Present)
            return false;
         if (_pubInfos_Present && other._pubInfos_Present && _pubInfos != other._pubInfos)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      action_Type::ValueType _action;
      pubInfos_Type::ValueType _pubInfos;
      bool _pubInfos_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   action_Type _action_Type;
   pubInfos_Type _pubInfos_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIPublicationInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: envelopedData_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EnvelopedData
class envelopedData_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EnvelopedData : public asn1::TaggingType<asn1::generated::EnvelopedData>
{
public:

   explicit envelopedData_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EnvelopedData() : asn1::TaggingType<asn1::generated::EnvelopedData>(new asn1::generated::EnvelopedData)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "envelopedData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: intendedAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier
class intendedAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier : public asn1::TaggingType<asn1::generated::AlgorithmIdentifier>
{
public:

   explicit intendedAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier() : asn1::TaggingType<asn1::generated::AlgorithmIdentifier>(new asn1::generated::AlgorithmIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "intendedAlg"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: symmAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier
class symmAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier : public asn1::TaggingType<asn1::generated::AlgorithmIdentifier>
{
public:

   explicit symmAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier() : asn1::TaggingType<asn1::generated::AlgorithmIdentifier>(new asn1::generated::AlgorithmIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "symmAlg"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: encSymmKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType
class encSymmKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType : public asn1::TaggingType<asn1::BitStringType>
{
public:

   explicit encSymmKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType() : asn1::TaggingType<asn1::BitStringType>(new asn1::BitStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "encSymmKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: keyAlg_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__AlgorithmIdentifier
class keyAlg_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__AlgorithmIdentifier : public asn1::TaggingType<asn1::generated::AlgorithmIdentifier>
{
public:

   explicit keyAlg_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__AlgorithmIdentifier() : asn1::TaggingType<asn1::generated::AlgorithmIdentifier>(new asn1::generated::AlgorithmIdentifier)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyAlg"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: valueHint_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType
class valueHint_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit valueHint_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "valueHint"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncryptedValue
class EncryptedValue : public asn1::SequenceType
{
public:

   explicit EncryptedValue()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _intendedAlg_Type.setTypeName("intendedAlg");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _symmAlg_Type.setTypeName("symmAlg");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _encSymmKey_Type.setTypeName("encSymmKey");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _keyAlg_Type.setTypeName("keyAlg");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _valueHint_Type.setTypeName("valueHint");
#endif // ASN1_ENABLE_XER
      _encValue_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _encValue_Type.setTypeName("encValue");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef intendedAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier intendedAlg_Type;
   typedef symmAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier symmAlg_Type;
   typedef encSymmKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BitStringType encSymmKey_Type;
   typedef keyAlg_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__AlgorithmIdentifier keyAlg_Type;
   typedef valueHint_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType valueHint_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _intendedAlg_Present = false;
         _symmAlg_Present = false;
         _encSymmKey_Present = false;
         _keyAlg_Present = false;
         _valueHint_Present = false;
      }

      // Component: intendedAlg
      void set_intendedAlg(const intendedAlg_Type::ValueType& v) { _intendedAlg = v; _intendedAlg_Present = true; }
      void set_intendedAlg(intendedAlg_Type::ValueType&& v) { _intendedAlg = std::move(v); _intendedAlg_Present = true; }
      const intendedAlg_Type::ValueType& get_intendedAlg() const { return _intendedAlg; }
      intendedAlg_Type::ValueType& get_intendedAlg() { return _intendedAlg; }
      void set_intendedAlg_Present(bool present = true) { _intendedAlg_Present = present; }
      bool is_intendedAlg_Present() const { return _intendedAlg_Present; }


      // Component: symmAlg
      void set_symmAlg(const symmAlg_Type::ValueType& v) { _symmAlg = v; _symmAlg_Present = true; }
      void set_symmAlg(symmAlg_Type::ValueType&& v) { _symmAlg = std::move(v); _symmAlg_Present = true; }
      const symmAlg_Type::ValueType& get_symmAlg() const { return _symmAlg; }
      symmAlg_Type::ValueType& get_symmAlg() { return _symmAlg; }
      void set_symmAlg_Present(bool present = true) { _symmAlg_Present = present; }
      bool is_symmAlg_Present() const { return _symmAlg_Present; }


      // Component: encSymmKey
      void set_encSymmKey(const encSymmKey_Type::ValueType& v) { _encSymmKey = v; _encSymmKey_Present = true; }
      void set_encSymmKey(encSymmKey_Type::ValueType&& v) { _encSymmKey = std::move(v); _encSymmKey_Present = true; }
      const encSymmKey_Type::ValueType& get_encSymmKey() const { return _encSymmKey; }
      encSymmKey_Type::ValueType& get_encSymmKey() { return _encSymmKey; }
      void set_encSymmKey_Present(bool present = true) { _encSymmKey_Present = present; }
      bool is_encSymmKey_Present() const { return _encSymmKey_Present; }


      // Component: keyAlg
      void set_keyAlg(const keyAlg_Type::ValueType& v) { _keyAlg = v; _keyAlg_Present = true; }
      void set_keyAlg(keyAlg_Type::ValueType&& v) { _keyAlg = std::move(v); _keyAlg_Present = true; }
      const keyAlg_Type::ValueType& get_keyAlg() const { return _keyAlg; }
      keyAlg_Type::ValueType& get_keyAlg() { return _keyAlg; }
      void set_keyAlg_Present(bool present = true) { _keyAlg_Present = present; }
      bool is_keyAlg_Present() const { return _keyAlg_Present; }


      // Component: valueHint
      void set_valueHint(const valueHint_Type::ValueType& v) { _valueHint = v; _valueHint_Present = true; }
      void set_valueHint(valueHint_Type::ValueType&& v) { _valueHint = std::move(v); _valueHint_Present = true; }
      const valueHint_Type::ValueType& get_valueHint() const { return _valueHint; }
      valueHint_Type::ValueType& get_valueHint() { return _valueHint; }
      void set_valueHint_Present(bool present = true) { _valueHint_Present = present; }
      bool is_valueHint_Present() const { return _valueHint_Present; }


      // Component: encValue
      void set_encValue(const asn1::BitStringType::ValueType& v) { _encValue = v;  }
      void set_encValue(asn1::BitStringType::ValueType&& v) { _encValue = std::move(v);  }
      const asn1::BitStringType::ValueType& get_encValue() const { return _encValue; }
      asn1::BitStringType::ValueType& get_encValue() { return _encValue; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_intendedAlg_Present != other._intendedAlg_Present)
            return false;
         if (_intendedAlg_Present && other._intendedAlg_Present && _intendedAlg != other._intendedAlg)
            return false;
         if (_symmAlg_Present != other._symmAlg_Present)
            return false;
         if (_symmAlg_Present && other._symmAlg_Present && _symmAlg != other._symmAlg)
            return false;
         if (_encSymmKey_Present != other._encSymmKey_Present)
            return false;
         if (_encSymmKey_Present && other._encSymmKey_Present && _encSymmKey != other._encSymmKey)
            return false;
         if (_keyAlg_Present != other._keyAlg_Present)
            return false;
         if (_keyAlg_Present && other._keyAlg_Present && _keyAlg != other._keyAlg)
            return false;
         if (_valueHint_Present != other._valueHint_Present)
            return false;
         if (_valueHint_Present && other._valueHint_Present && _valueHint != other._valueHint)
            return false;
         if (_encValue != other._encValue)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      intendedAlg_Type::ValueType _intendedAlg;
      bool _intendedAlg_Present;
      symmAlg_Type::ValueType _symmAlg;
      bool _symmAlg_Present;
      encSymmKey_Type::ValueType _encSymmKey;
      bool _encSymmKey_Present;
      keyAlg_Type::ValueType _keyAlg;
      bool _keyAlg_Present;
      valueHint_Type::ValueType _valueHint;
      bool _valueHint_Present;
      asn1::BitStringType::ValueType _encValue;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   intendedAlg_Type _intendedAlg_Type;
   symmAlg_Type _symmAlg_Type;
   encSymmKey_Type _encSymmKey_Type;
   keyAlg_Type _keyAlg_Type;
   valueHint_Type _valueHint_Type;
   asn1::BitStringType _encValue_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncryptedValue"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncryptedKey2005
class EncryptedKey2005 : public asn1::ChoiceType
{
public:

   explicit EncryptedKey2005()
   {
      _addChoice(&_encryptedValue_Type);
#if defined(ASN1_ENABLE_XER)
      _encryptedValue_Type.setTypeName("encryptedValue");
#endif // ASN1_ENABLE_XER
      _addChoice(&_envelopedData_Type);
#if defined(ASN1_ENABLE_XER)
      _envelopedData_Type.setTypeName("envelopedData");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef envelopedData_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EnvelopedData envelopedData_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: encryptedValue
      void set_encryptedValue(const asn1::generated::EncryptedValue::ValueType& v) { _encryptedValue = v; _id = encryptedValue_ID; }
      void set_encryptedValue(asn1::generated::EncryptedValue::ValueType&& v) { _encryptedValue = std::move(v); _id = encryptedValue_ID; }
      const asn1::generated::EncryptedValue::ValueType& get_encryptedValue() const { assert(_id == encryptedValue_ID); return _encryptedValue; }
      asn1::generated::EncryptedValue::ValueType& get_encryptedValue() { assert(_id == encryptedValue_ID); return _encryptedValue; }
      bool has_encryptedValue_Choosen() const { return _id == encryptedValue_ID; }
      void choose_encryptedValue() { _id = encryptedValue_ID; }

      // Alternative: envelopedData
      void set_envelopedData(const envelopedData_Type::ValueType& v) { _envelopedData = v; _id = envelopedData_ID; }
      void set_envelopedData(envelopedData_Type::ValueType&& v) { _envelopedData = std::move(v); _id = envelopedData_ID; }
      const envelopedData_Type::ValueType& get_envelopedData() const { assert(_id == envelopedData_ID); return _envelopedData; }
      envelopedData_Type::ValueType& get_envelopedData() { assert(_id == envelopedData_ID); return _envelopedData; }
      bool has_envelopedData_Choosen() const { return _id == envelopedData_ID; }
      void choose_envelopedData() { _id = envelopedData_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case encryptedValue_ID:
            if (_encryptedValue != other._encryptedValue)
               return false;
            break;
         case envelopedData_ID:
            if (_envelopedData != other._envelopedData)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         encryptedValue_ID = 1,
         envelopedData_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::EncryptedValue::ValueType _encryptedValue;
      envelopedData_Type::ValueType _envelopedData;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::EncryptedValue _encryptedValue_Type;
   envelopedData_Type _envelopedData_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncryptedKey2005"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: encryptedPrivKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedKey2005
class encryptedPrivKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedKey2005 : public asn1::TaggingType<asn1::generated::EncryptedKey2005>
{
public:

   explicit encryptedPrivKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedKey2005() : asn1::TaggingType<asn1::generated::EncryptedKey2005>(new asn1::generated::EncryptedKey2005)
   {
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "valueHint"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyGenParameters
class KeyGenParameters : public asn1::OctetStringType
{
public:

   explicit KeyGenParameters()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

   explicit KeyGenParameters(const ValueType& defaultValue, bool hasDefault) : asn1::OctetStringType(defaultValue, hasDefault)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyGenParameters"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: keyGenParameters_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyGenParameters
class keyGenParameters_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyGenParameters : public asn1::TaggingType<asn1::generated::KeyGenParameters>
{
public:

   explicit keyGenParameters_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyGenParameters() : asn1::TaggingType<asn1::generated::KeyGenParameters>(new asn1::generated::KeyGenParameters)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyGenParameters"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: archiveRemGenPrivKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BooleanType
class archiveRemGenPrivKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BooleanType : public asn1::TaggingType<asn1::BooleanType>
{
public:

   explicit archiveRemGenPrivKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BooleanType() : asn1::TaggingType<asn1::BooleanType>(new asn1::BooleanType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "archiveRemGenPrivKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIArchiveOptions
class PKIArchiveOptions : public asn1::ChoiceType
{
public:

   explicit PKIArchiveOptions()
   {
      _addChoice(&_encryptedPrivKey_Type);
#if defined(ASN1_ENABLE_XER)
      _encryptedPrivKey_Type.setTypeName("encryptedPrivKey");
#endif // ASN1_ENABLE_XER
      _addChoice(&_keyGenParameters_Type);
#if defined(ASN1_ENABLE_XER)
      _keyGenParameters_Type.setTypeName("keyGenParameters");
#endif // ASN1_ENABLE_XER
      _addChoice(&_archiveRemGenPrivKey_Type);
#if defined(ASN1_ENABLE_XER)
      _archiveRemGenPrivKey_Type.setTypeName("archiveRemGenPrivKey");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef encryptedPrivKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedKey2005 encryptedPrivKey_Type;
   typedef keyGenParameters_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__KeyGenParameters keyGenParameters_Type;
   typedef archiveRemGenPrivKey_INTERNAL__NOTAG_2_INTERNAL_asn1__BooleanType archiveRemGenPrivKey_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: encryptedPrivKey
      void set_encryptedPrivKey(const encryptedPrivKey_Type::ValueType& v) { _encryptedPrivKey = v; _id = encryptedPrivKey_ID; }
      void set_encryptedPrivKey(encryptedPrivKey_Type::ValueType&& v) { _encryptedPrivKey = std::move(v); _id = encryptedPrivKey_ID; }
      const encryptedPrivKey_Type::ValueType& get_encryptedPrivKey() const { assert(_id == encryptedPrivKey_ID); return _encryptedPrivKey; }
      encryptedPrivKey_Type::ValueType& get_encryptedPrivKey() { assert(_id == encryptedPrivKey_ID); return _encryptedPrivKey; }
      bool has_encryptedPrivKey_Choosen() const { return _id == encryptedPrivKey_ID; }
      void choose_encryptedPrivKey() { _id = encryptedPrivKey_ID; }

      // Alternative: keyGenParameters
      void set_keyGenParameters(const keyGenParameters_Type::ValueType& v) { _keyGenParameters = v; _id = keyGenParameters_ID; }
      void set_keyGenParameters(keyGenParameters_Type::ValueType&& v) { _keyGenParameters = std::move(v); _id = keyGenParameters_ID; }
      const keyGenParameters_Type::ValueType& get_keyGenParameters() const { assert(_id == keyGenParameters_ID); return _keyGenParameters; }
      keyGenParameters_Type::ValueType& get_keyGenParameters() { assert(_id == keyGenParameters_ID); return _keyGenParameters; }
      bool has_keyGenParameters_Choosen() const { return _id == keyGenParameters_ID; }
      void choose_keyGenParameters() { _id = keyGenParameters_ID; }

      // Alternative: archiveRemGenPrivKey
      void set_archiveRemGenPrivKey(const archiveRemGenPrivKey_Type::ValueType& v) { _archiveRemGenPrivKey = v; _id = archiveRemGenPrivKey_ID; }
      void set_archiveRemGenPrivKey(archiveRemGenPrivKey_Type::ValueType&& v) { _archiveRemGenPrivKey = std::move(v); _id = archiveRemGenPrivKey_ID; }
      const archiveRemGenPrivKey_Type::ValueType& get_archiveRemGenPrivKey() const { assert(_id == archiveRemGenPrivKey_ID); return _archiveRemGenPrivKey; }
      archiveRemGenPrivKey_Type::ValueType& get_archiveRemGenPrivKey() { assert(_id == archiveRemGenPrivKey_ID); return _archiveRemGenPrivKey; }
      bool has_archiveRemGenPrivKey_Choosen() const { return _id == archiveRemGenPrivKey_ID; }
      void choose_archiveRemGenPrivKey() { _id = archiveRemGenPrivKey_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case encryptedPrivKey_ID:
            if (_encryptedPrivKey != other._encryptedPrivKey)
               return false;
            break;
         case keyGenParameters_ID:
            if (_keyGenParameters != other._keyGenParameters)
               return false;
            break;
         case archiveRemGenPrivKey_ID:
            if (_archiveRemGenPrivKey != other._archiveRemGenPrivKey)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         encryptedPrivKey_ID = 1,
         keyGenParameters_ID = 2,
         archiveRemGenPrivKey_ID = 3,
         __VALUE_NOT_DEFINED__ = -1
      };

      encryptedPrivKey_Type::ValueType _encryptedPrivKey;
      keyGenParameters_Type::ValueType _keyGenParameters;
      archiveRemGenPrivKey_Type::ValueType _archiveRemGenPrivKey;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   encryptedPrivKey_Type _encryptedPrivKey_Type;
   keyGenParameters_Type _keyGenParameters_Type;
   archiveRemGenPrivKey_Type _archiveRemGenPrivKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIArchiveOptions"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertId
class CertId : public asn1::SequenceType
{
public:

   explicit CertId()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _issuer_Type.setTypeName("issuer");
#endif // ASN1_ENABLE_XER
      _serialNumber_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _serialNumber_Type.setTypeName("serialNumber");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: issuer
      void set_issuer(const asn1::generated::GeneralName::ValueType& v) { _issuer = v;  }
      void set_issuer(asn1::generated::GeneralName::ValueType&& v) { _issuer = std::move(v);  }
      const asn1::generated::GeneralName::ValueType& get_issuer() const { return _issuer; }
      asn1::generated::GeneralName::ValueType& get_issuer() { return _issuer; }

      // Component: serialNumber
      void set_serialNumber(const asn1::IntegerType::ValueType& v) { _serialNumber = v;  }
      void set_serialNumber(asn1::IntegerType::ValueType&& v) { _serialNumber = std::move(v);  }
      const asn1::IntegerType::ValueType& get_serialNumber() const { return _serialNumber; }
      asn1::IntegerType::ValueType& get_serialNumber() { return _serialNumber; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_issuer != other._issuer)
            return false;
         if (_serialNumber != other._serialNumber)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::GeneralName::ValueType _issuer;
      asn1::IntegerType::ValueType _serialNumber;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::GeneralName _issuer_Type;
   asn1::IntegerType _serialNumber_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OldCertId
class OldCertId : public asn1::generated::CertId
{
public:

   explicit OldCertId()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OldCertId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ProtocolEncrKey
class ProtocolEncrKey : public asn1::generated::SubjectPublicKeyInfo
{
public:

   explicit ProtocolEncrKey()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ProtocolEncrKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UTF8Pairs
class UTF8Pairs : public asn1::generated::UTF8String
{
public:

   explicit UTF8Pairs()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UTF8Pairs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertReq
class CertReq : public asn1::generated::CertRequest
{
public:

   explicit CertReq()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertReq"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: identifier_INTERNAL__ChoiceType_stringstring_INTERNAL_asn1__generated__UTF8String_generalNamegeneralName_INTERNAL_asn1__generated__GeneralName
class identifier_INTERNAL__ChoiceType_stringstring_INTERNAL_asn1__generated__UTF8String_generalNamegeneralName_INTERNAL_asn1__generated__GeneralName : public asn1::ChoiceType
{
public:

   explicit identifier_INTERNAL__ChoiceType_stringstring_INTERNAL_asn1__generated__UTF8String_generalNamegeneralName_INTERNAL_asn1__generated__GeneralName()
   {
      _addChoice(&_string_Type);
#if defined(ASN1_ENABLE_XER)
      _string_Type.setTypeName("string");
#endif // ASN1_ENABLE_XER
      _addChoice(&_generalName_Type);
#if defined(ASN1_ENABLE_XER)
      _generalName_Type.setTypeName("generalName");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: string
      void set_string(const asn1::generated::UTF8String::ValueType& v) { _string = v; _id = string_ID; }
      void set_string(asn1::generated::UTF8String::ValueType&& v) { _string = std::move(v); _id = string_ID; }
      const asn1::generated::UTF8String::ValueType& get_string() const { assert(_id == string_ID); return _string; }
      asn1::generated::UTF8String::ValueType& get_string() { assert(_id == string_ID); return _string; }
      bool has_string_Choosen() const { return _id == string_ID; }
      void choose_string() { _id = string_ID; }

      // Alternative: generalName
      void set_generalName(const asn1::generated::GeneralName::ValueType& v) { _generalName = v; _id = generalName_ID; }
      void set_generalName(asn1::generated::GeneralName::ValueType&& v) { _generalName = std::move(v); _id = generalName_ID; }
      const asn1::generated::GeneralName::ValueType& get_generalName() const { assert(_id == generalName_ID); return _generalName; }
      asn1::generated::GeneralName::ValueType& get_generalName() { assert(_id == generalName_ID); return _generalName; }
      bool has_generalName_Choosen() const { return _id == generalName_ID; }
      void choose_generalName() { _id = generalName_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case string_ID:
            if (_string != other._string)
               return false;
            break;
         case generalName_ID:
            if (_generalName != other._generalName)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         string_ID = 1,
         generalName_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::UTF8String::ValueType _string;
      asn1::generated::GeneralName::ValueType _generalName;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::UTF8String _string_Type;
   asn1::generated::GeneralName _generalName_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "identifier"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Attributes
class Attributes : public asn1::SetOfType<asn1::generated::Attribute>
{
public:

   explicit Attributes() : asn1::SetOfType<asn1::generated::Attribute>(new asn1::generated::Attribute)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Attributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: attributes_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__Attributes
class attributes_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__Attributes : public asn1::TaggingType<asn1::generated::Attributes>
{
public:

   explicit attributes_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__Attributes() : asn1::TaggingType<asn1::generated::Attributes>(new asn1::generated::Attributes)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "attributes"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PrivateKeyInfo
class PrivateKeyInfo : public asn1::SequenceType
{
public:

   explicit PrivateKeyInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _version_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _privateKeyAlgorithm_Type.setTypeName("privateKeyAlgorithm");
#endif // ASN1_ENABLE_XER
      _privateKey_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _privateKey_Type.setTypeName("privateKey");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attributes_Type.setTypeName("attributes");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef attributes_INTERNAL__IMPLICIT_0_INTERNAL_asn1__generated__Attributes attributes_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _attributes_Present = false;
      }

      // Component: version
      void set_version(const asn1::IntegerType::ValueType& v) { _version = v;  }
      void set_version(asn1::IntegerType::ValueType&& v) { _version = std::move(v);  }
      const asn1::IntegerType::ValueType& get_version() const { return _version; }
      asn1::IntegerType::ValueType& get_version() { return _version; }

      // Component: privateKeyAlgorithm
      void set_privateKeyAlgorithm(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _privateKeyAlgorithm = v;  }
      void set_privateKeyAlgorithm(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _privateKeyAlgorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_privateKeyAlgorithm() const { return _privateKeyAlgorithm; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_privateKeyAlgorithm() { return _privateKeyAlgorithm; }

      // Component: privateKey
      void set_privateKey(const asn1::OctetStringType::ValueType& v) { _privateKey = v;  }
      void set_privateKey(asn1::OctetStringType::ValueType&& v) { _privateKey = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_privateKey() const { return _privateKey; }
      asn1::OctetStringType::ValueType& get_privateKey() { return _privateKey; }

      // Component: attributes
      void set_attributes(const attributes_Type::ValueType& v) { _attributes = v; _attributes_Present = true; }
      void set_attributes(attributes_Type::ValueType&& v) { _attributes = std::move(v); _attributes_Present = true; }
      const attributes_Type::ValueType& get_attributes() const { return _attributes; }
      attributes_Type::ValueType& get_attributes() { return _attributes; }
      void set_attributes_Present(bool present = true) { _attributes_Present = present; }
      bool is_attributes_Present() const { return _attributes_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_privateKeyAlgorithm != other._privateKeyAlgorithm)
            return false;
         if (_privateKey != other._privateKey)
            return false;
         if (_attributes_Present != other._attributes_Present)
            return false;
         if (_attributes_Present && other._attributes_Present && _attributes != other._attributes)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _version;
      asn1::generated::AlgorithmIdentifier::ValueType _privateKeyAlgorithm;
      asn1::OctetStringType::ValueType _privateKey;
      attributes_Type::ValueType _attributes;
      bool _attributes_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _version_Type;
   asn1::generated::AlgorithmIdentifier _privateKeyAlgorithm_Type;
   asn1::OctetStringType _privateKey_Type;
   attributes_Type _attributes_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PrivateKeyInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: EncKeyWithID
class EncKeyWithID : public asn1::SequenceType
{
public:

   explicit EncKeyWithID()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _privateKey_Type.setTypeName("privateKey");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _identifier_Type.setTypeName("identifier");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef identifier_INTERNAL__ChoiceType_stringstring_INTERNAL_asn1__generated__UTF8String_generalNamegeneralName_INTERNAL_asn1__generated__GeneralName identifier_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _identifier_Present = false;
      }

      // Component: privateKey
      void set_privateKey(const asn1::generated::PrivateKeyInfo::ValueType& v) { _privateKey = v;  }
      void set_privateKey(asn1::generated::PrivateKeyInfo::ValueType&& v) { _privateKey = std::move(v);  }
      const asn1::generated::PrivateKeyInfo::ValueType& get_privateKey() const { return _privateKey; }
      asn1::generated::PrivateKeyInfo::ValueType& get_privateKey() { return _privateKey; }

      // Component: identifier
      void set_identifier(const identifier_Type::ValueType& v) { _identifier = v; _identifier_Present = true; }
      void set_identifier(identifier_Type::ValueType&& v) { _identifier = std::move(v); _identifier_Present = true; }
      const identifier_Type::ValueType& get_identifier() const { return _identifier; }
      identifier_Type::ValueType& get_identifier() { return _identifier; }
      void set_identifier_Present(bool present = true) { _identifier_Present = present; }
      bool is_identifier_Present() const { return _identifier_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_privateKey != other._privateKey)
            return false;
         if (_identifier_Present != other._identifier_Present)
            return false;
         if (_identifier_Present && other._identifier_Present && _identifier != other._identifier)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PrivateKeyInfo::ValueType _privateKey;
      identifier_Type::ValueType _identifier;
      bool _identifier_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PrivateKeyInfo _privateKey_Type;
   identifier_Type _identifier_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "EncKeyWithID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AttributeValue-10
class AttributeValue_10 : public asn1::AnyType
{
public:

   explicit AttributeValue_10()
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AttributeValue-10"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue_10
class values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue_10 : public asn1::SetOfType<asn1::generated::AttributeValue_10>
{
public:

   explicit values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue_10() : asn1::SetOfType<asn1::generated::AttributeValue_10>(new asn1::generated::AttributeValue_10)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "values"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Attribute-10
class Attribute_10 : public asn1::SequenceType
{
public:

   explicit Attribute_10()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _type_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _type_Type.setTypeName("type");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _values_Type.setTypeName("values");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef values_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__AttributeValue_10 values_Type;

   class SequenceValue_Type
   {
   public:

      // Component: type
      void set_type(const asn1::ObjectIdentifierType::ValueType& v) { _type = v;  }
      void set_type(asn1::ObjectIdentifierType::ValueType&& v) { _type = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_type() const { return _type; }
      asn1::ObjectIdentifierType::ValueType& get_type() { return _type; }

      // Component: values
      void set_values(const values_Type::ValueType& v) { _values = v;  }
      void set_values(values_Type::ValueType&& v) { _values = std::move(v);  }
      const values_Type::ValueType& get_values() const { return _values; }
      values_Type::ValueType& get_values() { return _values; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_type != other._type)
            return false;
         if (_values != other._values)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _type;
      values_Type::ValueType _values;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _type_Type;
   values_Type _values_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Attribute-10"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Attributes-10
class Attributes_10 : public asn1::SetOfType<asn1::generated::Attribute_10>
{
public:

   explicit Attributes_10() : asn1::SetOfType<asn1::generated::Attribute_10>(new asn1::generated::Attribute_10)
   {
      setTagging(Type::IMPLICIT_TAGGING);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Attributes-10"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: attributes_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Attributes_10
class attributes_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Attributes_10 : public asn1::TaggingType<asn1::generated::Attributes_10>
{
public:

   explicit attributes_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Attributes_10() : asn1::TaggingType<asn1::generated::Attributes_10>(new asn1::generated::Attributes_10)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "values"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: AlgorithmIdentifier-10
class AlgorithmIdentifier_10 : public asn1::SequenceType
{
public:

   explicit AlgorithmIdentifier_10()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _algorithm_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _algorithm_Type.setTypeName("algorithm");
#endif // ASN1_ENABLE_XER
      _parameters_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _parameters_Type.setTypeName("parameters");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _parameters_Present = false;
      }

      // Component: algorithm
      void set_algorithm(const asn1::ObjectIdentifierType::ValueType& v) { _algorithm = v;  }
      void set_algorithm(asn1::ObjectIdentifierType::ValueType&& v) { _algorithm = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_algorithm() const { return _algorithm; }
      asn1::ObjectIdentifierType::ValueType& get_algorithm() { return _algorithm; }

      // Component: parameters
      void set_parameters(const asn1::AnyType::ValueType& v) { _parameters = v; _parameters_Present = true; }
      void set_parameters(asn1::AnyType::ValueType&& v) { _parameters = std::move(v); _parameters_Present = true; }
      const asn1::AnyType::ValueType& get_parameters() const { return _parameters; }
      asn1::AnyType::ValueType& get_parameters() { return _parameters; }
      void set_parameters_Present(bool present = true) { _parameters_Present = present; }
      bool is_parameters_Present() const { return _parameters_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_algorithm != other._algorithm)
            return false;
         if (_parameters_Present != other._parameters_Present)
            return false;
         if (_parameters_Present && other._parameters_Present && _parameters != other._parameters)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _algorithm;
      asn1::AnyType::ValueType _parameters;
      bool _parameters_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _algorithm_Type;
   asn1::AnyType _parameters_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "AlgorithmIdentifier-10"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SubjectPublicKeyInfo-10
class SubjectPublicKeyInfo_10 : public asn1::SequenceType
{
public:

   explicit SubjectPublicKeyInfo_10()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _algorithm_Type.setTypeName("algorithm");
#endif // ASN1_ENABLE_XER
      _subjectPublicKey_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _subjectPublicKey_Type.setTypeName("subjectPublicKey");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: algorithm
      void set_algorithm(const asn1::generated::AlgorithmIdentifier_10::ValueType& v) { _algorithm = v;  }
      void set_algorithm(asn1::generated::AlgorithmIdentifier_10::ValueType&& v) { _algorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier_10::ValueType& get_algorithm() const { return _algorithm; }
      asn1::generated::AlgorithmIdentifier_10::ValueType& get_algorithm() { return _algorithm; }

      // Component: subjectPublicKey
      void set_subjectPublicKey(const asn1::BitStringType::ValueType& v) { _subjectPublicKey = v;  }
      void set_subjectPublicKey(asn1::BitStringType::ValueType&& v) { _subjectPublicKey = std::move(v);  }
      const asn1::BitStringType::ValueType& get_subjectPublicKey() const { return _subjectPublicKey; }
      asn1::BitStringType::ValueType& get_subjectPublicKey() { return _subjectPublicKey; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_algorithm != other._algorithm)
            return false;
         if (_subjectPublicKey != other._subjectPublicKey)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AlgorithmIdentifier_10::ValueType _algorithm;
      asn1::BitStringType::ValueType _subjectPublicKey;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AlgorithmIdentifier_10 _algorithm_Type;
   asn1::BitStringType _subjectPublicKey_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SubjectPublicKeyInfo-10"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificationRequestInfo
class CertificationRequestInfo : public asn1::SequenceType
{
public:

   explicit CertificationRequestInfo()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _version_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _version_Type.setTypeName("version");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subject_Type.setTypeName("subject");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _subjectPKInfo_Type.setTypeName("subjectPKInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _attributes_Type.setTypeName("attributes");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef attributes_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__Attributes_10 attributes_Type;

   class SequenceValue_Type
   {
   public:

      // Component: version
      void set_version(const asn1::IntegerType::ValueType& v) { _version = v;  }
      void set_version(asn1::IntegerType::ValueType&& v) { _version = std::move(v);  }
      const asn1::IntegerType::ValueType& get_version() const { return _version; }
      asn1::IntegerType::ValueType& get_version() { return _version; }

      // Component: subject
      void set_subject(const asn1::generated::Name::ValueType& v) { _subject = v;  }
      void set_subject(asn1::generated::Name::ValueType&& v) { _subject = std::move(v);  }
      const asn1::generated::Name::ValueType& get_subject() const { return _subject; }
      asn1::generated::Name::ValueType& get_subject() { return _subject; }

      // Component: subjectPKInfo
      void set_subjectPKInfo(const asn1::generated::SubjectPublicKeyInfo_10::ValueType& v) { _subjectPKInfo = v;  }
      void set_subjectPKInfo(asn1::generated::SubjectPublicKeyInfo_10::ValueType&& v) { _subjectPKInfo = std::move(v);  }
      const asn1::generated::SubjectPublicKeyInfo_10::ValueType& get_subjectPKInfo() const { return _subjectPKInfo; }
      asn1::generated::SubjectPublicKeyInfo_10::ValueType& get_subjectPKInfo() { return _subjectPKInfo; }

      // Component: attributes
      void set_attributes(const attributes_Type::ValueType& v) { _attributes = v;  }
      void set_attributes(attributes_Type::ValueType&& v) { _attributes = std::move(v);  }
      const attributes_Type::ValueType& get_attributes() const { return _attributes; }
      attributes_Type::ValueType& get_attributes() { return _attributes; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_version != other._version)
            return false;
         if (_subject != other._subject)
            return false;
         if (_subjectPKInfo != other._subjectPKInfo)
            return false;
         if (_attributes != other._attributes)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _version;
      asn1::generated::Name::ValueType _subject;
      asn1::generated::SubjectPublicKeyInfo_10::ValueType _subjectPKInfo;
      attributes_Type::ValueType _attributes;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _version_Type;
   asn1::generated::Name _subject_Type;
   asn1::generated::SubjectPublicKeyInfo_10 _subjectPKInfo_Type;
   attributes_Type _attributes_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificationRequestInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertificationRequest
class CertificationRequest : public asn1::SequenceType
{
public:

   explicit CertificationRequest()
   {
      setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _certificationRequestInfo_Type.setTypeName("certificationRequestInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _signatureAlgorithm_Type.setTypeName("signatureAlgorithm");
#endif // ASN1_ENABLE_XER
      _signature_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _signature_Type.setTypeName("signature");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: certificationRequestInfo
      void set_certificationRequestInfo(const asn1::generated::CertificationRequestInfo::ValueType& v) { _certificationRequestInfo = v;  }
      void set_certificationRequestInfo(asn1::generated::CertificationRequestInfo::ValueType&& v) { _certificationRequestInfo = std::move(v);  }
      const asn1::generated::CertificationRequestInfo::ValueType& get_certificationRequestInfo() const { return _certificationRequestInfo; }
      asn1::generated::CertificationRequestInfo::ValueType& get_certificationRequestInfo() { return _certificationRequestInfo; }

      // Component: signatureAlgorithm
      void set_signatureAlgorithm(const asn1::generated::AlgorithmIdentifier_10::ValueType& v) { _signatureAlgorithm = v;  }
      void set_signatureAlgorithm(asn1::generated::AlgorithmIdentifier_10::ValueType&& v) { _signatureAlgorithm = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier_10::ValueType& get_signatureAlgorithm() const { return _signatureAlgorithm; }
      asn1::generated::AlgorithmIdentifier_10::ValueType& get_signatureAlgorithm() { return _signatureAlgorithm; }

      // Component: signature
      void set_signature(const asn1::BitStringType::ValueType& v) { _signature = v;  }
      void set_signature(asn1::BitStringType::ValueType&& v) { _signature = std::move(v);  }
      const asn1::BitStringType::ValueType& get_signature() const { return _signature; }
      asn1::BitStringType::ValueType& get_signature() { return _signature; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certificationRequestInfo != other._certificationRequestInfo)
            return false;
         if (_signatureAlgorithm != other._signatureAlgorithm)
            return false;
         if (_signature != other._signature)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CertificationRequestInfo::ValueType _certificationRequestInfo;
      asn1::generated::AlgorithmIdentifier_10::ValueType _signatureAlgorithm;
      asn1::BitStringType::ValueType _signature;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertificationRequestInfo _certificationRequestInfo_Type;
   asn1::generated::AlgorithmIdentifier_10 _signatureAlgorithm_Type;
   asn1::BitStringType _signature_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertificationRequest"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CMPCertificate
class CMPCertificate : public asn1::ChoiceType
{
public:

   explicit CMPCertificate()
   {
      _addChoice(&_x509v3PKCert_Type);
#if defined(ASN1_ENABLE_XER)
      _x509v3PKCert_Type.setTypeName("x509v3PKCert");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: x509v3PKCert
      void set_x509v3PKCert(const asn1::generated::Certificate::ValueType& v) { _x509v3PKCert = v; _id = x509v3PKCert_ID; }
      void set_x509v3PKCert(asn1::generated::Certificate::ValueType&& v) { _x509v3PKCert = std::move(v); _id = x509v3PKCert_ID; }
      const asn1::generated::Certificate::ValueType& get_x509v3PKCert() const { assert(_id == x509v3PKCert_ID); return _x509v3PKCert; }
      asn1::generated::Certificate::ValueType& get_x509v3PKCert() { assert(_id == x509v3PKCert_ID); return _x509v3PKCert; }
      bool has_x509v3PKCert_Choosen() const { return _id == x509v3PKCert_ID; }
      void choose_x509v3PKCert() { _id = x509v3PKCert_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case x509v3PKCert_ID:
            if (_x509v3PKCert != other._x509v3PKCert)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         x509v3PKCert_ID = 1,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::Certificate::ValueType _x509v3PKCert;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::Certificate _x509v3PKCert_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CMPCertificate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIProtection
class PKIProtection : public asn1::BitStringType
{
public:

   explicit PKIProtection()
   {
   }

   explicit PKIProtection(const ValueType& defaultValue, bool hasDefault) : asn1::BitStringType(defaultValue, hasDefault)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIProtection"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: protection_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__PKIProtection
class protection_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__PKIProtection : public asn1::TaggingType<asn1::generated::PKIProtection>
{
public:

   explicit protection_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__PKIProtection() : asn1::TaggingType<asn1::generated::PKIProtection>(new asn1::generated::PKIProtection)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "protection"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: extraCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate
class extraCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate : public asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CMPCertificate>>
{
public:

   explicit extraCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate() : asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CMPCertificate>>(new asn1::SequenceOfType<asn1::generated::CMPCertificate>(new asn1::generated::CMPCertificate))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "extraCerts"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pvno_INTERNAL_
class pvno_INTERNAL_ : public asn1::IntegerType
{
public:

   explicit pvno_INTERNAL_()
   {
   }

   explicit pvno_INTERNAL_(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
   }

   enum pvno_INTERNAL__Value
   {
      k_cmp1999 = 1,
      k_cmp2000 = 2,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "pvno"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: messageTime_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType
class messageTime_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType : public asn1::TaggingType<asn1::GeneralizedTimeType>
{
public:

   explicit messageTime_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType() : asn1::TaggingType<asn1::GeneralizedTimeType>(new asn1::GeneralizedTimeType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "messageTime"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: protectionAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier
class protectionAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier : public asn1::TaggingType<asn1::generated::AlgorithmIdentifier>
{
public:

   explicit protectionAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier() : asn1::TaggingType<asn1::generated::AlgorithmIdentifier>(new asn1::generated::AlgorithmIdentifier)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "protectionAlg"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: senderKID_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KeyIdentifier
class senderKID_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KeyIdentifier : public asn1::TaggingType<asn1::generated::KeyIdentifier>
{
public:

   explicit senderKID_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KeyIdentifier() : asn1::TaggingType<asn1::generated::KeyIdentifier>(new asn1::generated::KeyIdentifier)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "senderKID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: recipKID_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__KeyIdentifier
class recipKID_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__KeyIdentifier : public asn1::TaggingType<asn1::generated::KeyIdentifier>
{
public:

   explicit recipKID_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__KeyIdentifier() : asn1::TaggingType<asn1::generated::KeyIdentifier>(new asn1::generated::KeyIdentifier)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "recipKID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: transactionID_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType
class transactionID_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit transactionID_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "transactionID"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: senderNonce_INTERNAL__NOTAG_5_INTERNAL_asn1__OctetStringType
class senderNonce_INTERNAL__NOTAG_5_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit senderNonce_INTERNAL__NOTAG_5_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(5);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "senderNonce"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: recipNonce_INTERNAL__NOTAG_6_INTERNAL_asn1__OctetStringType
class recipNonce_INTERNAL__NOTAG_6_INTERNAL_asn1__OctetStringType : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit recipNonce_INTERNAL__NOTAG_6_INTERNAL_asn1__OctetStringType() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(6);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "recipNonce"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIFreeText
class PKIFreeText : public asn1::SequenceOfType<asn1::generated::UTF8String>
{
public:

   explicit PKIFreeText() : asn1::SequenceOfType<asn1::generated::UTF8String>(new asn1::generated::UTF8String)
   {
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIFreeText"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: freeText_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__PKIFreeText
class freeText_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__PKIFreeText : public asn1::TaggingType<asn1::generated::PKIFreeText>
{
public:

   explicit freeText_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__PKIFreeText() : asn1::TaggingType<asn1::generated::PKIFreeText>(new asn1::generated::PKIFreeText)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "freeText"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: InfoTypeAndValue
class InfoTypeAndValue : public asn1::SequenceType
{
public:

   explicit InfoTypeAndValue()
   {
#if defined(ASN1_ENABLE_XER)
      _infoType_Type.setTypeName("infoType");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _infoValue_Type.setTypeName("infoValue");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _infoValue_Present = false;
      }

      // Component: infoType
      void set_infoType(const asn1::ObjectIdentifierType::ValueType& v) { _infoType = v;  }
      void set_infoType(asn1::ObjectIdentifierType::ValueType&& v) { _infoType = std::move(v);  }
      const asn1::ObjectIdentifierType::ValueType& get_infoType() const { return _infoType; }
      asn1::ObjectIdentifierType::ValueType& get_infoType() { return _infoType; }

      // Component: infoValue
      void set_infoValue(const asn1::AnyType::ValueType& v) { _infoValue = v; _infoValue_Present = true; }
      void set_infoValue(asn1::AnyType::ValueType&& v) { _infoValue = std::move(v); _infoValue_Present = true; }
      const asn1::AnyType::ValueType& get_infoValue() const { return _infoValue; }
      asn1::AnyType::ValueType& get_infoValue() { return _infoValue; }
      void set_infoValue_Present(bool present = true) { _infoValue_Present = present; }
      bool is_infoValue_Present() const { return _infoValue_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_infoType != other._infoType)
            return false;
         if (_infoValue_Present != other._infoValue_Present)
            return false;
         if (_infoValue_Present && other._infoValue_Present && _infoValue != other._infoValue)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::ObjectIdentifierType::ValueType _infoType;
      asn1::AnyType::ValueType _infoValue;
      bool _infoValue_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::ObjectIdentifierType _infoType_Type;
   asn1::AnyType _infoValue_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "InfoTypeAndValue"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: generalInfo_INTERNAL__NOTAG_8_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__InfoTypeAndValue
class generalInfo_INTERNAL__NOTAG_8_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__InfoTypeAndValue : public asn1::TaggingType<asn1::SequenceOfType<asn1::generated::InfoTypeAndValue>>
{
public:

   explicit generalInfo_INTERNAL__NOTAG_8_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__InfoTypeAndValue() : asn1::TaggingType<asn1::SequenceOfType<asn1::generated::InfoTypeAndValue>>(new asn1::SequenceOfType<asn1::generated::InfoTypeAndValue>(new asn1::generated::InfoTypeAndValue))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(8);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "generalInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIHeader
class PKIHeader : public asn1::SequenceType
{
public:

   explicit PKIHeader()
   {
#if defined(ASN1_ENABLE_XER)
      _pvno_Type.setTypeName("pvno");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _sender_Type.setTypeName("sender");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _recipient_Type.setTypeName("recipient");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _messageTime_Type.setTypeName("messageTime");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _protectionAlg_Type.setTypeName("protectionAlg");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _senderKID_Type.setTypeName("senderKID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _recipKID_Type.setTypeName("recipKID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _transactionID_Type.setTypeName("transactionID");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _senderNonce_Type.setTypeName("senderNonce");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _recipNonce_Type.setTypeName("recipNonce");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _freeText_Type.setTypeName("freeText");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _generalInfo_Type.setTypeName("generalInfo");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef pvno_INTERNAL_ pvno_Type;
   typedef messageTime_INTERNAL__NOTAG_0_INTERNAL_asn1__GeneralizedTimeType messageTime_Type;
   typedef protectionAlg_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__AlgorithmIdentifier protectionAlg_Type;
   typedef senderKID_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__KeyIdentifier senderKID_Type;
   typedef recipKID_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__KeyIdentifier recipKID_Type;
   typedef transactionID_INTERNAL__NOTAG_4_INTERNAL_asn1__OctetStringType transactionID_Type;
   typedef senderNonce_INTERNAL__NOTAG_5_INTERNAL_asn1__OctetStringType senderNonce_Type;
   typedef recipNonce_INTERNAL__NOTAG_6_INTERNAL_asn1__OctetStringType recipNonce_Type;
   typedef freeText_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__PKIFreeText freeText_Type;
   typedef generalInfo_INTERNAL__NOTAG_8_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__InfoTypeAndValue generalInfo_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _messageTime_Present = false;
         _protectionAlg_Present = false;
         _senderKID_Present = false;
         _recipKID_Present = false;
         _transactionID_Present = false;
         _senderNonce_Present = false;
         _recipNonce_Present = false;
         _freeText_Present = false;
         _generalInfo_Present = false;
      }

      // Component: pvno
      void set_pvno(const pvno_Type::ValueType& v) { _pvno = v;  }
      void set_pvno(pvno_Type::ValueType&& v) { _pvno = std::move(v);  }
      const pvno_Type::ValueType& get_pvno() const { return _pvno; }
      pvno_Type::ValueType& get_pvno() { return _pvno; }

      // Component: sender
      void set_sender(const asn1::generated::GeneralName::ValueType& v) { _sender = v;  }
      void set_sender(asn1::generated::GeneralName::ValueType&& v) { _sender = std::move(v);  }
      const asn1::generated::GeneralName::ValueType& get_sender() const { return _sender; }
      asn1::generated::GeneralName::ValueType& get_sender() { return _sender; }

      // Component: recipient
      void set_recipient(const asn1::generated::GeneralName::ValueType& v) { _recipient = v;  }
      void set_recipient(asn1::generated::GeneralName::ValueType&& v) { _recipient = std::move(v);  }
      const asn1::generated::GeneralName::ValueType& get_recipient() const { return _recipient; }
      asn1::generated::GeneralName::ValueType& get_recipient() { return _recipient; }

      // Component: messageTime
      void set_messageTime(const messageTime_Type::ValueType& v) { _messageTime = v; _messageTime_Present = true; }
      void set_messageTime(messageTime_Type::ValueType&& v) { _messageTime = std::move(v); _messageTime_Present = true; }
      const messageTime_Type::ValueType& get_messageTime() const { return _messageTime; }
      messageTime_Type::ValueType& get_messageTime() { return _messageTime; }
      void set_messageTime_Present(bool present = true) { _messageTime_Present = present; }
      bool is_messageTime_Present() const { return _messageTime_Present; }


      // Component: protectionAlg
      void set_protectionAlg(const protectionAlg_Type::ValueType& v) { _protectionAlg = v; _protectionAlg_Present = true; }
      void set_protectionAlg(protectionAlg_Type::ValueType&& v) { _protectionAlg = std::move(v); _protectionAlg_Present = true; }
      const protectionAlg_Type::ValueType& get_protectionAlg() const { return _protectionAlg; }
      protectionAlg_Type::ValueType& get_protectionAlg() { return _protectionAlg; }
      void set_protectionAlg_Present(bool present = true) { _protectionAlg_Present = present; }
      bool is_protectionAlg_Present() const { return _protectionAlg_Present; }


      // Component: senderKID
      void set_senderKID(const senderKID_Type::ValueType& v) { _senderKID = v; _senderKID_Present = true; }
      void set_senderKID(senderKID_Type::ValueType&& v) { _senderKID = std::move(v); _senderKID_Present = true; }
      const senderKID_Type::ValueType& get_senderKID() const { return _senderKID; }
      senderKID_Type::ValueType& get_senderKID() { return _senderKID; }
      void set_senderKID_Present(bool present = true) { _senderKID_Present = present; }
      bool is_senderKID_Present() const { return _senderKID_Present; }


      // Component: recipKID
      void set_recipKID(const recipKID_Type::ValueType& v) { _recipKID = v; _recipKID_Present = true; }
      void set_recipKID(recipKID_Type::ValueType&& v) { _recipKID = std::move(v); _recipKID_Present = true; }
      const recipKID_Type::ValueType& get_recipKID() const { return _recipKID; }
      recipKID_Type::ValueType& get_recipKID() { return _recipKID; }
      void set_recipKID_Present(bool present = true) { _recipKID_Present = present; }
      bool is_recipKID_Present() const { return _recipKID_Present; }


      // Component: transactionID
      void set_transactionID(const transactionID_Type::ValueType& v) { _transactionID = v; _transactionID_Present = true; }
      void set_transactionID(transactionID_Type::ValueType&& v) { _transactionID = std::move(v); _transactionID_Present = true; }
      const transactionID_Type::ValueType& get_transactionID() const { return _transactionID; }
      transactionID_Type::ValueType& get_transactionID() { return _transactionID; }
      void set_transactionID_Present(bool present = true) { _transactionID_Present = present; }
      bool is_transactionID_Present() const { return _transactionID_Present; }


      // Component: senderNonce
      void set_senderNonce(const senderNonce_Type::ValueType& v) { _senderNonce = v; _senderNonce_Present = true; }
      void set_senderNonce(senderNonce_Type::ValueType&& v) { _senderNonce = std::move(v); _senderNonce_Present = true; }
      const senderNonce_Type::ValueType& get_senderNonce() const { return _senderNonce; }
      senderNonce_Type::ValueType& get_senderNonce() { return _senderNonce; }
      void set_senderNonce_Present(bool present = true) { _senderNonce_Present = present; }
      bool is_senderNonce_Present() const { return _senderNonce_Present; }


      // Component: recipNonce
      void set_recipNonce(const recipNonce_Type::ValueType& v) { _recipNonce = v; _recipNonce_Present = true; }
      void set_recipNonce(recipNonce_Type::ValueType&& v) { _recipNonce = std::move(v); _recipNonce_Present = true; }
      const recipNonce_Type::ValueType& get_recipNonce() const { return _recipNonce; }
      recipNonce_Type::ValueType& get_recipNonce() { return _recipNonce; }
      void set_recipNonce_Present(bool present = true) { _recipNonce_Present = present; }
      bool is_recipNonce_Present() const { return _recipNonce_Present; }


      // Component: freeText
      void set_freeText(const freeText_Type::ValueType& v) { _freeText = v; _freeText_Present = true; }
      void set_freeText(freeText_Type::ValueType&& v) { _freeText = std::move(v); _freeText_Present = true; }
      const freeText_Type::ValueType& get_freeText() const { return _freeText; }
      freeText_Type::ValueType& get_freeText() { return _freeText; }
      void set_freeText_Present(bool present = true) { _freeText_Present = present; }
      bool is_freeText_Present() const { return _freeText_Present; }


      // Component: generalInfo
      void set_generalInfo(const generalInfo_Type::ValueType& v) { _generalInfo = v; _generalInfo_Present = true; }
      void set_generalInfo(generalInfo_Type::ValueType&& v) { _generalInfo = std::move(v); _generalInfo_Present = true; }
      const generalInfo_Type::ValueType& get_generalInfo() const { return _generalInfo; }
      generalInfo_Type::ValueType& get_generalInfo() { return _generalInfo; }
      void set_generalInfo_Present(bool present = true) { _generalInfo_Present = present; }
      bool is_generalInfo_Present() const { return _generalInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_pvno != other._pvno)
            return false;
         if (_sender != other._sender)
            return false;
         if (_recipient != other._recipient)
            return false;
         if (_messageTime_Present != other._messageTime_Present)
            return false;
         if (_messageTime_Present && other._messageTime_Present && _messageTime != other._messageTime)
            return false;
         if (_protectionAlg_Present != other._protectionAlg_Present)
            return false;
         if (_protectionAlg_Present && other._protectionAlg_Present && _protectionAlg != other._protectionAlg)
            return false;
         if (_senderKID_Present != other._senderKID_Present)
            return false;
         if (_senderKID_Present && other._senderKID_Present && _senderKID != other._senderKID)
            return false;
         if (_recipKID_Present != other._recipKID_Present)
            return false;
         if (_recipKID_Present && other._recipKID_Present && _recipKID != other._recipKID)
            return false;
         if (_transactionID_Present != other._transactionID_Present)
            return false;
         if (_transactionID_Present && other._transactionID_Present && _transactionID != other._transactionID)
            return false;
         if (_senderNonce_Present != other._senderNonce_Present)
            return false;
         if (_senderNonce_Present && other._senderNonce_Present && _senderNonce != other._senderNonce)
            return false;
         if (_recipNonce_Present != other._recipNonce_Present)
            return false;
         if (_recipNonce_Present && other._recipNonce_Present && _recipNonce != other._recipNonce)
            return false;
         if (_freeText_Present != other._freeText_Present)
            return false;
         if (_freeText_Present && other._freeText_Present && _freeText != other._freeText)
            return false;
         if (_generalInfo_Present != other._generalInfo_Present)
            return false;
         if (_generalInfo_Present && other._generalInfo_Present && _generalInfo != other._generalInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      pvno_Type::ValueType _pvno;
      asn1::generated::GeneralName::ValueType _sender;
      asn1::generated::GeneralName::ValueType _recipient;
      messageTime_Type::ValueType _messageTime;
      bool _messageTime_Present;
      protectionAlg_Type::ValueType _protectionAlg;
      bool _protectionAlg_Present;
      senderKID_Type::ValueType _senderKID;
      bool _senderKID_Present;
      recipKID_Type::ValueType _recipKID;
      bool _recipKID_Present;
      transactionID_Type::ValueType _transactionID;
      bool _transactionID_Present;
      senderNonce_Type::ValueType _senderNonce;
      bool _senderNonce_Present;
      recipNonce_Type::ValueType _recipNonce;
      bool _recipNonce_Present;
      freeText_Type::ValueType _freeText;
      bool _freeText_Present;
      generalInfo_Type::ValueType _generalInfo;
      bool _generalInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   pvno_Type _pvno_Type;
   asn1::generated::GeneralName _sender_Type;
   asn1::generated::GeneralName _recipient_Type;
   messageTime_Type _messageTime_Type;
   protectionAlg_Type _protectionAlg_Type;
   senderKID_Type _senderKID_Type;
   recipKID_Type _recipKID_Type;
   transactionID_Type _transactionID_Type;
   senderNonce_Type _senderNonce_Type;
   recipNonce_Type _recipNonce_Type;
   freeText_Type _freeText_Type;
   generalInfo_Type _generalInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIHeader"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ir_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CertReqMessages
class ir_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CertReqMessages : public asn1::TaggingType<asn1::generated::CertReqMessages>
{
public:

   explicit ir_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CertReqMessages() : asn1::TaggingType<asn1::generated::CertReqMessages>(new asn1::generated::CertReqMessages)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ir"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: caPubs_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate
class caPubs_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate : public asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CMPCertificate>>
{
public:

   explicit caPubs_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate() : asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CMPCertificate>>(new asn1::SequenceOfType<asn1::generated::CMPCertificate>(new asn1::generated::CMPCertificate))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "caPubs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIStatus
class PKIStatus : public asn1::IntegerType
{
public:

   explicit PKIStatus()
   {
   }

   explicit PKIStatus(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
   }

   enum PKIStatus_Value
   {
      k_accepted = 0,
      k_grantedWithMods = 1,
      k_rejection = 2,
      k_waiting = 3,
      k_revocationWarning = 4,
      k_revocationNotification = 5,
      k_keyUpdateWarning = 6,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIStatus"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIFailureInfo
class PKIFailureInfo : public asn1::BitStringType
{
public:

   explicit PKIFailureInfo()
   {
   }

   explicit PKIFailureInfo(const ValueType& defaultValue, bool hasDefault) : asn1::BitStringType(defaultValue, hasDefault)
   {
   }

   enum PKIFailureInfo_Value
   {
      k_badAlg = 0,
      k_badMessageCheck = 1,
      k_badRequest = 2,
      k_badTime = 3,
      k_badCertId = 4,
      k_badDataFormat = 5,
      k_wrongAuthority = 6,
      k_incorrectData = 7,
      k_missingTimeStamp = 8,
      k_badPOP = 9,
      k_certRevoked = 10,
      k_certConfirmed = 11,
      k_wrongIntegrity = 12,
      k_badRecipientNonce = 13,
      k_timeNotAvailable = 14,
      k_unacceptedPolicy = 15,
      k_unacceptedExtension = 16,
      k_addInfoNotAvailable = 17,
      k_badSenderNonce = 18,
      k_badCertTemplate = 19,
      k_signerNotTrusted = 20,
      k_transactionIdInUse = 21,
      k_unsupportedVersion = 22,
      k_notAuthorized = 23,
      k_systemUnavail = 24,
      k_systemFailure = 25,
      k_duplicateCertReq = 26,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIFailureInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIStatusInfo
class PKIStatusInfo : public asn1::SequenceType
{
public:

   explicit PKIStatusInfo()
   {
#if defined(ASN1_ENABLE_XER)
      _status_Type.setTypeName("status");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _statusString_Type.setTypeName("statusString");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _failInfo_Type.setTypeName("failInfo");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _statusString_Present = false;
         _failInfo_Present = false;
      }

      // Component: status
      void set_status(const asn1::generated::PKIStatus::ValueType& v) { _status = v;  }
      void set_status(asn1::generated::PKIStatus::ValueType&& v) { _status = std::move(v);  }
      const asn1::generated::PKIStatus::ValueType& get_status() const { return _status; }
      asn1::generated::PKIStatus::ValueType& get_status() { return _status; }

      // Component: statusString
      void set_statusString(const asn1::generated::PKIFreeText::ValueType& v) { _statusString = v; _statusString_Present = true; }
      void set_statusString(asn1::generated::PKIFreeText::ValueType&& v) { _statusString = std::move(v); _statusString_Present = true; }
      const asn1::generated::PKIFreeText::ValueType& get_statusString() const { return _statusString; }
      asn1::generated::PKIFreeText::ValueType& get_statusString() { return _statusString; }
      void set_statusString_Present(bool present = true) { _statusString_Present = present; }
      bool is_statusString_Present() const { return _statusString_Present; }


      // Component: failInfo
      void set_failInfo(const asn1::generated::PKIFailureInfo::ValueType& v) { _failInfo = v; _failInfo_Present = true; }
      void set_failInfo(asn1::generated::PKIFailureInfo::ValueType&& v) { _failInfo = std::move(v); _failInfo_Present = true; }
      const asn1::generated::PKIFailureInfo::ValueType& get_failInfo() const { return _failInfo; }
      asn1::generated::PKIFailureInfo::ValueType& get_failInfo() { return _failInfo; }
      void set_failInfo_Present(bool present = true) { _failInfo_Present = present; }
      bool is_failInfo_Present() const { return _failInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_status != other._status)
            return false;
         if (_statusString_Present != other._statusString_Present)
            return false;
         if (_statusString_Present && other._statusString_Present && _statusString != other._statusString)
            return false;
         if (_failInfo_Present != other._failInfo_Present)
            return false;
         if (_failInfo_Present && other._failInfo_Present && _failInfo != other._failInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PKIStatus::ValueType _status;
      asn1::generated::PKIFreeText::ValueType _statusString;
      bool _statusString_Present;
      asn1::generated::PKIFailureInfo::ValueType _failInfo;
      bool _failInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PKIStatus _status_Type;
   asn1::generated::PKIFreeText _statusString_Type;
   asn1::generated::PKIFailureInfo _failInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIStatusInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: privateKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedValue
class privateKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedValue : public asn1::TaggingType<asn1::generated::EncryptedValue>
{
public:

   explicit privateKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedValue() : asn1::TaggingType<asn1::generated::EncryptedValue>(new asn1::generated::EncryptedValue)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "privateKey"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: publicationInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__PKIPublicationInfo
class publicationInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__PKIPublicationInfo : public asn1::TaggingType<asn1::generated::PKIPublicationInfo>
{
public:

   explicit publicationInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__PKIPublicationInfo() : asn1::TaggingType<asn1::generated::PKIPublicationInfo>(new asn1::generated::PKIPublicationInfo)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "publicationInfo"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: certificate_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate
class certificate_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate : public asn1::TaggingType<asn1::generated::CMPCertificate>
{
public:

   explicit certificate_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate() : asn1::TaggingType<asn1::generated::CMPCertificate>(new asn1::generated::CMPCertificate)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "certificate"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: encryptedCert_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__EncryptedValue
class encryptedCert_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__EncryptedValue : public asn1::TaggingType<asn1::generated::EncryptedValue>
{
public:

   explicit encryptedCert_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__EncryptedValue() : asn1::TaggingType<asn1::generated::EncryptedValue>(new asn1::generated::EncryptedValue)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "encryptedCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertOrEncCert
class CertOrEncCert : public asn1::ChoiceType
{
public:

   explicit CertOrEncCert()
   {
      _addChoice(&_certificate_Type);
#if defined(ASN1_ENABLE_XER)
      _certificate_Type.setTypeName("certificate");
#endif // ASN1_ENABLE_XER
      _addChoice(&_encryptedCert_Type);
#if defined(ASN1_ENABLE_XER)
      _encryptedCert_Type.setTypeName("encryptedCert");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef certificate_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate certificate_Type;
   typedef encryptedCert_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__EncryptedValue encryptedCert_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: certificate
      void set_certificate(const certificate_Type::ValueType& v) { _certificate = v; _id = certificate_ID; }
      void set_certificate(certificate_Type::ValueType&& v) { _certificate = std::move(v); _id = certificate_ID; }
      const certificate_Type::ValueType& get_certificate() const { assert(_id == certificate_ID); return _certificate; }
      certificate_Type::ValueType& get_certificate() { assert(_id == certificate_ID); return _certificate; }
      bool has_certificate_Choosen() const { return _id == certificate_ID; }
      void choose_certificate() { _id = certificate_ID; }

      // Alternative: encryptedCert
      void set_encryptedCert(const encryptedCert_Type::ValueType& v) { _encryptedCert = v; _id = encryptedCert_ID; }
      void set_encryptedCert(encryptedCert_Type::ValueType&& v) { _encryptedCert = std::move(v); _id = encryptedCert_ID; }
      const encryptedCert_Type::ValueType& get_encryptedCert() const { assert(_id == encryptedCert_ID); return _encryptedCert; }
      encryptedCert_Type::ValueType& get_encryptedCert() { assert(_id == encryptedCert_ID); return _encryptedCert; }
      bool has_encryptedCert_Choosen() const { return _id == encryptedCert_ID; }
      void choose_encryptedCert() { _id = encryptedCert_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case certificate_ID:
            if (_certificate != other._certificate)
               return false;
            break;
         case encryptedCert_ID:
            if (_encryptedCert != other._encryptedCert)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         certificate_ID = 1,
         encryptedCert_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      certificate_Type::ValueType _certificate;
      encryptedCert_Type::ValueType _encryptedCert;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   certificate_Type _certificate_Type;
   encryptedCert_Type _encryptedCert_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertOrEncCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertifiedKeyPair
class CertifiedKeyPair : public asn1::SequenceType
{
public:

   explicit CertifiedKeyPair()
   {
#if defined(ASN1_ENABLE_XER)
      _certOrEncCert_Type.setTypeName("certOrEncCert");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _privateKey_Type.setTypeName("privateKey");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _publicationInfo_Type.setTypeName("publicationInfo");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef privateKey_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__EncryptedValue privateKey_Type;
   typedef publicationInfo_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__PKIPublicationInfo publicationInfo_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _privateKey_Present = false;
         _publicationInfo_Present = false;
      }

      // Component: certOrEncCert
      void set_certOrEncCert(const asn1::generated::CertOrEncCert::ValueType& v) { _certOrEncCert = v;  }
      void set_certOrEncCert(asn1::generated::CertOrEncCert::ValueType&& v) { _certOrEncCert = std::move(v);  }
      const asn1::generated::CertOrEncCert::ValueType& get_certOrEncCert() const { return _certOrEncCert; }
      asn1::generated::CertOrEncCert::ValueType& get_certOrEncCert() { return _certOrEncCert; }

      // Component: privateKey
      void set_privateKey(const privateKey_Type::ValueType& v) { _privateKey = v; _privateKey_Present = true; }
      void set_privateKey(privateKey_Type::ValueType&& v) { _privateKey = std::move(v); _privateKey_Present = true; }
      const privateKey_Type::ValueType& get_privateKey() const { return _privateKey; }
      privateKey_Type::ValueType& get_privateKey() { return _privateKey; }
      void set_privateKey_Present(bool present = true) { _privateKey_Present = present; }
      bool is_privateKey_Present() const { return _privateKey_Present; }


      // Component: publicationInfo
      void set_publicationInfo(const publicationInfo_Type::ValueType& v) { _publicationInfo = v; _publicationInfo_Present = true; }
      void set_publicationInfo(publicationInfo_Type::ValueType&& v) { _publicationInfo = std::move(v); _publicationInfo_Present = true; }
      const publicationInfo_Type::ValueType& get_publicationInfo() const { return _publicationInfo; }
      publicationInfo_Type::ValueType& get_publicationInfo() { return _publicationInfo; }
      void set_publicationInfo_Present(bool present = true) { _publicationInfo_Present = present; }
      bool is_publicationInfo_Present() const { return _publicationInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certOrEncCert != other._certOrEncCert)
            return false;
         if (_privateKey_Present != other._privateKey_Present)
            return false;
         if (_privateKey_Present && other._privateKey_Present && _privateKey != other._privateKey)
            return false;
         if (_publicationInfo_Present != other._publicationInfo_Present)
            return false;
         if (_publicationInfo_Present && other._publicationInfo_Present && _publicationInfo != other._publicationInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CertOrEncCert::ValueType _certOrEncCert;
      privateKey_Type::ValueType _privateKey;
      bool _privateKey_Present;
      publicationInfo_Type::ValueType _publicationInfo;
      bool _publicationInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertOrEncCert _certOrEncCert_Type;
   privateKey_Type _privateKey_Type;
   publicationInfo_Type _publicationInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertifiedKeyPair"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertResponse
class CertResponse : public asn1::SequenceType
{
public:

   explicit CertResponse()
   {
#if defined(ASN1_ENABLE_XER)
      _certReqId_Type.setTypeName("certReqId");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _status_Type.setTypeName("status");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certifiedKeyPair_Type.setTypeName("certifiedKeyPair");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _rspInfo_Type.setTypeName("rspInfo");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _certifiedKeyPair_Present = false;
         _rspInfo_Present = false;
      }

      // Component: certReqId
      void set_certReqId(const asn1::IntegerType::ValueType& v) { _certReqId = v;  }
      void set_certReqId(asn1::IntegerType::ValueType&& v) { _certReqId = std::move(v);  }
      const asn1::IntegerType::ValueType& get_certReqId() const { return _certReqId; }
      asn1::IntegerType::ValueType& get_certReqId() { return _certReqId; }

      // Component: status
      void set_status(const asn1::generated::PKIStatusInfo::ValueType& v) { _status = v;  }
      void set_status(asn1::generated::PKIStatusInfo::ValueType&& v) { _status = std::move(v);  }
      const asn1::generated::PKIStatusInfo::ValueType& get_status() const { return _status; }
      asn1::generated::PKIStatusInfo::ValueType& get_status() { return _status; }

      // Component: certifiedKeyPair
      void set_certifiedKeyPair(const asn1::generated::CertifiedKeyPair::ValueType& v) { _certifiedKeyPair = v; _certifiedKeyPair_Present = true; }
      void set_certifiedKeyPair(asn1::generated::CertifiedKeyPair::ValueType&& v) { _certifiedKeyPair = std::move(v); _certifiedKeyPair_Present = true; }
      const asn1::generated::CertifiedKeyPair::ValueType& get_certifiedKeyPair() const { return _certifiedKeyPair; }
      asn1::generated::CertifiedKeyPair::ValueType& get_certifiedKeyPair() { return _certifiedKeyPair; }
      void set_certifiedKeyPair_Present(bool present = true) { _certifiedKeyPair_Present = present; }
      bool is_certifiedKeyPair_Present() const { return _certifiedKeyPair_Present; }


      // Component: rspInfo
      void set_rspInfo(const asn1::OctetStringType::ValueType& v) { _rspInfo = v; _rspInfo_Present = true; }
      void set_rspInfo(asn1::OctetStringType::ValueType&& v) { _rspInfo = std::move(v); _rspInfo_Present = true; }
      const asn1::OctetStringType::ValueType& get_rspInfo() const { return _rspInfo; }
      asn1::OctetStringType::ValueType& get_rspInfo() { return _rspInfo; }
      void set_rspInfo_Present(bool present = true) { _rspInfo_Present = present; }
      bool is_rspInfo_Present() const { return _rspInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certReqId != other._certReqId)
            return false;
         if (_status != other._status)
            return false;
         if (_certifiedKeyPair_Present != other._certifiedKeyPair_Present)
            return false;
         if (_certifiedKeyPair_Present && other._certifiedKeyPair_Present && _certifiedKeyPair != other._certifiedKeyPair)
            return false;
         if (_rspInfo_Present != other._rspInfo_Present)
            return false;
         if (_rspInfo_Present && other._rspInfo_Present && _rspInfo != other._rspInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _certReqId;
      asn1::generated::PKIStatusInfo::ValueType _status;
      asn1::generated::CertifiedKeyPair::ValueType _certifiedKeyPair;
      bool _certifiedKeyPair_Present;
      asn1::OctetStringType::ValueType _rspInfo;
      bool _rspInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _certReqId_Type;
   asn1::generated::PKIStatusInfo _status_Type;
   asn1::generated::CertifiedKeyPair _certifiedKeyPair_Type;
   asn1::OctetStringType _rspInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertResponse"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: response_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertResponse
class response_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertResponse : public asn1::SequenceOfType<asn1::generated::CertResponse>
{
public:

   explicit response_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertResponse() : asn1::SequenceOfType<asn1::generated::CertResponse>(new asn1::generated::CertResponse)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "encryptedCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertRepMessage
class CertRepMessage : public asn1::SequenceType
{
public:

   explicit CertRepMessage()
   {
#if defined(ASN1_ENABLE_XER)
      _caPubs_Type.setTypeName("caPubs");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _response_Type.setTypeName("response");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef caPubs_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate caPubs_Type;
   typedef response_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertResponse response_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _caPubs_Present = false;
      }

      // Component: caPubs
      void set_caPubs(const caPubs_Type::ValueType& v) { _caPubs = v; _caPubs_Present = true; }
      void set_caPubs(caPubs_Type::ValueType&& v) { _caPubs = std::move(v); _caPubs_Present = true; }
      const caPubs_Type::ValueType& get_caPubs() const { return _caPubs; }
      caPubs_Type::ValueType& get_caPubs() { return _caPubs; }
      void set_caPubs_Present(bool present = true) { _caPubs_Present = present; }
      bool is_caPubs_Present() const { return _caPubs_Present; }


      // Component: response
      void set_response(const response_Type::ValueType& v) { _response = v;  }
      void set_response(response_Type::ValueType&& v) { _response = std::move(v);  }
      const response_Type::ValueType& get_response() const { return _response; }
      response_Type::ValueType& get_response() { return _response; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_caPubs_Present != other._caPubs_Present)
            return false;
         if (_caPubs_Present && other._caPubs_Present && _caPubs != other._caPubs)
            return false;
         if (_response != other._response)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      caPubs_Type::ValueType _caPubs;
      bool _caPubs_Present;
      response_Type::ValueType _response;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   caPubs_Type _caPubs_Type;
   response_Type _response_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertRepMessage"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ip_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertRepMessage
class ip_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertRepMessage : public asn1::TaggingType<asn1::generated::CertRepMessage>
{
public:

   explicit ip_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertRepMessage() : asn1::TaggingType<asn1::generated::CertRepMessage>(new asn1::generated::CertRepMessage)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "encryptedCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: cr_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertReqMessages
class cr_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertReqMessages : public asn1::TaggingType<asn1::generated::CertReqMessages>
{
public:

   explicit cr_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertReqMessages() : asn1::TaggingType<asn1::generated::CertReqMessages>(new asn1::generated::CertReqMessages)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "cr"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: cp_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__CertRepMessage
class cp_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__CertRepMessage : public asn1::TaggingType<asn1::generated::CertRepMessage>
{
public:

   explicit cp_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__CertRepMessage() : asn1::TaggingType<asn1::generated::CertRepMessage>(new asn1::generated::CertRepMessage)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "cp"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: p10cr_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__CertificationRequest
class p10cr_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__CertificationRequest : public asn1::TaggingType<asn1::generated::CertificationRequest>
{
public:

   explicit p10cr_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__CertificationRequest() : asn1::TaggingType<asn1::generated::CertificationRequest>(new asn1::generated::CertificationRequest)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "p10cr"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Challenge
class Challenge : public asn1::SequenceType
{
public:

   explicit Challenge()
   {
#if defined(ASN1_ENABLE_XER)
      _owf_Type.setTypeName("owf");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _witness_Type.setTypeName("witness");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _challenge_Type.setTypeName("challenge");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _owf_Present = false;
      }

      // Component: owf
      void set_owf(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _owf = v; _owf_Present = true; }
      void set_owf(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _owf = std::move(v); _owf_Present = true; }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_owf() const { return _owf; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_owf() { return _owf; }
      void set_owf_Present(bool present = true) { _owf_Present = present; }
      bool is_owf_Present() const { return _owf_Present; }


      // Component: witness
      void set_witness(const asn1::OctetStringType::ValueType& v) { _witness = v;  }
      void set_witness(asn1::OctetStringType::ValueType&& v) { _witness = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_witness() const { return _witness; }
      asn1::OctetStringType::ValueType& get_witness() { return _witness; }

      // Component: challenge
      void set_challenge(const asn1::OctetStringType::ValueType& v) { _challenge = v;  }
      void set_challenge(asn1::OctetStringType::ValueType&& v) { _challenge = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_challenge() const { return _challenge; }
      asn1::OctetStringType::ValueType& get_challenge() { return _challenge; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_owf_Present != other._owf_Present)
            return false;
         if (_owf_Present && other._owf_Present && _owf != other._owf)
            return false;
         if (_witness != other._witness)
            return false;
         if (_challenge != other._challenge)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AlgorithmIdentifier::ValueType _owf;
      bool _owf_Present;
      asn1::OctetStringType::ValueType _witness;
      asn1::OctetStringType::ValueType _challenge;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AlgorithmIdentifier _owf_Type;
   asn1::OctetStringType _witness_Type;
   asn1::OctetStringType _challenge_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Challenge"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: POPODecKeyChallContent
class POPODecKeyChallContent : public asn1::SequenceOfType<asn1::generated::Challenge>
{
public:

   explicit POPODecKeyChallContent() : asn1::SequenceOfType<asn1::generated::Challenge>(new asn1::generated::Challenge)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "POPODecKeyChallContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: popdecc_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__POPODecKeyChallContent
class popdecc_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__POPODecKeyChallContent : public asn1::TaggingType<asn1::generated::POPODecKeyChallContent>
{
public:

   explicit popdecc_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__POPODecKeyChallContent() : asn1::TaggingType<asn1::generated::POPODecKeyChallContent>(new asn1::generated::POPODecKeyChallContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(5);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "popdecc"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: POPODecKeyRespContent
class POPODecKeyRespContent : public asn1::SequenceOfType<asn1::IntegerType>
{
public:

   explicit POPODecKeyRespContent() : asn1::SequenceOfType<asn1::IntegerType>(new asn1::IntegerType)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "POPODecKeyRespContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: popdecr_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__POPODecKeyRespContent
class popdecr_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__POPODecKeyRespContent : public asn1::TaggingType<asn1::generated::POPODecKeyRespContent>
{
public:

   explicit popdecr_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__POPODecKeyRespContent() : asn1::TaggingType<asn1::generated::POPODecKeyRespContent>(new asn1::generated::POPODecKeyRespContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(6);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "popdecr"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: kur_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__CertReqMessages
class kur_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__CertReqMessages : public asn1::TaggingType<asn1::generated::CertReqMessages>
{
public:

   explicit kur_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__CertReqMessages() : asn1::TaggingType<asn1::generated::CertReqMessages>(new asn1::generated::CertReqMessages)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "kur"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: kup_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__CertRepMessage
class kup_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__CertRepMessage : public asn1::TaggingType<asn1::generated::CertRepMessage>
{
public:

   explicit kup_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__CertRepMessage() : asn1::TaggingType<asn1::generated::CertRepMessage>(new asn1::generated::CertRepMessage)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(8);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "kup"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: krr_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__CertReqMessages
class krr_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__CertReqMessages : public asn1::TaggingType<asn1::generated::CertReqMessages>
{
public:

   explicit krr_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__CertReqMessages() : asn1::TaggingType<asn1::generated::CertReqMessages>(new asn1::generated::CertReqMessages)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(9);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "krr"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: newSigCert_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate
class newSigCert_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate : public asn1::TaggingType<asn1::generated::CMPCertificate>
{
public:

   explicit newSigCert_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate() : asn1::TaggingType<asn1::generated::CMPCertificate>(new asn1::generated::CMPCertificate)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "newSigCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: caCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate
class caCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate : public asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CMPCertificate>>
{
public:

   explicit caCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate() : asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CMPCertificate>>(new asn1::SequenceOfType<asn1::generated::CMPCertificate>(new asn1::generated::CMPCertificate))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "caCerts"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: keyPairHist_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertifiedKeyPair
class keyPairHist_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertifiedKeyPair : public asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CertifiedKeyPair>>
{
public:

   explicit keyPairHist_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertifiedKeyPair() : asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CertifiedKeyPair>>(new asn1::SequenceOfType<asn1::generated::CertifiedKeyPair>(new asn1::generated::CertifiedKeyPair))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyPairHist"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: KeyRecRepContent
class KeyRecRepContent : public asn1::SequenceType
{
public:

   explicit KeyRecRepContent()
   {
#if defined(ASN1_ENABLE_XER)
      _status_Type.setTypeName("status");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _newSigCert_Type.setTypeName("newSigCert");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _caCerts_Type.setTypeName("caCerts");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _keyPairHist_Type.setTypeName("keyPairHist");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef newSigCert_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CMPCertificate newSigCert_Type;
   typedef caCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate caCerts_Type;
   typedef keyPairHist_INTERNAL__NOTAG_2_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertifiedKeyPair keyPairHist_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _newSigCert_Present = false;
         _caCerts_Present = false;
         _keyPairHist_Present = false;
      }

      // Component: status
      void set_status(const asn1::generated::PKIStatusInfo::ValueType& v) { _status = v;  }
      void set_status(asn1::generated::PKIStatusInfo::ValueType&& v) { _status = std::move(v);  }
      const asn1::generated::PKIStatusInfo::ValueType& get_status() const { return _status; }
      asn1::generated::PKIStatusInfo::ValueType& get_status() { return _status; }

      // Component: newSigCert
      void set_newSigCert(const newSigCert_Type::ValueType& v) { _newSigCert = v; _newSigCert_Present = true; }
      void set_newSigCert(newSigCert_Type::ValueType&& v) { _newSigCert = std::move(v); _newSigCert_Present = true; }
      const newSigCert_Type::ValueType& get_newSigCert() const { return _newSigCert; }
      newSigCert_Type::ValueType& get_newSigCert() { return _newSigCert; }
      void set_newSigCert_Present(bool present = true) { _newSigCert_Present = present; }
      bool is_newSigCert_Present() const { return _newSigCert_Present; }


      // Component: caCerts
      void set_caCerts(const caCerts_Type::ValueType& v) { _caCerts = v; _caCerts_Present = true; }
      void set_caCerts(caCerts_Type::ValueType&& v) { _caCerts = std::move(v); _caCerts_Present = true; }
      const caCerts_Type::ValueType& get_caCerts() const { return _caCerts; }
      caCerts_Type::ValueType& get_caCerts() { return _caCerts; }
      void set_caCerts_Present(bool present = true) { _caCerts_Present = present; }
      bool is_caCerts_Present() const { return _caCerts_Present; }


      // Component: keyPairHist
      void set_keyPairHist(const keyPairHist_Type::ValueType& v) { _keyPairHist = v; _keyPairHist_Present = true; }
      void set_keyPairHist(keyPairHist_Type::ValueType&& v) { _keyPairHist = std::move(v); _keyPairHist_Present = true; }
      const keyPairHist_Type::ValueType& get_keyPairHist() const { return _keyPairHist; }
      keyPairHist_Type::ValueType& get_keyPairHist() { return _keyPairHist; }
      void set_keyPairHist_Present(bool present = true) { _keyPairHist_Present = present; }
      bool is_keyPairHist_Present() const { return _keyPairHist_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_status != other._status)
            return false;
         if (_newSigCert_Present != other._newSigCert_Present)
            return false;
         if (_newSigCert_Present && other._newSigCert_Present && _newSigCert != other._newSigCert)
            return false;
         if (_caCerts_Present != other._caCerts_Present)
            return false;
         if (_caCerts_Present && other._caCerts_Present && _caCerts != other._caCerts)
            return false;
         if (_keyPairHist_Present != other._keyPairHist_Present)
            return false;
         if (_keyPairHist_Present && other._keyPairHist_Present && _keyPairHist != other._keyPairHist)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PKIStatusInfo::ValueType _status;
      newSigCert_Type::ValueType _newSigCert;
      bool _newSigCert_Present;
      caCerts_Type::ValueType _caCerts;
      bool _caCerts_Present;
      keyPairHist_Type::ValueType _keyPairHist;
      bool _keyPairHist_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PKIStatusInfo _status_Type;
   newSigCert_Type _newSigCert_Type;
   caCerts_Type _caCerts_Type;
   keyPairHist_Type _keyPairHist_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "KeyRecRepContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: krp_INTERNAL__NOTAG_10_INTERNAL_asn1__generated__KeyRecRepContent
class krp_INTERNAL__NOTAG_10_INTERNAL_asn1__generated__KeyRecRepContent : public asn1::TaggingType<asn1::generated::KeyRecRepContent>
{
public:

   explicit krp_INTERNAL__NOTAG_10_INTERNAL_asn1__generated__KeyRecRepContent() : asn1::TaggingType<asn1::generated::KeyRecRepContent>(new asn1::generated::KeyRecRepContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(10);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "keyPairHist"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RevDetails
class RevDetails : public asn1::SequenceType
{
public:

   explicit RevDetails()
   {
#if defined(ASN1_ENABLE_XER)
      _certDetails_Type.setTypeName("certDetails");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _crlEntryDetails_Type.setTypeName("crlEntryDetails");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _crlEntryDetails_Present = false;
      }

      // Component: certDetails
      void set_certDetails(const asn1::generated::CertTemplate::ValueType& v) { _certDetails = v;  }
      void set_certDetails(asn1::generated::CertTemplate::ValueType&& v) { _certDetails = std::move(v);  }
      const asn1::generated::CertTemplate::ValueType& get_certDetails() const { return _certDetails; }
      asn1::generated::CertTemplate::ValueType& get_certDetails() { return _certDetails; }

      // Component: crlEntryDetails
      void set_crlEntryDetails(const asn1::generated::Extensions::ValueType& v) { _crlEntryDetails = v; _crlEntryDetails_Present = true; }
      void set_crlEntryDetails(asn1::generated::Extensions::ValueType&& v) { _crlEntryDetails = std::move(v); _crlEntryDetails_Present = true; }
      const asn1::generated::Extensions::ValueType& get_crlEntryDetails() const { return _crlEntryDetails; }
      asn1::generated::Extensions::ValueType& get_crlEntryDetails() { return _crlEntryDetails; }
      void set_crlEntryDetails_Present(bool present = true) { _crlEntryDetails_Present = present; }
      bool is_crlEntryDetails_Present() const { return _crlEntryDetails_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certDetails != other._certDetails)
            return false;
         if (_crlEntryDetails_Present != other._crlEntryDetails_Present)
            return false;
         if (_crlEntryDetails_Present && other._crlEntryDetails_Present && _crlEntryDetails != other._crlEntryDetails)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CertTemplate::ValueType _certDetails;
      asn1::generated::Extensions::ValueType _crlEntryDetails;
      bool _crlEntryDetails_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CertTemplate _certDetails_Type;
   asn1::generated::Extensions _crlEntryDetails_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RevDetails"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RevReqContent
class RevReqContent : public asn1::SequenceOfType<asn1::generated::RevDetails>
{
public:

   explicit RevReqContent() : asn1::SequenceOfType<asn1::generated::RevDetails>(new asn1::generated::RevDetails)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RevReqContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: rr_INTERNAL__NOTAG_11_INTERNAL_asn1__generated__RevReqContent
class rr_INTERNAL__NOTAG_11_INTERNAL_asn1__generated__RevReqContent : public asn1::TaggingType<asn1::generated::RevReqContent>
{
public:

   explicit rr_INTERNAL__NOTAG_11_INTERNAL_asn1__generated__RevReqContent() : asn1::TaggingType<asn1::generated::RevReqContent>(new asn1::generated::RevReqContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(11);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "rr"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: status_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PKIStatusInfo
class status_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PKIStatusInfo : public asn1::SequenceOfType<asn1::generated::PKIStatusInfo>
{
public:

   explicit status_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PKIStatusInfo() : asn1::SequenceOfType<asn1::generated::PKIStatusInfo>(new asn1::generated::PKIStatusInfo)
   {
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "status"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: revCerts_INTERNAL__NOTAG_0_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertId
class revCerts_INTERNAL__NOTAG_0_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertId : public asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CertId>>
{
public:

   explicit revCerts_INTERNAL__NOTAG_0_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertId() : asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CertId>>(new asn1::SequenceOfType<asn1::generated::CertId>(new asn1::generated::CertId))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "revCerts"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: crls_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertificateList
class crls_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertificateList : public asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CertificateList>>
{
public:

   explicit crls_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertificateList() : asn1::TaggingType<asn1::SequenceOfType<asn1::generated::CertificateList>>(new asn1::SequenceOfType<asn1::generated::CertificateList>(new asn1::generated::CertificateList))
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      innerType().setMinSize(1LL);
      innerType().setMaxSize(std::numeric_limits<ValueType::size_type>::max());
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "crls"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RevRepContent
class RevRepContent : public asn1::SequenceType
{
public:

   explicit RevRepContent()
   {
#if defined(ASN1_ENABLE_XER)
      _status_Type.setTypeName("status");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _revCerts_Type.setTypeName("revCerts");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _crls_Type.setTypeName("crls");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef status_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__PKIStatusInfo status_Type;
   typedef revCerts_INTERNAL__NOTAG_0_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertId revCerts_Type;
   typedef crls_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CertificateList crls_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _revCerts_Present = false;
         _crls_Present = false;
      }

      // Component: status
      void set_status(const status_Type::ValueType& v) { _status = v;  }
      void set_status(status_Type::ValueType&& v) { _status = std::move(v);  }
      const status_Type::ValueType& get_status() const { return _status; }
      status_Type::ValueType& get_status() { return _status; }

      // Component: revCerts
      void set_revCerts(const revCerts_Type::ValueType& v) { _revCerts = v; _revCerts_Present = true; }
      void set_revCerts(revCerts_Type::ValueType&& v) { _revCerts = std::move(v); _revCerts_Present = true; }
      const revCerts_Type::ValueType& get_revCerts() const { return _revCerts; }
      revCerts_Type::ValueType& get_revCerts() { return _revCerts; }
      void set_revCerts_Present(bool present = true) { _revCerts_Present = present; }
      bool is_revCerts_Present() const { return _revCerts_Present; }


      // Component: crls
      void set_crls(const crls_Type::ValueType& v) { _crls = v; _crls_Present = true; }
      void set_crls(crls_Type::ValueType&& v) { _crls = std::move(v); _crls_Present = true; }
      const crls_Type::ValueType& get_crls() const { return _crls; }
      crls_Type::ValueType& get_crls() { return _crls; }
      void set_crls_Present(bool present = true) { _crls_Present = present; }
      bool is_crls_Present() const { return _crls_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_status != other._status)
            return false;
         if (_revCerts_Present != other._revCerts_Present)
            return false;
         if (_revCerts_Present && other._revCerts_Present && _revCerts != other._revCerts)
            return false;
         if (_crls_Present != other._crls_Present)
            return false;
         if (_crls_Present && other._crls_Present && _crls != other._crls)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      status_Type::ValueType _status;
      revCerts_Type::ValueType _revCerts;
      bool _revCerts_Present;
      crls_Type::ValueType _crls;
      bool _crls_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   status_Type _status_Type;
   revCerts_Type _revCerts_Type;
   crls_Type _crls_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RevRepContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: rp_INTERNAL__NOTAG_12_INTERNAL_asn1__generated__RevRepContent
class rp_INTERNAL__NOTAG_12_INTERNAL_asn1__generated__RevRepContent : public asn1::TaggingType<asn1::generated::RevRepContent>
{
public:

   explicit rp_INTERNAL__NOTAG_12_INTERNAL_asn1__generated__RevRepContent() : asn1::TaggingType<asn1::generated::RevRepContent>(new asn1::generated::RevRepContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(12);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "crls"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ccr_INTERNAL__NOTAG_13_INTERNAL_asn1__generated__CertReqMessages
class ccr_INTERNAL__NOTAG_13_INTERNAL_asn1__generated__CertReqMessages : public asn1::TaggingType<asn1::generated::CertReqMessages>
{
public:

   explicit ccr_INTERNAL__NOTAG_13_INTERNAL_asn1__generated__CertReqMessages() : asn1::TaggingType<asn1::generated::CertReqMessages>(new asn1::generated::CertReqMessages)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(13);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ccr"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ccp_INTERNAL__NOTAG_14_INTERNAL_asn1__generated__CertRepMessage
class ccp_INTERNAL__NOTAG_14_INTERNAL_asn1__generated__CertRepMessage : public asn1::TaggingType<asn1::generated::CertRepMessage>
{
public:

   explicit ccp_INTERNAL__NOTAG_14_INTERNAL_asn1__generated__CertRepMessage() : asn1::TaggingType<asn1::generated::CertRepMessage>(new asn1::generated::CertRepMessage)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(14);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ccp"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIConfirmContent
class PKIConfirmContent : public asn1::NullType
{
public:

   explicit PKIConfirmContent()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIConfirmContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pkiconf_INTERNAL__NOTAG_19_INTERNAL_asn1__generated__PKIConfirmContent
class pkiconf_INTERNAL__NOTAG_19_INTERNAL_asn1__generated__PKIConfirmContent : public asn1::TaggingType<asn1::generated::PKIConfirmContent>
{
public:

   explicit pkiconf_INTERNAL__NOTAG_19_INTERNAL_asn1__generated__PKIConfirmContent() : asn1::TaggingType<asn1::generated::PKIConfirmContent>(new asn1::generated::PKIConfirmContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(19);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "pkiconf"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: GenMsgContent
class GenMsgContent : public asn1::SequenceOfType<asn1::generated::InfoTypeAndValue>
{
public:

   explicit GenMsgContent() : asn1::SequenceOfType<asn1::generated::InfoTypeAndValue>(new asn1::generated::InfoTypeAndValue)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "GenMsgContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: genm_INTERNAL__NOTAG_21_INTERNAL_asn1__generated__GenMsgContent
class genm_INTERNAL__NOTAG_21_INTERNAL_asn1__generated__GenMsgContent : public asn1::TaggingType<asn1::generated::GenMsgContent>
{
public:

   explicit genm_INTERNAL__NOTAG_21_INTERNAL_asn1__generated__GenMsgContent() : asn1::TaggingType<asn1::generated::GenMsgContent>(new asn1::generated::GenMsgContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(21);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "genm"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: GenRepContent
class GenRepContent : public asn1::SequenceOfType<asn1::generated::InfoTypeAndValue>
{
public:

   explicit GenRepContent() : asn1::SequenceOfType<asn1::generated::InfoTypeAndValue>(new asn1::generated::InfoTypeAndValue)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "GenRepContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: genp_INTERNAL__NOTAG_22_INTERNAL_asn1__generated__GenRepContent
class genp_INTERNAL__NOTAG_22_INTERNAL_asn1__generated__GenRepContent : public asn1::TaggingType<asn1::generated::GenRepContent>
{
public:

   explicit genp_INTERNAL__NOTAG_22_INTERNAL_asn1__generated__GenRepContent() : asn1::TaggingType<asn1::generated::GenRepContent>(new asn1::generated::GenRepContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(22);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "genp"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ErrorMsgContent
class ErrorMsgContent : public asn1::SequenceType
{
public:

   explicit ErrorMsgContent()
   {
#if defined(ASN1_ENABLE_XER)
      _pKIStatusInfo_Type.setTypeName("pKIStatusInfo");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _errorCode_Type.setTypeName("errorCode");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _errorDetails_Type.setTypeName("errorDetails");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _errorCode_Present = false;
         _errorDetails_Present = false;
      }

      // Component: pKIStatusInfo
      void set_pKIStatusInfo(const asn1::generated::PKIStatusInfo::ValueType& v) { _pKIStatusInfo = v;  }
      void set_pKIStatusInfo(asn1::generated::PKIStatusInfo::ValueType&& v) { _pKIStatusInfo = std::move(v);  }
      const asn1::generated::PKIStatusInfo::ValueType& get_pKIStatusInfo() const { return _pKIStatusInfo; }
      asn1::generated::PKIStatusInfo::ValueType& get_pKIStatusInfo() { return _pKIStatusInfo; }

      // Component: errorCode
      void set_errorCode(const asn1::IntegerType::ValueType& v) { _errorCode = v; _errorCode_Present = true; }
      void set_errorCode(asn1::IntegerType::ValueType&& v) { _errorCode = std::move(v); _errorCode_Present = true; }
      const asn1::IntegerType::ValueType& get_errorCode() const { return _errorCode; }
      asn1::IntegerType::ValueType& get_errorCode() { return _errorCode; }
      void set_errorCode_Present(bool present = true) { _errorCode_Present = present; }
      bool is_errorCode_Present() const { return _errorCode_Present; }


      // Component: errorDetails
      void set_errorDetails(const asn1::generated::PKIFreeText::ValueType& v) { _errorDetails = v; _errorDetails_Present = true; }
      void set_errorDetails(asn1::generated::PKIFreeText::ValueType&& v) { _errorDetails = std::move(v); _errorDetails_Present = true; }
      const asn1::generated::PKIFreeText::ValueType& get_errorDetails() const { return _errorDetails; }
      asn1::generated::PKIFreeText::ValueType& get_errorDetails() { return _errorDetails; }
      void set_errorDetails_Present(bool present = true) { _errorDetails_Present = present; }
      bool is_errorDetails_Present() const { return _errorDetails_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_pKIStatusInfo != other._pKIStatusInfo)
            return false;
         if (_errorCode_Present != other._errorCode_Present)
            return false;
         if (_errorCode_Present && other._errorCode_Present && _errorCode != other._errorCode)
            return false;
         if (_errorDetails_Present != other._errorDetails_Present)
            return false;
         if (_errorDetails_Present && other._errorDetails_Present && _errorDetails != other._errorDetails)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PKIStatusInfo::ValueType _pKIStatusInfo;
      asn1::IntegerType::ValueType _errorCode;
      bool _errorCode_Present;
      asn1::generated::PKIFreeText::ValueType _errorDetails;
      bool _errorDetails_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PKIStatusInfo _pKIStatusInfo_Type;
   asn1::IntegerType _errorCode_Type;
   asn1::generated::PKIFreeText _errorDetails_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ErrorMsgContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: error_INTERNAL__NOTAG_23_INTERNAL_asn1__generated__ErrorMsgContent
class error_INTERNAL__NOTAG_23_INTERNAL_asn1__generated__ErrorMsgContent : public asn1::TaggingType<asn1::generated::ErrorMsgContent>
{
public:

   explicit error_INTERNAL__NOTAG_23_INTERNAL_asn1__generated__ErrorMsgContent() : asn1::TaggingType<asn1::generated::ErrorMsgContent>(new asn1::generated::ErrorMsgContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(23);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "error"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertStatus
class CertStatus : public asn1::SequenceType
{
public:

   explicit CertStatus()
   {
#if defined(ASN1_ENABLE_XER)
      _certHash_Type.setTypeName("certHash");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certReqId_Type.setTypeName("certReqId");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _statusInfo_Type.setTypeName("statusInfo");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _statusInfo_Present = false;
      }

      // Component: certHash
      void set_certHash(const asn1::OctetStringType::ValueType& v) { _certHash = v;  }
      void set_certHash(asn1::OctetStringType::ValueType&& v) { _certHash = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_certHash() const { return _certHash; }
      asn1::OctetStringType::ValueType& get_certHash() { return _certHash; }

      // Component: certReqId
      void set_certReqId(const asn1::IntegerType::ValueType& v) { _certReqId = v;  }
      void set_certReqId(asn1::IntegerType::ValueType&& v) { _certReqId = std::move(v);  }
      const asn1::IntegerType::ValueType& get_certReqId() const { return _certReqId; }
      asn1::IntegerType::ValueType& get_certReqId() { return _certReqId; }

      // Component: statusInfo
      void set_statusInfo(const asn1::generated::PKIStatusInfo::ValueType& v) { _statusInfo = v; _statusInfo_Present = true; }
      void set_statusInfo(asn1::generated::PKIStatusInfo::ValueType&& v) { _statusInfo = std::move(v); _statusInfo_Present = true; }
      const asn1::generated::PKIStatusInfo::ValueType& get_statusInfo() const { return _statusInfo; }
      asn1::generated::PKIStatusInfo::ValueType& get_statusInfo() { return _statusInfo; }
      void set_statusInfo_Present(bool present = true) { _statusInfo_Present = present; }
      bool is_statusInfo_Present() const { return _statusInfo_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certHash != other._certHash)
            return false;
         if (_certReqId != other._certReqId)
            return false;
         if (_statusInfo_Present != other._statusInfo_Present)
            return false;
         if (_statusInfo_Present && other._statusInfo_Present && _statusInfo != other._statusInfo)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::OctetStringType::ValueType _certHash;
      asn1::IntegerType::ValueType _certReqId;
      asn1::generated::PKIStatusInfo::ValueType _statusInfo;
      bool _statusInfo_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::OctetStringType _certHash_Type;
   asn1::IntegerType _certReqId_Type;
   asn1::generated::PKIStatusInfo _statusInfo_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertStatus"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertConfirmContent
class CertConfirmContent : public asn1::SequenceOfType<asn1::generated::CertStatus>
{
public:

   explicit CertConfirmContent() : asn1::SequenceOfType<asn1::generated::CertStatus>(new asn1::generated::CertStatus)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertConfirmContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: certConf_INTERNAL__NOTAG_24_INTERNAL_asn1__generated__CertConfirmContent
class certConf_INTERNAL__NOTAG_24_INTERNAL_asn1__generated__CertConfirmContent : public asn1::TaggingType<asn1::generated::CertConfirmContent>
{
public:

   explicit certConf_INTERNAL__NOTAG_24_INTERNAL_asn1__generated__CertConfirmContent() : asn1::TaggingType<asn1::generated::CertConfirmContent>(new asn1::generated::CertConfirmContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(24);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "certConf"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType
class _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType : public asn1::SequenceType
{
public:

   explicit _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType()
   {
#if defined(ASN1_ENABLE_XER)
      _certReqId_Type.setTypeName("certReqId");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: certReqId
      void set_certReqId(const asn1::IntegerType::ValueType& v) { _certReqId = v;  }
      void set_certReqId(asn1::IntegerType::ValueType&& v) { _certReqId = std::move(v);  }
      const asn1::IntegerType::ValueType& get_certReqId() const { return _certReqId; }
      asn1::IntegerType::ValueType& get_certReqId() { return _certReqId; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certReqId != other._certReqId)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _certReqId;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _certReqId_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PollReqContent
class PollReqContent : public asn1::SequenceOfType<_INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType>
{
public:

   explicit PollReqContent() : asn1::SequenceOfType<_INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType>(new _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PollReqContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pollReq_INTERNAL__NOTAG_25_INTERNAL_asn1__generated__PollReqContent
class pollReq_INTERNAL__NOTAG_25_INTERNAL_asn1__generated__PollReqContent : public asn1::TaggingType<asn1::generated::PollReqContent>
{
public:

   explicit pollReq_INTERNAL__NOTAG_25_INTERNAL_asn1__generated__PollReqContent() : asn1::TaggingType<asn1::generated::PollReqContent>(new asn1::generated::PollReqContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(25);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText
class _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText : public asn1::SequenceType
{
public:

   explicit _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText()
   {
#if defined(ASN1_ENABLE_XER)
      _certReqId_Type.setTypeName("certReqId");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _checkAfter_Type.setTypeName("checkAfter");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _reason_Type.setTypeName("reason");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _reason_Present = false;
      }

      // Component: certReqId
      void set_certReqId(const asn1::IntegerType::ValueType& v) { _certReqId = v;  }
      void set_certReqId(asn1::IntegerType::ValueType&& v) { _certReqId = std::move(v);  }
      const asn1::IntegerType::ValueType& get_certReqId() const { return _certReqId; }
      asn1::IntegerType::ValueType& get_certReqId() { return _certReqId; }

      // Component: checkAfter
      void set_checkAfter(const asn1::IntegerType::ValueType& v) { _checkAfter = v;  }
      void set_checkAfter(asn1::IntegerType::ValueType&& v) { _checkAfter = std::move(v);  }
      const asn1::IntegerType::ValueType& get_checkAfter() const { return _checkAfter; }
      asn1::IntegerType::ValueType& get_checkAfter() { return _checkAfter; }

      // Component: reason
      void set_reason(const asn1::generated::PKIFreeText::ValueType& v) { _reason = v; _reason_Present = true; }
      void set_reason(asn1::generated::PKIFreeText::ValueType&& v) { _reason = std::move(v); _reason_Present = true; }
      const asn1::generated::PKIFreeText::ValueType& get_reason() const { return _reason; }
      asn1::generated::PKIFreeText::ValueType& get_reason() { return _reason; }
      void set_reason_Present(bool present = true) { _reason_Present = present; }
      bool is_reason_Present() const { return _reason_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_certReqId != other._certReqId)
            return false;
         if (_checkAfter != other._checkAfter)
            return false;
         if (_reason_Present != other._reason_Present)
            return false;
         if (_reason_Present && other._reason_Present && _reason != other._reason)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _certReqId;
      asn1::IntegerType::ValueType _checkAfter;
      asn1::generated::PKIFreeText::ValueType _reason;
      bool _reason_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _certReqId_Type;
   asn1::IntegerType _checkAfter_Type;
   asn1::generated::PKIFreeText _reason_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PollRepContent
class PollRepContent : public asn1::SequenceOfType<_INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText>
{
public:

   explicit PollRepContent() : asn1::SequenceOfType<_INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText>(new _INTERNAL__SequenceType_certReqIdcertReqId_INTERNAL_asn1__IntegerType_checkAftercheckAfter_INTERNAL_asn1__IntegerType_reasonreason_INTERNAL_asn1__generated__PKIFreeText)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PollRepContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: pollRep_INTERNAL__NOTAG_26_INTERNAL_asn1__generated__PollRepContent
class pollRep_INTERNAL__NOTAG_26_INTERNAL_asn1__generated__PollRepContent : public asn1::TaggingType<asn1::generated::PollRepContent>
{
public:

   explicit pollRep_INTERNAL__NOTAG_26_INTERNAL_asn1__generated__PollRepContent() : asn1::TaggingType<asn1::generated::PollRepContent>(new asn1::generated::PollRepContent)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(26);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SEQUENCE"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIBody
class PKIBody : public asn1::ChoiceType
{
public:

   explicit PKIBody()
   {
      _addChoice(&_ir_Type);
#if defined(ASN1_ENABLE_XER)
      _ir_Type.setTypeName("ir");
#endif // ASN1_ENABLE_XER
      _addChoice(&_ip_Type);
#if defined(ASN1_ENABLE_XER)
      _ip_Type.setTypeName("ip");
#endif // ASN1_ENABLE_XER
      _addChoice(&_cr_Type);
#if defined(ASN1_ENABLE_XER)
      _cr_Type.setTypeName("cr");
#endif // ASN1_ENABLE_XER
      _addChoice(&_cp_Type);
#if defined(ASN1_ENABLE_XER)
      _cp_Type.setTypeName("cp");
#endif // ASN1_ENABLE_XER
      _addChoice(&_p10cr_Type);
#if defined(ASN1_ENABLE_XER)
      _p10cr_Type.setTypeName("p10cr");
#endif // ASN1_ENABLE_XER
      _addChoice(&_popdecc_Type);
#if defined(ASN1_ENABLE_XER)
      _popdecc_Type.setTypeName("popdecc");
#endif // ASN1_ENABLE_XER
      _addChoice(&_popdecr_Type);
#if defined(ASN1_ENABLE_XER)
      _popdecr_Type.setTypeName("popdecr");
#endif // ASN1_ENABLE_XER
      _addChoice(&_kur_Type);
#if defined(ASN1_ENABLE_XER)
      _kur_Type.setTypeName("kur");
#endif // ASN1_ENABLE_XER
      _addChoice(&_kup_Type);
#if defined(ASN1_ENABLE_XER)
      _kup_Type.setTypeName("kup");
#endif // ASN1_ENABLE_XER
      _addChoice(&_krr_Type);
#if defined(ASN1_ENABLE_XER)
      _krr_Type.setTypeName("krr");
#endif // ASN1_ENABLE_XER
      _addChoice(&_krp_Type);
#if defined(ASN1_ENABLE_XER)
      _krp_Type.setTypeName("krp");
#endif // ASN1_ENABLE_XER
      _addChoice(&_rr_Type);
#if defined(ASN1_ENABLE_XER)
      _rr_Type.setTypeName("rr");
#endif // ASN1_ENABLE_XER
      _addChoice(&_rp_Type);
#if defined(ASN1_ENABLE_XER)
      _rp_Type.setTypeName("rp");
#endif // ASN1_ENABLE_XER
      _addChoice(&_ccr_Type);
#if defined(ASN1_ENABLE_XER)
      _ccr_Type.setTypeName("ccr");
#endif // ASN1_ENABLE_XER
      _addChoice(&_ccp_Type);
#if defined(ASN1_ENABLE_XER)
      _ccp_Type.setTypeName("ccp");
#endif // ASN1_ENABLE_XER
      _addChoice(&_pkiconf_Type);
#if defined(ASN1_ENABLE_XER)
      _pkiconf_Type.setTypeName("pkiconf");
#endif // ASN1_ENABLE_XER
      _addChoice(&_genm_Type);
#if defined(ASN1_ENABLE_XER)
      _genm_Type.setTypeName("genm");
#endif // ASN1_ENABLE_XER
      _addChoice(&_genp_Type);
#if defined(ASN1_ENABLE_XER)
      _genp_Type.setTypeName("genp");
#endif // ASN1_ENABLE_XER
      _addChoice(&_error_Type);
#if defined(ASN1_ENABLE_XER)
      _error_Type.setTypeName("error");
#endif // ASN1_ENABLE_XER
      _addChoice(&_certConf_Type);
#if defined(ASN1_ENABLE_XER)
      _certConf_Type.setTypeName("certConf");
#endif // ASN1_ENABLE_XER
      _addChoice(&_pollReq_Type);
#if defined(ASN1_ENABLE_XER)
      _pollReq_Type.setTypeName("pollReq");
#endif // ASN1_ENABLE_XER
      _addChoice(&_pollRep_Type);
#if defined(ASN1_ENABLE_XER)
      _pollRep_Type.setTypeName("pollRep");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef ir_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__CertReqMessages ir_Type;
   typedef ip_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertRepMessage ip_Type;
   typedef cr_INTERNAL__NOTAG_2_INTERNAL_asn1__generated__CertReqMessages cr_Type;
   typedef cp_INTERNAL__NOTAG_3_INTERNAL_asn1__generated__CertRepMessage cp_Type;
   typedef p10cr_INTERNAL__NOTAG_4_INTERNAL_asn1__generated__CertificationRequest p10cr_Type;
   typedef popdecc_INTERNAL__NOTAG_5_INTERNAL_asn1__generated__POPODecKeyChallContent popdecc_Type;
   typedef popdecr_INTERNAL__NOTAG_6_INTERNAL_asn1__generated__POPODecKeyRespContent popdecr_Type;
   typedef kur_INTERNAL__NOTAG_7_INTERNAL_asn1__generated__CertReqMessages kur_Type;
   typedef kup_INTERNAL__NOTAG_8_INTERNAL_asn1__generated__CertRepMessage kup_Type;
   typedef krr_INTERNAL__NOTAG_9_INTERNAL_asn1__generated__CertReqMessages krr_Type;
   typedef krp_INTERNAL__NOTAG_10_INTERNAL_asn1__generated__KeyRecRepContent krp_Type;
   typedef rr_INTERNAL__NOTAG_11_INTERNAL_asn1__generated__RevReqContent rr_Type;
   typedef rp_INTERNAL__NOTAG_12_INTERNAL_asn1__generated__RevRepContent rp_Type;
   typedef ccr_INTERNAL__NOTAG_13_INTERNAL_asn1__generated__CertReqMessages ccr_Type;
   typedef ccp_INTERNAL__NOTAG_14_INTERNAL_asn1__generated__CertRepMessage ccp_Type;
   typedef pkiconf_INTERNAL__NOTAG_19_INTERNAL_asn1__generated__PKIConfirmContent pkiconf_Type;
   typedef genm_INTERNAL__NOTAG_21_INTERNAL_asn1__generated__GenMsgContent genm_Type;
   typedef genp_INTERNAL__NOTAG_22_INTERNAL_asn1__generated__GenRepContent genp_Type;
   typedef error_INTERNAL__NOTAG_23_INTERNAL_asn1__generated__ErrorMsgContent error_Type;
   typedef certConf_INTERNAL__NOTAG_24_INTERNAL_asn1__generated__CertConfirmContent certConf_Type;
   typedef pollReq_INTERNAL__NOTAG_25_INTERNAL_asn1__generated__PollReqContent pollReq_Type;
   typedef pollRep_INTERNAL__NOTAG_26_INTERNAL_asn1__generated__PollRepContent pollRep_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: ir
      void set_ir(const ir_Type::ValueType& v) { _ir = v; _id = ir_ID; }
      void set_ir(ir_Type::ValueType&& v) { _ir = std::move(v); _id = ir_ID; }
      const ir_Type::ValueType& get_ir() const { assert(_id == ir_ID); return _ir; }
      ir_Type::ValueType& get_ir() { assert(_id == ir_ID); return _ir; }
      bool has_ir_Choosen() const { return _id == ir_ID; }
      void choose_ir() { _id = ir_ID; }

      // Alternative: ip
      void set_ip(const ip_Type::ValueType& v) { _ip = v; _id = ip_ID; }
      void set_ip(ip_Type::ValueType&& v) { _ip = std::move(v); _id = ip_ID; }
      const ip_Type::ValueType& get_ip() const { assert(_id == ip_ID); return _ip; }
      ip_Type::ValueType& get_ip() { assert(_id == ip_ID); return _ip; }
      bool has_ip_Choosen() const { return _id == ip_ID; }
      void choose_ip() { _id = ip_ID; }

      // Alternative: cr
      void set_cr(const cr_Type::ValueType& v) { _cr = v; _id = cr_ID; }
      void set_cr(cr_Type::ValueType&& v) { _cr = std::move(v); _id = cr_ID; }
      const cr_Type::ValueType& get_cr() const { assert(_id == cr_ID); return _cr; }
      cr_Type::ValueType& get_cr() { assert(_id == cr_ID); return _cr; }
      bool has_cr_Choosen() const { return _id == cr_ID; }
      void choose_cr() { _id = cr_ID; }

      // Alternative: cp
      void set_cp(const cp_Type::ValueType& v) { _cp = v; _id = cp_ID; }
      void set_cp(cp_Type::ValueType&& v) { _cp = std::move(v); _id = cp_ID; }
      const cp_Type::ValueType& get_cp() const { assert(_id == cp_ID); return _cp; }
      cp_Type::ValueType& get_cp() { assert(_id == cp_ID); return _cp; }
      bool has_cp_Choosen() const { return _id == cp_ID; }
      void choose_cp() { _id = cp_ID; }

      // Alternative: p10cr
      void set_p10cr(const p10cr_Type::ValueType& v) { _p10cr = v; _id = p10cr_ID; }
      void set_p10cr(p10cr_Type::ValueType&& v) { _p10cr = std::move(v); _id = p10cr_ID; }
      const p10cr_Type::ValueType& get_p10cr() const { assert(_id == p10cr_ID); return _p10cr; }
      p10cr_Type::ValueType& get_p10cr() { assert(_id == p10cr_ID); return _p10cr; }
      bool has_p10cr_Choosen() const { return _id == p10cr_ID; }
      void choose_p10cr() { _id = p10cr_ID; }

      // Alternative: popdecc
      void set_popdecc(const popdecc_Type::ValueType& v) { _popdecc = v; _id = popdecc_ID; }
      void set_popdecc(popdecc_Type::ValueType&& v) { _popdecc = std::move(v); _id = popdecc_ID; }
      const popdecc_Type::ValueType& get_popdecc() const { assert(_id == popdecc_ID); return _popdecc; }
      popdecc_Type::ValueType& get_popdecc() { assert(_id == popdecc_ID); return _popdecc; }
      bool has_popdecc_Choosen() const { return _id == popdecc_ID; }
      void choose_popdecc() { _id = popdecc_ID; }

      // Alternative: popdecr
      void set_popdecr(const popdecr_Type::ValueType& v) { _popdecr = v; _id = popdecr_ID; }
      void set_popdecr(popdecr_Type::ValueType&& v) { _popdecr = std::move(v); _id = popdecr_ID; }
      const popdecr_Type::ValueType& get_popdecr() const { assert(_id == popdecr_ID); return _popdecr; }
      popdecr_Type::ValueType& get_popdecr() { assert(_id == popdecr_ID); return _popdecr; }
      bool has_popdecr_Choosen() const { return _id == popdecr_ID; }
      void choose_popdecr() { _id = popdecr_ID; }

      // Alternative: kur
      void set_kur(const kur_Type::ValueType& v) { _kur = v; _id = kur_ID; }
      void set_kur(kur_Type::ValueType&& v) { _kur = std::move(v); _id = kur_ID; }
      const kur_Type::ValueType& get_kur() const { assert(_id == kur_ID); return _kur; }
      kur_Type::ValueType& get_kur() { assert(_id == kur_ID); return _kur; }
      bool has_kur_Choosen() const { return _id == kur_ID; }
      void choose_kur() { _id = kur_ID; }

      // Alternative: kup
      void set_kup(const kup_Type::ValueType& v) { _kup = v; _id = kup_ID; }
      void set_kup(kup_Type::ValueType&& v) { _kup = std::move(v); _id = kup_ID; }
      const kup_Type::ValueType& get_kup() const { assert(_id == kup_ID); return _kup; }
      kup_Type::ValueType& get_kup() { assert(_id == kup_ID); return _kup; }
      bool has_kup_Choosen() const { return _id == kup_ID; }
      void choose_kup() { _id = kup_ID; }

      // Alternative: krr
      void set_krr(const krr_Type::ValueType& v) { _krr = v; _id = krr_ID; }
      void set_krr(krr_Type::ValueType&& v) { _krr = std::move(v); _id = krr_ID; }
      const krr_Type::ValueType& get_krr() const { assert(_id == krr_ID); return _krr; }
      krr_Type::ValueType& get_krr() { assert(_id == krr_ID); return _krr; }
      bool has_krr_Choosen() const { return _id == krr_ID; }
      void choose_krr() { _id = krr_ID; }

      // Alternative: krp
      void set_krp(const krp_Type::ValueType& v) { _krp = v; _id = krp_ID; }
      void set_krp(krp_Type::ValueType&& v) { _krp = std::move(v); _id = krp_ID; }
      const krp_Type::ValueType& get_krp() const { assert(_id == krp_ID); return _krp; }
      krp_Type::ValueType& get_krp() { assert(_id == krp_ID); return _krp; }
      bool has_krp_Choosen() const { return _id == krp_ID; }
      void choose_krp() { _id = krp_ID; }

      // Alternative: rr
      void set_rr(const rr_Type::ValueType& v) { _rr = v; _id = rr_ID; }
      void set_rr(rr_Type::ValueType&& v) { _rr = std::move(v); _id = rr_ID; }
      const rr_Type::ValueType& get_rr() const { assert(_id == rr_ID); return _rr; }
      rr_Type::ValueType& get_rr() { assert(_id == rr_ID); return _rr; }
      bool has_rr_Choosen() const { return _id == rr_ID; }
      void choose_rr() { _id = rr_ID; }

      // Alternative: rp
      void set_rp(const rp_Type::ValueType& v) { _rp = v; _id = rp_ID; }
      void set_rp(rp_Type::ValueType&& v) { _rp = std::move(v); _id = rp_ID; }
      const rp_Type::ValueType& get_rp() const { assert(_id == rp_ID); return _rp; }
      rp_Type::ValueType& get_rp() { assert(_id == rp_ID); return _rp; }
      bool has_rp_Choosen() const { return _id == rp_ID; }
      void choose_rp() { _id = rp_ID; }

      // Alternative: ccr
      void set_ccr(const ccr_Type::ValueType& v) { _ccr = v; _id = ccr_ID; }
      void set_ccr(ccr_Type::ValueType&& v) { _ccr = std::move(v); _id = ccr_ID; }
      const ccr_Type::ValueType& get_ccr() const { assert(_id == ccr_ID); return _ccr; }
      ccr_Type::ValueType& get_ccr() { assert(_id == ccr_ID); return _ccr; }
      bool has_ccr_Choosen() const { return _id == ccr_ID; }
      void choose_ccr() { _id = ccr_ID; }

      // Alternative: ccp
      void set_ccp(const ccp_Type::ValueType& v) { _ccp = v; _id = ccp_ID; }
      void set_ccp(ccp_Type::ValueType&& v) { _ccp = std::move(v); _id = ccp_ID; }
      const ccp_Type::ValueType& get_ccp() const { assert(_id == ccp_ID); return _ccp; }
      ccp_Type::ValueType& get_ccp() { assert(_id == ccp_ID); return _ccp; }
      bool has_ccp_Choosen() const { return _id == ccp_ID; }
      void choose_ccp() { _id = ccp_ID; }

      // Alternative: pkiconf
      void set_pkiconf(const pkiconf_Type::ValueType& v) { _pkiconf = v; _id = pkiconf_ID; }
      void set_pkiconf(pkiconf_Type::ValueType&& v) { _pkiconf = std::move(v); _id = pkiconf_ID; }
      const pkiconf_Type::ValueType& get_pkiconf() const { assert(_id == pkiconf_ID); return _pkiconf; }
      pkiconf_Type::ValueType& get_pkiconf() { assert(_id == pkiconf_ID); return _pkiconf; }
      bool has_pkiconf_Choosen() const { return _id == pkiconf_ID; }
      void choose_pkiconf() { _id = pkiconf_ID; }

      // Alternative: genm
      void set_genm(const genm_Type::ValueType& v) { _genm = v; _id = genm_ID; }
      void set_genm(genm_Type::ValueType&& v) { _genm = std::move(v); _id = genm_ID; }
      const genm_Type::ValueType& get_genm() const { assert(_id == genm_ID); return _genm; }
      genm_Type::ValueType& get_genm() { assert(_id == genm_ID); return _genm; }
      bool has_genm_Choosen() const { return _id == genm_ID; }
      void choose_genm() { _id = genm_ID; }

      // Alternative: genp
      void set_genp(const genp_Type::ValueType& v) { _genp = v; _id = genp_ID; }
      void set_genp(genp_Type::ValueType&& v) { _genp = std::move(v); _id = genp_ID; }
      const genp_Type::ValueType& get_genp() const { assert(_id == genp_ID); return _genp; }
      genp_Type::ValueType& get_genp() { assert(_id == genp_ID); return _genp; }
      bool has_genp_Choosen() const { return _id == genp_ID; }
      void choose_genp() { _id = genp_ID; }

      // Alternative: error
      void set_error(const error_Type::ValueType& v) { _error = v; _id = error_ID; }
      void set_error(error_Type::ValueType&& v) { _error = std::move(v); _id = error_ID; }
      const error_Type::ValueType& get_error() const { assert(_id == error_ID); return _error; }
      error_Type::ValueType& get_error() { assert(_id == error_ID); return _error; }
      bool has_error_Choosen() const { return _id == error_ID; }
      void choose_error() { _id = error_ID; }

      // Alternative: certConf
      void set_certConf(const certConf_Type::ValueType& v) { _certConf = v; _id = certConf_ID; }
      void set_certConf(certConf_Type::ValueType&& v) { _certConf = std::move(v); _id = certConf_ID; }
      const certConf_Type::ValueType& get_certConf() const { assert(_id == certConf_ID); return _certConf; }
      certConf_Type::ValueType& get_certConf() { assert(_id == certConf_ID); return _certConf; }
      bool has_certConf_Choosen() const { return _id == certConf_ID; }
      void choose_certConf() { _id = certConf_ID; }

      // Alternative: pollReq
      void set_pollReq(const pollReq_Type::ValueType& v) { _pollReq = v; _id = pollReq_ID; }
      void set_pollReq(pollReq_Type::ValueType&& v) { _pollReq = std::move(v); _id = pollReq_ID; }
      const pollReq_Type::ValueType& get_pollReq() const { assert(_id == pollReq_ID); return _pollReq; }
      pollReq_Type::ValueType& get_pollReq() { assert(_id == pollReq_ID); return _pollReq; }
      bool has_pollReq_Choosen() const { return _id == pollReq_ID; }
      void choose_pollReq() { _id = pollReq_ID; }

      // Alternative: pollRep
      void set_pollRep(const pollRep_Type::ValueType& v) { _pollRep = v; _id = pollRep_ID; }
      void set_pollRep(pollRep_Type::ValueType&& v) { _pollRep = std::move(v); _id = pollRep_ID; }
      const pollRep_Type::ValueType& get_pollRep() const { assert(_id == pollRep_ID); return _pollRep; }
      pollRep_Type::ValueType& get_pollRep() { assert(_id == pollRep_ID); return _pollRep; }
      bool has_pollRep_Choosen() const { return _id == pollRep_ID; }
      void choose_pollRep() { _id = pollRep_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case ir_ID:
            if (_ir != other._ir)
               return false;
            break;
         case ip_ID:
            if (_ip != other._ip)
               return false;
            break;
         case cr_ID:
            if (_cr != other._cr)
               return false;
            break;
         case cp_ID:
            if (_cp != other._cp)
               return false;
            break;
         case p10cr_ID:
            if (_p10cr != other._p10cr)
               return false;
            break;
         case popdecc_ID:
            if (_popdecc != other._popdecc)
               return false;
            break;
         case popdecr_ID:
            if (_popdecr != other._popdecr)
               return false;
            break;
         case kur_ID:
            if (_kur != other._kur)
               return false;
            break;
         case kup_ID:
            if (_kup != other._kup)
               return false;
            break;
         case krr_ID:
            if (_krr != other._krr)
               return false;
            break;
         case krp_ID:
            if (_krp != other._krp)
               return false;
            break;
         case rr_ID:
            if (_rr != other._rr)
               return false;
            break;
         case rp_ID:
            if (_rp != other._rp)
               return false;
            break;
         case ccr_ID:
            if (_ccr != other._ccr)
               return false;
            break;
         case ccp_ID:
            if (_ccp != other._ccp)
               return false;
            break;
         case pkiconf_ID:
            if (_pkiconf != other._pkiconf)
               return false;
            break;
         case genm_ID:
            if (_genm != other._genm)
               return false;
            break;
         case genp_ID:
            if (_genp != other._genp)
               return false;
            break;
         case error_ID:
            if (_error != other._error)
               return false;
            break;
         case certConf_ID:
            if (_certConf != other._certConf)
               return false;
            break;
         case pollReq_ID:
            if (_pollReq != other._pollReq)
               return false;
            break;
         case pollRep_ID:
            if (_pollRep != other._pollRep)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const ChoiceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         ir_ID = 1,
         ip_ID = 2,
         cr_ID = 3,
         cp_ID = 4,
         p10cr_ID = 5,
         popdecc_ID = 6,
         popdecr_ID = 7,
         kur_ID = 8,
         kup_ID = 9,
         krr_ID = 10,
         krp_ID = 11,
         rr_ID = 12,
         rp_ID = 13,
         ccr_ID = 14,
         ccp_ID = 15,
         pkiconf_ID = 16,
         genm_ID = 17,
         genp_ID = 18,
         error_ID = 19,
         certConf_ID = 20,
         pollReq_ID = 21,
         pollRep_ID = 22,
         __VALUE_NOT_DEFINED__ = -1
      };

      ir_Type::ValueType _ir;
      ip_Type::ValueType _ip;
      cr_Type::ValueType _cr;
      cp_Type::ValueType _cp;
      p10cr_Type::ValueType _p10cr;
      popdecc_Type::ValueType _popdecc;
      popdecr_Type::ValueType _popdecr;
      kur_Type::ValueType _kur;
      kup_Type::ValueType _kup;
      krr_Type::ValueType _krr;
      krp_Type::ValueType _krp;
      rr_Type::ValueType _rr;
      rp_Type::ValueType _rp;
      ccr_Type::ValueType _ccr;
      ccp_Type::ValueType _ccp;
      pkiconf_Type::ValueType _pkiconf;
      genm_Type::ValueType _genm;
      genp_Type::ValueType _genp;
      error_Type::ValueType _error;
      certConf_Type::ValueType _certConf;
      pollReq_Type::ValueType _pollReq;
      pollRep_Type::ValueType _pollRep;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   ir_Type _ir_Type;
   ip_Type _ip_Type;
   cr_Type _cr_Type;
   cp_Type _cp_Type;
   p10cr_Type _p10cr_Type;
   popdecc_Type _popdecc_Type;
   popdecr_Type _popdecr_Type;
   kur_Type _kur_Type;
   kup_Type _kup_Type;
   krr_Type _krr_Type;
   krp_Type _krp_Type;
   rr_Type _rr_Type;
   rp_Type _rp_Type;
   ccr_Type _ccr_Type;
   ccp_Type _ccp_Type;
   pkiconf_Type _pkiconf_Type;
   genm_Type _genm_Type;
   genp_Type _genp_Type;
   error_Type _error_Type;
   certConf_Type _certConf_Type;
   pollReq_Type _pollReq_Type;
   pollRep_Type _pollRep_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIBody"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIMessage
class PKIMessage : public asn1::SequenceType
{
public:

   explicit PKIMessage()
   {
#if defined(ASN1_ENABLE_XER)
      _header_Type.setTypeName("header");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _body_Type.setTypeName("body");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _protection_Type.setTypeName("protection");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _extraCerts_Type.setTypeName("extraCerts");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef protection_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__PKIProtection protection_Type;
   typedef extraCerts_INTERNAL__NOTAG_1_INTERNAL__SequenceOfType_INTERNAL_asn1__generated__CMPCertificate extraCerts_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _protection_Present = false;
         _extraCerts_Present = false;
      }

      // Component: header
      void set_header(const asn1::generated::PKIHeader::ValueType& v) { _header = v;  }
      void set_header(asn1::generated::PKIHeader::ValueType&& v) { _header = std::move(v);  }
      const asn1::generated::PKIHeader::ValueType& get_header() const { return _header; }
      asn1::generated::PKIHeader::ValueType& get_header() { return _header; }

      // Component: body
      void set_body(const asn1::generated::PKIBody::ValueType& v) { _body = v;  }
      void set_body(asn1::generated::PKIBody::ValueType&& v) { _body = std::move(v);  }
      const asn1::generated::PKIBody::ValueType& get_body() const { return _body; }
      asn1::generated::PKIBody::ValueType& get_body() { return _body; }

      // Component: protection
      void set_protection(const protection_Type::ValueType& v) { _protection = v; _protection_Present = true; }
      void set_protection(protection_Type::ValueType&& v) { _protection = std::move(v); _protection_Present = true; }
      const protection_Type::ValueType& get_protection() const { return _protection; }
      protection_Type::ValueType& get_protection() { return _protection; }
      void set_protection_Present(bool present = true) { _protection_Present = present; }
      bool is_protection_Present() const { return _protection_Present; }


      // Component: extraCerts
      void set_extraCerts(const extraCerts_Type::ValueType& v) { _extraCerts = v; _extraCerts_Present = true; }
      void set_extraCerts(extraCerts_Type::ValueType&& v) { _extraCerts = std::move(v); _extraCerts_Present = true; }
      const extraCerts_Type::ValueType& get_extraCerts() const { return _extraCerts; }
      extraCerts_Type::ValueType& get_extraCerts() { return _extraCerts; }
      void set_extraCerts_Present(bool present = true) { _extraCerts_Present = present; }
      bool is_extraCerts_Present() const { return _extraCerts_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_header != other._header)
            return false;
         if (_body != other._body)
            return false;
         if (_protection_Present != other._protection_Present)
            return false;
         if (_protection_Present && other._protection_Present && _protection != other._protection)
            return false;
         if (_extraCerts_Present != other._extraCerts_Present)
            return false;
         if (_extraCerts_Present && other._extraCerts_Present && _extraCerts != other._extraCerts)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PKIHeader::ValueType _header;
      asn1::generated::PKIBody::ValueType _body;
      protection_Type::ValueType _protection;
      bool _protection_Present;
      extraCerts_Type::ValueType _extraCerts;
      bool _extraCerts_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PKIHeader _header_Type;
   asn1::generated::PKIBody _body_Type;
   protection_Type _protection_Type;
   extraCerts_Type _extraCerts_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIMessage"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PKIMessages
class PKIMessages : public asn1::SequenceOfType<asn1::generated::PKIMessage>
{
public:

   explicit PKIMessages() : asn1::SequenceOfType<asn1::generated::PKIMessage>(new asn1::generated::PKIMessage)
   {
      setMinSize(1LL);
      setMaxSize(std::numeric_limits<ValueType::size_type>::max());
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PKIMessages"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ProtectedPart
class ProtectedPart : public asn1::SequenceType
{
public:

   explicit ProtectedPart()
   {
#if defined(ASN1_ENABLE_XER)
      _header_Type.setTypeName("header");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _body_Type.setTypeName("body");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: header
      void set_header(const asn1::generated::PKIHeader::ValueType& v) { _header = v;  }
      void set_header(asn1::generated::PKIHeader::ValueType&& v) { _header = std::move(v);  }
      const asn1::generated::PKIHeader::ValueType& get_header() const { return _header; }
      asn1::generated::PKIHeader::ValueType& get_header() { return _header; }

      // Component: body
      void set_body(const asn1::generated::PKIBody::ValueType& v) { _body = v;  }
      void set_body(asn1::generated::PKIBody::ValueType&& v) { _body = std::move(v);  }
      const asn1::generated::PKIBody::ValueType& get_body() const { return _body; }
      asn1::generated::PKIBody::ValueType& get_body() { return _body; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_header != other._header)
            return false;
         if (_body != other._body)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PKIHeader::ValueType _header;
      asn1::generated::PKIBody::ValueType _body;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PKIHeader _header_Type;
   asn1::generated::PKIBody _body_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ProtectedPart"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PBMParameter
class PBMParameter : public asn1::SequenceType
{
public:

   explicit PBMParameter()
   {
#if defined(ASN1_ENABLE_XER)
      _salt_Type.setTypeName("salt");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _owf_Type.setTypeName("owf");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _iterationCount_Type.setTypeName("iterationCount");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _mac_Type.setTypeName("mac");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: salt
      void set_salt(const asn1::OctetStringType::ValueType& v) { _salt = v;  }
      void set_salt(asn1::OctetStringType::ValueType&& v) { _salt = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_salt() const { return _salt; }
      asn1::OctetStringType::ValueType& get_salt() { return _salt; }

      // Component: owf
      void set_owf(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _owf = v;  }
      void set_owf(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _owf = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_owf() const { return _owf; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_owf() { return _owf; }

      // Component: iterationCount
      void set_iterationCount(const asn1::IntegerType::ValueType& v) { _iterationCount = v;  }
      void set_iterationCount(asn1::IntegerType::ValueType&& v) { _iterationCount = std::move(v);  }
      const asn1::IntegerType::ValueType& get_iterationCount() const { return _iterationCount; }
      asn1::IntegerType::ValueType& get_iterationCount() { return _iterationCount; }

      // Component: mac
      void set_mac(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _mac = v;  }
      void set_mac(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _mac = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_mac() const { return _mac; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_mac() { return _mac; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_salt != other._salt)
            return false;
         if (_owf != other._owf)
            return false;
         if (_iterationCount != other._iterationCount)
            return false;
         if (_mac != other._mac)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::OctetStringType::ValueType _salt;
      asn1::generated::AlgorithmIdentifier::ValueType _owf;
      asn1::IntegerType::ValueType _iterationCount;
      asn1::generated::AlgorithmIdentifier::ValueType _mac;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::OctetStringType _salt_Type;
   asn1::generated::AlgorithmIdentifier _owf_Type;
   asn1::IntegerType _iterationCount_Type;
   asn1::generated::AlgorithmIdentifier _mac_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PBMParameter"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: DHBMParameter
class DHBMParameter : public asn1::SequenceType
{
public:

   explicit DHBMParameter()
   {
#if defined(ASN1_ENABLE_XER)
      _owf_Type.setTypeName("owf");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _mac_Type.setTypeName("mac");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: owf
      void set_owf(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _owf = v;  }
      void set_owf(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _owf = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_owf() const { return _owf; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_owf() { return _owf; }

      // Component: mac
      void set_mac(const asn1::generated::AlgorithmIdentifier::ValueType& v) { _mac = v;  }
      void set_mac(asn1::generated::AlgorithmIdentifier::ValueType&& v) { _mac = std::move(v);  }
      const asn1::generated::AlgorithmIdentifier::ValueType& get_mac() const { return _mac; }
      asn1::generated::AlgorithmIdentifier::ValueType& get_mac() { return _mac; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_owf != other._owf)
            return false;
         if (_mac != other._mac)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::AlgorithmIdentifier::ValueType _owf;
      asn1::generated::AlgorithmIdentifier::ValueType _mac;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::AlgorithmIdentifier _owf_Type;
   asn1::generated::AlgorithmIdentifier _mac_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "DHBMParameter"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: NestedMessageContent
class NestedMessageContent : public asn1::generated::PKIMessages
{
public:

   explicit NestedMessageContent()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "NestedMessageContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OOBCert
class OOBCert : public asn1::generated::CMPCertificate
{
public:

   explicit OOBCert()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OOBCert"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: hashAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier
class hashAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier : public asn1::TaggingType<asn1::generated::AlgorithmIdentifier>
{
public:

   explicit hashAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier() : asn1::TaggingType<asn1::generated::AlgorithmIdentifier>(new asn1::generated::AlgorithmIdentifier)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "hashAlg"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: certId_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertId
class certId_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertId : public asn1::TaggingType<asn1::generated::CertId>
{
public:

   explicit certId_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertId() : asn1::TaggingType<asn1::generated::CertId>(new asn1::generated::CertId)
   {
      setTagging(Type::EXPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "certId"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: OOBCertHash
class OOBCertHash : public asn1::SequenceType
{
public:

   explicit OOBCertHash()
   {
#if defined(ASN1_ENABLE_XER)
      _hashAlg_Type.setTypeName("hashAlg");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certId_Type.setTypeName("certId");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _hashVal_Type.setTypeName("hashVal");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef hashAlg_INTERNAL__NOTAG_0_INTERNAL_asn1__generated__AlgorithmIdentifier hashAlg_Type;
   typedef certId_INTERNAL__NOTAG_1_INTERNAL_asn1__generated__CertId certId_Type;

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _hashAlg_Present = false;
         _certId_Present = false;
      }

      // Component: hashAlg
      void set_hashAlg(const hashAlg_Type::ValueType& v) { _hashAlg = v; _hashAlg_Present = true; }
      void set_hashAlg(hashAlg_Type::ValueType&& v) { _hashAlg = std::move(v); _hashAlg_Present = true; }
      const hashAlg_Type::ValueType& get_hashAlg() const { return _hashAlg; }
      hashAlg_Type::ValueType& get_hashAlg() { return _hashAlg; }
      void set_hashAlg_Present(bool present = true) { _hashAlg_Present = present; }
      bool is_hashAlg_Present() const { return _hashAlg_Present; }


      // Component: certId
      void set_certId(const certId_Type::ValueType& v) { _certId = v; _certId_Present = true; }
      void set_certId(certId_Type::ValueType&& v) { _certId = std::move(v); _certId_Present = true; }
      const certId_Type::ValueType& get_certId() const { return _certId; }
      certId_Type::ValueType& get_certId() { return _certId; }
      void set_certId_Present(bool present = true) { _certId_Present = present; }
      bool is_certId_Present() const { return _certId_Present; }


      // Component: hashVal
      void set_hashVal(const asn1::BitStringType::ValueType& v) { _hashVal = v;  }
      void set_hashVal(asn1::BitStringType::ValueType&& v) { _hashVal = std::move(v);  }
      const asn1::BitStringType::ValueType& get_hashVal() const { return _hashVal; }
      asn1::BitStringType::ValueType& get_hashVal() { return _hashVal; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_hashAlg_Present != other._hashAlg_Present)
            return false;
         if (_hashAlg_Present && other._hashAlg_Present && _hashAlg != other._hashAlg)
            return false;
         if (_certId_Present != other._certId_Present)
            return false;
         if (_certId_Present && other._certId_Present && _certId != other._certId)
            return false;
         if (_hashVal != other._hashVal)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      hashAlg_Type::ValueType _hashAlg;
      bool _hashAlg_Present;
      certId_Type::ValueType _certId;
      bool _certId_Present;
      asn1::BitStringType::ValueType _hashVal;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   hashAlg_Type _hashAlg_Type;
   certId_Type _certId_Type;
   asn1::BitStringType _hashVal_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "OOBCertHash"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CAKeyUpdAnnContent
class CAKeyUpdAnnContent : public asn1::SequenceType
{
public:

   explicit CAKeyUpdAnnContent()
   {
#if defined(ASN1_ENABLE_XER)
      _oldWithNew_Type.setTypeName("oldWithNew");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _newWithOld_Type.setTypeName("newWithOld");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _newWithNew_Type.setTypeName("newWithNew");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: oldWithNew
      void set_oldWithNew(const asn1::generated::CMPCertificate::ValueType& v) { _oldWithNew = v;  }
      void set_oldWithNew(asn1::generated::CMPCertificate::ValueType&& v) { _oldWithNew = std::move(v);  }
      const asn1::generated::CMPCertificate::ValueType& get_oldWithNew() const { return _oldWithNew; }
      asn1::generated::CMPCertificate::ValueType& get_oldWithNew() { return _oldWithNew; }

      // Component: newWithOld
      void set_newWithOld(const asn1::generated::CMPCertificate::ValueType& v) { _newWithOld = v;  }
      void set_newWithOld(asn1::generated::CMPCertificate::ValueType&& v) { _newWithOld = std::move(v);  }
      const asn1::generated::CMPCertificate::ValueType& get_newWithOld() const { return _newWithOld; }
      asn1::generated::CMPCertificate::ValueType& get_newWithOld() { return _newWithOld; }

      // Component: newWithNew
      void set_newWithNew(const asn1::generated::CMPCertificate::ValueType& v) { _newWithNew = v;  }
      void set_newWithNew(asn1::generated::CMPCertificate::ValueType&& v) { _newWithNew = std::move(v);  }
      const asn1::generated::CMPCertificate::ValueType& get_newWithNew() const { return _newWithNew; }
      asn1::generated::CMPCertificate::ValueType& get_newWithNew() { return _newWithNew; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_oldWithNew != other._oldWithNew)
            return false;
         if (_newWithOld != other._newWithOld)
            return false;
         if (_newWithNew != other._newWithNew)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::CMPCertificate::ValueType _oldWithNew;
      asn1::generated::CMPCertificate::ValueType _newWithOld;
      asn1::generated::CMPCertificate::ValueType _newWithNew;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::CMPCertificate _oldWithNew_Type;
   asn1::generated::CMPCertificate _newWithOld_Type;
   asn1::generated::CMPCertificate _newWithNew_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CAKeyUpdAnnContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CertAnnContent
class CertAnnContent : public asn1::generated::CMPCertificate
{
public:

   explicit CertAnnContent()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CertAnnContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: RevAnnContent
class RevAnnContent : public asn1::SequenceType
{
public:

   explicit RevAnnContent()
   {
#if defined(ASN1_ENABLE_XER)
      _status_Type.setTypeName("status");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _certId_Type.setTypeName("certId");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _willBeRevokedAt_Type.setTypeName("willBeRevokedAt");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _badSinceDate_Type.setTypeName("badSinceDate");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _crlDetails_Type.setTypeName("crlDetails");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type()
      {
         _crlDetails_Present = false;
      }

      // Component: status
      void set_status(const asn1::generated::PKIStatus::ValueType& v) { _status = v;  }
      void set_status(asn1::generated::PKIStatus::ValueType&& v) { _status = std::move(v);  }
      const asn1::generated::PKIStatus::ValueType& get_status() const { return _status; }
      asn1::generated::PKIStatus::ValueType& get_status() { return _status; }

      // Component: certId
      void set_certId(const asn1::generated::CertId::ValueType& v) { _certId = v;  }
      void set_certId(asn1::generated::CertId::ValueType&& v) { _certId = std::move(v);  }
      const asn1::generated::CertId::ValueType& get_certId() const { return _certId; }
      asn1::generated::CertId::ValueType& get_certId() { return _certId; }

      // Component: willBeRevokedAt
      void set_willBeRevokedAt(const asn1::GeneralizedTimeType::ValueType& v) { _willBeRevokedAt = v;  }
      void set_willBeRevokedAt(asn1::GeneralizedTimeType::ValueType&& v) { _willBeRevokedAt = std::move(v);  }
      const asn1::GeneralizedTimeType::ValueType& get_willBeRevokedAt() const { return _willBeRevokedAt; }
      asn1::GeneralizedTimeType::ValueType& get_willBeRevokedAt() { return _willBeRevokedAt; }

      // Component: badSinceDate
      void set_badSinceDate(const asn1::GeneralizedTimeType::ValueType& v) { _badSinceDate = v;  }
      void set_badSinceDate(asn1::GeneralizedTimeType::ValueType&& v) { _badSinceDate = std::move(v);  }
      const asn1::GeneralizedTimeType::ValueType& get_badSinceDate() const { return _badSinceDate; }
      asn1::GeneralizedTimeType::ValueType& get_badSinceDate() { return _badSinceDate; }

      // Component: crlDetails
      void set_crlDetails(const asn1::generated::Extensions::ValueType& v) { _crlDetails = v; _crlDetails_Present = true; }
      void set_crlDetails(asn1::generated::Extensions::ValueType&& v) { _crlDetails = std::move(v); _crlDetails_Present = true; }
      const asn1::generated::Extensions::ValueType& get_crlDetails() const { return _crlDetails; }
      asn1::generated::Extensions::ValueType& get_crlDetails() { return _crlDetails; }
      void set_crlDetails_Present(bool present = true) { _crlDetails_Present = present; }
      bool is_crlDetails_Present() const { return _crlDetails_Present; }


      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_status != other._status)
            return false;
         if (_certId != other._certId)
            return false;
         if (_willBeRevokedAt != other._willBeRevokedAt)
            return false;
         if (_badSinceDate != other._badSinceDate)
            return false;
         if (_crlDetails_Present != other._crlDetails_Present)
            return false;
         if (_crlDetails_Present && other._crlDetails_Present && _crlDetails != other._crlDetails)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::PKIStatus::ValueType _status;
      asn1::generated::CertId::ValueType _certId;
      asn1::GeneralizedTimeType::ValueType _willBeRevokedAt;
      asn1::GeneralizedTimeType::ValueType _badSinceDate;
      asn1::generated::Extensions::ValueType _crlDetails;
      bool _crlDetails_Present;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::PKIStatus _status_Type;
   asn1::generated::CertId _certId_Type;
   asn1::GeneralizedTimeType _willBeRevokedAt_Type;
   asn1::GeneralizedTimeType _badSinceDate_Type;
   asn1::generated::Extensions _crlDetails_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "RevAnnContent"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: CRLAnnContent
class CRLAnnContent : public asn1::SequenceOfType<asn1::generated::CertificateList>
{
public:

   explicit CRLAnnContent() : asn1::SequenceOfType<asn1::generated::CertificateList>(new asn1::generated::CertificateList)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "CRLAnnContent"; }
#endif // ASN1_ENABLE_XER

};

}

}

#endif // __ASN1_TYPES_HH
