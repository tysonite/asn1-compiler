package org.tysonite.asn1.gen;

import java.io.*;

import org.apache.commons.cli.*;
import org.tysonite.asn1.parser.AsnParser;
import org.tysonite.asn1.parser.SimpleNode;

public final class Main {

   private final Options options = new Options();
   public static final Option outputDirectory = new Option("o", "output-directory", true,
           "Output directory for generated C++ code");
   public static final Option inputFile = new Option("i", "input-asn1-file", true,
           "ASN.1 grammar to process");
   public static final Option methodDER = new Option("der", "der-method", false,
           "Generate code for DER encoding/decoding");
   public static final Option help = new Option("h", "help", false,
           "ASN.1 compiler command line options");

   private void printHelp() {
      final HelpFormatter h = new HelpFormatter();
      h.printHelp("asn1-compiler", options);
   }

   private boolean mandatoryOptionsPresent(CommandLine line) {
      return line.hasOption(inputFile.getOpt()) && line.hasOption(outputDirectory.getOpt());
   }

   private void initOptions() {
      options.addOption(outputDirectory);
      options.addOption(inputFile);
      options.addOption(methodDER);
      options.addOption(help);
   }

   private void run(String args[]) {
      initOptions();

      try {
         final CommandLineParser argsParser = new PosixParser();
         final CommandLine line = argsParser.parse(options, args);

         if (line.hasOption(help.getOpt()) || !mandatoryOptionsPresent(line)) {
            printHelp();
            return;
         }

         AsnParser parser = new AsnParser(new FileInputStream(
                 line.getOptionValue(inputFile.getOpt())));
         parser.Input();
         System.out.println("ASN.1 file parsed successfully.");

         SimpleNode root = parser.getTreeRootNode();
         root.dump("\t");

         CPPCodeGenerator generator = new CPPCodeGenerator(root, line);
         generator.generate();
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
