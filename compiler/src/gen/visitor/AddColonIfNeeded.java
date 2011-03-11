package gen.visitor;

import gen.*;
import parser.*;

public class AddColonIfNeeded extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      builder.append(" : ");
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      builder.append(" : ");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
