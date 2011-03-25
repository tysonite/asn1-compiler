package gen.visitor;

import gen.*;
import parser.*;

public class IsIntegerType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isInteger = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      isInteger = true;
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isInteger;
   }
}
