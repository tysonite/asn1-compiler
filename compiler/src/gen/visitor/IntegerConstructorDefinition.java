package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class IntegerConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean isMinSize = true;
   private int innerLevel = 0;
   private boolean isInteger = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (node.jjtGetParent() instanceof ASTTaggedType
              || node.jjtGetParent() instanceof ASTIntegerType) {
         ++innerLevel;
      }
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      isInteger = true;
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSubtypeSpec node, Object data) {
      if (isInteger) {
         return node.childrenAccept(this, data);
      } else {
         return data;
      }
   }

   @Override
   public Object visit(ASTSubtypeValueSetList node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSubtypeValueSet node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTValueRange node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTValue node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTBuiltinValue node, Object data) {
      if (node.jjtGetParent() instanceof ASTValue) {
         return node.childrenAccept(this, data);
      } else {
         return data;
      }
   }

   @Override
   public Object visit(ASTSignedNumber node, Object data) {
      builder.append(2, "");
      if (isMinSize) {
         for (int i = 0; i < innerLevel; ++i) {
            builder.append("innerType().");
         }
         builder.append("setMinValue(").append(String.valueOf(node.getNumber())).append(");");
         isMinSize = false;
      } else {
         for (int i = 0; i < innerLevel; ++i) {
            builder.append("innerType().");
         }
         builder.append("setMaxValue(").append(String.valueOf(node.getNumber())).append(");");
      }
      builder.newLine();
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
