package gen.visitor;

import gen.*;
import parser.*;

public class SetOrSequenceConstructorDeclaration extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      {
         final SetOrSequenceTypeName visitor = new SetOrSequenceTypeName();
         node.jjtAccept(visitor, null);
         builder.append(visitor.getContent());
      }

      builder.append("(new ");

      {
         final SetOrSequenceConstructorDeclaration visitor = new SetOrSequenceConstructorDeclaration();
         node.childrenAccept(visitor, null);
         builder.append(visitor.getContent());

      }

      {
         final BuiltInTypeName visitor = new BuiltInTypeName();
         node.childrenAccept(visitor, null);
         builder.append(visitor.getContent());
      }

      {
         final DefinedTypeName visitor = new DefinedTypeName();
         node.childrenAccept(visitor, null);
         builder.append(visitor.getContent());

      }

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
