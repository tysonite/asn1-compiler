package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOrSequenceTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

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

      VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node, new SetOrSequenceTypeName());

      builder.append(">");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
