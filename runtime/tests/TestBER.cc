#include <limits>

#define BOOST_TEST_MODULE BER
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

#include <BERBuffer.hh>
#include <BERValueWriter.hh>
#include <BERValueReader.hh>
#include <Types.hh>

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

   asn1::Integer test_data_bad[] = { std::numeric_limits<asn1::IntegerType::ValueType>::min(), -1, 256,
      std::numeric_limits<asn1::IntegerType::ValueType>::max() };
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

   asn1::SequenceOfType<asn1::IntegerType> type(new asn1::IntegerType(0, false));

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

   asn1::SequenceOfType<asn1::SequenceOfType<asn1::IntegerType> >
      type(new asn1::SequenceOfType<asn1::IntegerType>(new asn1::IntegerType(0, false)));

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

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::VisibleStringType>
{
public:
   Type8() : asn1::TaggingType<asn1::VisibleStringType>(new asn1::VisibleStringType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::VisibleStringType>
{
public:
   Type9() : asn1::TaggingType<asn1::VisibleStringType>(new asn1::VisibleStringType)
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
// Type10 ::= INTEGER { C1(1), C2(2) }

class Type1 : public asn1::IntegerType
{
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::IntegerType>
{
public:
   Type8() : asn1::TaggingType<asn1::IntegerType>(new asn1::IntegerType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::IntegerType>
{
public:
   Type9() : asn1::TaggingType<asn1::IntegerType>(new asn1::IntegerType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

class Type10 : public asn1::IntegerType
{
public:

   Type10()
   {
   }

   enum Type10_Value
   {
      k_C1 = 1,
      k_C2 = 2,
   };
};


BOOST_AUTO_TEST_CASE(TestBerIntegerType1)
{
   Type1::ValueType vToWrite = 1, vToRead = ~vToWrite;

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
   Type2::ValueType vToWrite = 1, vToRead = ~vToWrite;

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
   Type3::ValueType vToWrite = 1, vToRead = ~vToWrite;

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
   Type4::ValueType vToWrite = 1, vToRead = ~vToWrite;

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
   Type5::ValueType vToWrite = 1, vToRead = ~vToWrite;

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
   Type6::ValueType vToWrite = 1, vToRead = ~vToWrite;

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
   Type7::ValueType vToWrite = 1, vToRead =  ~vToWrite;

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
   Type8::ValueType vToWrite = 1, vToRead = ~vToWrite;

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
   Type9::ValueType vToWrite = 1, vToRead = ~vToWrite;

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

BOOST_AUTO_TEST_CASE(TestBerIntegerType10)
{
   Type10::ValueType vToWrite = Type10::k_C1, vToRead = Type10::k_C2;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type10 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x02, 0x01, 0x01 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
   BOOST_CHECK_EQUAL(vToWrite, Type10::k_C1);
}

}

namespace object_identifier_tests
{

// ASN.1 (EXPLICIT environment):
// Type1 ::= OBJECT IDENTIFIER
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] OBJECT IDENTIFIER
// Type9 ::= [5] IMPLICIT OBJECT IDENTIFIER 

class Type1 : public asn1::ObjectIdentifierType
{
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::ObjectIdentifierType>
{
public:
   Type8() : asn1::TaggingType<asn1::ObjectIdentifierType>(new asn1::ObjectIdentifierType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::ObjectIdentifierType>
{
public:
   Type9() : asn1::TaggingType<asn1::ObjectIdentifierType>(new asn1::ObjectIdentifierType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestObjectIdentifierValue)
{
   asn1::ObjectIdentifierType::ValueType value;

   BOOST_CHECK_THROW(value.setValue(""), asn1::ASN1Exception);

   BOOST_CHECK_NO_THROW(value.setValue("1.2.3"));
   BOOST_CHECK_EQUAL(value.size(), 3);
   BOOST_CHECK_EQUAL(value[0], 1);
   BOOST_CHECK_EQUAL(value[1], 2);
   BOOST_CHECK_EQUAL(value[2], 3);
   BOOST_CHECK_EQUAL(value.getValueAsString(), "1.2.3");

   // constructors
   BOOST_CHECK_NO_THROW(asn1::ObjectIdentifierType::ValueType value("1.2.3"));
   BOOST_CHECK_THROW(asn1::ObjectIdentifierType::ValueType value(""), asn1::ASN1Exception);
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType1)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type1 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x06, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType2)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type2 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x43, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType3)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type3 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x04, 0x43, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType4)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type4 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x04, 0x43, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType5)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type5 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x82, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType6)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type6 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x06, 0xA2, 0x04, 0x43, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType7)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type7 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x06, 0xA2, 0x04, 0x43, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType8)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type8 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x04, 0x06, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
}

BOOST_AUTO_TEST_CASE(TestBerObjectIdentifierType9)
{
   asn1::ObjectIdentifier vToWrite, vToRead;
   vToWrite.push_back(1);
   vToWrite.push_back(2);
   vToWrite.push_back(3);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type9 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x85, 0x02, 0x2A, 0x03 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
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

class Type1 : public asn1::SequenceOfType<asn1::IntegerType>
{
public:
   Type1() : asn1::SequenceOfType<asn1::IntegerType>(new asn1::IntegerType) {}
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8
   : public asn1::TaggingType<asn1::SequenceOfType<asn1::IntegerType> >
{
public:
   Type8()
      : asn1::TaggingType<
      asn1::SequenceOfType<asn1::IntegerType>
      >(new asn1::SequenceOfType<asn1::IntegerType>(new asn1::IntegerType))
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9
   : public asn1::TaggingType<
   asn1::SequenceOfType<asn1::IntegerType> >
{
public:
   Type9()
      : asn1::TaggingType<
      asn1::SequenceOfType<asn1::IntegerType>
      > (new asn1::SequenceOfType<asn1::IntegerType>(new asn1::IntegerType))
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

class Type10 : public asn1::TaggingType<asn1::SequenceOfType<Type7> >
{
public:
   Type10()
      : asn1::TaggingType<
      asn1::SequenceOfType<Type7>
      >
      (new asn1::SequenceOfType<Type7>(new Type7))
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

   BOOST_CHECK_EQUAL(outValues.size(), inValues.size());
   for (std::vector<std::vector<asn1::Integer> >::size_type i = 0; i < outValues.size(); ++i)
      BOOST_CHECK_EQUAL_COLLECTIONS(outValues[i].begin(), outValues[i].end(), inValues[i].begin(), inValues[i].end());
}

}


namespace null
{

// ASN.1 (EXPLICIT environment):
// Type1 ::= NULL
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] NULL
// Type9 ::= [5] IMPLICIT NULL

class Type1 : public asn1::NullType
{
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::NullType>
{
public:
   Type8() : asn1::TaggingType<asn1::NullType>(new asn1::NullType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::NullType>
{
public:
   Type9() : asn1::TaggingType<asn1::NullType>(new asn1::NullType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestBerNullType1)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type1 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x05, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType2)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type2 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x43, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType3)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type3 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x02, 0x43, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType4)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type4 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x02, 0x43, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType5)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type5 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x82, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType6)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type6 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x04, 0xA2, 0x02, 0x43, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType7)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type7 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x04, 0xA2, 0x02, 0x43, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType8)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type8 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x02, 0x05, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

BOOST_AUTO_TEST_CASE(TestBerNullType9)
{
   asn1::NullType::ValueType unused;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type9 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, unused));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x85, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, unused));
}

}

