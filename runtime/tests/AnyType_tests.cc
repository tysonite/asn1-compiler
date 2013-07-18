namespace any_tests
{

namespace asn1
{

namespace generated
{

// TypeAssignment for ASN.1 type: NullDecl
class NullDecl : public ::asn1::NullType
{
public:

   explicit NullDecl()
   {
   }

};

// TypeAssignment for ASN.1 type: SeqDecl
class SeqDecl : public ::asn1::SequenceType
{
public:

   explicit SeqDecl()
   {
   }

   class SequenceValue_Type
   {
   public:

      // Component: any
      void set_any(const ::asn1::AnyType::ValueType& v) { _any = v;  }
      const ::asn1::AnyType::ValueType& get_any() const { return _any; }
      ::asn1::AnyType::ValueType& get_any() { return _any; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_any != other._any)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      ::asn1::AnyType::ValueType _any;
   };

   typedef SequenceValue_Type ValueType;

   void read(::asn1::ASN1ValueReader& reader, ValueType& value) const;
   void write(::asn1::ASN1ValueWriter& writer, const ValueType& value) const;

private:

   ::asn1::AnyType _any_Type;

};

void SeqDecl::read(::asn1::ASN1ValueReader& reader, ValueType& value) const
{
   reader.readSequenceBegin(*this);

   {
      ::asn1::AnyType::ValueType v;
      _any_Type.read(reader, v);
      value.set_any(v);
   }

   reader.readSequenceEnd(*this);
}

void SeqDecl::write(::asn1::ASN1ValueWriter& writer, const ValueType& value) const
{
   writer.writeSequenceBegin(*this);

   _any_Type.write(writer, value.get_any());

   writer.writeSequenceEnd(*this);
}

}

}

BOOST_AUTO_TEST_CASE(TestBerAnyTypeSequenceWithNull)
{
   asn1::generated::SeqDecl::ValueType vToWrite, vToRead;
   asn1::generated::SeqDecl type;

   // write NULL value into BER stream
   ::asn1::BERBuffer nullbuffer;
   ::asn1::BERValueWriter nullwriter(nullbuffer);

   asn1::generated::NullDecl nullType;
   asn1::generated::NullDecl::ValueType nullValue;

   BOOST_CHECK_NO_THROW(nullType.write(nullwriter, nullValue));
   BOOST_CHECK_EQUAL(nullbuffer.size(), 2);

   // set encoded BER data into ANY value
   vToWrite.set_any(::asn1::AnyType::ValueType(
      reinterpret_cast<const char*>(nullbuffer.data()), nullbuffer.size()));

   // encoding
   ::asn1::BERBuffer outbuffer;
   ::asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   // decoding
   ::asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   ::asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL_COLLECTIONS(nullbuffer.data(), nullbuffer.data() + nullbuffer.size(),
      vToRead.get_any().data(), vToRead.get_any().data() + vToRead.get_any().size());
}

BOOST_AUTO_TEST_CASE(TestBerAnyType_WrongAnyValue1)
{
   ::asn1::AnyType type;
   ::asn1::AnyType::ValueType vToRead;

   // decoding
   ::asn1::BERBuffer inbuffer; // empty buffer means empry ANY type value
   ::asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_THROW(type.read(reader, vToRead), ::asn1::ASN1Exception);
}

BOOST_AUTO_TEST_CASE(TestBerAnyType_WrongAnyValue2)
{
   ::asn1::AnyType type;
   ::asn1::AnyType::ValueType vToRead;

   // decoding
   ::asn1::BERBuffer inbuffer(reinterpret_cast<const ::asn1::BERBuffer::ValueType*>("0"), 1);
   ::asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_THROW(type.read(reader, vToRead), ::asn1::ASN1Exception);
}

BOOST_AUTO_TEST_CASE(TestBerAnyType_CorrectAnyValue)
{
   ::asn1::AnyType type;
   ::asn1::AnyType::ValueType vToRead;

   // decoding
   ::asn1::BERBuffer inbuffer;

   // write NULL type value into BER buffer
   inbuffer.encodeIdentifierOctets(::asn1::BERBuffer::NULL_BERTYPE);
   inbuffer.encodeLengthOctets(0);

   ::asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));
}

}
