package gen.visitor;

import gen.*;
import parser.*;

public class IsNullType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isTypeFound = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNullType node, Object data) {
      isTypeFound = true;
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isTypeFound;
   }
}