namespace boolean_type_tests
{

// ASN.1 (EXPLICIT environment):
// Type1 ::= BOOLEAN
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] BOOLEAN
// Type9 ::= [5] IMPLICIT BOOLEAN 

class Type1 : public asn1::BooleanType
{
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::BooleanType>
{
public:
   Type8() : asn1::TaggingType<asn1::BooleanType>(new asn1::BooleanType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::BooleanType>
{
public:
   Type9() : asn1::TaggingType<asn1::BooleanType>(new asn1::BooleanType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestBerBooleanType1)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type1 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType2)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type2 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x43, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType3)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type3 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x03, 0x43, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType4)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type4 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x03, 0x43, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType5)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type5 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x82, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType6)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type6 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x05, 0xA2, 0x03, 0x43, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType7)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type7 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x05, 0xA2, 0x03, 0x43, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType8)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type8 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x03, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerBooleanType9)
{
   asn1::Boolean vToWrite = true, vToRead = false;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type9 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x85, 0x01, 0xFF };
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

namespace choice_type
{

// ASN.1 (EXPLICIT environment):
// TypeChoice ::= CHOICE { i INTEGER, b BOOLEAN }
// Type1 ::= TypeChoice
// -- IMPLICIT tag is not allowed for CHOICE type -- Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type1
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] TypeChoice

