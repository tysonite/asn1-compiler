#include <limits>

#define BOOST_TEST_MAIN
#include <boost/test/included/unit_test.hpp>
#include <boost/test/parameterized_test.hpp>
#include <boost/format.hpp>
#if BOOST_WORKAROUND(  __GNUC__, < 3 )
#include <boost/test/output_test_stream.hpp>
typedef boost::test_tools::output_test_stream onullstream_type;
#else
#include <boost/test/utils/nullstream.hpp>
typedef boost::onullstream onullstream_type;
#endif

#include <ber/BERBuffer.hh>
#include <ber/BERValueWriter.hh>
#include <ber/BERValueReader.hh>
#include <type/Types.hh>

namespace ut = boost::unit_test;

#undef max
#undef min

void TestBEREmptyIntegerWithValue(const asn1::Integer& vToWrite)
{
   // ASN.1: i ::= INTEGER

   BOOST_TEST_MESSAGE(boost::format("Value = %lld") % vToWrite);
   asn1::Integer vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);
   
   asn1::IntegerType type(0, false);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

void TestBEREmptyIntegerWithTagNumberWithValue(const asn1::Integer& vToWrite)
{
   // ASN.1: i ::= [0] INTEGER
   
   BOOST_TEST_MESSAGE(boost::format("Value = %lld") % vToWrite);
   asn1::Integer vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType type;
   type.setTagNumber(0);
   type.setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   type.setTagging(asn1::Type::EXPLICIT_TAGGING);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));
   BOOST_CHECK_EQUAL(outbuffer.data()[0], 0xA0);

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

void TestBERImplicitIntegerWithTagNumberWithValue(const asn1::Integer& vToWrite)
{
   // ASN.1: i ::= [0] IMPLICIT INTEGER

   BOOST_TEST_MESSAGE(boost::format("Value = %lld") % vToWrite);
   asn1::Integer vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType type(0, false);
   type.setTagNumber(0);
   type.setTagging(asn1::Type::IMPLICIT_TAGGING);
   type.setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   
   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));
   BOOST_CHECK_EQUAL(outbuffer.data()[0], 0x80);

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

