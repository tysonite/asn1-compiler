package org.tysonite.asn1.gen.visitor;

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.parser.ASTBuiltinValue;
import org.tysonite.asn1.parser.ASTSignedNumber;
import org.tysonite.asn1.parser.ASTSubtypeSpec;
import org.tysonite.asn1.parser.ASTSubtypeValueSet;
import org.tysonite.asn1.parser.ASTSubtypeValueSetList;
import org.tysonite.asn1.parser.ASTValue;
import org.tysonite.asn1.parser.ASTValueRange;

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
