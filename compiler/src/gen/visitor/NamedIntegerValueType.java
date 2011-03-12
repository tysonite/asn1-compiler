package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class NamedIntegerValueType extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private String assignmentTypeName = null;
   private boolean isValueAble = false;

   public NamedIntegerValueType(String assignmentTypeName) {
      this.assignmentTypeName = assignmentTypeName;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      builder.newLine();

      final String typeValueName = assignmentTypeName + "_Value";
      builder.append(1, "enum ").append(typeValueName).newLine();
      builder.append(1, "{").newLine();

      node.childrenAccept(this, data);

      builder.append(1, "};").newLine();

      builder.newLine();
      return data;
   }

   @Override
   public Object visit(ASTNamedNumberList node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNamedNumber node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTidentifier node, Object data) {
      builder.append(2, node.getFirstToken().toString()).append(" = ");
      return data;
   }

   @Override
   public Object visit(ASTDefinedValue node, Object data) {
      if (node.jjtGetParent() instanceof ASTNamedNumber) {
         builder.append(node.getFirstToken().toString()).append(",");
         builder.newLine();

         isValueAble = true;
      }
      return data;
   }

   @Override
   public Object visit(ASTSignedNumber node, Object data) {
      builder.append(node.getFirstToken().toString()).append(",");
      builder.newLine();

      isValueAble = true;
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return isValueAble;
   }
}