void TestBERExplicitIntegerWithTagNumberWithValue(const asn1::Integer& vToWrite)
{
   // ASN.1: i ::= [0] EXPLICIT INTEGER

   BOOST_TEST_MESSAGE(boost::format("Value = %lld") % vToWrite);
   asn1::Integer vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType type(0, false);
   type.setTagNumber(0);
   type.setTagging(asn1::Type::EXPLICIT_TAGGING);
   type.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

void TestBERExplicitIntegerWithTagNumber(const asn1::TagType& tagNumber)
{
   // ASN.1: I ::= [N] EXPLICIT INTEGER

   BOOST_TEST_MESSAGE(boost::format("Tag Number = %lld") % tagNumber);
   asn1::Integer vToWrite = 0, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType type(0, false);
   type.setTagNumber(tagNumber);
   type.setTagging(asn1::Type::EXPLICIT_TAGGING);
   type.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

void TestBERImplicitIntegerWithTagNumber(const asn1::TagType& tagNumber)
{
   // ASN.1: I ::= [N] IMPLICIT INTEGER

   BOOST_TEST_MESSAGE(boost::format("Tag Number = %lld") % tagNumber);
   asn1::Integer vToWrite = 0, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType type(0, false);
   type.setTagNumber(tagNumber);
   type.setTagging(asn1::Type::IMPLICIT_TAGGING);
   type.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

void TestBERExplicitIntegerWithDifferentTagNumbers()
{
   // ASN.1: I ::= [N] EXPLICIT INTEGER

   asn1::TagType tagNumberIn = 0, tagNumberOut = 1;
   BOOST_TEST_MESSAGE(boost::format("Tag Number In = %lld; Tag Number Out = %lld") % tagNumberIn % tagNumberOut);
   asn1::Integer vToWrite = 0, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType typeIn(0, false);
   typeIn.setTagNumber(tagNumberIn);
   typeIn.setTagging(asn1::Type::EXPLICIT_TAGGING);
   typeIn.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % typeIn.toString());
   BOOST_CHECK_NO_THROW(typeIn.write(writer, vToWrite));
   BOOST_CHECK_EQUAL(outbuffer.data()[0], 0xA0);

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   asn1::IntegerType typeOut(0, false);
   typeOut.setTagNumber(tagNumberOut);
   typeOut.setTagging(asn1::Type::EXPLICIT_TAGGING);
   typeOut.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % typeOut.toString());
   BOOST_CHECK_THROW(typeOut.read(reader, vToRead), asn1::ASN1Exception);
}

void TestBERImplicitIntegerWithDifferentTagNumbers()
{
   // out ASN.1: I ::= [0] IMPLICIT INTEGER
   // in ASN.1: I ::= [1] IMPLICIT INTEGER

   asn1::TagType tagNumberIn = 0, tagNumberOut = 1;
   BOOST_TEST_MESSAGE(boost::format("Tag Number In = %lld; Tag Number Out = %lld") % tagNumberIn % tagNumberOut);
   asn1::Integer vToWrite = 0, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType typeIn(0, false);
   typeIn.setTagNumber(tagNumberIn);
   typeIn.setTagging(asn1::Type::IMPLICIT_TAGGING);
   typeIn.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % typeIn.toString());
   BOOST_CHECK_NO_THROW(typeIn.write(writer, vToWrite));
   BOOST_CHECK_EQUAL(outbuffer.data()[0], 0x80);

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   asn1::IntegerType typeOut(0, false);
   typeOut.setTagNumber(tagNumberOut);
   typeOut.setTagging(asn1::Type::IMPLICIT_TAGGING);
   typeOut.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % typeOut.toString());
   BOOST_CHECK_THROW(typeOut.read(reader, vToRead), asn1::ASN1Exception);
}

void TestBadBERImplicitExplicitIntegerEncodingDecoding()
{
   // out ASN.1: I ::= [0] IMPLICIT INTEGER
   // in ASN.1: I ::= [0] EXPLICIT INTEGER

   BOOST_TEST_MESSAGE(boost::format("Tag Number = 0, IMPLICIT -> EXPLICIT"));
   asn1::Integer vToWrite = 0, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType typeIn(0, false);
   typeIn.setTagNumber(0);
   typeIn.setTagging(asn1::Type::IMPLICIT_TAGGING);
   typeIn.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % typeIn.toString());
   BOOST_CHECK_NO_THROW(typeIn.write(writer, vToWrite));
   BOOST_CHECK_EQUAL(outbuffer.data()[0], 0x80);

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   asn1::IntegerType typeOut(0, false);
   typeOut.setTagNumber(0);
   typeOut.setTagging(asn1::Type::EXPLICIT_TAGGING);
   typeOut.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % typeOut.toString());
   BOOST_CHECK_THROW(typeOut.read(reader, vToRead), asn1::ASN1Exception);
}

void TestBadBERExplicitImplicitIntegerEncodingDecoding()
{
   // out ASN.1: I ::= [0] EXPLICIT INTEGER
   // in ASN.1: I ::= [0] IMPLICIT INTEGER

   BOOST_TEST_MESSAGE(boost::format("Tag Number = 0, EXPLICIT -> IMPLICIT"));
   asn1::Integer vToWrite = 0, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType typeIn(0, false);
   typeIn.setTagNumber(0);
   typeIn.setTagging(asn1::Type::EXPLICIT_TAGGING);
   typeIn.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % typeIn.toString());
   BOOST_CHECK_NO_THROW(typeIn.write(writer, vToWrite));
   BOOST_CHECK_EQUAL(outbuffer.data()[0], 0xA0);

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   asn1::IntegerType typeOut(0, false);
   typeOut.setTagNumber(0);
   typeOut.setTagging(asn1::Type::IMPLICIT_TAGGING);
   typeOut.setTagClass(asn1::Type::CONTEXT_SPECIFIC);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % typeOut.toString());
   BOOST_CHECK_THROW(typeOut.read(reader, vToRead), asn1::ASN1Exception);
}

