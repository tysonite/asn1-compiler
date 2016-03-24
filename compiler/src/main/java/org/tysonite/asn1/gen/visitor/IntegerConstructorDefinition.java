package org.tysonite.asn1.gen.visitor;

import java.util.ArrayList;
import java.util.List;
import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.GeneratorException;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTBuiltinValue;
import org.tysonite.asn1.parser.ASTDefinedValue;
import org.tysonite.asn1.parser.ASTIntegerType;
import org.tysonite.asn1.parser.ASTNamedNumber;
import org.tysonite.asn1.parser.ASTNamedNumberList;
import org.tysonite.asn1.parser.ASTSignedNumber;
import org.tysonite.asn1.parser.ASTSubtypeSpec;
import org.tysonite.asn1.parser.ASTSubtypeValueSet;
import org.tysonite.asn1.parser.ASTSubtypeValueSetList;
import org.tysonite.asn1.parser.ASTTaggedType;
import org.tysonite.asn1.parser.ASTValue;
import org.tysonite.asn1.parser.ASTValueRange;
import org.tysonite.asn1.parser.SimpleNode;

public class IntegerConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private final CodeBuilder builder = new CodeBuilder();
   private boolean isMinSize = true;
   private int innerLevel = 0;
   private boolean isInteger = false;
   private String typeName = null;
   private final List<String> namedIdentifiers = new ArrayList<String>();
   private String minMaxValueSuffix = "LL";
   private final GeneratorContext context;

   public IntegerConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   public IntegerConstructorDefinition(final GeneratorContext context, boolean overrideInteger) {
      this(context);
      this.isInteger = overrideInteger;
   }

   public IntegerConstructorDefinition(final GeneratorContext context, boolean overrideInteger,
           int innerLevel) {
      this(context, overrideInteger);
      this.innerLevel = innerLevel;
   }

   public IntegerConstructorDefinition(final GeneratorContext context, String typeName) {
      this(context);
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
         namedIdentifiers.add(node.jjtGetFirstToken().toString());
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
                 new SimpleTypeName(context))) {
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

      String value = node.jjtGetFirstToken().toString();
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
