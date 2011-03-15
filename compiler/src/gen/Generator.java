package gen;

public interface Generator extends ContentProvider {

   /**
    * Generates some peace of code.
    */
   public void generate(final GeneratorContext context);

   /**
    * Returns type name for which generator will produce code.
    */
   public String typeName();
}