class TypeChoice : public asn1::ChoiceType
{
public:

   explicit TypeChoice() : asn1::ChoiceType()
   {
      _addChoice(&_i_Type);
      _addChoice(&_b_Type);
   }

   class TypeChoice_Value
   {
   public:

      explicit TypeChoice_Value() : _id(__VALUE_NOT_DEFINED__) {}

      void set_i(const asn1::IntegerType::ValueType& v) { _i = v; _id = i_ID; }
      const asn1::IntegerType::ValueType& get_i() const { assert(_id == i_ID); return _i; }
      asn1::IntegerType::ValueType& get_i() { assert(_id == i_ID); return _i; }
      bool has_i_Choosen() const { return _id == i_ID; }
      void choose_i() { _id = i_ID; }

      void set_b(const asn1::BooleanType::ValueType& v) { _b = v; _id = b_ID; }
      const asn1::BooleanType::ValueType& get_b() const { return _b; }
      bool has_b_Choosen() const { return _id == b_ID; }

      bool operator==(const TypeChoice_Value& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case i_ID:
            if (_i != other._i)
               return false;
            break;
         case b_ID:
            if (_b != other._b)
               return false;
            break;
         default:
            return false;
         }

         return true;
      }

      bool operator!=(const TypeChoice_Value& other) const
      {
         return !(*this == other);
      }

   private:

      enum ChoiceValue_identifier
      {
         i_ID = 1,
         b_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::IntegerType::ValueType _i;
      asn1::BooleanType::ValueType _b;

      ChoiceValue_identifier _id;
   };

   typedef TypeChoice_Value ValueType;

   void read(asn1::ASN1ValueReader& reader, TypeChoice_Value& value) const
   {
      asn1::Type* choosenType = NULL;
      reader.readChoice(*this, &choosenType);

      if (choosenType == &_i_Type)
      {
         asn1::IntegerType::ValueType v;
         _i_Type.read(reader, v);
         value.set_i(v);
      }
      else if (choosenType == &_b_Type)
      {
         asn1::BooleanType::ValueType v;
         _b_Type.read(reader, v);
         value.set_b(v);
      }
      else
      {
         throw asn1::ASN1Exception("Expected " + toString() + " must be one of: " +
            _i_Type.toString() + ", " + _b_Type.toString());
      }
   }

   void write(asn1::ASN1ValueWriter& writer, const TypeChoice_Value& value) const
   {
      assert(value.has_i_Choosen() || value.has_b_Choosen());

      if (value.has_i_Choosen())
         _i_Type.write(writer, value.get_i());
      else if (value.has_b_Choosen())
         _b_Type.write(writer, value.get_b());
   }

private:

   asn1::IntegerType _i_Type;
   asn1::BooleanType _b_Type;
};

class Type1 : public TypeChoice
{
};

class Type3 : public asn1::TaggingType<Type1>
{
public:
   Type3() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<TypeChoice>
{
public:
   Type8() : asn1::TaggingType<TypeChoice>(new TypeChoice)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestBerChoiceTypeChoice)
{
   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(vToWrite.has_i_Choosen(), false);

   vToWrite.set_b(true);

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), true);

   TypeChoice type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_b(), true);
}

BOOST_AUTO_TEST_CASE(TestBerChoiceType3)
{
   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(vToWrite.has_i_Choosen(), false);

   vToWrite.set_b(true);

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), true);

   Type3 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x03, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_b(), true);
}

BOOST_AUTO_TEST_CASE(TestBerChoiceType4)
{
   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(vToWrite.has_i_Choosen(), false);

   vToWrite.set_b(true);

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), true);

   Type4 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x03, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_b(), true);
}

BOOST_AUTO_TEST_CASE(TestBerChoiceType6)
{
   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(vToWrite.has_i_Choosen(), false);

   vToWrite.set_b(true);

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), true);

   Type6 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x05, 0xA2, 0x03, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_b(), true);
}

