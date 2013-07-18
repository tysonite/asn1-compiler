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

namespace choice_tagged_choice_type
{

// ASN.1 (EXPLICIT environment):
// TypeChoice ::= CHOICE { [0] TypeNestedChoice CHOICE { i INTEGER, b BOOLEAN }, [1] TypeNestedChoice1 CHOICE { i INTEGER, b BOOLEAN } }

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

class TaggedNestedChoice : public asn1::TaggingType<TypeNestedChoice>
{
public:

   explicit TaggedNestedChoice() : asn1::TaggingType<TypeNestedChoice>(new TypeNestedChoice)
   {
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }
};

class TaggedNestedChoice1 : public asn1::TaggingType<TypeNestedChoice>
{
public:

   explicit TaggedNestedChoice1() : asn1::TaggingType<TypeNestedChoice>(new TypeNestedChoice)
   {
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }
};

class TypeChoice : public asn1::ChoiceType
{
public:

   explicit TypeChoice() : asn1::ChoiceType()
   {
      _addChoice(&_TypeNestedChoice_Type);
      _addChoice(&_TypeNestedChoice1_Type);
   }

   class TypeChoice_Value
   {
   public:

      explicit TypeChoice_Value() : _id(__VALUE_NOT_DEFINED__) {}

      void set_TypeNestedChoice(const TaggedNestedChoice::ValueType& v) { _TypeNestedChoice = v; _id = TypeNestedChoice_ID; }
      const TaggedNestedChoice::ValueType& get_TypeNestedChoice() const { return _TypeNestedChoice; }
      bool has_TypeNestedChoice_Choosen() const { return _id == TypeNestedChoice_ID; }

      void set_TypeNestedChoice1(const TaggedNestedChoice1::ValueType& v) { _TypeNestedChoice1 = v; _id = TypeNestedChoice1_ID; }
      const TaggedNestedChoice1::ValueType& get_TypeNestedChoice1() const { return _TypeNestedChoice1; }
      bool has_TypeNestedChoice1_Choosen() const { return _id == TypeNestedChoice1_ID; }

   private:

      enum ChoiceValue_identifier
      {
         TypeNestedChoice_ID = 1,
         TypeNestedChoice1_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      TaggedNestedChoice::ValueType _TypeNestedChoice;
      TaggedNestedChoice1::ValueType _TypeNestedChoice1;

      ChoiceValue_identifier _id;
   };

   typedef TypeChoice_Value ValueType;

   void read(asn1::ASN1ValueReader& reader, TypeChoice_Value& value) const
   {
      asn1::Type* choosenType = NULL;
      reader.readChoice(*this, &choosenType);

      if (choosenType == &_TypeNestedChoice_Type)
      {
         TaggedNestedChoice::ValueType v;
         _TypeNestedChoice_Type.read(reader, v);
         value.set_TypeNestedChoice(v);
      }
      else if (choosenType == &_TypeNestedChoice1_Type)
      {
         TaggedNestedChoice1::ValueType v;
         _TypeNestedChoice1_Type.read(reader, v);
         value.set_TypeNestedChoice1(v);
      }
      else
      {
         throw asn1::ASN1Exception("Expected " + toString() + " must be one of: " +
            _TypeNestedChoice_Type.toString() + ", " + _TypeNestedChoice1_Type.toString());
      }
   }

   void write(asn1::ASN1ValueWriter& writer, const TypeChoice_Value& value) const
   {
      assert(value.has_TypeNestedChoice_Choosen() || value.has_TypeNestedChoice1_Choosen());

      if (value.has_TypeNestedChoice_Choosen())
         _TypeNestedChoice_Type.write(writer, value.get_TypeNestedChoice());
      else if (value.has_TypeNestedChoice1_Choosen())
         _TypeNestedChoice1_Type.write(writer, value.get_TypeNestedChoice1());
   }

private:

   TaggedNestedChoice _TypeNestedChoice_Type;
   TaggedNestedChoice1 _TypeNestedChoice1_Type;
};

BOOST_AUTO_TEST_CASE(TestBerChoiceTaggedNestedChoiceType)
{
   TaggedNestedChoice::ValueType nc;

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

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA0, 0x03, 0x01, 0x01, 0xFF };
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

BOOST_AUTO_TEST_CASE(TestBerChoiceTaggedNestedChoiceType1)
{
   TaggedNestedChoice1::ValueType nc;

   BOOST_CHECK_EQUAL(nc.has_b_Choosen(), false);
   BOOST_CHECK_EQUAL(nc.has_i_Choosen(), false);

   nc.set_b(true);

   BOOST_CHECK_EQUAL(nc.has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(nc.get_b(), true);

   TypeChoice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_TypeNestedChoice1_Choosen(), false);

   vToWrite.set_TypeNestedChoice1(nc);

   BOOST_CHECK_EQUAL(vToWrite.has_TypeNestedChoice1_Choosen(), true);

   TypeChoice type;

   // encoding
   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0xA1, 0x03, 0x01, 0x01, 0xFF };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_TypeNestedChoice1_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_TypeNestedChoice1().has_i_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.get_TypeNestedChoice1().has_b_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_TypeNestedChoice1().get_b(), true);
}

}

