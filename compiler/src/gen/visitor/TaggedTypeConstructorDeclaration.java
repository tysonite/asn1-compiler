package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class TaggedTypeConstructorDeclaration extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public TaggedTypeConstructorDeclaration(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      if (node.jjtGetParent() instanceof ASTTaggedType) {
         builder.append(node.getFirstToken().toString());
      }
      return data;
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      VisitorUtils.visitNodeAndAccept(builder, node, new TaggedTypeName(context));
      VisitorUtils.visitNodeAndAccept(builder, node, new DefinedTypeName());

      builder.append("(new ");

      VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node,
              new SetOrSequenceConstructorDeclaration(context));

      node.childrenAccept(this, data);

      builder.append(")");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
