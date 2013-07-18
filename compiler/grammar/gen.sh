#!/bin/sh

bkp=`mktemp --tmpdir XXXX`
cp AsnParser.jj $bkp
sed -e '/OUTPUT_DIRECTORY\s*=/ s/\\\\/\//g' $bkp > AsnParser.jj

jjtree AsnParser.jj
javacc ../src/parser/AsnParser.jj.jj

mv $bkp AsnParser.jj
