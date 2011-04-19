package gen.visitor;

import gen.*;
import parser.*;

public class IsNamedIntegerType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isNamedInteger = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNamedNumberList node, Object data) {
      isNamedInteger = true;
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isNamedInteger;
   }
}
