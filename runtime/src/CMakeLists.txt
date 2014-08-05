project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (ASN1_RUNTIME_INCLUDE_DIRS
   ${CMAKE_SOURCE_DIR}/src
   CACHE INTERNAL "")

set (SOURCES
   BERValueReader.cc
   BERValueWriter.cc
   DERValueReader.cc
   DERValueWriter.cc
   CERValueWriter.cc
   XERValueWriter.cc
   ChoiceType.cc
   GeneralizedTimeType.cc
   GraphicStringType.cc
   ObjectIdentifier.cc
   OctetStringType.cc
   PrintableStringType.cc
   Type.cc
   VisibleStringType.cc
   BitString.cc
   SizeConstraintsHolder.cc
   UTCTimeType.cc
   TeletexStringType.cc
   NumericStringType.cc
   IA5StringType.cc)

set (HEADERS
   ASN1Exception.hh
   ASN1ValueReader.hh
   ASN1ValueWriter.hh
   BERValueReader.hh
   BERValueWriter.hh
   DERValueReader.hh
   DERValueWriter.hh
   CERValueWriter.hh
   XERValueWriter.hh
   BERBuffer.hh
   XERBuffer.hh
   BitStringType.hh
   BooleanType.hh
   ChoiceType.hh
   EnumeratedType.hh
   GeneralizedTimeType.hh
   GraphicStringType.hh
   IntegerType.hh
   NullType.hh
   ObjectIdentifier.hh
   ObjectIdentifierType.hh
   OctetStringType.hh
   PrintableStringType.hh
   SequenceOfType.hh
   SequenceType.hh
   TaggingType.hh
   Type.hh
   TypeCommon.hh
   Types.hh
   Utils.hh
   Values.hh
   VisibleStringType.hh
   BitString.hh
   SizeConstraintsHolder.hh
   BaseSequenceOfType.hh
   SetType.hh
   BaseSetOfType.hh
   SetOfType.hh
   UnsignedIntegerType.hh
   ValueConstraintsHolder.hh
   UTCTimeType.hh
   TeletexStringType.hh
   NumericStringType.hh
   IA5StringType.hh
   AnyType.hh)

if (CMAKE_COMPILER_IS_GNUCC)
   set_source_files_properties(${SOURCES} PROPERTIES COMPILE_FLAGS "-std=c++0x -Wall")
endif ()

set (ASN1_RUNTIME_LIBRARY_STATIC
   asn1_runtime_static
   CACHE INTERNAL "")

set (ASN1_RUNTIME_LIBRARY_SHARED
   asn1_runtime_shared
   CACHE INTERNAL "")

set (ASN1_RUNTIME_LINK_LIBRARIES
   ${ASN1_RUNTIME_LINK_LIBRARIES}
   ${ASN1_RUNTIME_LIBRARY_STATIC}
   CACHE INTERNAL "")

source_group ("Header Files" FILES ${HEADERS})

add_library (${ASN1_RUNTIME_LIBRARY_STATIC} STATIC ${SOURCES} ${HEADERS})
add_library (${ASN1_RUNTIME_LIBRARY_SHARED} SHARED ${SOURCES} ${HEADERS})

target_link_libraries (${ASN1_RUNTIME_LIBRARY_STATIC} ${ASN1_RUNTIME_LINK_LIBRARIES})

set_target_properties (${ASN1_RUNTIME_LIBRARY_SHARED}
   PROPERTIES VERSION ${ASN1_RUNTIME_LIBRARY_VERSION}
              SOVERSION ${ASN1_RUNTIME_LIBRARY_VERSION})

install (TARGETS ${ASN1_RUNTIME_LIBRARY_STATIC} DESTINATION /usr/lib)
install (TARGETS ${ASN1_RUNTIME_LIBRARY_SHARED} DESTINATION /usr/lib)
install (FILES ${HEADERS} DESTINATION /usr/include/libasn1-runtime)

