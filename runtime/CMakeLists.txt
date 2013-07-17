project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

option (BUILD_UNIT_TESTS "Build unit tests" OFF)

add_subdirectory (src)

if (BUILD_UNIT_TESTS)
   add_subdirectory (tests)
endif ()
