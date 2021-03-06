package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTTaggedType;

public class GetTaggedTypeInnerLevel extends DoNothingASTVisitor implements ContentProvider {

   private int innerLevel = 0;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (node.jjtGetParent() instanceof ASTTaggedType) {
         ++innerLevel;
      }
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      return node.childrenAccept(this, data);
   }

   public int getInnerLevel() {
      return innerLevel;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      if (innerLevel > 0) {
         return true;
      } else {
         return false;
      }
   }
}
