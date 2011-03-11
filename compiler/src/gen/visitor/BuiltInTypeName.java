package gen.visitor;

import gen.*;
import parser.*;

public class BuiltInTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      builder.append("IntegerType");
      return data;
   }

   @Override
   public Object visit(ASTBooleanType node, Object data) {
      builder.append("BooleanType");
      return data;
   }

   @Override
   public Object visit(ASTNullType node, Object data) {
      builder.append("NullType");
      return data;
   }

   @Override
   public Object visit(ASTObjectIdentifierType node, Object data) {
      builder.append("ObjectIdentifierType");
      return data;
   }

   @Override
   public Object visit(ASTOctetStringType node, Object data) {
      builder.append("OctetStringType");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
