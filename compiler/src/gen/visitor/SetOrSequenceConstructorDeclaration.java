package gen.visitor;

import gen.*;
import gen.utils.*;
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
      VisitorUtils.visitNodeAndAccept(builder, node, new SetOrSequenceTypeName());

      builder.append("(new ");

      VisitorUtils.visitChildsAndAccept(builder, node, new SetOrSequenceConstructorDeclaration());
      VisitorUtils.visitChildsAndAccept(builder, node, new BuiltInTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node, new DefinedTypeName());

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
