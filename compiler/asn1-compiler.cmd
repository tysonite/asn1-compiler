@echo off

rem Compose arguments for execution of asn1-compiler
set CMD_LINE_ARGS=
:args
if ""%1""=="""" goto done
set CMD_LINE_ARGS=%CMD_LINE_ARGS% %1
shift
goto args

:done

rem Execute asn1-compiler
java -cp "lib\commons-cli-1.2.jar;asn1-compiler.jar" gen.Main %CMD_LINE_ARGS%
