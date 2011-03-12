package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOfOrSequenceOfConstructorDeclaration extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SetOfOrSequenceOfConstructorDeclaration(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      VisitorUtils.visitNodeAndAccept(builder, node, new SetOfOrSequenceOfTypeName(context));

      builder.append("(new ");

      if (!VisitorUtils.visitChildsAndAccept(builder, node,
              new SetOfOrSequenceOfConstructorDeclaration(context), new SimpleTypeName(),
              new DefinedTypeName())) {
         builder.append(VisitorUtils.queueGeneratedCode(node, context));
      }

      builder.append(")");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
