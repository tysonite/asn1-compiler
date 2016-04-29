project (asn1-runtime-example-snmp)

cmake_minimum_required (VERSION 2.6)

set (SOURCES rfc4210.cc ASN1Types.cc)

include_directories (${ASN1_RUNTIME_INCLUDE_DIRS})
include_directories (${CMAKE_CURRENT_SOURCE_DIR})

add_executable (rfc4210 ${SOURCES})
target_link_libraries (rfc4210 ${ASN1_RUNTIME_LIBRARY_STATIC})
add_dependencies (rfc4210 ${ASN1_RUNTIME_LIBRARY_STATIC})
