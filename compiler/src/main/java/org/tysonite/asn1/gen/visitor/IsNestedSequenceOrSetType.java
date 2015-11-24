package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;

public class IsNestedSequenceOrSetType extends DoNothingASTVisitor implements ContentProvider {

   private int nestedLevel = 0;

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      ++nestedLevel;
      return data;
   }

   @Override
   public String getContent() {
      return String.valueOf(nestedLevel);
   }

   @Override
   public boolean hasValuableContent() {
      return nestedLevel > 1;
   }
}