void TestBERIntegerConstraintsWithValue(const asn1::Integer& vToWrite)
{
   // ASN.1: I ::= INTEGER (0..255)

   BOOST_TEST_MESSAGE(boost::format("BER INTEGER constraints: 0 .. 255, value = %lld") % vToWrite);
   asn1::Integer vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType type;
   type.setMinValue(0);
   type.setMaxValue(255);

   BOOST_CHECK(vToWrite >= type.minValue() || vToWrite <= type.maxValue());

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

void TestBERIntegerConstraintsWithBadValue(const asn1::Integer& vToWrite)
{
   // ASN.1: I ::= INTEGER (0..255)

   BOOST_TEST_MESSAGE(boost::format("BER INTEGER constraints: 0 .. 255, bad value = %lld") % vToWrite);
   asn1::Integer vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::IntegerType type(0, false);
   type.setMinValue(0);
   type.setMaxValue(255);

   BOOST_CHECK(vToWrite < type.minValue() || vToWrite > type.maxValue());

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_THROW(type.read(reader, vToRead), asn1::ASN1Exception);
}

BOOST_AUTO_TEST_CASE(TestBERIntegerConstraints)
{
   ut::test_suite* test = BOOST_TEST_SUITE("Base BER INTEGER encoding/decoding constrained test suite");

   asn1::Integer test_data[] = { 0, 127, 255 };
   test->add(BOOST_PARAM_TEST_CASE(&TestBERIntegerConstraintsWithValue, (asn1::Integer*) test_data,
      (asn1::Integer*) test_data + sizeof(test_data)/sizeof(asn1::Integer)));

   asn1::Integer test_data_bad[] = { std::numeric_limits<asn1::Integer>::min(), -1, 256, std::numeric_limits<asn1::Integer>::max() };
   test->add(BOOST_PARAM_TEST_CASE(&TestBERIntegerConstraintsWithBadValue, (asn1::Integer*) test_data_bad,
      (asn1::Integer*) test_data_bad + sizeof(test_data_bad)/sizeof(asn1::Integer)));

   ut::framework::run(test);
   const ut::test_results& tr = ut::results_collector.results(test->p_id);

   BOOST_CHECK_EQUAL(tr.p_assertions_failed, (std::size_t) 0);
   BOOST_CHECK(!tr.p_aborted);
}

BOOST_AUTO_TEST_CASE(TestBERInteger)
{
   ut::test_suite* test = BOOST_TEST_SUITE("Base BER INTEGER encoding/decoding test suite");

   asn1::Integer test_data[] = { std::numeric_limits<asn1::Integer>::min(), 0, std::numeric_limits<asn1::Integer>::max() };

   test->add(BOOST_PARAM_TEST_CASE(&TestBEREmptyIntegerWithValue, (asn1::Integer*) test_data,
      (asn1::Integer*) test_data + sizeof(test_data)/sizeof(asn1::Integer)));
   test->add(BOOST_PARAM_TEST_CASE(&TestBEREmptyIntegerWithTagNumberWithValue, (asn1::Integer*) test_data,
      (asn1::Integer*) test_data + sizeof(test_data)/sizeof(asn1::Integer)));
   test->add(BOOST_PARAM_TEST_CASE(&TestBERImplicitIntegerWithTagNumberWithValue, (asn1::Integer*) test_data,
      (asn1::Integer*) test_data + sizeof(test_data)/sizeof(asn1::Integer)));
   test->add(BOOST_PARAM_TEST_CASE(&TestBERExplicitIntegerWithTagNumberWithValue, (asn1::Integer*) test_data,
      (asn1::Integer*) test_data + sizeof(test_data)/sizeof(asn1::Integer)));

   asn1::TagType test_data_tag_number[] = { 0, 12345, std::numeric_limits<asn1::TagType>::max() };

   test->add(BOOST_PARAM_TEST_CASE(&TestBERExplicitIntegerWithTagNumber, (asn1::TagType*) test_data_tag_number,
      (asn1::TagType*) test_data_tag_number + sizeof(test_data_tag_number)/sizeof(asn1::TagType)));
   test->add(BOOST_PARAM_TEST_CASE(&TestBERImplicitIntegerWithTagNumber, (asn1::TagType*) test_data_tag_number,
      (asn1::TagType*) test_data_tag_number + sizeof(test_data_tag_number)/sizeof(asn1::TagType)));

   test->add(BOOST_TEST_CASE(&TestBERExplicitIntegerWithDifferentTagNumbers));
   test->add(BOOST_TEST_CASE(&TestBERImplicitIntegerWithDifferentTagNumbers));
   test->add(BOOST_TEST_CASE(&TestBadBERImplicitExplicitIntegerEncodingDecoding));
   test->add(BOOST_TEST_CASE(&TestBadBERExplicitImplicitIntegerEncodingDecoding));

   ut::framework::run(test);
   const ut::test_results& tr = ut::results_collector.results(test->p_id);

   BOOST_CHECK_EQUAL(tr.p_assertions_failed, (std::size_t) 0);
   BOOST_CHECK(!tr.p_aborted);
}

BOOST_AUTO_TEST_CASE(TestBERSequenceOf)
{
   // ASN.1: S ::= SEQUENCE OF INTEGER

   BOOST_TEST_MESSAGE(boost::format("Testing BER SEQUENCE OF"));
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(1);
   outValues.push_back(0);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::SequenceOfType<asn1::Integer, asn1::IntegerType> type(new asn1::IntegerType(0, false));

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());

   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfSequenceOfInteger)
{
   // ASN.1: S ::= SEQUENCE OF SEQUENCE OF INTEGER

   BOOST_TEST_MESSAGE(boost::format("Testing BER SEQUENCE OF SEQUENCE OF INTEGER"));
   std::vector<std::vector<asn1::Integer> > outValues;
   
   std::vector<asn1::Integer> outElement;
   outElement.push_back(-1);
   outElement.push_back(0);
   outElement.push_back(1);
   outValues.push_back(outElement);

   outElement.clear();
   outElement.push_back(-2);
   outElement.push_back(0);
   outElement.push_back(2);
   outValues.push_back(outElement);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   asn1::SequenceOfType<std::vector<asn1::Integer>, asn1::SequenceOfType<asn1::Integer, asn1::IntegerType> >
      type(new asn1::SequenceOfType<asn1::Integer, asn1::IntegerType>(new asn1::IntegerType(0, false)));

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());

   std::vector<std::vector<asn1::Integer> > inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_REQUIRE_EQUAL(outValues.size(), inValues.size());
   for (std::size_t i = 0; i < inValues.size(); ++i)
   {
      BOOST_CHECK_EQUAL(inValues[i].size(), outValues[i].size());
      BOOST_CHECK_EQUAL_COLLECTIONS(inValues[i].begin(), inValues[i].end(), outValues[i].begin(), outValues[i].end());
   }
}

