package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;

public class IsEnumeratedType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isFound = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (VisitorUtils.visitNodeAndAccept(new CodeBuilder(), node, new EnumeratedTypeName())) {
         isFound = true;
      }
      return data;
   }

   @Override
   public String getContent() {
      return "";
   }

   @Override
   public boolean hasValuableContent() {
      return isFound;
   }
}
