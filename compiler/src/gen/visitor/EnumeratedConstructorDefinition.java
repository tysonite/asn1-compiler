package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class EnumeratedConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTEnumeratedType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNamedNumberList node, Object data) {
      if (node.jjtGetParent() instanceof ASTEnumeratedType) {
         return node.childrenAccept(this, data);
      } else {
         return data;
      }
   }

   @Override
   public Object visit(ASTNamedNumber node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTidentifier node, Object data) {
      if (node.jjtGetParent() instanceof ASTNamedNumber) {
         builder.append(2, "_addEnumValue(").append("k_").
                 append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append(");").newLine();
      }
      return data;
   }

   @Override
   public String getContent() {
      return builder.toString();
   }

   @Override
   public boolean hasValuableContent() {
      return true;
   }
}
