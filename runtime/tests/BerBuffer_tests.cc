#include <BERBuffer.hh>

namespace berbuffer_tests
{

BOOST_AUTO_TEST_CASE(BerBufferTestConstructors)
{
   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_EQUAL(buffer.current(), 0);
      BOOST_CHECK_EQUAL(buffer.end(), 0);
      BOOST_CHECK_EQUAL(buffer.size(), 0);
      BOOST_CHECK_EQUAL(buffer.isEmpty(), true);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "abcde", 5);

      BOOST_CHECK_EQUAL(buffer.current(), 0);
      BOOST_CHECK_EQUAL(buffer.end(), 0);
      BOOST_CHECK_EQUAL(buffer.size(), 5);
      BOOST_CHECK_EQUAL(buffer.isEmpty(), false);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "abcde", 0);

      BOOST_CHECK_EQUAL(buffer.current(), 0);
      BOOST_CHECK_EQUAL(buffer.end(), 0);
      BOOST_CHECK_EQUAL(buffer.size(), 0);
      BOOST_CHECK_EQUAL(buffer.isEmpty(), true);
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestClear)
{
   asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
   
   BOOST_CHECK_EQUAL(buffer.isEmpty(), false);
   BOOST_CHECK_EQUAL(buffer.size(), 3);

   buffer.clear();
   
   BOOST_CHECK_EQUAL(buffer.size(), 0);
   BOOST_CHECK_EQUAL(buffer.isEmpty(), true);
   BOOST_CHECK_EQUAL(buffer.current(), 0);
   BOOST_CHECK_EQUAL(buffer.end(), 0);
}

BOOST_AUTO_TEST_CASE(BerBufferTestSetCurrent)
{
   asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

   BOOST_CHECK_EQUAL(buffer.current(), 0);
   buffer.setCurrent(2);
   BOOST_CHECK_EQUAL(buffer.current(), 2);

   BOOST_CHECK_THROW(buffer.setCurrent(10), asn1::BERBufferException);
   BOOST_CHECK_EQUAL(buffer.current(), 2);
}

BOOST_AUTO_TEST_CASE(BerBufferTestSetEnd)
{
   asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

   BOOST_CHECK_EQUAL(buffer.end(), 0);
   buffer.setEnd(2);
   BOOST_CHECK_EQUAL(buffer.end(), 2);

   BOOST_CHECK_THROW(buffer.setEnd(10), asn1::BERBufferException);
   BOOST_CHECK_EQUAL(buffer.end(), 2);
}

BOOST_AUTO_TEST_CASE(BerBufferTestClearCurrentAndClearEnd)
{
   asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

   BOOST_CHECK_EQUAL(buffer.current(), 0);
   BOOST_CHECK_EQUAL(buffer.end(), 0);

   buffer.setCurrent(2);
   buffer.setEnd(2);

   buffer.clearCurrent();
   BOOST_CHECK_EQUAL(buffer.current(), 0);

   buffer.clearEnd();
   BOOST_CHECK_EQUAL(buffer.end(), 0);
}

