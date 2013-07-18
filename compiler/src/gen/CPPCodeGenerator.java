package gen;

import gen.utils.*;
import gen.visitor.*;
import java.io.*;
import org.apache.commons.cli.*;
import parser.*;

public final class CPPCodeGenerator {

   /* root ASN.1 node */
   SimpleNode node = null;
   /* the context of the code generator */
   final GeneratorContext context = new GeneratorContext();
   /* output directory path */
   String outputDirectory = null;

   /**
    * Constructs CPP code generator
    *
    * @param node root ASN.1 node
    */
   public CPPCodeGenerator(SimpleNode node, CommandLine line) {
      this.node = node;
      this.context.setCommandLine(line);
      ASTAssignmentList assignmentList = GenerationUtils.findAssignmentList(node);
      if (null == assignmentList) {
         throw new GeneratorException("Cannot get list of TypeAssignments");
      }

      this.context.setAssignmentList(GenerationUtils.findAssignmentList(node));
      this.outputDirectory = line.getOptionValue(Main.outputDirectory.getOpt());
      if (!(new File(this.outputDirectory).exists())) {
         if (!(new File(this.outputDirectory)).mkdirs()) {
            throw new GeneratorException("Cannot create output directory \""
                    + this.outputDirectory + "\"");
         }
      }
   }

   /**
    * Generates CPP code.
    */
   public final void generate() {
      generateHeaderFile(node);
      generateSourceFile(node);
   }

   private void generateHeaderFile(final SimpleNode node) {
      final CodeBuilder builder = new CodeBuilder();

      builder.append("#ifndef __ASN1_TYPES_HH").newLine();
      builder.append("#define __ASN1_TYPES_HH").newLine();
      builder.newLine();

      // add include
      builder.append("#include <Types.hh>").newLine();
      builder.newLine();

      builder.append("namespace asn1").newLine();
      builder.append("{").newLine();
      builder.newLine();

      builder.append("namespace generated").newLine();
      builder.append("{").newLine();
      builder.newLine();

      /* traverse over nodes recursivly */
      generateValueDeclarationCode(node, builder);
      generateTypeDeclarationCode(node, builder);

      builder.append("}").newLine();
      builder.newLine();

      builder.append("}").newLine();
      builder.newLine();

      builder.append("#endif // __ASN1_TYPES_HH").newLine();

      /* dump generated content to file */
      FileWriter writer = null;
      try {
         writer = new FileWriter(outputDirectory + "/ASN1Types.hh");
         writer.write(builder.toString());
         writer.close();
      } catch (IOException e) {
         System.err.println("Error : " + e);
      } finally {
         try {
            writer.close();
            writer = null;
         } catch (IOException e) {
         }
      }
   }

   private void generateSourceFile(final SimpleNode node) {
      final CodeBuilder builder = new CodeBuilder();

      builder.append("#include <ASN1Types.hh>").newLine();
      builder.newLine();

      // begin of namespace
      builder.append("namespace asn1").newLine();
      builder.append("{").newLine();
      builder.newLine();

      builder.append("namespace generated").newLine();
      builder.append("{").newLine();

      generateDefinitionCode(node, builder);

      // end of namespace
      builder.append("}").newLine();
      builder.newLine();
      builder.append("}").newLine();

      /* dump generated content to file */
      FileWriter writer = null;
      try {
         writer = new FileWriter(outputDirectory + "/ASN1Types.cc");
         writer.write(builder.toString());
         writer.close();
      } catch (IOException e) {
         System.err.println("Error : " + e);
      } finally {
         try {
            writer.close();
            writer = null;
         } catch (IOException e) {
         }
      }
   }

   private void generateValueDeclarationCode(final SimpleNode node, final CodeBuilder builder) {
      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         if (child instanceof ASTValueAssignment) {
            final ValueGenerator generator = new ValueGenerator((ASTValueAssignment) child);
            generator.generate(context);
            builder.append(generator.getContent());
         } else {
            generateValueDeclarationCode(child, builder);
         }
      }
   }

   /**
    * Generates C++ code for a specified ASN.1.
    *
    * @param node type to generate C++ code for
    */
   private void generateTypeDeclarationCode(final SimpleNode node, final CodeBuilder builder) {
      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         if (child instanceof ASTTypeAssignment) {
            final TypeDeclarationGenerator generator = new TypeDeclarationGenerator((ASTTypeAssignment) child);
            generator.generate(context);
            context.dumpExternalContent(builder);
            builder.append(generator.getContent());
         } else if (child instanceof ASTModuleDefinition) {
            final ASTModuleDefinition moduleDef = (ASTModuleDefinition) child;
            context.setModuleTag(moduleDef.getTag());

            generateTypeDeclarationCode(child, builder);
         } else {
            generateTypeDeclarationCode(child, builder);
         }
      }
   }

   private void generateDefinitionCode(final SimpleNode node, final CodeBuilder builder) {
      context.dumpExternalDefContent(builder);

      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         if (child instanceof ASTTypeAssignment) {
            final TypeDefinitionGenerator generator = new TypeDefinitionGenerator((ASTTypeAssignment) child);
            generator.generate(context);
            builder.append(generator.getContent());
         } else if (child instanceof ASTModuleDefinition) {
            final ASTModuleDefinition moduleDef = (ASTModuleDefinition) child;
            context.setModuleTag(moduleDef.getTag());

            generateDefinitionCode(child, builder);
         } else {
            generateDefinitionCode(child, builder);
         }
      }
   }
}
