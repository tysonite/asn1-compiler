package gen;

import java.util.*;

import gen.utils.*;
import parser.*;

public class GeneratorContext {

   /* module tag */
   private int moduleTag = -1;
   /* externalized types */
   private List<String> externalizedTypes = new ArrayList<String>();
   /* content to add before currently generated content */
   private List<CodeBuilder> externalContent = new ArrayList<CodeBuilder>();
   /* current type name */
   private String typeName;
   /* base type name */
   private String baseTypeName;

   public void setTypeName(final String typeName) {
      this.typeName = typeName;
   }

   public String getTypeName() {
      return this.typeName;
   }

   public void setBaseTypeName(final String typeName) {
      this.baseTypeName = typeName;
   }

   public String getBaseTypeName() {
      return this.baseTypeName;
   }

   public void setModuleTag(int tag) {
      moduleTag = tag;
   }

   public boolean isExplicitModule() {
      return moduleTag == ASTModuleDefinition.EXPLICIT;
   }

   public boolean isImplicitModule() {
      return moduleTag == ASTModuleDefinition.IMPLICIT;
   }

   public void addExternalTypeName(final String typeName) {
      externalizedTypes.add(typeName);
   }

   public boolean hasExternalized(final String typeName) {
      return externalizedTypes.contains(typeName);
   }

   public void addExternalContent(final CodeBuilder builder) {
      externalContent.add(builder);
   }

   public void dumpExternalContent(final CodeBuilder builder) {
      for (CodeBuilder b : externalContent) {
         builder.append(b.toString());
      }
      externalContent.clear();
   }
}
