1. To generate C++ code execute:
* <compiler_dir>\asn1-compiler.cmd -xer -i rfc4210.asn -o .

2. Replace line 3053 in ASNTypes.hh :
   explicit TBSCertificate()_version_Type(null::k_v1, true)
with
   explicit TBSCertificate()