BOOST_AUTO_TEST_CASE(TestBerChoiceType7)
{
   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(vToWrite.has_i_Choosen(), false);

   vToWrite.set_b(true);

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), true);

   Type7 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x05, 0xA2, 0x03, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_b(), true);
}

BOOST_AUTO_TEST_CASE(TestBerChoiceType8)
{
   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(vToWrite.has_i_Choosen(), false);

   vToWrite.set_b(true);

   BOOST_CHECK_EQUAL(vToWrite.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), true);

   Type8 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x03, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_b(), true);
}

}

namespace choice_choice_type
{

// ASN.1 (EXPLICIT environment):
// TypeChoice ::= CHOICE { TypeNestedChoice CHOICE { i INTEGER, b BOOLEAN } }

class TypeNestedChoice : public asn1::ChoiceType
{
public:

   explicit TypeNestedChoice() : asn1::ChoiceType()
   {
      _addChoice(&_i_Type);
      _addChoice(&_b_Type);
   }

   class TypeChoice_Value
   {
   public:

      explicit TypeChoice_Value() : _id(__VALUE_NOT_DEFINED__) {}

      void set_i(const asn1::IntegerType::ValueType& v) { _i = v; _id = i_ID; }
      const asn1::IntegerType::ValueType& get_i() const { return _i; }
      bool has_i_Choosen() const { return _id == i_ID; }

      void set_b(const asn1::BooleanType::ValueType& v) { _b = v; _id = b_ID; }
      const asn1::BooleanType::ValueType& get_b() const { return _b; }
      bool has_b_Choosen() const { return _id == b_ID; }

   private:

      enum ChoiceValue_identifier
      {
         i_ID = 1,
         b_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::IntegerType::ValueType _i;
      asn1::BooleanType::ValueType _b;

      ChoiceValue_identifier _id;
   };

   typedef TypeChoice_Value ValueType;

   void read(asn1::ASN1ValueReader& reader, TypeChoice_Value& value) const
   {
      asn1::Type* choosenType = NULL;
      reader.readChoice(*this, &choosenType);

      if (choosenType == &_i_Type)
      {
         asn1::IntegerType::ValueType v;
         _i_Type.read(reader, v);
         value.set_i(v);
      }
      else if (choosenType == &_b_Type)
      {
         asn1::BooleanType::ValueType v;
         _b_Type.read(reader, v);
         value.set_b(v);
      }
      else
      {
         throw asn1::ASN1Exception("Expected " + toString() + " must be one of: " +
            _i_Type.toString() + ", " + _b_Type.toString());
      }
   }

   void write(asn1::ASN1ValueWriter& writer, const TypeChoice_Value& value) const
   {
      assert(value.has_i_Choosen() || value.has_b_Choosen());

      if (value.has_i_Choosen())
         _i_Type.write(writer, value.get_i());
      else if (value.has_b_Choosen())
         _b_Type.write(writer, value.get_b());
   }

private:

   asn1::IntegerType _i_Type;
   asn1::BooleanType _b_Type;
};

class TypeChoice : public asn1::ChoiceType
{
public:

   explicit TypeChoice() : asn1::ChoiceType()
   {
      _addChoice(&_TypeNestedChoice_Type);
   }

   class TypeChoice_Value
   {
   public:

      explicit TypeChoice_Value() : _id(__VALUE_NOT_DEFINED__) {}

      void set_TypeNestedChoice(const TypeNestedChoice::ValueType& v) { _TypeNestedChoice = v; _id = TypeNestedChoice_ID; }
      const TypeNestedChoice::ValueType& get_TypeNestedChoice() const { return _TypeNestedChoice; }
      bool has_TypeNestedChoice_Choosen() const { return _id == TypeNestedChoice_ID; }

   private:

      enum ChoiceValue_identifier
      {
         TypeNestedChoice_ID = 1,
         __VALUE_NOT_DEFINED__ = -1
      };

      TypeNestedChoice::ValueType _TypeNestedChoice;

      ChoiceValue_identifier _id;
   };

   typedef TypeChoice_Value ValueType;

