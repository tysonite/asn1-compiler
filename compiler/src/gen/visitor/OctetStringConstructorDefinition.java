package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class OctetStringConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;
   private boolean isMinSize = true;
   private int innerLevel = 0;
   private boolean isOctetString = false;
   private boolean isSizeConstraints = false;
   private String typeName = null;
   private String minSize = null, maxSize = null;
   private boolean isMinNumber = false;
   private boolean isMaxNumber = false;
   private boolean isMaxFlag = false;

   public OctetStringConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   public OctetStringConstructorDefinition(final GeneratorContext context, boolean overrideInteger) {
      this.context = context;
      this.isOctetString = overrideInteger;
   }

   public OctetStringConstructorDefinition(final GeneratorContext context, boolean overrideOctetString, int innerLevel) {
      this(context, overrideOctetString);
      this.innerLevel = innerLevel;
   }

   public OctetStringConstructorDefinition(final GeneratorContext context, String typeName) {
      this.context = context;
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
   public Object visit(ASTDefinedValue node, Object data) {
      if (isMinSize) {
         minSize = "k_" + GenerationUtils.asCPPToken(node.getFirstToken().toString());
         isMinSize = false;
      } else {
         maxSize = "k_" + GenerationUtils.asCPPToken(node.getFirstToken().toString());
      }
      return data;
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
               if (isMinNumber) {
                  isMaxNumber = true;
               }
            } else if (null == minSize) {
               minSize = maxSize;
            }

            for (int i = 0; i < innerLevel; ++i) {
               builder.append("innerType().");
            }

            builder.append("addSize(").append(minSize);

            if (isMinNumber) {
               builder.append("LL, ");
            } else {
               builder.append(", ");
            }
            if (isMaxNumber && !isMaxFlag) {
               builder.append(maxSize).append("LL);");
            } else {
               if (isMaxFlag) {
                  builder.append("std::numeric_limits<").append(context.getTypeName()).append("::").
                          append("ValueType::size_type>::max());");
               } else {
                  builder.append(maxSize).append(");");
               }
            }
            builder.newLine();
         }
      }

      return data;
   }

   @Override
   public Object visit(ASTValueRange node, Object data) {
      node.childrenAccept(this, data);
      if (node.isMaxFlag()) {
         isMaxFlag = true;
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

   @Override
   public Object visit(ASTSignedNumber node, Object data) {
      if (isMinSize) {
         minSize = node.getNumber();
         isMinSize = false;
         isMinNumber = true;
      } else {
         maxSize = node.getNumber();
         isMaxNumber = true;
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
