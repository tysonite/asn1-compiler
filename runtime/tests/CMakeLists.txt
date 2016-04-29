project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (SOURCES_NOT_COMPILABLE BerBuffer_tests.cc ChoiceType_tests.cc OctetStringType_tests.cc
   Utils_tests.cc AnyType_tests.cc)

set (SOURCES TestBER.cc ${SOURCES_NOT_COMPILABLE})
set_source_files_properties (${SOURCES_NOT_COMPILABLE}
   PROPERTIES HEADER_FILE_ONLY TRUE)

include_directories (${ASN1_RUNTIME_INCLUDE_DIRS})

add_executable (TestBER ${SOURCES})
target_link_libraries (TestBER ${ASN1_RUNTIME_LIBRARY_STATIC})
add_dependencies (TestBER ${ASN1_RUNTIME_LIBRARY_STATIC})

add_subdirectory (snmpv3-example)
add_subdirectory (rfc4210)
