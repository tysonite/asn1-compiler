#ifndef __ASN1_TYPES_HH
#define __ASN1_TYPES_HH

#include <Types.hh>

namespace asn1
{

namespace generated
{

// ValueAssignment for ASN.1 value: max-bindings
enum { k_max_bindings = 2147483647 };

// TypeAssignment for ASN.1 type: ObjectName
class ObjectName : public asn1::ObjectIdentifierType
{
public:

   explicit ObjectName()
   {
   }

   explicit ObjectName(const ValueType& defaultValue, bool hasDefault) : asn1::ObjectIdentifierType(defaultValue, hasDefault)
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ObjectName"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SimpleSyntax
class SimpleSyntax : public asn1::ChoiceType
{
public:

   explicit SimpleSyntax()
   {
      _addChoice(&_integer_value_Type);
      _integer_value_Type.setMinValue(-2147483648LL);
      _integer_value_Type.setMaxValue(2147483647LL);
#if defined(ASN1_ENABLE_XER)
      _integer_value_Type.setTypeName("integer-value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_string_value_Type);
      _string_value_Type.addSize(0LL, 65535LL);
#if defined(ASN1_ENABLE_XER)
      _string_value_Type.setTypeName("string-value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_objectID_value_Type);
#if defined(ASN1_ENABLE_XER)
      _objectID_value_Type.setTypeName("objectID-value");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: integer-value
      void set_integer_value(const asn1::IntegerType::ValueType& v) { _integer_value = v; _id = integer_value_ID; }
      void set_integer_value(asn1::IntegerType::ValueType&& v) { _integer_value = std::move(v); _id = integer_value_ID; }
      const asn1::IntegerType::ValueType& get_integer_value() const { assert(_id == integer_value_ID); return _integer_value; }
      asn1::IntegerType::ValueType& get_integer_value() { assert(_id == integer_value_ID); return _integer_value; }
      bool has_integer_value_Choosen() const { return _id == integer_value_ID; }
      void choose_integer_value() { _id = integer_value_ID; }

      // Alternative: string-value
      void set_string_value(const asn1::OctetStringType::ValueType& v) { _string_value = v; _id = string_value_ID; }
      void set_string_value(asn1::OctetStringType::ValueType&& v) { _string_value = std::move(v); _id = string_value_ID; }
      const asn1::OctetStringType::ValueType& get_string_value() const { assert(_id == string_value_ID); return _string_value; }
      asn1::OctetStringType::ValueType& get_string_value() { assert(_id == string_value_ID); return _string_value; }
      bool has_string_value_Choosen() const { return _id == string_value_ID; }
      void choose_string_value() { _id = string_value_ID; }

      // Alternative: objectID-value
      void set_objectID_value(const asn1::ObjectIdentifierType::ValueType& v) { _objectID_value = v; _id = objectID_value_ID; }
      void set_objectID_value(asn1::ObjectIdentifierType::ValueType&& v) { _objectID_value = std::move(v); _id = objectID_value_ID; }
      const asn1::ObjectIdentifierType::ValueType& get_objectID_value() const { assert(_id == objectID_value_ID); return _objectID_value; }
      asn1::ObjectIdentifierType::ValueType& get_objectID_value() { assert(_id == objectID_value_ID); return _objectID_value; }
      bool has_objectID_value_Choosen() const { return _id == objectID_value_ID; }
      void choose_objectID_value() { _id = objectID_value_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case integer_value_ID:
            if (_integer_value != other._integer_value)
               return false;
            break;
         case string_value_ID:
            if (_string_value != other._string_value)
               return false;
            break;
         case objectID_value_ID:
            if (_objectID_value != other._objectID_value)
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
         integer_value_ID = 1,
         string_value_ID = 2,
         objectID_value_ID = 3,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::IntegerType::ValueType _integer_value;
      asn1::OctetStringType::ValueType _string_value;
      asn1::ObjectIdentifierType::ValueType _objectID_value;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _integer_value_Type;
   asn1::OctetStringType _string_value_Type;
   asn1::ObjectIdentifierType _objectID_value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SimpleSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: IpAddress
class IpAddress : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit IpAddress() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(0);
      innerType().addSize(4LL, 4LL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "IpAddress"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Counter32
class Counter32 : public asn1::TaggingType<asn1::UnsignedIntegerType>
{
public:

   explicit Counter32() : asn1::TaggingType<asn1::UnsignedIntegerType>(new asn1::UnsignedIntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(1);
      innerType().setMinValue(0ULL);
      innerType().setMaxValue(4294967295ULL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Counter32"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: TimeTicks
class TimeTicks : public asn1::TaggingType<asn1::UnsignedIntegerType>
{
public:

   explicit TimeTicks() : asn1::TaggingType<asn1::UnsignedIntegerType>(new asn1::UnsignedIntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(3);
      innerType().setMinValue(0ULL);
      innerType().setMaxValue(4294967295ULL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "TimeTicks"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Opaque
class Opaque : public asn1::TaggingType<asn1::OctetStringType>
{
public:

   explicit Opaque() : asn1::TaggingType<asn1::OctetStringType>(new asn1::OctetStringType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(4);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Opaque"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Counter64
class Counter64 : public asn1::TaggingType<asn1::UnsignedIntegerType>
{
public:

   explicit Counter64() : asn1::TaggingType<asn1::UnsignedIntegerType>(new asn1::UnsignedIntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(6);
      innerType().setMinValue(0ULL);
      innerType().setMaxValue(18446744073709551615ULL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Counter64"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Unsigned32
class Unsigned32 : public asn1::TaggingType<asn1::UnsignedIntegerType>
{
public:

   explicit Unsigned32() : asn1::TaggingType<asn1::UnsignedIntegerType>(new asn1::UnsignedIntegerType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagClass(Type::APPLICATION);
      setTagNumber(2);
      innerType().setMinValue(0ULL);
      innerType().setMaxValue(4294967295ULL);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Unsigned32"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ApplicationSyntax
class ApplicationSyntax : public asn1::ChoiceType
{
public:

   explicit ApplicationSyntax()
   {
      _addChoice(&_ipAddress_value_Type);
#if defined(ASN1_ENABLE_XER)
      _ipAddress_value_Type.setTypeName("ipAddress-value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_counter_value_Type);
#if defined(ASN1_ENABLE_XER)
      _counter_value_Type.setTypeName("counter-value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_timeticks_value_Type);
#if defined(ASN1_ENABLE_XER)
      _timeticks_value_Type.setTypeName("timeticks-value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_arbitrary_value_Type);
#if defined(ASN1_ENABLE_XER)
      _arbitrary_value_Type.setTypeName("arbitrary-value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_big_counter_value_Type);
#if defined(ASN1_ENABLE_XER)
      _big_counter_value_Type.setTypeName("big-counter-value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_unsigned_integer_value_Type);
#if defined(ASN1_ENABLE_XER)
      _unsigned_integer_value_Type.setTypeName("unsigned-integer-value");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: ipAddress-value
      void set_ipAddress_value(const asn1::generated::IpAddress::ValueType& v) { _ipAddress_value = v; _id = ipAddress_value_ID; }
      void set_ipAddress_value(asn1::generated::IpAddress::ValueType&& v) { _ipAddress_value = std::move(v); _id = ipAddress_value_ID; }
      const asn1::generated::IpAddress::ValueType& get_ipAddress_value() const { assert(_id == ipAddress_value_ID); return _ipAddress_value; }
      asn1::generated::IpAddress::ValueType& get_ipAddress_value() { assert(_id == ipAddress_value_ID); return _ipAddress_value; }
      bool has_ipAddress_value_Choosen() const { return _id == ipAddress_value_ID; }
      void choose_ipAddress_value() { _id = ipAddress_value_ID; }

      // Alternative: counter-value
      void set_counter_value(const asn1::generated::Counter32::ValueType& v) { _counter_value = v; _id = counter_value_ID; }
      void set_counter_value(asn1::generated::Counter32::ValueType&& v) { _counter_value = std::move(v); _id = counter_value_ID; }
      const asn1::generated::Counter32::ValueType& get_counter_value() const { assert(_id == counter_value_ID); return _counter_value; }
      asn1::generated::Counter32::ValueType& get_counter_value() { assert(_id == counter_value_ID); return _counter_value; }
      bool has_counter_value_Choosen() const { return _id == counter_value_ID; }
      void choose_counter_value() { _id = counter_value_ID; }

      // Alternative: timeticks-value
      void set_timeticks_value(const asn1::generated::TimeTicks::ValueType& v) { _timeticks_value = v; _id = timeticks_value_ID; }
      void set_timeticks_value(asn1::generated::TimeTicks::ValueType&& v) { _timeticks_value = std::move(v); _id = timeticks_value_ID; }
      const asn1::generated::TimeTicks::ValueType& get_timeticks_value() const { assert(_id == timeticks_value_ID); return _timeticks_value; }
      asn1::generated::TimeTicks::ValueType& get_timeticks_value() { assert(_id == timeticks_value_ID); return _timeticks_value; }
      bool has_timeticks_value_Choosen() const { return _id == timeticks_value_ID; }
      void choose_timeticks_value() { _id = timeticks_value_ID; }

      // Alternative: arbitrary-value
      void set_arbitrary_value(const asn1::generated::Opaque::ValueType& v) { _arbitrary_value = v; _id = arbitrary_value_ID; }
      void set_arbitrary_value(asn1::generated::Opaque::ValueType&& v) { _arbitrary_value = std::move(v); _id = arbitrary_value_ID; }
      const asn1::generated::Opaque::ValueType& get_arbitrary_value() const { assert(_id == arbitrary_value_ID); return _arbitrary_value; }
      asn1::generated::Opaque::ValueType& get_arbitrary_value() { assert(_id == arbitrary_value_ID); return _arbitrary_value; }
      bool has_arbitrary_value_Choosen() const { return _id == arbitrary_value_ID; }
      void choose_arbitrary_value() { _id = arbitrary_value_ID; }

      // Alternative: big-counter-value
      void set_big_counter_value(const asn1::generated::Counter64::ValueType& v) { _big_counter_value = v; _id = big_counter_value_ID; }
      void set_big_counter_value(asn1::generated::Counter64::ValueType&& v) { _big_counter_value = std::move(v); _id = big_counter_value_ID; }
      const asn1::generated::Counter64::ValueType& get_big_counter_value() const { assert(_id == big_counter_value_ID); return _big_counter_value; }
      asn1::generated::Counter64::ValueType& get_big_counter_value() { assert(_id == big_counter_value_ID); return _big_counter_value; }
      bool has_big_counter_value_Choosen() const { return _id == big_counter_value_ID; }
      void choose_big_counter_value() { _id = big_counter_value_ID; }

      // Alternative: unsigned-integer-value
      void set_unsigned_integer_value(const asn1::generated::Unsigned32::ValueType& v) { _unsigned_integer_value = v; _id = unsigned_integer_value_ID; }
      void set_unsigned_integer_value(asn1::generated::Unsigned32::ValueType&& v) { _unsigned_integer_value = std::move(v); _id = unsigned_integer_value_ID; }
      const asn1::generated::Unsigned32::ValueType& get_unsigned_integer_value() const { assert(_id == unsigned_integer_value_ID); return _unsigned_integer_value; }
      asn1::generated::Unsigned32::ValueType& get_unsigned_integer_value() { assert(_id == unsigned_integer_value_ID); return _unsigned_integer_value; }
      bool has_unsigned_integer_value_Choosen() const { return _id == unsigned_integer_value_ID; }
      void choose_unsigned_integer_value() { _id = unsigned_integer_value_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case ipAddress_value_ID:
            if (_ipAddress_value != other._ipAddress_value)
               return false;
            break;
         case counter_value_ID:
            if (_counter_value != other._counter_value)
               return false;
            break;
         case timeticks_value_ID:
            if (_timeticks_value != other._timeticks_value)
               return false;
            break;
         case arbitrary_value_ID:
            if (_arbitrary_value != other._arbitrary_value)
               return false;
            break;
         case big_counter_value_ID:
            if (_big_counter_value != other._big_counter_value)
               return false;
            break;
         case unsigned_integer_value_ID:
            if (_unsigned_integer_value != other._unsigned_integer_value)
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
         ipAddress_value_ID = 1,
         counter_value_ID = 2,
         timeticks_value_ID = 3,
         arbitrary_value_ID = 4,
         big_counter_value_ID = 5,
         unsigned_integer_value_ID = 6,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::IpAddress::ValueType _ipAddress_value;
      asn1::generated::Counter32::ValueType _counter_value;
      asn1::generated::TimeTicks::ValueType _timeticks_value;
      asn1::generated::Opaque::ValueType _arbitrary_value;
      asn1::generated::Counter64::ValueType _big_counter_value;
      asn1::generated::Unsigned32::ValueType _unsigned_integer_value;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::IpAddress _ipAddress_value_Type;
   asn1::generated::Counter32 _counter_value_Type;
   asn1::generated::TimeTicks _timeticks_value_Type;
   asn1::generated::Opaque _arbitrary_value_Type;
   asn1::generated::Counter64 _big_counter_value_Type;
   asn1::generated::Unsigned32 _unsigned_integer_value_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ApplicationSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ObjectSyntax
class ObjectSyntax : public asn1::ChoiceType
{
public:

   explicit ObjectSyntax()
   {
      _addChoice(&_simple_Type);
#if defined(ASN1_ENABLE_XER)
      _simple_Type.setTypeName("simple");
#endif // ASN1_ENABLE_XER
      _addChoice(&_application_wide_Type);
#if defined(ASN1_ENABLE_XER)
      _application_wide_Type.setTypeName("application-wide");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: simple
      void set_simple(const asn1::generated::SimpleSyntax::ValueType& v) { _simple = v; _id = simple_ID; }
      void set_simple(asn1::generated::SimpleSyntax::ValueType&& v) { _simple = std::move(v); _id = simple_ID; }
      const asn1::generated::SimpleSyntax::ValueType& get_simple() const { assert(_id == simple_ID); return _simple; }
      asn1::generated::SimpleSyntax::ValueType& get_simple() { assert(_id == simple_ID); return _simple; }
      bool has_simple_Choosen() const { return _id == simple_ID; }
      void choose_simple() { _id = simple_ID; }

      // Alternative: application-wide
      void set_application_wide(const asn1::generated::ApplicationSyntax::ValueType& v) { _application_wide = v; _id = application_wide_ID; }
      void set_application_wide(asn1::generated::ApplicationSyntax::ValueType&& v) { _application_wide = std::move(v); _id = application_wide_ID; }
      const asn1::generated::ApplicationSyntax::ValueType& get_application_wide() const { assert(_id == application_wide_ID); return _application_wide; }
      asn1::generated::ApplicationSyntax::ValueType& get_application_wide() { assert(_id == application_wide_ID); return _application_wide; }
      bool has_application_wide_Choosen() const { return _id == application_wide_ID; }
      void choose_application_wide() { _id = application_wide_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case simple_ID:
            if (_simple != other._simple)
               return false;
            break;
         case application_wide_ID:
            if (_application_wide != other._application_wide)
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
         simple_ID = 1,
         application_wide_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::SimpleSyntax::ValueType _simple;
      asn1::generated::ApplicationSyntax::ValueType _application_wide;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::SimpleSyntax _simple_Type;
   asn1::generated::ApplicationSyntax _application_wide_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ObjectSyntax"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Gauge32
class Gauge32 : public asn1::generated::Unsigned32
{
public:

   explicit Gauge32()
   {
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Gauge32"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: error_status_INTERNAL_
class error_status_INTERNAL_ : public asn1::IntegerType
{
public:

   explicit error_status_INTERNAL_()
   {
   }

   explicit error_status_INTERNAL_(const ValueType& defaultValue, bool hasDefault) : asn1::IntegerType(defaultValue, hasDefault)
   {
   }

   enum error_status_INTERNAL__Value
   {
      k_noError = 0,
      k_tooBig = 1,
      k_noSuchName = 2,
      k_badValue = 3,
      k_readOnly = 4,
      k_genErr = 5,
      k_noAccess = 6,
      k_wrongType = 7,
      k_wrongLength = 8,
      k_wrongEncoding = 9,
      k_wrongValue = 10,
      k_noCreation = 11,
      k_inconsistentValue = 12,
      k_resourceUnavailable = 13,
      k_commitFailed = 14,
      k_undoFailed = 15,
      k_authorizationError = 16,
      k_notWritable = 17,
      k_inconsistentName = 18,
   };


#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "error-status"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: noSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType
class noSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType : public asn1::TaggingType<asn1::NullType>
{
public:

   explicit noSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType() : asn1::TaggingType<asn1::NullType>(new asn1::NullType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "noSuchObject"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: noSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType
class noSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType : public asn1::TaggingType<asn1::NullType>
{
public:

   explicit noSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType() : asn1::TaggingType<asn1::NullType>(new asn1::NullType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "noSuchInstance"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: endOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType
class endOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType : public asn1::TaggingType<asn1::NullType>
{
public:

   explicit endOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType() : asn1::TaggingType<asn1::NullType>(new asn1::NullType)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "endOfMibView"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: data_INTERNAL__ChoiceType_valuevalue_INTERNAL_asn1__generated__ObjectSyntax_unSpecifiedunSpecified_INTERNAL_asn1__NullType_noSuchObjectnoSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType_noSuchInstancenoSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType_endOfMibViewendOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType
class data_INTERNAL__ChoiceType_valuevalue_INTERNAL_asn1__generated__ObjectSyntax_unSpecifiedunSpecified_INTERNAL_asn1__NullType_noSuchObjectnoSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType_noSuchInstancenoSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType_endOfMibViewendOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType : public asn1::ChoiceType
{
public:

   explicit data_INTERNAL__ChoiceType_valuevalue_INTERNAL_asn1__generated__ObjectSyntax_unSpecifiedunSpecified_INTERNAL_asn1__NullType_noSuchObjectnoSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType_noSuchInstancenoSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType_endOfMibViewendOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType()
   {
      _addChoice(&_value_Type);
#if defined(ASN1_ENABLE_XER)
      _value_Type.setTypeName("value");
#endif // ASN1_ENABLE_XER
      _addChoice(&_unSpecified_Type);
#if defined(ASN1_ENABLE_XER)
      _unSpecified_Type.setTypeName("unSpecified");
#endif // ASN1_ENABLE_XER
      _addChoice(&_noSuchObject_Type);
#if defined(ASN1_ENABLE_XER)
      _noSuchObject_Type.setTypeName("noSuchObject");
#endif // ASN1_ENABLE_XER
      _addChoice(&_noSuchInstance_Type);
#if defined(ASN1_ENABLE_XER)
      _noSuchInstance_Type.setTypeName("noSuchInstance");
#endif // ASN1_ENABLE_XER
      _addChoice(&_endOfMibView_Type);
#if defined(ASN1_ENABLE_XER)
      _endOfMibView_Type.setTypeName("endOfMibView");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef noSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType noSuchObject_Type;
   typedef noSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType noSuchInstance_Type;
   typedef endOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType endOfMibView_Type;

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: value
      void set_value(const asn1::generated::ObjectSyntax::ValueType& v) { _value = v; _id = value_ID; }
      void set_value(asn1::generated::ObjectSyntax::ValueType&& v) { _value = std::move(v); _id = value_ID; }
      const asn1::generated::ObjectSyntax::ValueType& get_value() const { assert(_id == value_ID); return _value; }
      asn1::generated::ObjectSyntax::ValueType& get_value() { assert(_id == value_ID); return _value; }
      bool has_value_Choosen() const { return _id == value_ID; }
      void choose_value() { _id = value_ID; }

      // Alternative: unSpecified
      void set_unSpecified(const asn1::NullType::ValueType& v) { _unSpecified = v; _id = unSpecified_ID; }
      void set_unSpecified(asn1::NullType::ValueType&& v) { _unSpecified = std::move(v); _id = unSpecified_ID; }
      const asn1::NullType::ValueType& get_unSpecified() const { assert(_id == unSpecified_ID); return _unSpecified; }
      asn1::NullType::ValueType& get_unSpecified() { assert(_id == unSpecified_ID); return _unSpecified; }
      bool has_unSpecified_Choosen() const { return _id == unSpecified_ID; }
      void choose_unSpecified() { _id = unSpecified_ID; }

      // Alternative: noSuchObject
      void set_noSuchObject(const noSuchObject_Type::ValueType& v) { _noSuchObject = v; _id = noSuchObject_ID; }
      void set_noSuchObject(noSuchObject_Type::ValueType&& v) { _noSuchObject = std::move(v); _id = noSuchObject_ID; }
      const noSuchObject_Type::ValueType& get_noSuchObject() const { assert(_id == noSuchObject_ID); return _noSuchObject; }
      noSuchObject_Type::ValueType& get_noSuchObject() { assert(_id == noSuchObject_ID); return _noSuchObject; }
      bool has_noSuchObject_Choosen() const { return _id == noSuchObject_ID; }
      void choose_noSuchObject() { _id = noSuchObject_ID; }

      // Alternative: noSuchInstance
      void set_noSuchInstance(const noSuchInstance_Type::ValueType& v) { _noSuchInstance = v; _id = noSuchInstance_ID; }
      void set_noSuchInstance(noSuchInstance_Type::ValueType&& v) { _noSuchInstance = std::move(v); _id = noSuchInstance_ID; }
      const noSuchInstance_Type::ValueType& get_noSuchInstance() const { assert(_id == noSuchInstance_ID); return _noSuchInstance; }
      noSuchInstance_Type::ValueType& get_noSuchInstance() { assert(_id == noSuchInstance_ID); return _noSuchInstance; }
      bool has_noSuchInstance_Choosen() const { return _id == noSuchInstance_ID; }
      void choose_noSuchInstance() { _id = noSuchInstance_ID; }

      // Alternative: endOfMibView
      void set_endOfMibView(const endOfMibView_Type::ValueType& v) { _endOfMibView = v; _id = endOfMibView_ID; }
      void set_endOfMibView(endOfMibView_Type::ValueType&& v) { _endOfMibView = std::move(v); _id = endOfMibView_ID; }
      const endOfMibView_Type::ValueType& get_endOfMibView() const { assert(_id == endOfMibView_ID); return _endOfMibView; }
      endOfMibView_Type::ValueType& get_endOfMibView() { assert(_id == endOfMibView_ID); return _endOfMibView; }
      bool has_endOfMibView_Choosen() const { return _id == endOfMibView_ID; }
      void choose_endOfMibView() { _id = endOfMibView_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case value_ID:
            if (_value != other._value)
               return false;
            break;
         case unSpecified_ID:
            if (_unSpecified != other._unSpecified)
               return false;
            break;
         case noSuchObject_ID:
            if (_noSuchObject != other._noSuchObject)
               return false;
            break;
         case noSuchInstance_ID:
            if (_noSuchInstance != other._noSuchInstance)
               return false;
            break;
         case endOfMibView_ID:
            if (_endOfMibView != other._endOfMibView)
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
         value_ID = 1,
         unSpecified_ID = 2,
         noSuchObject_ID = 3,
         noSuchInstance_ID = 4,
         endOfMibView_ID = 5,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::ObjectSyntax::ValueType _value;
      asn1::NullType::ValueType _unSpecified;
      noSuchObject_Type::ValueType _noSuchObject;
      noSuchInstance_Type::ValueType _noSuchInstance;
      endOfMibView_Type::ValueType _endOfMibView;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::ObjectSyntax _value_Type;
   asn1::NullType _unSpecified_Type;
   noSuchObject_Type _noSuchObject_Type;
   noSuchInstance_Type _noSuchInstance_Type;
   endOfMibView_Type _endOfMibView_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "endOfMibView"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: VarBind
class VarBind : public asn1::SequenceType
{
public:

   explicit VarBind()
   {
#if defined(ASN1_ENABLE_XER)
      _name_Type.setTypeName("name");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _data_Type.setTypeName("data");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef data_INTERNAL__ChoiceType_valuevalue_INTERNAL_asn1__generated__ObjectSyntax_unSpecifiedunSpecified_INTERNAL_asn1__NullType_noSuchObjectnoSuchObject_INTERNAL__IMPLICIT_0_INTERNAL_asn1__NullType_noSuchInstancenoSuchInstance_INTERNAL__IMPLICIT_1_INTERNAL_asn1__NullType_endOfMibViewendOfMibView_INTERNAL__IMPLICIT_2_INTERNAL_asn1__NullType data_Type;

   class SequenceValue_Type
   {
   public:

      // Component: name
      void set_name(const asn1::generated::ObjectName::ValueType& v) { _name = v;  }
      void set_name(asn1::generated::ObjectName::ValueType&& v) { _name = std::move(v);  }
      const asn1::generated::ObjectName::ValueType& get_name() const { return _name; }
      asn1::generated::ObjectName::ValueType& get_name() { return _name; }

      // Component: data
      void set_data(const data_Type::ValueType& v) { _data = v;  }
      void set_data(data_Type::ValueType&& v) { _data = std::move(v);  }
      const data_Type::ValueType& get_data() const { return _data; }
      data_Type::ValueType& get_data() { return _data; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_name != other._name)
            return false;
         if (_data != other._data)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::generated::ObjectName::ValueType _name;
      data_Type::ValueType _data;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::ObjectName _name_Type;
   data_Type _data_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "VarBind"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: VarBindList
class VarBindList : public asn1::SequenceOfType<asn1::generated::VarBind>
{
public:

   explicit VarBindList() : asn1::SequenceOfType<asn1::generated::VarBind>(new asn1::generated::VarBind)
   {
      setMinSize(0LL);
      setMaxSize(k_max_bindings);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "VarBindList"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PDU
class PDU : public asn1::SequenceType
{
public:

   explicit PDU()
   {
      _request_id_Type.setMinValue(-2147483648LL);
      _request_id_Type.setMaxValue(2147483647LL);
#if defined(ASN1_ENABLE_XER)
      _request_id_Type.setTypeName("request-id");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _error_status_Type.setTypeName("error-status");
#endif // ASN1_ENABLE_XER
      _error_index_Type.setMinValue(0ULL);
      _error_index_Type.setMaxValue(k_max_bindings);
#if defined(ASN1_ENABLE_XER)
      _error_index_Type.setTypeName("error-index");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _variable_bindings_Type.setTypeName("variable-bindings");
#endif // ASN1_ENABLE_XER
   }

   // Complex types
   typedef error_status_INTERNAL_ error_status_Type;

   class SequenceValue_Type
   {
   public:

      // Component: request-id
      void set_request_id(const asn1::IntegerType::ValueType& v) { _request_id = v;  }
      void set_request_id(asn1::IntegerType::ValueType&& v) { _request_id = std::move(v);  }
      const asn1::IntegerType::ValueType& get_request_id() const { return _request_id; }
      asn1::IntegerType::ValueType& get_request_id() { return _request_id; }

      // Component: error-status
      void set_error_status(const error_status_Type::ValueType& v) { _error_status = v;  }
      void set_error_status(error_status_Type::ValueType&& v) { _error_status = std::move(v);  }
      const error_status_Type::ValueType& get_error_status() const { return _error_status; }
      error_status_Type::ValueType& get_error_status() { return _error_status; }

      // Component: error-index
      void set_error_index(const asn1::UnsignedIntegerType::ValueType& v) { _error_index = v;  }
      void set_error_index(asn1::UnsignedIntegerType::ValueType&& v) { _error_index = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_error_index() const { return _error_index; }
      asn1::UnsignedIntegerType::ValueType& get_error_index() { return _error_index; }

      // Component: variable-bindings
      void set_variable_bindings(const asn1::generated::VarBindList::ValueType& v) { _variable_bindings = v;  }
      void set_variable_bindings(asn1::generated::VarBindList::ValueType&& v) { _variable_bindings = std::move(v);  }
      const asn1::generated::VarBindList::ValueType& get_variable_bindings() const { return _variable_bindings; }
      asn1::generated::VarBindList::ValueType& get_variable_bindings() { return _variable_bindings; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_request_id != other._request_id)
            return false;
         if (_error_status != other._error_status)
            return false;
         if (_error_index != other._error_index)
            return false;
         if (_variable_bindings != other._variable_bindings)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _request_id;
      error_status_Type::ValueType _error_status;
      asn1::UnsignedIntegerType::ValueType _error_index;
      asn1::generated::VarBindList::ValueType _variable_bindings;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _request_id_Type;
   error_status_Type _error_status_Type;
   asn1::UnsignedIntegerType _error_index_Type;
   asn1::generated::VarBindList _variable_bindings_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: GetRequest-PDU
class GetRequest_PDU : public asn1::TaggingType<asn1::generated::PDU>
{
public:

   explicit GetRequest_PDU() : asn1::TaggingType<asn1::generated::PDU>(new asn1::generated::PDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(0);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "GetRequest-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: GetNextRequest-PDU
class GetNextRequest_PDU : public asn1::TaggingType<asn1::generated::PDU>
{
public:

   explicit GetNextRequest_PDU() : asn1::TaggingType<asn1::generated::PDU>(new asn1::generated::PDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(1);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "GetNextRequest-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: BulkPDU
class BulkPDU : public asn1::SequenceType
{
public:

   explicit BulkPDU()
   {
      _request_id_Type.setMinValue(-2147483648LL);
      _request_id_Type.setMaxValue(2147483647LL);
#if defined(ASN1_ENABLE_XER)
      _request_id_Type.setTypeName("request-id");
#endif // ASN1_ENABLE_XER
      _non_repeaters_Type.setMinValue(0ULL);
      _non_repeaters_Type.setMaxValue(k_max_bindings);
#if defined(ASN1_ENABLE_XER)
      _non_repeaters_Type.setTypeName("non-repeaters");
#endif // ASN1_ENABLE_XER
      _max_repetitions_Type.setMinValue(0ULL);
      _max_repetitions_Type.setMaxValue(k_max_bindings);
#if defined(ASN1_ENABLE_XER)
      _max_repetitions_Type.setTypeName("max-repetitions");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _variable_bindings_Type.setTypeName("variable-bindings");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: request-id
      void set_request_id(const asn1::IntegerType::ValueType& v) { _request_id = v;  }
      void set_request_id(asn1::IntegerType::ValueType&& v) { _request_id = std::move(v);  }
      const asn1::IntegerType::ValueType& get_request_id() const { return _request_id; }
      asn1::IntegerType::ValueType& get_request_id() { return _request_id; }

      // Component: non-repeaters
      void set_non_repeaters(const asn1::UnsignedIntegerType::ValueType& v) { _non_repeaters = v;  }
      void set_non_repeaters(asn1::UnsignedIntegerType::ValueType&& v) { _non_repeaters = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_non_repeaters() const { return _non_repeaters; }
      asn1::UnsignedIntegerType::ValueType& get_non_repeaters() { return _non_repeaters; }

      // Component: max-repetitions
      void set_max_repetitions(const asn1::UnsignedIntegerType::ValueType& v) { _max_repetitions = v;  }
      void set_max_repetitions(asn1::UnsignedIntegerType::ValueType&& v) { _max_repetitions = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_max_repetitions() const { return _max_repetitions; }
      asn1::UnsignedIntegerType::ValueType& get_max_repetitions() { return _max_repetitions; }

      // Component: variable-bindings
      void set_variable_bindings(const asn1::generated::VarBindList::ValueType& v) { _variable_bindings = v;  }
      void set_variable_bindings(asn1::generated::VarBindList::ValueType&& v) { _variable_bindings = std::move(v);  }
      const asn1::generated::VarBindList::ValueType& get_variable_bindings() const { return _variable_bindings; }
      asn1::generated::VarBindList::ValueType& get_variable_bindings() { return _variable_bindings; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_request_id != other._request_id)
            return false;
         if (_non_repeaters != other._non_repeaters)
            return false;
         if (_max_repetitions != other._max_repetitions)
            return false;
         if (_variable_bindings != other._variable_bindings)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::IntegerType::ValueType _request_id;
      asn1::UnsignedIntegerType::ValueType _non_repeaters;
      asn1::UnsignedIntegerType::ValueType _max_repetitions;
      asn1::generated::VarBindList::ValueType _variable_bindings;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::IntegerType _request_id_Type;
   asn1::UnsignedIntegerType _non_repeaters_Type;
   asn1::UnsignedIntegerType _max_repetitions_Type;
   asn1::generated::VarBindList _variable_bindings_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "BulkPDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: GetBulkRequest-PDU
class GetBulkRequest_PDU : public asn1::TaggingType<asn1::generated::BulkPDU>
{
public:

   explicit GetBulkRequest_PDU() : asn1::TaggingType<asn1::generated::BulkPDU>(new asn1::generated::BulkPDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(5);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "GetBulkRequest-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Response-PDU
class Response_PDU : public asn1::TaggingType<asn1::generated::PDU>
{
public:

   explicit Response_PDU() : asn1::TaggingType<asn1::generated::PDU>(new asn1::generated::PDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(2);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Response-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SetRequest-PDU
class SetRequest_PDU : public asn1::TaggingType<asn1::generated::PDU>
{
public:

   explicit SetRequest_PDU() : asn1::TaggingType<asn1::generated::PDU>(new asn1::generated::PDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(3);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SetRequest-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: InformRequest-PDU
class InformRequest_PDU : public asn1::TaggingType<asn1::generated::PDU>
{
public:

   explicit InformRequest_PDU() : asn1::TaggingType<asn1::generated::PDU>(new asn1::generated::PDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(6);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "InformRequest-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SNMPv2-Trap-PDU
class SNMPv2_Trap_PDU : public asn1::TaggingType<asn1::generated::PDU>
{
public:

   explicit SNMPv2_Trap_PDU() : asn1::TaggingType<asn1::generated::PDU>(new asn1::generated::PDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(7);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SNMPv2-Trap-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: Report-PDU
class Report_PDU : public asn1::TaggingType<asn1::generated::PDU>
{
public:

   explicit Report_PDU() : asn1::TaggingType<asn1::generated::PDU>(new asn1::generated::PDU)
   {
      setTagging(Type::IMPLICIT_TAGGING);
      setTagNumber(8);
      setTagClass(Type::CONTEXT_SPECIFIC);
   }

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "Report-PDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: PDUs
class PDUs : public asn1::ChoiceType
{
public:

   explicit PDUs()
   {
      _addChoice(&_get_request_Type);
#if defined(ASN1_ENABLE_XER)
      _get_request_Type.setTypeName("get-request");
#endif // ASN1_ENABLE_XER
      _addChoice(&_get_next_request_Type);
#if defined(ASN1_ENABLE_XER)
      _get_next_request_Type.setTypeName("get-next-request");
#endif // ASN1_ENABLE_XER
      _addChoice(&_get_bulk_request_Type);
#if defined(ASN1_ENABLE_XER)
      _get_bulk_request_Type.setTypeName("get-bulk-request");
#endif // ASN1_ENABLE_XER
      _addChoice(&_response_Type);
#if defined(ASN1_ENABLE_XER)
      _response_Type.setTypeName("response");
#endif // ASN1_ENABLE_XER
      _addChoice(&_set_request_Type);
#if defined(ASN1_ENABLE_XER)
      _set_request_Type.setTypeName("set-request");
#endif // ASN1_ENABLE_XER
      _addChoice(&_inform_request_Type);
#if defined(ASN1_ENABLE_XER)
      _inform_request_Type.setTypeName("inform-request");
#endif // ASN1_ENABLE_XER
      _addChoice(&_snmpV2_trap_Type);
#if defined(ASN1_ENABLE_XER)
      _snmpV2_trap_Type.setTypeName("snmpV2-trap");
#endif // ASN1_ENABLE_XER
      _addChoice(&_report_Type);
#if defined(ASN1_ENABLE_XER)
      _report_Type.setTypeName("report");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: get-request
      void set_get_request(const asn1::generated::GetRequest_PDU::ValueType& v) { _get_request = v; _id = get_request_ID; }
      void set_get_request(asn1::generated::GetRequest_PDU::ValueType&& v) { _get_request = std::move(v); _id = get_request_ID; }
      const asn1::generated::GetRequest_PDU::ValueType& get_get_request() const { assert(_id == get_request_ID); return _get_request; }
      asn1::generated::GetRequest_PDU::ValueType& get_get_request() { assert(_id == get_request_ID); return _get_request; }
      bool has_get_request_Choosen() const { return _id == get_request_ID; }
      void choose_get_request() { _id = get_request_ID; }

      // Alternative: get-next-request
      void set_get_next_request(const asn1::generated::GetNextRequest_PDU::ValueType& v) { _get_next_request = v; _id = get_next_request_ID; }
      void set_get_next_request(asn1::generated::GetNextRequest_PDU::ValueType&& v) { _get_next_request = std::move(v); _id = get_next_request_ID; }
      const asn1::generated::GetNextRequest_PDU::ValueType& get_get_next_request() const { assert(_id == get_next_request_ID); return _get_next_request; }
      asn1::generated::GetNextRequest_PDU::ValueType& get_get_next_request() { assert(_id == get_next_request_ID); return _get_next_request; }
      bool has_get_next_request_Choosen() const { return _id == get_next_request_ID; }
      void choose_get_next_request() { _id = get_next_request_ID; }

      // Alternative: get-bulk-request
      void set_get_bulk_request(const asn1::generated::GetBulkRequest_PDU::ValueType& v) { _get_bulk_request = v; _id = get_bulk_request_ID; }
      void set_get_bulk_request(asn1::generated::GetBulkRequest_PDU::ValueType&& v) { _get_bulk_request = std::move(v); _id = get_bulk_request_ID; }
      const asn1::generated::GetBulkRequest_PDU::ValueType& get_get_bulk_request() const { assert(_id == get_bulk_request_ID); return _get_bulk_request; }
      asn1::generated::GetBulkRequest_PDU::ValueType& get_get_bulk_request() { assert(_id == get_bulk_request_ID); return _get_bulk_request; }
      bool has_get_bulk_request_Choosen() const { return _id == get_bulk_request_ID; }
      void choose_get_bulk_request() { _id = get_bulk_request_ID; }

      // Alternative: response
      void set_response(const asn1::generated::Response_PDU::ValueType& v) { _response = v; _id = response_ID; }
      void set_response(asn1::generated::Response_PDU::ValueType&& v) { _response = std::move(v); _id = response_ID; }
      const asn1::generated::Response_PDU::ValueType& get_response() const { assert(_id == response_ID); return _response; }
      asn1::generated::Response_PDU::ValueType& get_response() { assert(_id == response_ID); return _response; }
      bool has_response_Choosen() const { return _id == response_ID; }
      void choose_response() { _id = response_ID; }

      // Alternative: set-request
      void set_set_request(const asn1::generated::SetRequest_PDU::ValueType& v) { _set_request = v; _id = set_request_ID; }
      void set_set_request(asn1::generated::SetRequest_PDU::ValueType&& v) { _set_request = std::move(v); _id = set_request_ID; }
      const asn1::generated::SetRequest_PDU::ValueType& get_set_request() const { assert(_id == set_request_ID); return _set_request; }
      asn1::generated::SetRequest_PDU::ValueType& get_set_request() { assert(_id == set_request_ID); return _set_request; }
      bool has_set_request_Choosen() const { return _id == set_request_ID; }
      void choose_set_request() { _id = set_request_ID; }

      // Alternative: inform-request
      void set_inform_request(const asn1::generated::InformRequest_PDU::ValueType& v) { _inform_request = v; _id = inform_request_ID; }
      void set_inform_request(asn1::generated::InformRequest_PDU::ValueType&& v) { _inform_request = std::move(v); _id = inform_request_ID; }
      const asn1::generated::InformRequest_PDU::ValueType& get_inform_request() const { assert(_id == inform_request_ID); return _inform_request; }
      asn1::generated::InformRequest_PDU::ValueType& get_inform_request() { assert(_id == inform_request_ID); return _inform_request; }
      bool has_inform_request_Choosen() const { return _id == inform_request_ID; }
      void choose_inform_request() { _id = inform_request_ID; }

      // Alternative: snmpV2-trap
      void set_snmpV2_trap(const asn1::generated::SNMPv2_Trap_PDU::ValueType& v) { _snmpV2_trap = v; _id = snmpV2_trap_ID; }
      void set_snmpV2_trap(asn1::generated::SNMPv2_Trap_PDU::ValueType&& v) { _snmpV2_trap = std::move(v); _id = snmpV2_trap_ID; }
      const asn1::generated::SNMPv2_Trap_PDU::ValueType& get_snmpV2_trap() const { assert(_id == snmpV2_trap_ID); return _snmpV2_trap; }
      asn1::generated::SNMPv2_Trap_PDU::ValueType& get_snmpV2_trap() { assert(_id == snmpV2_trap_ID); return _snmpV2_trap; }
      bool has_snmpV2_trap_Choosen() const { return _id == snmpV2_trap_ID; }
      void choose_snmpV2_trap() { _id = snmpV2_trap_ID; }

      // Alternative: report
      void set_report(const asn1::generated::Report_PDU::ValueType& v) { _report = v; _id = report_ID; }
      void set_report(asn1::generated::Report_PDU::ValueType&& v) { _report = std::move(v); _id = report_ID; }
      const asn1::generated::Report_PDU::ValueType& get_report() const { assert(_id == report_ID); return _report; }
      asn1::generated::Report_PDU::ValueType& get_report() { assert(_id == report_ID); return _report; }
      bool has_report_Choosen() const { return _id == report_ID; }
      void choose_report() { _id = report_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case get_request_ID:
            if (_get_request != other._get_request)
               return false;
            break;
         case get_next_request_ID:
            if (_get_next_request != other._get_next_request)
               return false;
            break;
         case get_bulk_request_ID:
            if (_get_bulk_request != other._get_bulk_request)
               return false;
            break;
         case response_ID:
            if (_response != other._response)
               return false;
            break;
         case set_request_ID:
            if (_set_request != other._set_request)
               return false;
            break;
         case inform_request_ID:
            if (_inform_request != other._inform_request)
               return false;
            break;
         case snmpV2_trap_ID:
            if (_snmpV2_trap != other._snmpV2_trap)
               return false;
            break;
         case report_ID:
            if (_report != other._report)
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
         get_request_ID = 1,
         get_next_request_ID = 2,
         get_bulk_request_ID = 3,
         response_ID = 4,
         set_request_ID = 5,
         inform_request_ID = 6,
         snmpV2_trap_ID = 7,
         report_ID = 8,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::GetRequest_PDU::ValueType _get_request;
      asn1::generated::GetNextRequest_PDU::ValueType _get_next_request;
      asn1::generated::GetBulkRequest_PDU::ValueType _get_bulk_request;
      asn1::generated::Response_PDU::ValueType _response;
      asn1::generated::SetRequest_PDU::ValueType _set_request;
      asn1::generated::InformRequest_PDU::ValueType _inform_request;
      asn1::generated::SNMPv2_Trap_PDU::ValueType _snmpV2_trap;
      asn1::generated::Report_PDU::ValueType _report;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::GetRequest_PDU _get_request_Type;
   asn1::generated::GetNextRequest_PDU _get_next_request_Type;
   asn1::generated::GetBulkRequest_PDU _get_bulk_request_Type;
   asn1::generated::Response_PDU _response_Type;
   asn1::generated::SetRequest_PDU _set_request_Type;
   asn1::generated::InformRequest_PDU _inform_request_Type;
   asn1::generated::SNMPv2_Trap_PDU _snmpV2_trap_Type;
   asn1::generated::Report_PDU _report_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "PDUs"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: HeaderData
class HeaderData : public asn1::SequenceType
{
public:

   explicit HeaderData()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _msgID_Type.setMinValue(0ULL);
      _msgID_Type.setMaxValue(2147483647ULL);
      _msgID_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgID_Type.setTypeName("msgID");
#endif // ASN1_ENABLE_XER
      _msgMaxSize_Type.setMinValue(484ULL);
      _msgMaxSize_Type.setMaxValue(2147483647ULL);
      _msgMaxSize_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgMaxSize_Type.setTypeName("msgMaxSize");
#endif // ASN1_ENABLE_XER
      _msgFlags_Type.addSize(1LL, 1LL);
      _msgFlags_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgFlags_Type.setTypeName("msgFlags");
#endif // ASN1_ENABLE_XER
      _msgSecurityModel_Type.setMinValue(1ULL);
      _msgSecurityModel_Type.setMaxValue(2147483647ULL);
      _msgSecurityModel_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgSecurityModel_Type.setTypeName("msgSecurityModel");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: msgID
      void set_msgID(const asn1::UnsignedIntegerType::ValueType& v) { _msgID = v;  }
      void set_msgID(asn1::UnsignedIntegerType::ValueType&& v) { _msgID = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_msgID() const { return _msgID; }
      asn1::UnsignedIntegerType::ValueType& get_msgID() { return _msgID; }

      // Component: msgMaxSize
      void set_msgMaxSize(const asn1::UnsignedIntegerType::ValueType& v) { _msgMaxSize = v;  }
      void set_msgMaxSize(asn1::UnsignedIntegerType::ValueType&& v) { _msgMaxSize = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_msgMaxSize() const { return _msgMaxSize; }
      asn1::UnsignedIntegerType::ValueType& get_msgMaxSize() { return _msgMaxSize; }

      // Component: msgFlags
      void set_msgFlags(const asn1::OctetStringType::ValueType& v) { _msgFlags = v;  }
      void set_msgFlags(asn1::OctetStringType::ValueType&& v) { _msgFlags = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_msgFlags() const { return _msgFlags; }
      asn1::OctetStringType::ValueType& get_msgFlags() { return _msgFlags; }

      // Component: msgSecurityModel
      void set_msgSecurityModel(const asn1::UnsignedIntegerType::ValueType& v) { _msgSecurityModel = v;  }
      void set_msgSecurityModel(asn1::UnsignedIntegerType::ValueType&& v) { _msgSecurityModel = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_msgSecurityModel() const { return _msgSecurityModel; }
      asn1::UnsignedIntegerType::ValueType& get_msgSecurityModel() { return _msgSecurityModel; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_msgID != other._msgID)
            return false;
         if (_msgMaxSize != other._msgMaxSize)
            return false;
         if (_msgFlags != other._msgFlags)
            return false;
         if (_msgSecurityModel != other._msgSecurityModel)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::UnsignedIntegerType::ValueType _msgID;
      asn1::UnsignedIntegerType::ValueType _msgMaxSize;
      asn1::OctetStringType::ValueType _msgFlags;
      asn1::UnsignedIntegerType::ValueType _msgSecurityModel;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::UnsignedIntegerType _msgID_Type;
   asn1::UnsignedIntegerType _msgMaxSize_Type;
   asn1::OctetStringType _msgFlags_Type;
   asn1::UnsignedIntegerType _msgSecurityModel_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "HeaderData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ScopedPDU
class ScopedPDU : public asn1::SequenceType
{
public:

   explicit ScopedPDU()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _contextEngineID_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _contextEngineID_Type.setTypeName("contextEngineID");
#endif // ASN1_ENABLE_XER
      _contextName_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _contextName_Type.setTypeName("contextName");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _data_Type.setTypeName("data");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: contextEngineID
      void set_contextEngineID(const asn1::OctetStringType::ValueType& v) { _contextEngineID = v;  }
      void set_contextEngineID(asn1::OctetStringType::ValueType&& v) { _contextEngineID = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_contextEngineID() const { return _contextEngineID; }
      asn1::OctetStringType::ValueType& get_contextEngineID() { return _contextEngineID; }

      // Component: contextName
      void set_contextName(const asn1::OctetStringType::ValueType& v) { _contextName = v;  }
      void set_contextName(asn1::OctetStringType::ValueType&& v) { _contextName = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_contextName() const { return _contextName; }
      asn1::OctetStringType::ValueType& get_contextName() { return _contextName; }

      // Component: data
      void set_data(const asn1::generated::PDUs::ValueType& v) { _data = v;  }
      void set_data(asn1::generated::PDUs::ValueType&& v) { _data = std::move(v);  }
      const asn1::generated::PDUs::ValueType& get_data() const { return _data; }
      asn1::generated::PDUs::ValueType& get_data() { return _data; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_contextEngineID != other._contextEngineID)
            return false;
         if (_contextName != other._contextName)
            return false;
         if (_data != other._data)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::OctetStringType::ValueType _contextEngineID;
      asn1::OctetStringType::ValueType _contextName;
      asn1::generated::PDUs::ValueType _data;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::OctetStringType _contextEngineID_Type;
   asn1::OctetStringType _contextName_Type;
   asn1::generated::PDUs _data_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ScopedPDU"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: ScopedPduData
class ScopedPduData : public asn1::ChoiceType
{
public:

   explicit ScopedPduData()
   {
      _addChoice(&_plaintext_Type);
#if defined(ASN1_ENABLE_XER)
      _plaintext_Type.setTypeName("plaintext");
#endif // ASN1_ENABLE_XER
      _addChoice(&_encryptedPDU_Type);
      _encryptedPDU_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _encryptedPDU_Type.setTypeName("encryptedPDU");
#endif // ASN1_ENABLE_XER
   }

   class ChoiceValue_Type
   {
   public:

      explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}

      // Alternative: plaintext
      void set_plaintext(const asn1::generated::ScopedPDU::ValueType& v) { _plaintext = v; _id = plaintext_ID; }
      void set_plaintext(asn1::generated::ScopedPDU::ValueType&& v) { _plaintext = std::move(v); _id = plaintext_ID; }
      const asn1::generated::ScopedPDU::ValueType& get_plaintext() const { assert(_id == plaintext_ID); return _plaintext; }
      asn1::generated::ScopedPDU::ValueType& get_plaintext() { assert(_id == plaintext_ID); return _plaintext; }
      bool has_plaintext_Choosen() const { return _id == plaintext_ID; }
      void choose_plaintext() { _id = plaintext_ID; }

      // Alternative: encryptedPDU
      void set_encryptedPDU(const asn1::OctetStringType::ValueType& v) { _encryptedPDU = v; _id = encryptedPDU_ID; }
      void set_encryptedPDU(asn1::OctetStringType::ValueType&& v) { _encryptedPDU = std::move(v); _id = encryptedPDU_ID; }
      const asn1::OctetStringType::ValueType& get_encryptedPDU() const { assert(_id == encryptedPDU_ID); return _encryptedPDU; }
      asn1::OctetStringType::ValueType& get_encryptedPDU() { assert(_id == encryptedPDU_ID); return _encryptedPDU; }
      bool has_encryptedPDU_Choosen() const { return _id == encryptedPDU_ID; }
      void choose_encryptedPDU() { _id = encryptedPDU_ID; }

      bool operator==(const ChoiceValue_Type& other) const
      {
         if (this == &other)
            return true;

         switch (_id)
         {
         case plaintext_ID:
            if (_plaintext != other._plaintext)
               return false;
            break;
         case encryptedPDU_ID:
            if (_encryptedPDU != other._encryptedPDU)
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
         plaintext_ID = 1,
         encryptedPDU_ID = 2,
         __VALUE_NOT_DEFINED__ = -1
      };

      asn1::generated::ScopedPDU::ValueType _plaintext;
      asn1::OctetStringType::ValueType _encryptedPDU;

      ChoiceValue_identifier _id;
   };

   typedef ChoiceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::generated::ScopedPDU _plaintext_Type;
   asn1::OctetStringType _encryptedPDU_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "ScopedPduData"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: SNMPv3Message
class SNMPv3Message : public asn1::SequenceType
{
public:

   explicit SNMPv3Message()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _msgVersion_Type.setMinValue(0ULL);
      _msgVersion_Type.setMaxValue(2147483647ULL);
      _msgVersion_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgVersion_Type.setTypeName("msgVersion");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _msgGlobalData_Type.setTypeName("msgGlobalData");
#endif // ASN1_ENABLE_XER
      _msgSecurityParameters_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgSecurityParameters_Type.setTypeName("msgSecurityParameters");
#endif // ASN1_ENABLE_XER
#if defined(ASN1_ENABLE_XER)
      _msgData_Type.setTypeName("msgData");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: msgVersion
      void set_msgVersion(const asn1::UnsignedIntegerType::ValueType& v) { _msgVersion = v;  }
      void set_msgVersion(asn1::UnsignedIntegerType::ValueType&& v) { _msgVersion = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_msgVersion() const { return _msgVersion; }
      asn1::UnsignedIntegerType::ValueType& get_msgVersion() { return _msgVersion; }

      // Component: msgGlobalData
      void set_msgGlobalData(const asn1::generated::HeaderData::ValueType& v) { _msgGlobalData = v;  }
      void set_msgGlobalData(asn1::generated::HeaderData::ValueType&& v) { _msgGlobalData = std::move(v);  }
      const asn1::generated::HeaderData::ValueType& get_msgGlobalData() const { return _msgGlobalData; }
      asn1::generated::HeaderData::ValueType& get_msgGlobalData() { return _msgGlobalData; }

      // Component: msgSecurityParameters
      void set_msgSecurityParameters(const asn1::OctetStringType::ValueType& v) { _msgSecurityParameters = v;  }
      void set_msgSecurityParameters(asn1::OctetStringType::ValueType&& v) { _msgSecurityParameters = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_msgSecurityParameters() const { return _msgSecurityParameters; }
      asn1::OctetStringType::ValueType& get_msgSecurityParameters() { return _msgSecurityParameters; }

      // Component: msgData
      void set_msgData(const asn1::generated::ScopedPduData::ValueType& v) { _msgData = v;  }
      void set_msgData(asn1::generated::ScopedPduData::ValueType&& v) { _msgData = std::move(v);  }
      const asn1::generated::ScopedPduData::ValueType& get_msgData() const { return _msgData; }
      asn1::generated::ScopedPduData::ValueType& get_msgData() { return _msgData; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_msgVersion != other._msgVersion)
            return false;
         if (_msgGlobalData != other._msgGlobalData)
            return false;
         if (_msgSecurityParameters != other._msgSecurityParameters)
            return false;
         if (_msgData != other._msgData)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::UnsignedIntegerType::ValueType _msgVersion;
      asn1::generated::HeaderData::ValueType _msgGlobalData;
      asn1::OctetStringType::ValueType _msgSecurityParameters;
      asn1::generated::ScopedPduData::ValueType _msgData;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::UnsignedIntegerType _msgVersion_Type;
   asn1::generated::HeaderData _msgGlobalData_Type;
   asn1::OctetStringType _msgSecurityParameters_Type;
   asn1::generated::ScopedPduData _msgData_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "SNMPv3Message"; }
#endif // ASN1_ENABLE_XER

};

// TypeAssignment for ASN.1 type: UsmSecurityParameters
class UsmSecurityParameters : public asn1::SequenceType
{
public:

   explicit UsmSecurityParameters()
   {
      setTagging(Type::IMPLICIT_TAGGING);
      _msgAuthoritativeEngineID_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgAuthoritativeEngineID_Type.setTypeName("msgAuthoritativeEngineID");
#endif // ASN1_ENABLE_XER
      _msgAuthoritativeEngineBoots_Type.setMinValue(0ULL);
      _msgAuthoritativeEngineBoots_Type.setMaxValue(2147483647ULL);
      _msgAuthoritativeEngineBoots_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgAuthoritativeEngineBoots_Type.setTypeName("msgAuthoritativeEngineBoots");
#endif // ASN1_ENABLE_XER
      _msgAuthoritativeEngineTime_Type.setMinValue(0ULL);
      _msgAuthoritativeEngineTime_Type.setMaxValue(2147483647ULL);
      _msgAuthoritativeEngineTime_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgAuthoritativeEngineTime_Type.setTypeName("msgAuthoritativeEngineTime");
#endif // ASN1_ENABLE_XER
      _msgUserName_Type.addSize(0LL, 32LL);
      _msgUserName_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgUserName_Type.setTypeName("msgUserName");
#endif // ASN1_ENABLE_XER
      _msgAuthenticationParameters_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgAuthenticationParameters_Type.setTypeName("msgAuthenticationParameters");
#endif // ASN1_ENABLE_XER
      _msgPrivacyParameters_Type.setTagging(Type::IMPLICIT_TAGGING);
#if defined(ASN1_ENABLE_XER)
      _msgPrivacyParameters_Type.setTypeName("msgPrivacyParameters");
#endif // ASN1_ENABLE_XER
   }

   class SequenceValue_Type
   {
   public:

      // Component: msgAuthoritativeEngineID
      void set_msgAuthoritativeEngineID(const asn1::OctetStringType::ValueType& v) { _msgAuthoritativeEngineID = v;  }
      void set_msgAuthoritativeEngineID(asn1::OctetStringType::ValueType&& v) { _msgAuthoritativeEngineID = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_msgAuthoritativeEngineID() const { return _msgAuthoritativeEngineID; }
      asn1::OctetStringType::ValueType& get_msgAuthoritativeEngineID() { return _msgAuthoritativeEngineID; }

      // Component: msgAuthoritativeEngineBoots
      void set_msgAuthoritativeEngineBoots(const asn1::UnsignedIntegerType::ValueType& v) { _msgAuthoritativeEngineBoots = v;  }
      void set_msgAuthoritativeEngineBoots(asn1::UnsignedIntegerType::ValueType&& v) { _msgAuthoritativeEngineBoots = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_msgAuthoritativeEngineBoots() const { return _msgAuthoritativeEngineBoots; }
      asn1::UnsignedIntegerType::ValueType& get_msgAuthoritativeEngineBoots() { return _msgAuthoritativeEngineBoots; }

      // Component: msgAuthoritativeEngineTime
      void set_msgAuthoritativeEngineTime(const asn1::UnsignedIntegerType::ValueType& v) { _msgAuthoritativeEngineTime = v;  }
      void set_msgAuthoritativeEngineTime(asn1::UnsignedIntegerType::ValueType&& v) { _msgAuthoritativeEngineTime = std::move(v);  }
      const asn1::UnsignedIntegerType::ValueType& get_msgAuthoritativeEngineTime() const { return _msgAuthoritativeEngineTime; }
      asn1::UnsignedIntegerType::ValueType& get_msgAuthoritativeEngineTime() { return _msgAuthoritativeEngineTime; }

      // Component: msgUserName
      void set_msgUserName(const asn1::OctetStringType::ValueType& v) { _msgUserName = v;  }
      void set_msgUserName(asn1::OctetStringType::ValueType&& v) { _msgUserName = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_msgUserName() const { return _msgUserName; }
      asn1::OctetStringType::ValueType& get_msgUserName() { return _msgUserName; }

      // Component: msgAuthenticationParameters
      void set_msgAuthenticationParameters(const asn1::OctetStringType::ValueType& v) { _msgAuthenticationParameters = v;  }
      void set_msgAuthenticationParameters(asn1::OctetStringType::ValueType&& v) { _msgAuthenticationParameters = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_msgAuthenticationParameters() const { return _msgAuthenticationParameters; }
      asn1::OctetStringType::ValueType& get_msgAuthenticationParameters() { return _msgAuthenticationParameters; }

      // Component: msgPrivacyParameters
      void set_msgPrivacyParameters(const asn1::OctetStringType::ValueType& v) { _msgPrivacyParameters = v;  }
      void set_msgPrivacyParameters(asn1::OctetStringType::ValueType&& v) { _msgPrivacyParameters = std::move(v);  }
      const asn1::OctetStringType::ValueType& get_msgPrivacyParameters() const { return _msgPrivacyParameters; }
      asn1::OctetStringType::ValueType& get_msgPrivacyParameters() { return _msgPrivacyParameters; }

      bool operator==(const SequenceValue_Type& other) const
      {
         if (this == &other)
            return true;

         if (_msgAuthoritativeEngineID != other._msgAuthoritativeEngineID)
            return false;
         if (_msgAuthoritativeEngineBoots != other._msgAuthoritativeEngineBoots)
            return false;
         if (_msgAuthoritativeEngineTime != other._msgAuthoritativeEngineTime)
            return false;
         if (_msgUserName != other._msgUserName)
            return false;
         if (_msgAuthenticationParameters != other._msgAuthenticationParameters)
            return false;
         if (_msgPrivacyParameters != other._msgPrivacyParameters)
            return false;

         return true;
      }

      bool operator!=(const SequenceValue_Type& other) const
      {
         return !(*this == other);
      }

   private:

      asn1::OctetStringType::ValueType _msgAuthoritativeEngineID;
      asn1::UnsignedIntegerType::ValueType _msgAuthoritativeEngineBoots;
      asn1::UnsignedIntegerType::ValueType _msgAuthoritativeEngineTime;
      asn1::OctetStringType::ValueType _msgUserName;
      asn1::OctetStringType::ValueType _msgAuthenticationParameters;
      asn1::OctetStringType::ValueType _msgPrivacyParameters;
   };

   typedef SequenceValue_Type ValueType;

   void read(ASN1ValueReader& reader, ValueType& value) const;
   void write(ASN1ValueWriter& writer, const ValueType& value) const;

private:

   asn1::OctetStringType _msgAuthoritativeEngineID_Type;
   asn1::UnsignedIntegerType _msgAuthoritativeEngineBoots_Type;
   asn1::UnsignedIntegerType _msgAuthoritativeEngineTime_Type;
   asn1::OctetStringType _msgUserName_Type;
   asn1::OctetStringType _msgAuthenticationParameters_Type;
   asn1::OctetStringType _msgPrivacyParameters_Type;

#if defined(ASN1_ENABLE_XER)
protected:

   const char* _doTypeName() const { return "UsmSecurityParameters"; }
#endif // ASN1_ENABLE_XER

};

}

}

#endif // __ASN1_TYPES_HH
