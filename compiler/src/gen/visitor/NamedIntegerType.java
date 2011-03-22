package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class NamedIntegerType extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      if (VisitorUtils.visitNodeAndAccept(builder, node, new IsNamedIntegerType())) {
         builder.append(asn1NameSpace).append("IntegerType");
      }
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
