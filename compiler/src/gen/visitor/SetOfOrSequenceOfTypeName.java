package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOfOrSequenceOfTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SetOfOrSequenceOfTypeName(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      if (node.jjtGetParent() instanceof ASTSetOrSequenceOfType) {
         builder.append(node.getFirstToken().toString());
      }
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      builder.append("SequenceOfType<");

      if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(),
              new SetOfOrSequenceOfTypeName(context))) {
         builder.append(VisitorUtils.queueGeneratedCode(node, context));
      }

      builder.append(">");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
