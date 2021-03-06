project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (ASN1_RUNTIME_LIBRARY_VERSION_MAJOR "0")
set (ASN1_RUNTIME_LIBRARY_VERSION_MINOR "1")
set (ASN1_RUNTIME_LIBRARY_VERSION_PATCH "6")
set (ASN1_RUNTIME_LIBRARY_VERSION
      ${ASN1_RUNTIME_LIBRARY_VERSION_MAJOR}.${ASN1_RUNTIME_LIBRARY_VERSION_MINOR}.${ASN1_RUNTIME_LIBRARY_VERSION_PATCH})

list (APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

option (ENABLE_XER "Use extensions for XER" OFF)
option (VAR_INT_SUPPORT "Use integers with variable length" OFF)
option (BUILD_UNIT_TESTS "Build unit tests" OFF)
option (DO_COVERAGE "Compile with code coverage enabled" OFF)

if (CMAKE_CXX_COMPILER_ID MATCHES "Clang" OR CMAKE_COMPILER_IS_GNUCXX)
   set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x -Wall")
endif ()

if (ENABLE_XER)
   add_definitions (-DASN1_ENABLE_XER)
endif ()

if (CMAKE_COMPILER_IS_GNUCXX AND DO_COVERAGE)
   if (NOT (CMAKE_BUILD_TYPE STREQUAL "Debug"))
      message (FATAL_ERROR "Code coverage is possible only in Debug mode")
   endif ()

   if (NOT (CMAKE_COMPILER_IS_GNUCXX))
      message (FATAL_ERROR "GNU GCC is required for code coverage statistic")
   endif ()

   include (CodeCoverage)
   set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")
   setup_target_for_coverage (coverage ./tests/TestBER coverage)

   set (BUILD_UNIT_TESTS ON)
endif ()

if (VAR_INT_SUPPORT OR BUILD_UNIT_TESTS)
   # On Windows, set env. variable BOOST_ROOT to your Boost installation
   # directory (e.g. BOOST_ROOT="c:\boost_1_55_0")
   find_package (Boost) # Only unit_test_framework component is required,
			# but since unit tests use only header files, it is
			# not specified here
   include_directories (${Boost_INCLUDE_DIRS})
endif ()

if (VAR_INT_SUPPORT)
   if (Boost_FOUND)
      add_definitions (-DVARIABLE_LENGTH_INTEGER_SUPPORT)
   else ()
      message (FATAL_ERROR "Boost (mp framework) was not found, integers with variable length can't be used")
   endif ()
endif()

add_subdirectory (src)

if (BUILD_UNIT_TESTS)
   if (Boost_FOUND)
      add_subdirectory (tests)
   else ()
      message (FATAL_ERROR "Boost (unit test framework) was not found, unit tests can't be built")
   endif ()
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
