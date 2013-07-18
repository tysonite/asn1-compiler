package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

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
              + GenerationUtils.asCPPToken(node.getFirstToken().toString()) + "_Type";

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
