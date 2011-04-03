#ifndef __BER_BUFFER_HH
#define __BER_BUFFER_HH 1

#include <cstdint>
#include <cassert>
#include <cstring>

#include <vector>
#include <exception>

#include <common/ASN1Exception.hh>
#include <type/TypeCommon.hh>

namespace asn1
{

// It represents an exception which BERBuffer is able to throw
typedef ASN1Exception BERBufferException;

// It represents the buffer with BER data
class BERBuffer
{
public:
   typedef std::vector<uint8_t>    ContentType;
   typedef ContentType::size_type  SizeType;
   typedef ContentType::value_type ValueType;

   // Constructors
   explicit BERBuffer()
      : _current(0), _end(0) {}
   explicit BERBuffer(const ValueType* data, SizeType size)
      : _current(0), _end(0)
   {
      write(data, size);
   }

   // Clears the buffer
   void clear() { _data.clear(); _current = 0; _end = 0; }

   // Swaps the buffers
   void swap(BERBuffer& other)
   {
      SizeType currPosition = _current;
      _current = other._current;
      other._current = currPosition;
      _data.swap(other._data);
   }

   // Returns the size of the buffer
   SizeType size() const { return _data.size(); }

   // Is the buffer empty?
   bool isEmpty() const { return !_data.size(); }

   // Reserves the size
   void reserve(SizeType size) { _data.reserve(size); }

   // Resizes the buffer
   void resize(SizeType size) { _data.resize(size); }

   // Returns the buffer data
   const ValueType* data() const { return &_data[0]; }

   // Writes/reads the data
   void write(const BERBuffer& from) { write(from.data(), from.size()); }
   void write(const ValueType* from, SizeType size)
   {
      if (size)
      {
         SizeType currSize = _data.size();
         _data.resize(currSize + size);
         std::memcpy(&_data[currSize], from, size);
      }
   }
   void write(SizeType pos, const BERBuffer& from) { write(pos, from.data(), from.size()); }
   void write(SizeType pos, const ValueType* from, SizeType size)
   {
      if (size)
      {
         extend(pos, size);
         std::memcpy(&_data[pos], from, size);
      }
   }
   void read(BERBuffer& to, SizeType size)
   {
      if (size)
      {
         if (_current + size > (_end ? _end : _data.size()))
            throw BERBufferException("Unexpected end of BER buffer");
         to.write(&_data[_current], size);
         _current += size;
      }
   } 
   void read(ValueType* to, SizeType size)
   {
      if (size)
      {
         if (_current + size > (_end ? _end : _data.size()))
            throw BERBufferException("Unexpected end of BER buffer");
         std::memcpy(to, &_data[_current], size);
         _current += size;
      }
   }
   
   // Puts the byte to end of the buffer
   void put(ValueType b) { _data.push_back(b); }

   // Puts the byte in the specified position
   void put(SizeType pos, ValueType b)
   {
      if (pos >= _data.size())
         throw BERBufferException("BER buffer overflow");
      _data[pos] = b;
   }

   // Gets the byte from the buffer
   ValueType get()
   {
      if (_current + 1 > (_end ? _end : _data.size()))
         throw BERBufferException("Unexpected end of BER buffer");
      return _data[_current++];  
   }

   // Extends space of the buffer on the specified position
   // delta > 0 - add space to buffer, delta < 0 - remove space from buffer
   void extend(SizeType pos, int32_t delta)
   {
      if (delta < 0)
      {
         // remove space from buffer [pos, pos - delta)
         std::memcpy(&_data[pos], &_data[pos - delta], _data.size() + delta - pos);
         _data.resize(_data.size() + delta);
      }
      else if (delta > 0)
      {
         // insert space to buffer [pos, pos + delta)
         _data.resize(_data.size() + delta);
         std::memmove(&_data[pos + delta], &_data[pos], _data.size() - delta - pos);
      }
   }

