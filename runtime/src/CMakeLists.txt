project (asn1-runtime)

cmake_minimum_required (VERSION 2.6)

set (SOURCES BERValueReader.cc BERValueWriter.cc CERValueWriter.cc
             XERValueWriter.cc ChoiceType.cc GeneralizedTimeType.cc
             GraphicStringType.cc IntegerType.cc ObjectIdentifier.cc
             OctetStringType.cc PrintableStringType.cc SequenceType.cc
             Type.cc VisibleStringType.cc)

set (HEADERS ASN1Exception.hh ASN1ValueReader.hh ASN1ValueWriter.hh
             BERBuffer.hh BERValueReader.hh BERValueWriter.hh
             BitStringType.hh BooleanType.hh CERValueWriter.hh
             ChoiceType.hh EnumeratedType.hh GeneralizedTimeType.hh
             GraphicStringType.hh IntegerType.hh NullType.hh
             ObjectIdentifier.hh OctetStringType.hh PrintableStringType.hh
             SequenceOfType.hh SequenceType.hh TaggingType.hh
             Type.hh TypeCommon.hh Types.hh Utils.hh Values.hh
             VisibleStringType.hh XERBuffer.hh XERValueWriter.hh)

source_group ("Header Files" FILES ${HEADERS})

add_library (asn1-runtime-lib ${SOURCES} ${HEADERS})
                                                          