package gen;

import java.io.*;

import gen.visitor.*;
import gen.utils.*;
import parser.*;

public class CPPCodeGenerator implements Generator {

   /* root ASN.1 node */
   SimpleNode node = null;
   /* output directory path */
   String outputDirectory = null;
   /* C++ code */
   CodeBuilder builder = new CodeBuilder();

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
   public final void generate() {

      /* traverse over nodes recursivly */
      generateCode(node);

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
    * @param node type to generate C++ code for
    */
   private void generateCode(final SimpleNode node) {
      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         if (child instanceof ASTTypeAssignment) {
            final TypeGenerator generator = new TypeGenerator((ASTTypeAssignment) child);
            generator.generate();
            builder.append(generator.getContent());
         } else if (child instanceof ASTValueAssignment) {
            final ValueGenerator generator = new ValueGenerator((ASTValueAssignment) child);
            generator.generate();
            builder.append(generator.getContent());
         } else {
            generateCode(child);
         }
      }
   }
}
