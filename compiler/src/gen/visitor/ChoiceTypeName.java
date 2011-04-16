package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class ChoiceTypeName extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTChoiceType node, Object data) {
      builder.append(asn1NameSpace).append("ChoiceType");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
