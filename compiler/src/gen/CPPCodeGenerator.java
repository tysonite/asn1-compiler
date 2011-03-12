package gen;

import java.io.*;

import gen.visitor.*;
import gen.utils.*;
import parser.*;

public class CPPCodeGenerator implements Generator {

   /* root ASN.1 node */
   SimpleNode node = null;
   /* the context of the code generator */
   final GeneratorContext context = new GeneratorContext();
   /* output directory path */
   String outputDirectory = null;
   /* C++ code */
   final CodeBuilder builder = new CodeBuilder();

   /**
    * Constructs CPP code generator
    * @param node root ASN.1 node
    */
   public CPPCodeGenerator(SimpleNode node, String outputDirectory) {
      this.node = node;

      this.outputDirectory = outputDirectory;
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
   public final void generate(final GeneratorContext context) {

      builder.append("#ifndef __ASN1_TYPES_HH").newLine();
      builder.append("#define __ASN1_TYPES_HH 1").newLine();
      builder.newLine();

      // add include
      builder.append("#include <type/Types.hh>").newLine();
      builder.newLine();

      builder.append("namespace asn1").newLine();
      builder.append("{").newLine();
      builder.newLine();

      /* traverse over nodes recursivly */
      generateCode(node);

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

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }

   /**
    * Generates C++ code for a specified type.
    *
    * @param node type to generate C++ code for
    */
   private void generateCode(final SimpleNode node) {
      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         if (child instanceof ASTTypeAssignment) {
            final TypeGenerator generator = new TypeGenerator((ASTTypeAssignment) child);
            generator.generate(context);
            context.dumpExternalContent(builder);
            builder.append(generator.getContent());
         } else if (child instanceof ASTValueAssignment) {
            final ValueGenerator generator = new ValueGenerator((ASTValueAssignment) child);
            generator.generate(context);
            builder.append(generator.getContent());
         } else if (child instanceof ASTModuleDefinition) {
            final ASTModuleDefinition moduleDef = (ASTModuleDefinition) child;
            context.setModuleTag(moduleDef.getTag());

            generateCode(child);
         } else {
            generateCode(child);
         }
      }
   }
}