BOOST_AUTO_TEST_CASE(BerBufferTestGet)
{
   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x31));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x32));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x33));

      BOOST_CHECK_EQUAL(buffer.current(), 3);

      BOOST_CHECK_THROW(buffer.get(), asn1::BERBufferException);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

      buffer.setEnd(2);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x31));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x32));

      BOOST_CHECK_EQUAL(buffer.current(), 2);

      BOOST_CHECK_THROW(buffer.get(), asn1::BERBufferException);
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestPut)
{
   {
      asn1::BERBuffer buffer;
      buffer.resize(3); // increase buffer size

      BOOST_CHECK_NO_THROW(buffer.put(0, 1));
      BOOST_CHECK_THROW(buffer.put(3, 1), asn1::BERBufferException);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 1));
   }

   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_NO_THROW(buffer.put(1));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 1));
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestWrite)
{
   {
      asn1::BERBuffer buffer;

      buffer.write((asn1::BERBuffer::ValueType*) "123", 3);

      BOOST_CHECK_EQUAL(buffer.size(), 3);
      BOOST_CHECK_EQUAL(buffer.isEmpty(), false);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x31));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x32));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x33));

      // write again, but from BERBuffer itself
      asn1::BERBuffer bufferNew((asn1::BERBuffer::ValueType*) "456", 3);
      buffer.write(bufferNew);

      BOOST_CHECK_EQUAL(buffer.size(), 6);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x34));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x35));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x36));

      // insert data starting from position equal to 3
      buffer.write(3, (asn1::BERBuffer::ValueType*) "789", 3);

      BOOST_CHECK_EQUAL(buffer.size(), 9);

      buffer.setCurrent(3);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x37));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x38));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x39));
   }

   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_EQUAL(buffer.size(), 0);
      buffer.write((asn1::BERBuffer::ValueType*) "", 0); // nothing was written
      BOOST_CHECK_EQUAL(buffer.size(), 0);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

      BOOST_CHECK_EQUAL(buffer.size(), 3);
      buffer.write(0, (asn1::BERBuffer::ValueType*) "", 0); // nothing was written
      BOOST_CHECK_EQUAL(buffer.size(), 3);
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestRead)
{
   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      asn1::BERBuffer::ValueType raw[3];

      BOOST_CHECK_NO_THROW(buffer.read(raw, 3));
      BOOST_CHECK_EQUAL_COLLECTIONS(buffer.data(), buffer.data() + 3, raw, raw + 3);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      asn1::BERBuffer::ValueType raw[1];

      BOOST_CHECK_EQUAL(buffer.current(), 0);
      BOOST_CHECK_NO_THROW(buffer.read(raw, 0)); // nothing was read
      BOOST_CHECK_EQUAL(buffer.current(), 0);
   }

   { // two sequential reads
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      asn1::BERBuffer::ValueType raw1[1], raw2[2];

      BOOST_CHECK_NO_THROW(buffer.read(raw1, 1));
      BOOST_CHECK_EQUAL_COLLECTIONS(buffer.data(), buffer.data() + 1, raw1, raw1 + 1);

      BOOST_CHECK_NO_THROW(buffer.read(raw2, 2));
      BOOST_CHECK_EQUAL_COLLECTIONS(buffer.data() + 1, buffer.data() + 3, raw2, raw2 + 2);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      asn1::BERBuffer::ValueType raw[3];

      buffer.setEnd(3);

      BOOST_CHECK_NO_THROW(buffer.read(raw, 3));
      BOOST_CHECK_EQUAL_COLLECTIONS(buffer.data(), buffer.data() + 3, raw, raw + 3);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      asn1::BERBuffer::ValueType raw[3];

      BOOST_CHECK_THROW(buffer.read(raw, 4), asn1::BERBufferException);
   }

   {
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      asn1::BERBuffer::ValueType raw[3];

      buffer.setEnd(2);

      BOOST_CHECK_THROW(buffer.read(raw, 3), asn1::BERBufferException);
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestExtend)
{
   { // insert space at the begging of the buffer
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      
      BOOST_CHECK_NO_THROW(buffer.extend(0, 5));
      BOOST_CHECK_EQUAL(buffer.size(), 8);
   
      asn1::BERBuffer::ValueType raw[3];
      buffer.setCurrent(5); // skip first 5 bytes with garbage

      BOOST_CHECK_NO_THROW(buffer.read(raw, 3));
      BOOST_CHECK_EQUAL_COLLECTIONS(buffer.data() + 5, buffer.data() + 8, raw, raw + 3);
   }

   { // insert space at the end of the buffer
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      
      BOOST_CHECK_NO_THROW(buffer.extend(2, 5));
      BOOST_CHECK_EQUAL(buffer.size(), 8);

      asn1::BERBuffer::ValueType raw[3];

      BOOST_CHECK_NO_THROW(buffer.read(raw, 3));
      BOOST_CHECK_EQUAL_COLLECTIONS(buffer.data(), buffer.data() + 3, raw, raw + 3);
   }

   { // insert space into middle of the buffer
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "1234", 4);
      
      BOOST_CHECK_NO_THROW(buffer.extend(1, 5));
      BOOST_CHECK_EQUAL(buffer.size(), 9);

      asn1::BERBuffer::ValueType raw[2];

      BOOST_CHECK_NO_THROW(buffer.read(raw, 2));
      BOOST_CHECK_EQUAL_COLLECTIONS(buffer.data(), buffer.data() + 2, raw, raw + 2);

      for (int i = 0; i < 5; ++i)
         BOOST_CHECK_NO_THROW(buffer.get());

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x33));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x34));
      BOOST_CHECK_THROW(buffer.get(), asn1::BERBufferException); // this byte does not exist
   }

   { // remove space at the specified position
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

      BOOST_CHECK_EQUAL(buffer.size(), 3);
      BOOST_CHECK_NO_THROW(buffer.extend(1, -1));
      BOOST_CHECK_EQUAL(buffer.size(), 2);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x31));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x33));
      BOOST_CHECK_THROW(buffer.get(), asn1::BERBufferException); // this byte does not exist
   }

   { // check that throws an exception in case of wrong position
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);
      BOOST_CHECK_THROW(buffer.extend(3, 5), asn1::BERBufferException);
   }

   { // check that the buffer is unchanged in case of delta is equal to 0
      asn1::BERBuffer buffer((asn1::BERBuffer::ValueType*) "123", 3);

      BOOST_CHECK_EQUAL(buffer.size(), 3);
      BOOST_CHECK_NO_THROW(buffer.extend(2, 0));
      BOOST_CHECK_EQUAL(buffer.size(), 3);
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestSwap)
{
   asn1::BERBuffer::ValueType rawBuf1[3];
   std::memcpy(rawBuf1, "123", 3);

   asn1::BERBuffer buf1(rawBuf1, 3);

   asn1::BERBuffer::ValueType rawBuf2[2];
   std::memcpy(rawBuf2, "45", 2);

   asn1::BERBuffer buf2(rawBuf2, 2);

   buf1.setCurrent(2);
   buf2.setCurrent(1);

   buf1.swap(buf2);

   BOOST_CHECK_EQUAL_COLLECTIONS(buf1.data(), buf1.data() + buf1.size(), rawBuf2, rawBuf2 + 2);
   BOOST_CHECK_EQUAL_COLLECTIONS(buf2.data(), buf2.data() + buf2.size(), rawBuf1, rawBuf1 + 3);

   BOOST_CHECK_EQUAL(buf1.current(), 1);
   BOOST_CHECK_EQUAL(buf2.current(), 2);
}