namespace choicetype_tests
{
// ASN.1:
//
// Test DEFINITIONS ::= BEGIN
//   Choice ::= CHOICE { c1 ChoiceInsideChoice1, c2 ChoiceInsideChoice2 }
//   ChoiceInsideChoice1 ::= CHOICE { c1 ChoiceInsideChoiceInsideChoice1 }
//   ChoiceInsideChoice2 ::= CHOICE { c2 ChoiceInsideChoiceInsideChoice2 }
//   ChoiceInsideChoiceInsideChoice1 ::= CHOICE { f INTEGER }
//   ChoiceInsideChoiceInsideChoice2 ::= CHOICE { f [APPLICATION 0] IMPLICIT INTEGER }
// END 

// TypeAssignment for ASN.1 type: ChoiceInsideChoiceInsideChoice1
class ChoiceInsideChoiceInsideChoice1 : public asn1::ChoiceType
{
public:

   explicit ChoiceInsideChoiceInsideChoice1()
   {
      _addChoice(&_f_Type);
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: f
      void set_f(const asn1::IntegerType::ValueType& v) { _f = v; _id = f_ID; }
      const asn1::IntegerType::ValueType& get_f() const { assert(_id == f_ID); return _f; }
      asn1::IntegerType::ValueType& get_f() { assert(_id == f_ID); return _f; }
      bool has_f_Choosen() const { return _id == f_ID; }
      void choose_f() { _id = f_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case f_ID:
            if (_f != other._f)
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
         f_ID = 1,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::IntegerType::ValueType _f;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(asn1::ASN1ValueReader& reader, ValueType& value) const;
   void write(asn1::ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _f_Type;

};

// TypeAssignment for ASN.1 type: ChoiceInsideChoice1
class ChoiceInsideChoice1 : public asn1::ChoiceType
{
public:

   explicit ChoiceInsideChoice1()
   {
      _addChoice(&_c1_Type);
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: c1
      void set_c1(const ChoiceInsideChoiceInsideChoice1::ValueType& v) { _c1 = v; _id = c1_ID; }
      const ChoiceInsideChoiceInsideChoice1::ValueType& get_c1() const { assert(_id == c1_ID); return _c1; }
      ChoiceInsideChoiceInsideChoice1::ValueType& get_c1() { assert(_id == c1_ID); return _c1; }
      bool has_c1_Choosen() const { return _id == c1_ID; }
      void choose_c1() { _id = c1_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case c1_ID:
            if (_c1 != other._c1)
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
         c1_ID = 1,
         __VALUE_NOT_DEFINED__ = -1
      };

      ChoiceInsideChoiceInsideChoice1::ValueType _c1;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(asn1::ASN1ValueReader& reader, ValueType& value) const;
   void write(asn1::ASN1ValueWriter& writer, const ValueType& value) const;

private:

   ChoiceInsideChoiceInsideChoice1 _c1_Type;

};

// TypeAssignment for ASN.1 type: f_INTERNAL__IMPLICIT_APPLICATION_0_INTERNAL_asn1__IntegerType
class f_INTERNAL__IMPLICIT_APPLICATION_0_INTERNAL_asn1__IntegerType : public asn1::TaggingType<asn1::IntegerType>
{
public:

   explicit f_INTERNAL__IMPLICIT_APPLICATION_0_INTERNAL_asn1__IntegerType() : asn1::TaggingType<asn1::IntegerType>(new asn1::IntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(0);
   }

};

// TypeAssignment for ASN.1 type: ChoiceInsideChoiceInsideChoice2
class ChoiceInsideChoiceInsideChoice2 : public asn1::ChoiceType
{
public:

   explicit ChoiceInsideChoiceInsideChoice2()
   {
      _addChoice(&_f_Type);
   }

   // Complex types
   typedef f_INTERNAL__IMPLICIT_APPLICATION_0_INTERNAL_asn1__IntegerType f_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: f
      void set_f(const f_Type::ValueType& v) { _f = v; _id = f_ID; }
      const f_Type::ValueType& get_f() const { assert(_id == f_ID); return _f; }
      f_Type::ValueType& get_f() { assert(_id == f_ID); return _f; }
      bool has_f_Choosen() const { return _id == f_ID; }
      void choose_f() { _id = f_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case f_ID:
            if (_f != other._f)
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
         f_ID = 1,
         __VALUE_NOT_DEFINED__ = -1
      };

      f_Type::ValueType _f;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(asn1::ASN1ValueReader& reader, ValueType& value) const;
   void write(asn1::ASN1ValueWriter& writer, const ValueType& value) const;

private:

   f_Type _f_Type;

};

// TypeAssignment for ASN.1 type: ChoiceInsideChoice2
class ChoiceInsideChoice2 : public asn1::ChoiceType
{
public:

   explicit ChoiceInsideChoice2()
   {
      _addChoice(&_c2_Type);
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: c2
      void set_c2(const ChoiceInsideChoiceInsideChoice2::ValueType& v) { _c2 = v; _id = c2_ID; }
      const ChoiceInsideChoiceInsideChoice2::ValueType& get_c2() const { assert(_id == c2_ID); return _c2; }
      ChoiceInsideChoiceInsideChoice2::ValueType& get_c2() { assert(_id == c2_ID); return _c2; }
      bool has_c2_Choosen() const { return _id == c2_ID; }
      void choose_c2() { _id = c2_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case c2_ID:
            if (_c2 != other._c2)
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
         c2_ID = 1,
         __VALUE_NOT_DEFINED__ = -1
      };

      ChoiceInsideChoiceInsideChoice2::ValueType _c2;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(asn1::ASN1ValueReader& reader, ValueType& value) const;
   void write(asn1::ASN1ValueWriter& writer, const ValueType& value) const;

private:

   ChoiceInsideChoiceInsideChoice2 _c2_Type;

};

// TypeAssignment for ASN.1 type: Choice
class Choice : public asn1::ChoiceType
{
public:

   explicit Choice()
   {
      _addChoice(&_c1_Type);
      _addChoice(&_c2_Type);
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: c1
      void set_c1(const ChoiceInsideChoice1::ValueType& v) { _c1 = v; _id = c1_ID; }
      const ChoiceInsideChoice1::ValueType& get_c1() const { assert(_id == c1_ID); return _c1; }
      ChoiceInsideChoice1::ValueType& get_c1() { assert(_id == c1_ID); return _c1; }
      bool has_c1_Choosen() const { return _id == c1_ID; }
      void choose_c1() { _id = c1_ID; }

      // Alternative: c2
      void set_c2(const ChoiceInsideChoice2::ValueType& v) { _c2 = v; _id = c2_ID; }
      const ChoiceInsideChoice2::ValueType& get_c2() const { assert(_id == c2_ID); return _c2; }
      ChoiceInsideChoice2::ValueType& get_c2() { assert(_id == c2_ID); return _c2; }
      bool has_c2_Choosen() const { return _id == c2_ID; }
      void choose_c2() { _id = c2_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case c1_ID:
            if (_c1 != other._c1)
               return false;
            break;
         case c2_ID:
            if (_c2 != other._c2)
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
         c1_ID = 1,
         c2_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      ChoiceInsideChoice1::ValueType _c1;
      ChoiceInsideChoice2::ValueType _c2;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(asn1::ASN1ValueReader& reader, ValueType& value) const;
   void write(asn1::ASN1ValueWriter& writer, const ValueType& value) const;

private:

   ChoiceInsideChoice1 _c1_Type;
   ChoiceInsideChoice2 _c2_Type;

};

void Choice::read(asn1::ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_c1_Type)
   {
      ChoiceInsideChoice1::ValueType v;
      _c1_Type.read(reader, v);
      value.set_c1(v);
   }
   else if (choosenType == &_c2_Type)
   {
      ChoiceInsideChoice2::ValueType v;
      _c2_Type.read(reader, v);
      value.set_c2(v);
   }
   else
   {
      throw asn1::ASN1Exception("Expected " + toString() + " must be one of: "
          + _c1_Type.toString() + ", " + _c2_Type.toString());
   }
}

void Choice::write(asn1::ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_c1_Choosen() || value.has_c2_Choosen());

   if (value.has_c1_Choosen())
      _c1_Type.write(writer, value.get_c1());
   else if (value.has_c2_Choosen())
      _c2_Type.write(writer, value.get_c2());
}


void ChoiceInsideChoice1::read(asn1::ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_c1_Type)
   {
      ChoiceInsideChoiceInsideChoice1::ValueType v;
      _c1_Type.read(reader, v);
      value.set_c1(v);
   }
   else
   {
      throw asn1::ASN1Exception("Expected " + toString() + " must be one of: "
          + _c1_Type.toString());
   }
}

void ChoiceInsideChoice1::write(asn1::ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_c1_Choosen());

   if (value.has_c1_Choosen())
      _c1_Type.write(writer, value.get_c1());
}


void ChoiceInsideChoice2::read(asn1::ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_c2_Type)
   {
      ChoiceInsideChoiceInsideChoice2::ValueType v;
      _c2_Type.read(reader, v);
      value.set_c2(v);
   }
   else
   {
      throw asn1::ASN1Exception("Expected " + toString() + " must be one of: "
          + _c2_Type.toString());
   }
}

void ChoiceInsideChoice2::write(asn1::ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_c2_Choosen());

   if (value.has_c2_Choosen())
      _c2_Type.write(writer, value.get_c2());
}


void ChoiceInsideChoiceInsideChoice1::read(asn1::ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_f_Type)
   {
      asn1::IntegerType::ValueType v;
      _f_Type.read(reader, v);
      value.set_f(v);
   }
   else
   {
      throw asn1::ASN1Exception("Expected " + toString() + " must be one of: "
          + _f_Type.toString());
   }
}

void ChoiceInsideChoiceInsideChoice1::write(asn1::ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_f_Choosen());