   void read(asn1::ASN1ValueReader& reader, TypeChoice_Value& value) const
   {
      asn1::Type* choosenType = NULL;
      reader.readChoice(*this, &choosenType);

      if (choosenType == &_TypeNestedChoice_Type)
      {
         TypeNestedChoice::ValueType v;
         _TypeNestedChoice_Type.read(reader, v);
         value.set_TypeNestedChoice(v);
      }
      else
      {
         throw asn1::ASN1Exception("Expected " + toString() + " must be one of: " +
            _TypeNestedChoice_Type.toString());
      }
   }

   void write(asn1::ASN1ValueWriter& writer, const TypeChoice_Value& value) const
   {
      assert(value.has_TypeNestedChoice_Choosen());

      if (value.has_TypeNestedChoice_Choosen())
         _TypeNestedChoice_Type.write(writer, value.get_TypeNestedChoice());
   }

private:

   TypeNestedChoice _TypeNestedChoice_Type;
};

BOOST_AUTO_TEST_CASE(TestBerChoiceChoiceType1)
{
   TypeNestedChoice::ValueType nc;

   BOOST_CHECK_EQUAL(nc.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(nc.has_i_Choosen(), false);

   nc.set_b(true);

   BOOST_CHECK_EQUAL(nc.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(nc.get_b(), true);

   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_TypeNestedChoice_Choosen(), false);

   vToWrite.set_TypeNestedChoice(nc);

   BOOST_CHECK_EQUAL(vToWrite.has_TypeNestedChoice_Choosen(), true);

   TypeChoice type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_TypeNestedChoice_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_TypeNestedChoice().has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.get_TypeNestedChoice().has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_TypeNestedChoice().get_b(), true);
}

}

namespace sequence_type
{

// ASN.1 (EXPLICIT environment):
// TypeSequence ::= SEQUENCE { i INTEGER, b BOOLEAN }
// Type1 ::= TypeSequence
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2pe
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] TypeSequence
// Type9 ::= [5] IMPLICIT TypeSequence
// Type10 ::= SEQUENCE OF Type9

class TypeSequence : public asn1::SequenceType
{
public:

   explicit TypeSequence()
   {
   }

   class SequenceValue_Type
   {
   public:

      explicit SequenceValue_Type() {}

      void set_i(const asn1::IntegerType::ValueType& v) { _i = v; }
      const asn1::IntegerType::ValueType& get_i() const { return _i; }
      asn1::IntegerType::ValueType& get_i() { return _i; }

      void set_b(const asn1::BooleanType::ValueType& v) { _b = v; }
      const asn1::BooleanType::ValueType& get_b() const { return _b; }
      asn1::BooleanType::ValueType& get_b() { return _b; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_i != other._i)
            return false;
         if (_b != other._b)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _i;
      asn1::BooleanType::ValueType _b;
   };

   typedef SequenceValue_Type ValueType;

   void read(asn1::ASN1ValueReader& reader, ValueType& value) const
   {
      reader.readSequenceBegin(*this);

      {
         asn1::IntegerType::ValueType v;
         _i_Type.read(reader, v);
         value.set_i(v);
      }
      {
         asn1::BooleanType::ValueType v;
         _b_Type.read(reader, v);
         value.set_b(v);
      }

      reader.readSequenceEnd(*this);
   }

   void write(asn1::ASN1ValueWriter& writer, const ValueType& value) const
   {
      writer.writeSequenceBegin(*this);
      _i_Type.write(writer, value.get_i());
      _b_Type.write(writer, value.get_b());
      writer.writeSequenceEnd(*this);
   }

private:

