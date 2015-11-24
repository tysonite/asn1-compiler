package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTBuiltinValue;
import org.tysonite.asn1.parser.ASTDefaultValue;
import org.tysonite.asn1.parser.ASTDefinedType;
import org.tysonite.asn1.parser.ASTDefinedValue;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;
import org.tysonite.asn1.parser.ASTValue;
import org.tysonite.asn1.parser.SimpleNode;

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
              + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()) + "_Type";

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
              append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()));
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
