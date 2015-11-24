package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTTaggedType;

public class IsTaggedType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isTagged = false;
   private DoNothingASTVisitor visitor = null;

   public IsTaggedType() {
      this(null);
   }

   public IsTaggedType(DoNothingASTVisitor visitor) {
      this.visitor = visitor;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      isTagged = true;
      if (null != visitor) {
         return node.childrenAccept(visitor, data);
      }
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      if (null != visitor) {
         return isTagged && ((ContentProvider) visitor).hasValuableContent();
      } else {
         return isTagged;
      }
   }
}