namespace visible_string
{

// ASN.1 (EXPLICIT environment):
// Type1 ::= VisibleString
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] VisibleString
// Type9 ::= [5] IMPLICIT VisibleString 

class Type1 : public asn1::VisibleStringType
{
};

class Type2 : public asn1::TaggingType<asn1::OctetString, Type1>
{
public:
   Type2() : asn1::TaggingType<asn1::OctetString, Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<asn1::OctetString, Type2>
{
public:
   Type3() : asn1::TaggingType<asn1::OctetString, Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<asn1::OctetString, Type3>
{
public:
   Type4() : asn1::TaggingType<asn1::OctetString, Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<asn1::OctetString, Type2>
{
public:
   Type5() : asn1::TaggingType<asn1::OctetString, Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<asn1::OctetString, Type3>
{
public:
   Type6() : asn1::TaggingType<asn1::OctetString, Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<asn1::OctetString, Type6>
{
public:
   Type7() : asn1::TaggingType<asn1::OctetString, Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::OctetString, asn1::VisibleStringType>
{
public:
   Type8() : asn1::TaggingType<asn1::OctetString, asn1::VisibleStringType>(new asn1::VisibleStringType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::OctetString, asn1::VisibleStringType>
{
public:
   Type9() : asn1::TaggingType<asn1::OctetString, asn1::VisibleStringType>(new asn1::VisibleStringType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType1)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type1 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x1A, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType2)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type2 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x43, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType3)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type3 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x07, 0x43, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType4)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type4 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x07, 0x43, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType5)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type5 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x82, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType6)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type6 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x09, 0xA2, 0x07, 0x43, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType7)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type7 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x09, 0xA2, 0x07, 0x43, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType8)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type8 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x07, 0x1A, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerVisibleStringType9)
{
   asn1::OctetString vToWrite = "Jones", vToRead;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type9 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x85, 0x05, 0x4A, 0x6F, 0x6E, 0x65, 0x73 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

}

namespace integer
{

// ASN.1 (EXPLICIT environment):
// Type1 ::= INTEGER
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] INTEGER
// Type9 ::= [5] IMPLICIT INTEGER 

class Type1 : public asn1::IntegerType
{
};

class Type2 : public asn1::TaggingType<asn1::Integer, Type1>
{
public:
   Type2() : asn1::TaggingType<asn1::Integer, Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<asn1::Integer, Type2>
{
public:
   Type3() : asn1::TaggingType<asn1::Integer, Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<asn1::Integer, Type3>
{
public:
   Type4() : asn1::TaggingType<asn1::Integer, Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<asn1::Integer, Type2>
{
public:
   Type5() : asn1::TaggingType<asn1::Integer, Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<asn1::Integer, Type3>
{
public:
   Type6() : asn1::TaggingType<asn1::Integer, Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<asn1::Integer, Type6>
{
public:
   Type7() : asn1::TaggingType<asn1::Integer, Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::Integer, asn1::IntegerType>
{
public:
   Type8() : asn1::TaggingType<asn1::Integer, asn1::IntegerType>(new asn1::IntegerType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::Integer, asn1::IntegerType>
{
public:
   Type9() : asn1::TaggingType<asn1::Integer, asn1::IntegerType>(new asn1::IntegerType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestBerIntegerType1)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type1 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType2)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type2 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x43, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType3)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type3 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x03, 0x43, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType4)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type4 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x03, 0x43, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType5)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type5 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x82, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType6)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type6 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x05, 0xA2, 0x03, 0x43, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType7)
{
   asn1::Integer vToWrite = 1, vToRead =  ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type7 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x05, 0xA2, 0x03, 0x43, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType8)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type8 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x03, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerIntegerType9)
{
   asn1::Integer vToWrite = 1, vToRead = ~vToWrite;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type9 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x85, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

}

namespace sequence_of_integer
{

// ASN.1 (EXPLICIT environment):
// Type1 ::= SEQUENCE OF INTEGER
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] SEQUENCE OF INTEGER
// Type9 ::= [5] IMPLICIT SEQUENCE OF INTEGER
// Type10 ::= [8] EXPLICIT SEQUENCE OF Type7

class Type1 : public asn1::SequenceOfType<asn1::Integer, asn1::IntegerType>
{
public:
   Type1() : asn1::SequenceOfType<asn1::Integer, asn1::IntegerType>(new asn1::IntegerType) {}
};

class Type2 : public asn1::TaggingType<std::vector<asn1::Integer>, Type1>
{
public:
   Type2() : asn1::TaggingType<std::vector<asn1::Integer>, Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<std::vector<asn1::Integer>, Type2>
{
public:
   Type3() : asn1::TaggingType<std::vector<asn1::Integer>, Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<std::vector<asn1::Integer>, Type3>
{
public:
   Type4() : asn1::TaggingType<std::vector<asn1::Integer>, Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<std::vector<asn1::Integer>, Type2>
{
public:
   Type5() : asn1::TaggingType<std::vector<asn1::Integer>, Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<std::vector<asn1::Integer>, Type3>
{
public:
   Type6() : asn1::TaggingType<std::vector<asn1::Integer>, Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<std::vector<asn1::Integer>, Type6>
{
public:
   Type7() : asn1::TaggingType<std::vector<asn1::Integer>, Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<std::vector<asn1::Integer>, asn1::SequenceOfType<asn1::Integer, asn1::IntegerType> >
{
public:
   Type8() : asn1::TaggingType<std::vector<asn1::Integer>, asn1::SequenceOfType<asn1::Integer, asn1::IntegerType> >(new asn1::SequenceOfType<asn1::Integer, asn1::IntegerType>(new asn1::IntegerType))
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<std::vector<asn1::Integer>, asn1::SequenceOfType<asn1::Integer, asn1::IntegerType> >
{
public:
   Type9() : asn1::TaggingType<std::vector<asn1::Integer>, asn1::SequenceOfType<asn1::Integer, asn1::IntegerType> > (new asn1::SequenceOfType<asn1::Integer, asn1::IntegerType>(new asn1::IntegerType))
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

class Type10 : public asn1::TaggingType<std::vector<std::vector<asn1::Integer> >,
   asn1::SequenceOfType<std::vector<asn1::Integer>, Type7> >
{
public:
   Type10()
      : asn1::TaggingType<
      std::vector<std::vector<asn1::Integer> >,
      asn1::SequenceOfType<std::vector<asn1::Integer>, Type7>
      >
      (new asn1::SequenceOfType<std::vector<asn1::Integer>, Type7>(new Type7))
   {
      setTagNumber(8);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType1)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type1 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0x30, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType2)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type2 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0x63, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType3)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type3 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x0B, 0x63, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType4)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type4 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x0B, 0x63, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType5)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type5 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType6)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type6 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x0D, 0xA2, 0x0B, 0x63, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType7)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type7 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x0D, 0xA2, 0x0B, 0x63, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType8)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type8 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x0B, 0x30, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType9)
{
   std::vector<asn1::Integer> outValues;
   outValues.push_back(-1);
   outValues.push_back(0);
   outValues.push_back(1);

   Type9 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x09, 0x02, 0x01, 0xFF, 0x02, 0x01, 0x00, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<asn1::Integer> inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

BOOST_AUTO_TEST_CASE(TestBerSequenceOfTypeIntegerType10)
{
   std::vector<std::vector<asn1::Integer> > outValues;
   
   std::vector<asn1::Integer> outValue1;
   outValue1.push_back(-1);
   
   std::vector<asn1::Integer> outValue2;
   outValue2.push_back(0);

   std::vector<asn1::Integer> outValue3;
   outValue3.push_back(1);

   outValues.push_back(outValue1);
   outValues.push_back(outValue2);
   outValues.push_back(outValue3);

   Type10 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));
   
   asn1::BERBuffer::ValueType dataToTest[] = { 0xA8, 0x1D, 0x30, 0x1B, 0xA4, 0x07, 0xA2, 0x05, 0x63, 0x03, 0x02, 0x01, 0xFF, 0xA4, 0x07, 0xA2, 0x05, 0x63, 0x03, 0x02, 0x01, 0x00, 0xA4, 0x07, 0xA2, 0x05, 0x63, 0x03, 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   std::vector<std::vector<asn1::Integer> > inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());

   //BOOST_CHECK_EQUAL_COLLECTIONS(outValues.begin(), outValues.end(), inValues.begin(), inValues.end());
}

}

/*ut::test_suite* init_unit_test_suite(int argc, char* argv[])
{
   ut::test_suite* test = BOOST_TEST_SUITE("BER encoding/decoding test suite");
   
   test->add(BOOST_TEST_CASE(&TestBERInteger));
   test->add(BOOST_TEST_CASE(&TestBERIntegerConstraints));

   test->add(BOOST_TEST_CASE(&TestBERSequenceOf));

   return test;
}*/
