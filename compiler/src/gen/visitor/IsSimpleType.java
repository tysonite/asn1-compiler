package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class IsSimpleType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isSimple = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (VisitorUtils.visitNodeAndAccept(new CodeBuilder(), node, new SimpleTypeName())) {
         isSimple = true;
      }
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isSimple;
   }
}
