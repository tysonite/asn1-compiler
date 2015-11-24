package org.tysonite.asn1.gen;

public interface Generator extends ContentProvider {

   /**
    * Generates some peace of code.
    */
   public void generate(final GeneratorContext context);
}
