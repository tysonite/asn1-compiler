package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOfOrSequenceOfConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean isMinSize = true;
   private int innerLevel = 0;
   private boolean isSequenceOf = false;
   private boolean isSizeConstraints = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (node.jjtGetParent() instanceof ASTTaggedType
              || node.jjtGetParent() instanceof ASTSetOrSequenceOfType) {
         ++innerLevel;
      }
      if (node.jjtGetParent() instanceof ASTSetOrSequenceOfType) {
         isSequenceOf = true;
      }
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      isSequenceOf = true;
      VisitorUtils.visitChildsAndAccept(builder, node, new IntegerConstructorDefinition(false, 1),
              new OctetStringConstructorDefinition(false, 1));
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSizeConstraint node, Object data) {
      isSizeConstraints = true;
      node.childrenAccept(this, data);
      isSizeConstraints = false;
      return data;
   }

   @Override
   public Object visit(ASTSubtypeSpec node, Object data) {
      if (isSequenceOf && isSizeConstraints) {
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

   private void appendInner() {
      for (int i = 0; i < innerLevel; ++i) {
         builder.append("innerType().");
      }
   }

   private void appendMinValue(String value, boolean isNumber) {
      appendInner();
      builder.append("setMinSize(").append(value);
      if (isNumber) {
         builder.append("LL);");
      } else {
         builder.append(");");
      }
   }

   private void appendMaxValue(String value, boolean isNumber) {
      appendInner();
      builder.append("setMaxSize(").append(value);
      if (isNumber) {
         builder.append("LL);");
      } else {
         builder.append(");");
      }
   }

   @Override
   public Object visit(ASTSignedNumber node, Object data) {
      builder.append(2, "");
      if (isMinSize) {
         appendMinValue(node.getNumber(), true);
         isMinSize = false;
      } else {
         appendMaxValue(node.getNumber(), true);
      }
      builder.newLine();
      return data;
   }

   @Override
   public Object visit(ASTDefinedValue node, Object data) {
      builder.append(2, "");

      if (isMinSize) {
         appendMinValue(GenerationUtils.asCPPToken(node.getFirstToken().toString()), false);
         isMinSize = false;
      } else {
         appendMaxValue(GenerationUtils.asCPPToken(node.getFirstToken().toString()), false);
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
