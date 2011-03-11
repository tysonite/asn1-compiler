package gen.visitor;

import gen.*;
import parser.*;

public class DefinedTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      builder.append(node.getFirstToken().toString());
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
