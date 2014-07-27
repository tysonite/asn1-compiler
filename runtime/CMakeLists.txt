project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

list (APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

option (BUILD_UNIT_TESTS "Build unit tests" OFF)
option (DO_COVERAGE "Build unit tests" OFF)

if (DO_COVERAGE)
   include (CodeCoverage)
   set (CMAKE_CXX_FLAGS "-g -O0 -fprofile-arcs -ftest-coverage")
   setup_target_for_coverage (coverage ./tests/TestBER coverage)

   set (BUILD_UNIT_TESTS ON)
endif ()

if ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
   add_definitions("-std=c++0x")
endif ()

add_subdirectory (src)

if (BUILD_UNIT_TESTS)
   add_subdirectory (tests)
endif ()