   // Sets/gets the current/end positions
   SizeType current() const { return _current; }
   SizeType end() const { return _end; }
   void setCurrent(SizeType pos)
   {
      if (pos > _data.size())
         throw BERBufferException("Unexpected end of BER buffer");
      _current = pos;
   }
   void setEnd(SizeType pos)
   {
      if (pos > _data.size())
         throw BERBufferException("Unexpected end of BER buffer");
      _end = pos;
   }
   void clearEnd() { _end = 0; }
   void clearCurrent() { _current = 0; }

public:
   // Class types:
   enum ClassType
   {
      UNIVERSAL_CLASSTYPE      = 0x00,
      APPLICATION_CLASSTYPE    = 0x40,
      CONTEXT_CLASSTYPE        = 0x80,
      PRIVATE_CLASSTYPE        = 0xC0,
   };

   // 
   enum ObjectType
   {
      PRIMITIVE_OBJECTYPE      = 0x00,
      CONSTRUCTED_OBJECTYPE    = 0x20,
   };

   // BER types:
   enum BERType
   {
      EOF_BERTYPE              = 0x00,
      BOOLEAN_BERTYPE          = 0x01,
      INTEGER_BERTYPE          = 0x02,
      BITSTRING_BERTYPE        = 0x03,
      OCTETSTRING_BERTYPE      = 0x04,
      NULL_BERTYPE             = 0x05,
      OBJECTID_BERTYPE         = 0x06,
      OBJECTDESCRIPTOR_BERTYPE = 0x07, // string type
      EXTERNAL_BERTYPE         = 0x08, // sequence type
      REAL_BERTYPE             = 0x09,
      ENUMERATED_BERTYPE       = 0x0A,
      EMBEDDEDPDV_BERTYPE      = 0x0B, // sequence type
      UTF8STRING_BERTYPE       = 0x0C, // string type
      RELATIVEOID_BERTYPE      = 0x0D, // new encoding type
      SEQUENCE_BERTYPE         = 0x10,
      SET_BERTYPE              = 0x11,
      NUMERICSTRING_BERTYPE    = 0x12,
      PRINTABLESTRING_BERTYPE  = 0x13,
      TELETEXSTRING_BERTYPE    = 0x14,
      VIDEOTEXTSTRING_BERTYPE  = 0x15,
      IA5STRING_BERTYPE        = 0x16,
      UTCTIME_BERTYPE          = 0x17,
      GENERALTIME_BERTYPE      = 0x18,
      GRAPHICSTRING_BERTYPE    = 0x19,
      VISIBLESTRING_BERTYPE    = 0x1A,
      GENERALSTRING_BERTYPE    = 0x1B,
      UNIVERSALSTRING_BERTYPE  = 0x1C, // string type
      CHARACTERSTRING_BERTYPE  = 0x1D, // string type
      BMPSTRING_BERTYPE        = 0x1E, // string type
   };

   // Encodes integer value
   void encodeInteger(int64_t number)
   {
      int len;
      int64_t tmpNumber;
      for (len = 1, tmpNumber = number >> 7; tmpNumber; tmpNumber >>= 7)
         ++len;

      // Resize buffer to store tag bytes
      SizeType bufferSize = size();
      resize(size() + (len - 1));

      for (tmpNumber = number >> 7; len > 1; tmpNumber >>= 7)
         put(bufferSize + (--len) - 1, (tmpNumber & 0x7f) | 0x80);
      put(number & 0x7f);
   }
   
   // Decodes integer value
   int64_t decodeInteger()
   {
      int64_t number = 0;
      ValueType b;
      do
      {
         b = get();
         number = (number << 7) | (b & 0x7F);
      } while (b & 0x80);

      return number;
   }

   // Encodes indentifier octets
   void encodeIdentifierOctets(TagType tag, PCType pc = PRIMITIVE_OBJECTYPE, CLType cl = UNIVERSAL_CLASSTYPE)
   {
      if (tag < 31) // Tag short form
         put((cl & 0xC0) | (pc & 0x20) | (tag & 0x1F));
      else // Tag long form
      {
         put((cl & 0xC0) | (pc & 0x20) | 0x1F);
         encodeInteger(tag);
      }
   }

