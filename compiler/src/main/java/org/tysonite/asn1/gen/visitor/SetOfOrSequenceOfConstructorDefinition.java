package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTBuiltinValue;
import org.tysonite.asn1.parser.ASTDefinedValue;
import org.tysonite.asn1.parser.ASTSetOrSequenceOfType;
import org.tysonite.asn1.parser.ASTSignedNumber;
import org.tysonite.asn1.parser.ASTSizeConstraint;
import org.tysonite.asn1.parser.ASTSubtypeSpec;
import org.tysonite.asn1.parser.ASTSubtypeValueSet;
import org.tysonite.asn1.parser.ASTSubtypeValueSetList;
import org.tysonite.asn1.parser.ASTTaggedType;
import org.tysonite.asn1.parser.ASTValue;
import org.tysonite.asn1.parser.ASTValueRange;

public class SetOfOrSequenceOfConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;
   private boolean isMinSize = true;
   private int innerLevel = 0;
   private boolean isSequenceOf = false;
   private boolean isSizeConstraints = false;

   public SetOfOrSequenceOfConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

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
              new OctetStringConstructorDefinition(context, false, 1));
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
      node.childrenAccept(this, data);
      if (node.isMaxFlag()) {
         append_MAX_Value();
      }
      return data;
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

   private void append_MAX_Value() {
      builder.append(2, "");
      appendInner();
      builder.append("setMaxSize(std::numeric_limits<ValueType::size_type>::max());");
      builder.newLine();
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
         appendMinValue("k_" + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()), false);
         isMinSize = false;
      } else {
         appendMaxValue("k_" + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()), false);
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
