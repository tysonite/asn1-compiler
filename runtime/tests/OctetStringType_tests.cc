namespace octetstringtype_tests
{

BOOST_AUTO_TEST_CASE(OctetStringType_CheckType_Correct)
{
	asn1::OctetStringType type;
	asn1::OctetStringType::ValueType value("abcd");

	type.addSize(0, 5);
	BOOST_CHECK_NO_THROW(type.checkType(value));
}

BOOST_AUTO_TEST_CASE(OctetStringType_CheckType_MultipleSizes_Correct)
{
	asn1::OctetStringType type;
	asn1::OctetStringType::ValueType value("abcd");

	type.addSize(3, 10);
   type.addSize(1, 5);
   BOOST_CHECK_NO_THROW(type.checkType(value));
}

BOOST_AUTO_TEST_CASE(OctetStringType_CheckType_MultipleSizes_Incorrect)
{
	asn1::OctetStringType type;
	asn1::OctetStringType::ValueType value("abcd");

	type.addSize(0, 5);
   type.addSize(2, 3);
   BOOST_CHECK_THROW(type.checkType(value), asn1::ASN1Exception);
}

BOOST_AUTO_TEST_CASE(OctetStringType_CheckType_SizeEqual)
{
	asn1::OctetStringType type;
	asn1::OctetStringType::ValueType value("abc");

	type.addSize(3, 3);
	BOOST_CHECK_NO_THROW(type.checkType(value));
}

BOOST_AUTO_TEST_CASE(OctetStringType_CheckType_SizeNotEqual)
{
	asn1::OctetStringType type;
	asn1::OctetStringType::ValueType value("abcedfg");

	type.addSize(3, 3);
	BOOST_CHECK_THROW(type.checkType(value), asn1::ASN1Exception);
}

BOOST_AUTO_TEST_CASE(OctetStringType_CheckType_ValueIsNotInRange_Min)
{
	asn1::OctetStringType type;
	asn1::OctetStringType::ValueType value("ab");

	type.addSize(3, 5);
	BOOST_CHECK_THROW(type.checkType(value), asn1::ASN1Exception);
}

BOOST_AUTO_TEST_CASE(OctetStringType_CheckType_ValueIsNotInRange_Max)
{
	asn1::OctetStringType type;
	asn1::OctetStringType::ValueType value("abcdefg");

	type.addSize(3, 5);
	BOOST_CHECK_THROW(type.checkType(value), asn1::ASN1Exception);
}

}
