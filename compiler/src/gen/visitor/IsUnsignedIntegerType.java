package gen.visitor;

import java.math.*;
import java.util.*;

import gen.*;
import parser.*;

public class IsUnsignedIntegerType extends DoNothingASTVisitor
        implements ContentProvider {

   private List<BigInteger> constraints = new ArrayList<BigInteger>();

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
      constraints.add(number);
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      boolean isUnsigned = false;
      for (BigInteger i : constraints) {
         if (i.compareTo(BigInteger.ZERO) >= 0) {
            isUnsigned = true;
         } else {
            isUnsigned = false;
            break;
         }
      }
      return isUnsigned;
   }
}
