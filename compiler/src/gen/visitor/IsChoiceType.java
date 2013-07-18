package gen.visitor;

import gen.*;
import parser.*;

public class IsChoiceType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isChoice = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTChoiceType node, Object data) {
      isChoice = true;
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isChoice;
   }
}