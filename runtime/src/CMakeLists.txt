project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (asn1-runtime_SOURCES BERValueReader.cc BERValueWriter.cc CERValueWriter.cc
		          XERValueWriter.cc ChoiceType.cc GeneralizedTimeType.cc
                          GraphicStringType.cc IntegerType.cc ObjectIdentifier.cc
                          OctetStringType.cc PrintableStringType.cc SequenceType.cc
                          Type.cc VisibleStringType.cc)

add_library (asn1-runtime-lib ${asn1-runtime_SOURCES})
                                                          