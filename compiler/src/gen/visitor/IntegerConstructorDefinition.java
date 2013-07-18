package gen.visitor;

import java.util.*;

import gen.*;
import gen.utils.*;
import parser.*;

public class IntegerConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean isMinSize = true;
   private int innerLevel = 0;
   private boolean isInteger = false;
   private String typeName = null;
   private List<String> namedIdentifiers = new ArrayList<String>();
   private String minMaxValueSuffix = "LL";

   public IntegerConstructorDefinition() {
   }

   public IntegerConstructorDefinition(boolean overrideInteger) {
      this.isInteger = overrideInteger;
   }

   public IntegerConstructorDefinition(boolean overrideInteger, int innerLevel) {
      this(overrideInteger);
      this.innerLevel = innerLevel;
   }

   public IntegerConstructorDefinition(String typeName) {
      this.typeName = typeName;
   }

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
      if (VisitorUtils.visitChildsAndAccept(null, (SimpleNode) node.jjtGetParent().jjtGetParent(),
              new IsUnsignedIntegerType())) {
         minMaxValueSuffix = "ULL";
      } else {
         minMaxValueSuffix = "LL";
      }
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNamedNumberList node, Object data) {
      if (isInteger) {
         namedIdentifiers.clear();
         return node.childrenAccept(this, data);
      } else {
         return data;
      }
   }

   @Override
   public Object visit(ASTNamedNumber node, Object data) {
      if (node.jjtGetParent() instanceof ASTNamedNumberList) {
         namedIdentifiers.add(node.getFirstToken().toString());
      }
      return data;
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
      if (node.isMaxFlag()) {
         appendTypeName(2);

         CodeBuilder integerTypeName = new CodeBuilder();
         if (VisitorUtils.visitChildsAndAccept(integerTypeName,
                 (SimpleNode) node.jjtGetParent().jjtGetParent().jjtGetParent().jjtGetParent(),
                 new SimpleTypeName())) {
            appendMaxValue("std::numeric_limits<" + integerTypeName.toString()
                    + "::ValueType>::max()", false);
         } else {
            throw new GeneratorException("Expected INTEGER type for MAX constraint generation");
         }
         builder.newLine();
      }
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
      builder.append("setMinValue(").append(value);
      if (isNumber) {
         builder.append(minMaxValueSuffix).append(");");
      } else {
         builder.append(");");
      }
   }

   private void appendMaxValue(String value, boolean isNumber) {
      appendInner();
      builder.append("setMaxValue(").append(value);
      if (isNumber) {
         builder.append(minMaxValueSuffix).append(");");
      } else {
         builder.append(");");
      }
   }

   private void appendTypeName() {
      appendTypeName(0);
   }

   private void appendTypeName(int indent) {
      if (null != typeName) {
         builder.append(indent, typeName).append(".");
      } else {
         builder.append(indent, "");
      }
   }

   @Override
   public Object visit(ASTSignedNumber node, Object data) {
      builder.append(2, "");

      appendTypeName();
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

      if (null != typeName) {
         builder.append(typeName).append(".");
      }

      String value = node.getFirstToken().toString();
//      if (namedIdentifiers.contains(value)) {
//         value = "k_" + value; // use internal constant
//      }
      if (isMinSize) {
         appendMinValue("k_" + GenerationUtils.asCPPToken(value), false);
         isMinSize = false;
      } else {
         appendMaxValue("k_" + GenerationUtils.asCPPToken(value), false);
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