   asn1::IntegerType _i_Type;
   asn1::BooleanType _b_Type;
};

class Type1 : public TypeSequence
{
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<TypeSequence>
{
public:
   Type8() : asn1::TaggingType<TypeSequence>(new TypeSequence)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<TypeSequence>
{
public:
   Type9() : asn1::TaggingType<TypeSequence>(new TypeSequence)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

class Type10 : public asn1::SequenceOfType<Type9>
{
public:
   Type10() : asn1::SequenceOfType<Type9>(new Type9) {}
};

BOOST_AUTO_TEST_CASE(TestBerTypeSequenceValue)
{
   TypeSequence::ValueType value1, value2;

   value1.set_i(1);
   value1.set_b(true);

   BOOST_CHECK_EQUAL(value1.get_i(), 1);
   BOOST_CHECK_EQUAL(value1.get_b(), true);

   value2.set_i(1);
   value2.set_b(true);

   BOOST_CHECK_EQUAL(value2.get_i(), 1);
   BOOST_CHECK_EQUAL(value2.get_b(), true);

   // check operator==
   BOOST_CHECK(value1 == value2);

   value2.set_i(2);
   BOOST_CHECK_EQUAL(value2.get_i(), 2);

   // check operator!=
   BOOST_CHECK(value1 != value2);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceTypeSequence)
{
   TypeSequence::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   TypeSequence type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x30, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType1)
{
   Type1::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type1 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x30, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType2)
{
   Type2::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type2 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x63, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType3)
{
   Type3::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type3 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x08, 0x63, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType4)
{
   Type4::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type4 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x08, 0x63, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType5)
{
   Type5::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type5 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType6)
{
   Type6::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type6 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x0A, 0xA2, 0x08, 0x63, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType7)
{
   Type7::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type7 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x0A, 0xA2, 0x08, 0x63, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType8)
{
   Type8::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   Type8 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x08, 0x30, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType9)
{
   Type9::ValueType vToWrite, vToRead;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   {
      Type9 type;

      BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
      BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));
   }

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   {
      Type9 type;

      BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
      BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
   }

   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);
}

BOOST_AUTO_TEST_CASE(TestBerSequenceType10)
{
   Type10::InnerType::ValueType vToWrite;

   vToWrite.set_i(-1);
   vToWrite.set_b(false);

   Type10::ValueType outValues;
   outValues.push_back(vToWrite);
   
   BOOST_CHECK_EQUAL(vToWrite.get_i(), -1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), false);

   vToWrite.set_i(1);
   vToWrite.set_b(true);
   outValues.push_back(vToWrite);

   BOOST_CHECK_EQUAL(vToWrite.get_i(), 1);
   BOOST_CHECK_EQUAL(vToWrite.get_b(), true);

   Type10 type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, outValues));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x30, 0x10, 0xA5, 0x06, 0x02, 0x01, 0xFF, 0x01, 0x01, 0x00, 0xA5, 0x06, 0x02, 0x01, 0x01, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   
   Type10::ValueType inValues;
   BOOST_CHECK_NO_THROW(type.read(reader, inValues));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());
   
   BOOST_REQUIRE_EQUAL(outValues.size(), inValues.size());

   Type10::InnerType::ValueType vToRead = inValues[0];
   BOOST_CHECK_EQUAL(vToRead.get_i(), -1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), false);

   vToRead = inValues[1];
   BOOST_CHECK_EQUAL(vToRead.get_i(), 1);
   BOOST_CHECK_EQUAL(vToRead.get_b(), true);
}

}

namespace enumerated_type
{
// ASN.1 (EXPLICIT environment):
// Type1 ::= ENUMERATED { a1, a2, a3 }
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] ENUMERATED
// Type9 ::= [5] IMPLICIT ENUMERATED

class Type1 : public asn1::EnumeratedType
{
public:

   explicit Type1()
   {
      _addEnumValue(k_a1);
      _addEnumValue(k_a2);
      _addEnumValue(k_a3);
   }

   enum EnumeratedValue_Type
   {
      k_a1 = 0,
      k_a2 = 1,
      k_a3 = 2
   };

   typedef EnumeratedValue_Type ValueType;

   void write(asn1::ASN1ValueWriter& writer, const ValueType& value) const
   {
      asn1::EnumeratedType::write(writer, value);
   }

   void read(asn1::ASN1ValueReader& reader, ValueType& value) const
   { 
      asn1::EnumeratedType::ValueType v;
      asn1::EnumeratedType::read(reader, v);
      value = static_cast<ValueType>(v);
   }
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};


class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

