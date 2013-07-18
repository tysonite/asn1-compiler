project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (SOURCES_NOT_COMPILABLE BerBuffer_tests.cc ChoiceType_tests.cc Utils_tests.cc AnyType_tests.cc)

set (SOURCES TestBER.cc ${SOURCES_NOT_COMPILABLE})
set_source_files_properties (${SOURCES_NOT_COMPILABLE}
   PROPERTIES HEADER_FILE_ONLY TRUE)

include_directories (${ASN1_RUNTIME_INCLUDE_DIRS})

if (CMAKE_COMPILER_IS_GNUCC)
   set_source_files_properties (${SOURCES} PROPERTIES COMPILE_FLAGS "-std=c++0x -Wall")
endif ()

add_executable (TestBER ${SOURCES})
target_link_libraries (TestBER ${ASN1_RUNTIME_LINK_LIBRARIES})
add_dependencies (TestBER ${ASN1_RUNTIME_LINK_LIBRARIES})