BOOST_AUTO_TEST_CASE(BerBufferTestIndefiniteLength)
{
   // encode length in indefinite from
   asn1::BERBuffer buffer;
   buffer.encodeLengthOctets(-1);

   BOOST_CHECK_EQUAL(buffer.size(), 1);
   BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x80));

   // go back to the begging of the buffer
   buffer.setCurrent(0);

   int64_t length(0);
   BOOST_CHECK_NO_THROW(buffer.decodeLengthOctets(length));
   BOOST_CHECK_EQUAL(length, -1);
}

BOOST_AUTO_TEST_CASE(BerBufferTestDefiniteShortLength)
{
   { // encode length in definite from (left corner case)
      asn1::BERBuffer buffer;
      buffer.encodeLengthOctets(0);

      BOOST_CHECK_EQUAL(buffer.size(), 1);
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x00));

      // go back to the begging of the buffer
      buffer.setCurrent(0);

      int64_t length(-1);
      BOOST_CHECK_NO_THROW(buffer.decodeLengthOctets(length));
      BOOST_CHECK_EQUAL(length, 0);
   }

   { // encode length in definite from (right corner case)
      asn1::BERBuffer buffer;
      buffer.encodeLengthOctets(127);

      BOOST_CHECK_EQUAL(buffer.size(), 1);
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x7F));

      // go back to the begging of the buffer
      buffer.setCurrent(0);

      int64_t length(-1);
      BOOST_CHECK_NO_THROW(buffer.decodeLengthOctets(length));
      BOOST_CHECK_EQUAL(length, 127);
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestDefiniteLongLength)
{
   { // encode length in definite long from
      asn1::BERBuffer buffer;
      buffer.encodeLengthOctets(65535);

      BOOST_CHECK_EQUAL(buffer.size(), 3);
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0x82));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0xFF));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.get(), 0xFF));

      // go back to the begging of the buffer
      buffer.setCurrent(0);

      int64_t length(-1);
      BOOST_CHECK_NO_THROW(buffer.decodeLengthOctets(length));
      BOOST_CHECK_EQUAL(length, 65535);
   }

   { // encode length in definite long from (max of int64_t type)
      asn1::BERBuffer buffer;
      buffer.encodeLengthOctets(std::numeric_limits<int64_t>::max());

      BOOST_CHECK_EQUAL(buffer.size(), 9);

      int64_t length(-1);
      BOOST_CHECK_NO_THROW(buffer.decodeLengthOctets(length));
      BOOST_CHECK_EQUAL(length, std::numeric_limits<int64_t>::max());
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestIdentifierLength)
{
   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE), static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::PRIMITIVE_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::UNIVERSAL_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }

   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE),
         static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::UNIVERSAL_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }

   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE, asn1::BERBuffer::PRIMITIVE_OBJECTYPE,
         asn1::BERBuffer::APPLICATION_CLASSTYPE), static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::PRIMITIVE_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::APPLICATION_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }


   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE, asn1::BERBuffer::PRIMITIVE_OBJECTYPE,
         asn1::BERBuffer::CONTEXT_CLASSTYPE), static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::PRIMITIVE_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::CONTEXT_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }

   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE, asn1::BERBuffer::PRIMITIVE_OBJECTYPE,
         asn1::BERBuffer::PRIVATE_CLASSTYPE), static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::PRIMITIVE_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::PRIVATE_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }

   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE,
         asn1::BERBuffer::APPLICATION_CLASSTYPE), static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::APPLICATION_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }


   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE,
         asn1::BERBuffer::CONTEXT_CLASSTYPE), static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::CONTEXT_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }

   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE,
         asn1::BERBuffer::PRIVATE_CLASSTYPE), static_cast<unsigned int>(0)));

      asn1::TagType tag;
      asn1::PCType pc;
      asn1::CLType cl;
      int64_t length(-1);

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(tag, pc, cl, length), static_cast<unsigned int>(0)));

      BOOST_CHECK_EQUAL(tag, asn1::BERBuffer::BOOLEAN_BERTYPE);
      BOOST_CHECK_EQUAL(pc, asn1::BERBuffer::CONSTRUCTED_OBJECTYPE);
      BOOST_CHECK_EQUAL(cl, asn1::BERBuffer::PRIVATE_CLASSTYPE);
      BOOST_CHECK_EQUAL(length, 0);
   }

   {
      asn1::BERBuffer buffer;
      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(
         buffer.encodeIL(asn1::BERBuffer::BOOLEAN_BERTYPE), static_cast<unsigned int>(0)));

      BOOST_CHECK_NO_THROW(BOOST_CHECK_GT(buffer.decodeIL(), static_cast<unsigned int>(0)));
   }
}

