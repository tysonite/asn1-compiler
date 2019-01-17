[![Build Status](https://travis-ci.org/tysonite/asn1-compiler.png?branch=master)](https://travis-ci.org/tysonite/asn1-compiler)
[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2Ftysonite%2Fasn1-compiler.svg?type=shield)](https://app.fossa.io/projects/git%2Bgithub.com%2Ftysonite%2Fasn1-compiler?ref=badge_shield)
[![Coverage Status](https://coveralls.io/repos/tysonite/asn1-compiler/badge.svg?branch=master&service=github)](https://coveralls.io/github/tysonite/asn1-compiler?branch=master)
[![Total alerts](https://img.shields.io/lgtm/alerts/g/tysonite/asn1-compiler.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/tysonite/asn1-compiler/alerts/)

# Description

A compiler from ASN.1 to C++ code and run-time library for encoding/decoding data using BER/DER.
Run-time library can be used independently from ASN.1 compiler. 

# Structure

The top directory consists of these sub-directories:
* compiler -- A Java ASN.1 to C++ compiler
* runtime  -- C++ runtime library for encoding/decoding of the data

# ASN.1 grammars

The Java ASN.1 to C++ compiler depends on [JavaCC ASN.1 grammar](https://github.com/tysonite/asn1-compiler/blob/master/compiler/src/main/javacc/asn1/AsnParser.jjt),
this grammar is a bit modified comparing to original one. It is far from complete (e.g. does not
parse Information objects). However, ASN.1 compiler generates C++ code using that grammar.

An experimental [Antlr4 ASN.1 grammar](https://github.com/tysonite/asn1-compiler/blob/master/compiler/src/main/antlr4/ASN1.g4)
with partial support of notations from X.680, X.681, X.682 and X.683 is available as an option of
ASN.1 compiler. Right now, compiler does not produce any C++ code if you this grammar is selected.

# Examples

Several ASN.1 files and generated C++ code is available for protocols:
* SNMPv3 -- https://github.com/tysonite/asn1-compiler/tree/master/runtime/tests/snmpv3-example
* CMPv2 (RFC 4210 / 4211) -- https://github.com/tysonite/asn1-compiler/tree/master/runtime/tests/rfc4210

# Compile & Test runtime library
The runtime library uses [CMake](http://www.cmake.org/) to build itself. As a result of compilation
static and shared libraries will be produced.

1. Ensure that you are located in the directory with runtime library sources;
2. Create a temporary build directory (e.g. build) with help of 'mkdir' command: `mkdir build`;
3. Change current working to build directory: `cd build`;
4. Execute CMake to create Makefile: `cmake ..`;
5. Execute GNU make to build static and shared libraries: `make`;

Unit tests can be built during library compilation, if CMake command line contains option
`-DBUILD_UNIT_TESTS=1`. Unit tests require Boost test framework, on Windows set environment
variable BOOST_ROOT equal to your Boost installation path (e.g. BOOST_ROOT="c:\boost_1_55_0").

Coverage data can be calculated, if CMake command line contains option `-DDO_COVERAGE=1`. There
is no need to specify `-DBUILD_UNIT_TESTS=1` if you are going to see coverage data, because it
will be enabled automatically. For example, to compile unit tests and collect coverage data
during their running, execute `cmake -DDO_COVERAGE=1 ..` instead of command in step 4 above.

To run unit tests execute command: `./tests/TestBER`.

# Running ASN.1 compiler
1. Move to `compiler` directory
1. Execute `mvn package`
1. Move to `target` directory if no errors
1. Execute `java -jar asn1-compiler-<...>.jar` and follow on-screen instructions

# Generate Debian/Ubuntu runtime package
The runtime library uses CPack (feature of CMake) to generate an installable Debian package. If
compilation of runtime library was successful, execute `make package` to create package.

# Donation
If this project helped you, please, consider to make a donation.

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=Z8MVWEREKYYRL)

# License
[![FOSSA Status](https://app.fossa.io/api/projects/git%2Bgithub.com%2Ftysonite%2Fasn1-compiler.svg?type=large)](https://app.fossa.io/projects/git%2Bgithub.com%2Ftysonite%2Fasn1-compiler?ref=badge_large)
