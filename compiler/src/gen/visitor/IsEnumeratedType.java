package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class IsEnumeratedType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isFound = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (VisitorUtils.visitNodeAndAccept(new CodeBuilder(), node, new EnumeratedTypeName())) {
         isFound = true;
      }
      return data;
   }

   @Override
   public String getContent() {
      return "";
   }

   @Override
   public boolean hasValuableContent() {
      return isFound;
   }
}