BOOST_AUTO_TEST_CASE(TestBerEnumeratedType1)
{
   Type1::ValueType vToWrite = Type1::k_a1, vToRead = Type1::k_a3;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type1 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x0A, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerEnumeratedType2)
{
   Type1::ValueType vToWrite = Type1::k_a1, vToRead = Type1::k_a3;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type2 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x43, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerEnumeratedType3)
{
   Type1::ValueType vToWrite = Type1::k_a1, vToRead = Type1::k_a3;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type3 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x03, 0x43, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerEnumeratedType4)
{
   Type1::ValueType vToWrite = Type1::k_a1, vToRead = Type1::k_a3;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type4 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x03, 0x43, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerEnumeratedType5)
{
   Type1::ValueType vToWrite = Type1::k_a1, vToRead = Type1::k_a3;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type5 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x82, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerEnumeratedType6)
{
   Type1::ValueType vToWrite = Type1::k_a1, vToRead = Type1::k_a3;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type6 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x05, 0xA2, 0x03, 0x43, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

BOOST_AUTO_TEST_CASE(TestBerEnumeratedType7)
{
   Type1::ValueType vToWrite = Type1::k_a1, vToRead = Type1::k_a3;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   Type7 type;

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x05, 0xA2, 0x03, 0x43, 0x01, 0x00 };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToWrite, vToRead);
}

}

namespace bit_string_tests
{

// ASN.1 (EXPLICIT environment):
// Type1 ::= BIT STRING
// Type2 ::= [APPLICATION 3] IMPLICIT Type1
// Type3 ::= [2] Type2
// Type4 ::= [APPLICATION 7] IMPLICIT Type3
// Type5 ::= [2] IMPLICIT Type2
// Type6 ::= [3] Type3
// Type7 ::= [4] IMPLICIT Type6
// Type8 ::= [5] BIT STRING
// Type9 ::= [5] IMPLICIT BIT STRING

class Type1 : public asn1::BitStringType
{
};

class Type2 : public asn1::TaggingType<Type1>
{
public:
   Type2() : asn1::TaggingType<Type1>(new Type1)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type3 : public asn1::TaggingType<Type2>
{
public:
   Type3() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type4 : public asn1::TaggingType<Type3>
{
public:
   Type4() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(asn1::Type::APPLICATION);
   }
};

class Type5 : public asn1::TaggingType<Type2>
{
public:
   Type5() : asn1::TaggingType<Type2>(new Type2)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type6 : public asn1::TaggingType<Type3>
{
public:
   Type6() : asn1::TaggingType<Type3>(new Type3)
   {
      setTagging(asn1::Type::EXPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type7 : public asn1::TaggingType<Type6>
{
public:
   Type7() : asn1::TaggingType<Type6>(new Type6)
   {
      setTagging(asn1::Type::IMPLICIT_TAGGING);
      setTagNumber(4);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
   }
};

class Type8 : public asn1::TaggingType<asn1::BitStringType>
{
public:
   Type8() : asn1::TaggingType<asn1::BitStringType>(new asn1::BitStringType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::EXPLICIT_TAGGING);
   }
};

class Type9 : public asn1::TaggingType<asn1::BitStringType>
{
public:
   Type9() : asn1::TaggingType<asn1::BitStringType>(new asn1::BitStringType)
   {
      setTagNumber(5);
      setTagClass(asn1::Type::CONTEXT_SPECIFIC);
      setTagging(asn1::Type::IMPLICIT_TAGGING);
   }
};

BOOST_AUTO_TEST_CASE(TestBitStringValue)
{
   asn1::BitStringType::ValueType value;

   BOOST_CHECK_NO_THROW(value.setValue("01"));
   BOOST_CHECK_EQUAL(value.size(), 2);
   BOOST_CHECK_EQUAL(value[0], false);
   BOOST_CHECK_EQUAL(value[1], true);
   BOOST_CHECK_EQUAL(value.getValueAsString(), "01");

   value.setBit(0);
   BOOST_CHECK_EQUAL(value[0], true);
   value.clearBit(0);
   BOOST_CHECK_EQUAL(value[0], false);

   BOOST_CHECK_THROW(value.setValue("A"), asn1::ASN1Exception);
   BOOST_CHECK_EQUAL(value.size(), 2);
   BOOST_CHECK_EQUAL(value[0], false);
   BOOST_CHECK_EQUAL(value[1], true);
   BOOST_CHECK_EQUAL(value.getValueAsString(), "01");

   BOOST_CHECK_THROW(value.setValue("102"), asn1::ASN1Exception);
   BOOST_CHECK_EQUAL(value.size(), 2);
   BOOST_CHECK_EQUAL(value[0], false);
   BOOST_CHECK_EQUAL(value[1], true);
   BOOST_CHECK_EQUAL(value.getValueAsString(), "01");

   BOOST_CHECK_NO_THROW(value.setValue("111"));
   BOOST_CHECK_EQUAL(value.size(), 3);
   BOOST_CHECK_EQUAL(value[0], true);
   BOOST_CHECK_EQUAL(value[1], true);
   BOOST_CHECK_EQUAL(value[2], true);
   BOOST_CHECK_EQUAL(value.getValueAsString(), "111");

   // constructors
   BOOST_CHECK_NO_THROW(asn1::BitStringType::ValueType value("01"));
   BOOST_CHECK_THROW(asn1::BitStringType::ValueType value("012"), asn1::ASN1Exception);
}

template <typename Type>
struct BitStringFixture
{
   BitStringFixture()
   {
      BOOST_CHECK_NO_THROW(vToWrite.setValue("1010100110001010")); // in hex: A98A
   }
   ~BitStringFixture()
   {
      BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
      BOOST_CHECK_EQUAL(vToWrite.getValueAsString(), vToRead.getValueAsString());
   }

   typename Type::ValueType vToWrite, vToRead;
   Type type;
};

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType1, BitStringFixture<Type1>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x03, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType2, BitStringFixture<Type2>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x43, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType3, BitStringFixture<Type3>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA2, 0x05, 0x43, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType4, BitStringFixture<Type4>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x67, 0x05, 0x43, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType5, BitStringFixture<Type5>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x82, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType6, BitStringFixture<Type6>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA3, 0x07, 0xA2, 0x05, 0x43, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType7, BitStringFixture<Type7>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA4, 0x07, 0xA2, 0x05, 0x43, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType8, BitStringFixture<Type8>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA5, 0x05, 0x03, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

BOOST_FIXTURE_TEST_CASE(TestBerBitStringType9, BitStringFixture<Type9>)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x85, 0x03, 0x00, 0xA9, 0x8A };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(), dataToTest,
      dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

}

namespace set_of_tests
{

template <typename Type>
struct SetOfFixture
{
   SetOfFixture() : type(new typename Type::InnerType())
   {
      vToWrite.push_back(-1);
      vToWrite.push_back(1);
      vToWrite.push_back(0);
   }
   ~SetOfFixture()
   {
      BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite.begin(), vToWrite.end(), vToRead.begin(), vToRead.end());
   }

