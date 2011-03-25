package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class OctetStringConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean isMinSize = true;
   private int innerLevel = 0;
   private boolean isOctetString = false;
   private boolean isSizeConstraints = false;
   private String typeName = null;
   private String minSize = null, maxSize = null;

   public OctetStringConstructorDefinition() {
   }

   public OctetStringConstructorDefinition(boolean overrideInteger) {
      this.isOctetString = overrideInteger;
   }

   public OctetStringConstructorDefinition(boolean overrideOctetString, int innerLevel) {
      this(overrideOctetString);
      this.innerLevel = innerLevel;
   }

   public OctetStringConstructorDefinition(String typeName) {
      this.typeName = typeName;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (node.jjtGetParent() instanceof ASTTaggedType
              || node.jjtGetParent() instanceof ASTOctetStringType) {
         ++innerLevel;
      }
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTOctetStringType node, Object data) {
      isOctetString = true;
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
      if (isOctetString) {
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
      minSize = null;
      maxSize = null;
      isMinSize = true;

      node.childrenAccept(this, data);

      if (isSizeConstraints) {
         if (null != minSize || null != maxSize) {
            builder.append(2, "");

            if (null != typeName) {
               builder.append(typeName).append(".");
            }

            if (null == maxSize) {
               maxSize = minSize;
            } else if (null == minSize) {
               minSize = maxSize;
            }

            for (int i = 0; i < innerLevel; ++i) {
               builder.append("innerType().");
            }

            builder.append("addSize(").append(minSize).append("LL, ").append(maxSize).append("LL);");
            builder.newLine();
         }
      }

      return data;
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
      if (isMinSize) {
         minSize = node.getNumber();
         isMinSize = false;
      } else {
         maxSize = node.getNumber();
      }
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
