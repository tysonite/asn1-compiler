project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (ASN1_RUNTIME_LIBRARY_VERSION_MAJOR "0")
set (ASN1_RUNTIME_LIBRARY_VERSION_MINOR "1")
set (ASN1_RUNTIME_LIBRARY_VERSION_PATCH "5")
set (ASN1_RUNTIME_LIBRARY_VERSION
      ${ASN1_RUNTIME_LIBRARY_VERSION_MAJOR}.${ASN1_RUNTIME_LIBRARY_VERSION_MINOR}.${ASN1_RUNTIME_LIBRARY_VERSION_PATCH})

list (APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

option (BUILD_UNIT_TESTS "Build unit tests" OFF)
option (DO_COVERAGE "Build unit tests" OFF)

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
   add_definitions("-std=c++0x")
endif ()

if (DO_COVERAGE)
   include (CodeCoverage)
   set (CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
   setup_target_for_coverage (coverage ./tests/TestBER coverage)

   set (BUILD_UNIT_TESTS ON)
endif ()

add_subdirectory (src)

if (BUILD_UNIT_TESTS)
   find_package (Boost COMPONENTS unit_test_framework)
   add_subdirectory (tests)
endif ()

set (CPACK_GENERATOR "DEB")
set (CPACK_PACKAGE_NAME "libasn1-runtime")
set (CPACK_PACKAGE_VERSION ${ASN1_RUNTIME_LIBRARY_VERSION})
set (CPACK_PACKAGE_DESCRIPTION_SUMMARY "The ASN.1 runtime C++ library")

set (CPACK_DEBIAN_PACKAGE_DEPENDS "libc6, libgcc1, libstdc++6")
set (CPACK_DEBIAN_PACKAGE_MAINTAINER "tysonite <tysonite@gmail.com>")

string (TOLOWER "${CPACK_PACKAGE_NAME}" CPACK_PACKAGE_NAME_LOWERCASE)
find_program (DPKG_PROGRAM dpkg DOC "dpkg program of Debian-based systems")
if (DPKG_PROGRAM)
   execute_process (
      COMMAND ${DPKG_PROGRAM} --print-architecture
      OUTPUT_VARIABLE CPACK_DEBIAN_PACKAGE_ARCHITECTURE
      OUTPUT_STRIP_TRAILING_WHITESPACE
   )
   set (CPACK_PACKAGE_FILE_NAME
         "${CPACK_PACKAGE_NAME_LOWERCASE}-${ASN1_RUNTIME_LIBRARY_VERSION}_${CPACK_DEBIAN_PACKAGE_ARCHITECTURE}")   
else (DPKG_PROGRAM)
   set (CPACK_PACKAGE_FILE_NAME
         "${CPACK_PACKAGE_NAME_LOWERCASE}_${ASN1_RUNTIME_LIBRARY_VERSION}_${CMAKE_SYSTEM_NAME}")
endif (DPKG_PROGRAM)

include (CPack)

