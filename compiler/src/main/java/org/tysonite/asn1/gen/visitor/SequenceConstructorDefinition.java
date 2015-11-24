package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;

public class SequenceConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SequenceConstructorDefinition(final GeneratorContext context) {
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
      final String elementTypeName = "_"
              + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()) + "_Type";

      // internal types
      VisitorUtils.visitChildsAndAccept(builder, node,
              new IntegerConstructorDefinition(elementTypeName),
              new OctetStringConstructorDefinition(context, elementTypeName));

      if (VisitorUtils.visitChildsAndAccept(builder, node, new IsSimpleType())) {
         VisitorUtils.visitChildsAndAccept(builder, node,
                 new SimpleTypeConstructorDefinition(context, elementTypeName));
      }

      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
