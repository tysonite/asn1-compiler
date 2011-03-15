package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class DefinedTypeName extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      builder.append(asn1GeneratedNameSpace).append(node.getFirstToken().toString());
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
