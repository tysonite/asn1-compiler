package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class IsDefinedType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isTypeFound = false;

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      if (VisitorUtils.visitNodeAndAccept(new CodeBuilder(), node, new DefinedTypeName())) {
         isTypeFound = true;
      }
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isTypeFound;
   }
}
