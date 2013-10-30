package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class DefaultValueConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private final CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;
   /**
    * Element type name currently being processed.
    */
   private String elementTypeName = null;
   private String elementTypeTypeName = null;

   public DefaultValueConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      elementTypeName = "_"
              + GenerationUtils.asCPPToken(node.getFirstToken().toString()) + "_Type";

      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTDefaultValue node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTValue node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTBuiltinValue node, Object data) {
      if (!builder.toString().isEmpty()) {
         builder.append(", ");
      }

      if (!GenerationUtils.isNestedLevelOfSeqOrSetEqual(node,
              (SimpleNode) context.getQueuedNode())) {
         return data;
      }

      builder.append(elementTypeName).append("(");
      VisitorUtils.visitChildsAndAccept(builder, node, new ValueGenerator(true));
      builder.append(", true)");

      return data;
   }

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      CodeBuilder cppName = new CodeBuilder();
      if (VisitorUtils.visitNodeAndAccept(cppName, node, new DefinedCPPTypeName())) {
         elementTypeTypeName = cppName.toString();
      }
      return data;
   }

   @Override
   public Object visit(ASTDefinedValue node, Object data) {
      if (!builder.toString().isEmpty()) {
         builder.append(", ");
      }
      builder.append(elementTypeName).append("(");
      builder.append(elementTypeTypeName).append("::").append("k_").
              append(GenerationUtils.asCPPToken(node.getFirstToken().toString()));
      builder.append(", true)");
      return data;
   }

   @Override
   public String getContent() {
      return builder.toString();
   }

   @Override
   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