   // Decoded identifiers octets
   void decodeIdentifierOctets(TagType& tag, PCType& pc, CLType& cl)
   {
      ValueType h = get();
      tag = h & 0x1F;
      if (tag == 0x1F) // Multi-byte type
         tag = decodeInteger();

      pc = h & 0x20;
      cl = h & 0xC0;
   }

   // Lookups identifiers octets (position of cursor inside BER buffer is not changed)
   void lookupIdentifierOctets(TagType& tag, PCType& pc, CLType& cl)
   {
      SizeType currPos = _current;
      decodeIdentifierOctets(tag, pc, cl);
      _current = currPos;
   }

   // Encodes length octets
   void encodeLengthOctets(int64_t length)
   {
      if (length < 0) // Indefinite form
         put(0x80);
      else if (length <= 127) // Definite short form
         put(static_cast<uint8_t>(length));
      else // Definite long form
      {
         assert(0); // TODO: See issue http://code.google.com/p/asn1-compiler/issues/detail?id=9
      }
   }

   // Decodes length octets
   void decodeLengthOctets(int64_t& length)
   {
      ValueType h = get();
      if (0 == (0x80 & h)) // definite short form
      {
         length = h;
         return;
      }

      h &= 0x7F; // definite long form; pull data
      if (h == 0) // indefinite long form
      {
         length = -1;
         return;
      }

      length = 0;
      while (h-- > 0)
      {
         ValueType x = get();
         length = (length << 8) | (0x00FF & x);
      }
   }

   // Encodes length octets in the specified position in BER buffer
   void updateLengthOctets(SizeType position)
   {
      assert(position > 0);

      // Calculate the current length (to the buffer end)
      int64_t length = static_cast<int64_t>(_data.size() - position - 1);

      if (length <= 127)
         _data[position] = static_cast<ValueType>(length);
      else
      {
         BERBuffer tmp;
         tmp.encodeLengthOctets(length);
         _data.resize(_data.size() + tmp.size() - 1);
         std::memmove(&_data[position + tmp.size()], &_data[position + 1], static_cast<size_t>(length));
         std::memcpy(&_data[position], tmp.data(), tmp.size());
      }
   }

   // Encodes content octets
   void encodeContentOctets(const ContentType& content)
   {
      encodeLengthOctets(content.size());
      write(content.data(), content.size());
   }

   // Decodes content octets
   void decodeContentOctets(ContentType& content)
   {
      int64_t length;
      decodeLengthOctets(length);

      content.resize(static_cast<SizeType>(length));
      read(content.data(), static_cast<SizeType>(length));
   }

   // Encodes identifier octets and length octets
   // Returns position in the BER buffer where length octets were encoded
   SizeType encodeIL(TagType tag, PCType pc = PRIMITIVE_OBJECTYPE, CLType cl = UNIVERSAL_CLASSTYPE, int64_t length = 0)
   {
      encodeIdentifierOctets(tag, pc, cl);
      SizeType position = _data.size();
      encodeLengthOctets(length);
      return position;
   }

   // Decodes identifier octets and length octets
   // Returns position of the next BER value in the buffer
   SizeType decodeIL(TagType& tag, PCType& pc, CLType& cl, int64_t& length)
   {
      decodeIdentifierOctets(tag, pc, cl);
      decodeLengthOctets(length);
      return _current + static_cast<SizeType>(length);
   }

   SizeType decodeIL()
   {
      TagType tag;
      PCType pc;
      CLType cl;
      decodeIdentifierOctets(tag, pc, cl);

      int64_t length;
      decodeLengthOctets(length);

      return _current + static_cast<SizeType>(length);
   }

private:

   SizeType    _current; // Current position in the BER buffer
   SizeType    _end;     // Indicates the end position of the BER buffer
   ContentType _data;    // Content of the BER buffer
};

}

#endif // __BER_BUFFER_HH
