project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (ASN1_RUNTIME_INCLUDE_DIRS
   ${CMAKE_SOURCE_DIR}/src
   CACHE INTERNAL "")

set (SOURCES
   BERValueReader.cc
   BERValueWriter.cc
   CERValueWriter.cc
   XERValueWriter.cc
   ChoiceType.cc
   GeneralizedTimeType.cc
   GraphicStringType.cc
   IntegerType.cc
   ObjectIdentifier.cc
   OctetStringType.cc
   PrintableStringType.cc
   Type.cc
   VisibleStringType.cc
   BitString.cc
   SizeConstraintsHolder.cc)

set (HEADERS
   ASN1Exception.hh
   ASN1ValueReader.hh
   ASN1ValueWriter.hh
   BERBuffer.hh
   BERValueReader.hh
   BERValueWriter.hh
   BitStringType.hh
   BooleanType.hh
   CERValueWriter.hh
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
   XERBuffer.hh
   XERValueWriter.hh
   BitString.hh
   SizeConstraintsHolder.hh
   BaseSequenceOfType.hh
   SetType.hh
   BaseSetOfType.hh
   SetOfType.hh
   UnsignedIntegerType.hh)

if (CMAKE_COMPILER_IS_GNUCC)
   set_source_files_properties(${SOURCES} PROPERTIES COMPILE_FLAGS "-std=c++0x -Wall")
endif ()

set (ASN1_RUNTIME_LIBRARY
   asn1-runtime-lib
   CACHE INTERNAL "")

set (ASN1_RUNTIME_LINK_LIBRARIES
   ${ASN1_RUNTIME_LINK_LIBRARIES}
   ${ASN1_RUNTIME_LIBRARY}
   CACHE INTERNAL "")

source_group ("Header Files" FILES ${HEADERS})

add_library (${ASN1_RUNTIME_LIBRARY} ${SOURCES} ${HEADERS})

target_link_libraries(${ASN1_RUNTIME_LIBRARY} ${ASN1_RUNTIME_LINK_LIBRARIES})


