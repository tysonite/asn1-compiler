package gen.visitor;

import gen.*;
import parser.*;

public class TaggedTypeConstructorDeclaration extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

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
      DefinedOrTaggedTypeName taggedTypeNameVisitor = new DefinedOrTaggedTypeName();
      node.jjtAccept(taggedTypeNameVisitor, data);
      builder.append(taggedTypeNameVisitor.getContent());

      builder.append("(new ");

      {
         BuiltInTypeName visitor = new BuiltInTypeName();
         node.childrenAccept(visitor, data);
         builder.append(visitor.getContent());
      }

      {
         final SetOrSequenceConstructorDeclaration visitor =
                 new SetOrSequenceConstructorDeclaration();
         node.childrenAccept(visitor, data);
         builder.append(visitor.getContent());
      }

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