   typename Type::ValueType vToWrite, vToRead;
   Type type;
};

// ASN.1: SET OF INTEGER
BOOST_FIXTURE_TEST_CASE(TestBERSetOfInteger, SetOfFixture<asn1::SetOfType<asn1::IntegerType> >)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());

   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());
}

template <typename Type>
struct SetOfSetOfFixture
{
   SetOfSetOfFixture() : type(new typename Type::InnerType(new typename Type::InnerType::InnerType))
   {
      typename Type::InnerType::ValueType element;

      element.push_back(-1);
      element.push_back(0);
      element.push_back(1);
      vToWrite.push_back(element);

      element.clear();
      element.push_back(-2);
      element.push_back(0);
      element.push_back(2);
      vToWrite.push_back(element);
   }
   ~SetOfSetOfFixture()
   {
      BOOST_REQUIRE_EQUAL(vToWrite.size(), vToRead.size());
      for (std::size_t i = 0; i < vToWrite.size(); ++i)
      {
         BOOST_CHECK_EQUAL(vToWrite[i].size(), vToRead[i].size());
         BOOST_CHECK_EQUAL_COLLECTIONS(vToWrite[i].begin(), vToWrite[i].end(), vToRead[i].begin(), vToRead[i].end());
      }
   }

   typename Type::ValueType vToWrite, vToRead;
   Type type;
};

// ASN.1: SET OF SET OF INTEGER
BOOST_FIXTURE_TEST_CASE(TestBERSetOfSetOfInteger, SetOfSetOfFixture<asn1::SetOfType<asn1::SetOfType<asn1::IntegerType> > >)
{
   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
   BOOST_CHECK_EQUAL(inbuffer.current(), inbuffer.size());
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
