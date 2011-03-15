package gen;

import java.util.*;

import gen.utils.*;
import gen.visitor.*;
import parser.*;

public class GeneratorContext {

   /* module tag */
   private int moduleTag = -1;
   /* externalized types */
   private List<String> externalizedTypes = new ArrayList<String>();
   /* content to add before currently generated content */
   private List<CodeBuilder> externalContent = new ArrayList<CodeBuilder>();
   /* list of already generated types */
   private List<String> generatedTypes = new ArrayList<String>();
   private Map<String, List<String>> depsForType = new HashMap();
   private List<Generator> queuedGenerators = new ArrayList<Generator>();
   /* current type name */
   private String currentTypeName;

   public void addGeneratedType(final String type) {
      generatedTypes.add(type);
      if (!depsForType.containsKey(type)) {
         depsForType.put(type, new ArrayList());
      }
   }

   public void addDepForType(final String typeName, final String depTypeName) {
      String[] waOverNameSpace = depTypeName.split("::");
      String depend = waOverNameSpace[waOverNameSpace.length - 1];

      if (depsForType.containsKey(typeName)) {
         List<String> values = depsForType.get(typeName);
         values.add(depend);
      } else {
         List<String> value = new ArrayList();
         value.add(depend);

         depsForType.put(typeName, value);
      }
   }

   public void removeGeneratedType(final String type) {
      generatedTypes.remove(type);
   }

   public void checkGenerators(final Generator generator, final CodeBuilder builder) {
//      if (!isGeneratorQueued(generator)) {
//         builder.append(generator.getContent());
//      }

      Set<String> keys = depsForType.keySet();
      for (String key : keys) {
         List<String> values = depsForType.get(key);

         boolean isTypesGenerated = true;
         for (String value : values) {
            if (!isTypeGenerated(value, null)) {
               isTypesGenerated = false;
            }
         }

         if (isTypesGenerated) {
            Generator g = null;
            if (null != (g = isGeneratorForType(key))) {
               builder.append(g.getContent());
               queuedGenerators.remove(g);
            }

            if (generator.typeName().equals(key)) {
               builder.append(generator.getContent());
            }
         } else {
            queueGenerator(generator);
         }
      }
   }

   public void ensureAllContentWasGenerater() {
      if (!queuedGenerators.isEmpty()) {
         throw new GeneratorException("Missed some code");
      }
   }

   public Generator isGeneratorForType(final String typeName) {
      for (Generator generator : queuedGenerators) {
         if (generator.typeName().equals(typeName)) {
            return generator;
         }
      }

      return null;
   }

   public void queueGenerator(final Generator generator) {
      queuedGenerators.add(generator);
   }

   public boolean isGeneratorQueued(final Generator generator) {
      return queuedGenerators.contains(generator);
   }

   public boolean isTypeGenerated(final String type, final SimpleNode node) {
      String[] waOverNameSpace = type.split("::");
      String depend = waOverNameSpace[waOverNameSpace.length - 1];

      if (null != node) {
         final CodeBuilder simpleTypeName = new CodeBuilder();
         VisitorUtils.visitChildsAndAccept(simpleTypeName, node, new SimpleTypeName());
         if (type.equals(simpleTypeName.toString())) {
            return true;
         } else {
            return generatedTypes.contains(depend);
         }
      } else {
         return generatedTypes.contains(depend);
      }
   }

   public void setTypeName(final String typeName) {
      this.currentTypeName = typeName;
   }

   public String getTypeName() {
      return this.currentTypeName;
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
