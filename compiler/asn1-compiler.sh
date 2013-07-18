#!/bin/sh

basedir=`dirname $0`
java -cp "${basedir}/lib/commons-cli-1.2.jar:${basedir}/asn1-compiler.jar" gen.Main $@
