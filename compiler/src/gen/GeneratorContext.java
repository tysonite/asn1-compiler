package gen;

import parser.ASTModuleDefinition;

public class GeneratorContext {

   /* Module tag */
   private int moduleTag;

   public void setModuleTag(int tag) {
      moduleTag = tag;
   }

   public boolean isExplicitModule() {
      return moduleTag == ASTModuleDefinition.EXPLICIT;
   }

   public boolean isImplicitModule() {
      return moduleTag == ASTModuleDefinition.IMPLICIT;
   }
}
