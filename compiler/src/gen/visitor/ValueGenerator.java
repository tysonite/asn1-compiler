package gen.visitor;

import gen.*;
import parser.*;

public class ValueGenerator extends DoNothingASTVisitor implements Generator {

   private ASTValueAssignment node = null;
   private CodeBuilder builder = new CodeBuilder();

   public ValueGenerator(ASTValueAssignment node) {
      this.node = node;
   }

   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   public Object visit(ASTIntegerType node, Object data) {
      builder.append("enum { ");
      builder.append(this.node.getFirstToken().toString()).append(" = ");
      return data;
   }

   public Object visit(ASTBuiltinValue node, Object data) {
      return node.childrenAccept(this, data);
   }

   public Object visit(ASTSignedNumber node, Object data) {
      builder.append(node.getFirstToken().toString()).append(" };").newLine();
      return data;
   }

   public void generate() {
      node.childrenAccept(this, null);
      builder.newLine();
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
