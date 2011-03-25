package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class ChoiceConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTChoiceType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      final String elementTypeName = "_"
              + GenerationUtils.asCPPToken(node.getFirstToken().toString()) + "_Type";

      // choice
      builder.append(2, "_addChoice(&").append(elementTypeName).append(");").newLine();

      // internal types
      VisitorUtils.visitChildsAndAccept(builder, node,
              new IntegerConstructorDefinition(elementTypeName),
              new OctetStringConstructorDefinition(elementTypeName));

      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