   if (value.has_f_Choosen())
      _f_Type.write(writer, value.get_f());
}


void ChoiceInsideChoiceInsideChoice2::read(asn1::ASN1ValueReader& reader, ValueType& value) const
{
   asn1::Type* choosenType = NULL;
   reader.readChoice(*this, &choosenType);

   if (choosenType == &_f_Type)
   {
      f_INTERNAL__IMPLICIT_APPLICATION_0_INTERNAL_asn1__IntegerType::ValueType v;
      _f_Type.read(reader, v);
      value.set_f(v);
   }
   else
   {
      throw asn1::ASN1Exception("Expected " + toString() + " must be one of: "
          + _f_Type.toString());
   }
}

void ChoiceInsideChoiceInsideChoice2::write(asn1::ASN1ValueWriter& writer, const ValueType& value) const
{
   assert(value.has_f_Choosen());

   if (value.has_f_Choosen())
      _f_Type.write(writer, value.get_f());
}

BOOST_AUTO_TEST_CASE(TestBerChoiceChoiceType1)
{
   Choice::ValueType vToWrite, vToRead;

   BOOST_CHECK_EQUAL(vToWrite.has_c1_Choosen(), false);
   BOOST_CHECK_EQUAL(vToWrite.has_c2_Choosen(), false);
   vToWrite.choose_c1();
   BOOST_CHECK_EQUAL(vToWrite.has_c1_Choosen(), true);
   BOOST_CHECK_EQUAL(vToWrite.has_c2_Choosen(), false);

   BOOST_CHECK_EQUAL(vToWrite.get_c1().has_c1_Choosen(), false);
   vToWrite.get_c1().choose_c1();
   BOOST_CHECK_EQUAL(vToWrite.get_c1().has_c1_Choosen(), true);

   BOOST_CHECK_EQUAL(vToWrite.get_c1().get_c1().has_f_Choosen(), false);
   vToWrite.get_c1().get_c1().choose_f();
   BOOST_CHECK_EQUAL(vToWrite.get_c1().get_c1().has_f_Choosen(), true);

   vToWrite.get_c1().get_c1().set_f(123);
   BOOST_CHECK_EQUAL(vToWrite.get_c1().get_c1().get_f(), 123);

   // encoding
   Choice type;

   asn1::BERBuffer outbuffer;
   asn1::BERValueWriter writer(outbuffer);

   BOOST_TEST_MESSAGE(boost::format("Encode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.write(writer, vToWrite));

   asn1::BERBuffer::ValueType dataToTest[] = { 0x02, 0x01, 0x7B };
   BOOST_CHECK_EQUAL_COLLECTIONS(outbuffer.data(), outbuffer.data() + outbuffer.size(),
      dataToTest, dataToTest + arraysize(dataToTest));

   // decoding
   asn1::BERBuffer inbuffer(outbuffer.data(), outbuffer.size());
   asn1::BERValueReader reader(inbuffer);

   BOOST_TEST_MESSAGE(boost::format("Decode %s") % type.toString());
   BOOST_CHECK_NO_THROW(type.read(reader, vToRead));

   BOOST_CHECK_EQUAL(vToRead.has_c1_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.has_c2_Choosen(), false);
   BOOST_CHECK_EQUAL(vToRead.get_c1().has_c1_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_c1().get_c1().has_f_Choosen(), true);
   BOOST_CHECK_EQUAL(vToRead.get_c1().get_c1().get_f(), 123);
}

}
