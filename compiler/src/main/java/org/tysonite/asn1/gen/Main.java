package org.tysonite.asn1.gen;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.CommandLineParser;
import org.apache.commons.cli.DefaultParser;
import org.apache.commons.cli.HelpFormatter;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.Options;
import org.tysonite.asn1.parser.AsnParser;
import org.tysonite.asn1.parser.SimpleNode;

public final class Main {

   private final Options options = new Options();
   public static final Option OUTPUT_DIRECTORY = new Option("o", "output-directory", true,
           "Output directory for generated C++ code");
   public static final Option INPUT_FILE = new Option("i", "input-asn1-file", true,
           "ASN.1 grammar to process");
   public static final Option METHOD_DER = new Option("der", "der-method", false,
           "Generate code for DER encoding/decoding");
   public static final Option METHOD_XER = new Option("xer", "xer-method", false,
           "Generate code for XER encoding/decoding");
   public static final Option HELP = new Option("h", "help", false,
           "ASN.1 compiler command line options");
   public static final Option NO_CPP_CODE = new Option("ncpp", "no-cpp", false,
           "Do not generate C++ code, only parser ASN.1");
   public static final Option CPP11_CODE = new Option("cpp11", "cpp11", false,
           "Generate C++ code with C++11 features");
   public static final Option BIG_INTEGER = new Option("bi", "big-int", false,
           "Generate code with variable length integers");

   private void printHelp() {
      final HelpFormatter h = new HelpFormatter();
      h.printHelp("asn1-compiler", options);
   }

   private boolean mandatoryOptionsPresent(CommandLine line) {
      return line.hasOption(INPUT_FILE.getOpt()) && line.hasOption(OUTPUT_DIRECTORY.getOpt())
              || (line.hasOption(INPUT_FILE.getOpt()) && line.hasOption(NO_CPP_CODE.getOpt()));
   }

   private void initOptions() {
      options.addOption(OUTPUT_DIRECTORY);
      options.addOption(INPUT_FILE);
      options.addOption(METHOD_DER);
      options.addOption(METHOD_XER);
      options.addOption(NO_CPP_CODE);
      options.addOption(CPP11_CODE);
      options.addOption(BIG_INTEGER);
      options.addOption(HELP);
   }

   private void run(String args[]) {
      initOptions();

      try {
         final CommandLineParser argsParser = new DefaultParser();
         final CommandLine line = argsParser.parse(options, args);

         if (line.hasOption(HELP.getOpt()) || !mandatoryOptionsPresent(line)) {
            printHelp();
            return;
         }

         AsnParser parser = new AsnParser(new FileInputStream(
                 line.getOptionValue(INPUT_FILE.getOpt())));
         parser.Input();
         System.out.println("ASN.1 file parsed successfully.");

         SimpleNode root = parser.getTreeRootNode();
         root.dump("\t");

         if (!line.hasOption(NO_CPP_CODE.getOpt())) {
            CPPCodeGenerator generator = new CPPCodeGenerator(root, line);
            generator.generate();
         }
      } catch (org.apache.commons.cli.ParseException e) {
         printHelp();
      } catch (org.tysonite.asn1.parser.ParseException e) {
         System.out.println(e);
      } catch (FileNotFoundException e) {
         System.out.println(e);
      }
   }

   public static void main(String args[]) {
      Main main = new Main();
      main.run(args);
   }
}
