package gen;

import java.util.*;
import org.apache.commons.cli.*;

import gen.utils.*;
import parser.*;

public class GeneratorContext {

   /* module tag */
   private int moduleTag = -1;
   /* externalized types */
   private List<String> externalizedTypes = new ArrayList<String>();
   /* content to add before currently generated content */
   private List<CodeBuilder> externalContent = new ArrayList<CodeBuilder>();
   private List<CodeBuilder> externalDefContent = new ArrayList<CodeBuilder>();
   /* current type name */
   private String typeName;
   /* base type name */
   private String baseTypeName;
   /* command line options */
   private CommandLine line;
   /* AssigmentList node */
   private ASTAssignmentList assignmentList = null;
   /* Current node scheduled for coe generation in complex types */
   private Node queuedNode = null;

   public void setAssignmentList(ASTAssignmentList node) {
      this.assignmentList = node;
   }

   public ASTAssignmentList getAssignmentList() {
      return this.assignmentList;
   }

   public void setCommandLine(CommandLine line) {
      this.line = line;
   }

   public CommandLine getCommandLine() {
      return this.line;
   }

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

   public void addExternalDefContent(final CodeBuilder builder) {
      externalDefContent.add(builder);
   }

   public void dumpExternalContent(final CodeBuilder builder) {
      for (CodeBuilder b : externalContent) {
         builder.append(b.toString());
      }
      externalContent.clear();
   }

   public void dumpExternalDefContent(final CodeBuilder builder) {
      for (CodeBuilder b : externalDefContent) {
         builder.append(b.toString());
      }
      externalDefContent.clear();
   }

   public void setQueuedNode(Node node) {
      queuedNode = node;
   }

   public Node getQueuedNode() {
      return queuedNode;
   }
}