BOOST_AUTO_TEST_CASE(BerBufferTestContentOctets)
{
   asn1::BERBuffer buffer;
   asn1::BERBuffer::ContentType contentOut(10, 'a'), contentIn;

   BOOST_CHECK_NO_THROW(buffer.encodeContentOctets(contentOut));
   BOOST_CHECK_NO_THROW(buffer.decodeContentOctets(contentIn));

   BOOST_CHECK_EQUAL(contentOut.size(), contentIn.size());
   BOOST_CHECK_EQUAL_COLLECTIONS(contentOut.begin(), contentOut.end(), contentIn.begin(), contentIn.end());
}

BOOST_AUTO_TEST_CASE(BerBufferTestUnsignedInteger)
{
   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_NO_THROW(buffer.encodeUnsignedInteger(std::numeric_limits<uint8_t>::min()));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.decodeUnsignedInteger<uint8_t>(), std::numeric_limits<uint8_t>::min()));
   }

   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_NO_THROW(buffer.encodeUnsignedInteger(std::numeric_limits<uint8_t>::max()));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.decodeUnsignedInteger<uint8_t>(), std::numeric_limits<uint8_t>::max()));
   }


   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_NO_THROW(buffer.encodeUnsignedInteger(std::numeric_limits<uint16_t>::max()));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.decodeUnsignedInteger<uint16_t>(), std::numeric_limits<uint16_t>::max()));
   }

   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_NO_THROW(buffer.encodeUnsignedInteger(std::numeric_limits<uint32_t>::max()));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.decodeUnsignedInteger<uint32_t>(), std::numeric_limits<uint32_t>::max()));
   }

   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_NO_THROW(buffer.encodeUnsignedInteger(std::numeric_limits<uint32_t>::max()));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.decodeUnsignedInteger<uint32_t>(), std::numeric_limits<uint32_t>::max()));
   }

   {
      asn1::BERBuffer buffer;

      BOOST_CHECK_NO_THROW(buffer.encodeUnsignedInteger(std::numeric_limits<uint64_t>::max()));
      BOOST_CHECK_NO_THROW(BOOST_CHECK_EQUAL(buffer.decodeUnsignedInteger<uint64_t>(), std::numeric_limits<uint64_t>::max()));
   }
}

}
