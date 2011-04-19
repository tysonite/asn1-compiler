package gen.visitor;

import gen.*;
import java.math.BigInteger;
import parser.*;

public class IsUnsignedIntegerType extends DoNothingASTVisitor
        implements ContentProvider {

   private boolean isUnsignedInteger = true;

   @Override
   public Object visit(ASTSubtypeSpec node, Object data) {
      return node.childrenAccept(this, data);
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
      BigInteger number = new BigInteger(node.getNumber());
      if (number.compareTo(BigInteger.ZERO) < 0) {
         isUnsignedInteger = false;
      }
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isUnsignedInteger;
   }
}
