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
java -cp target/asn1-compiler-0.1-SNAPSHOT.jar org.tysonite.asn1.gen.Main %CMD_LINE_ARGS%
