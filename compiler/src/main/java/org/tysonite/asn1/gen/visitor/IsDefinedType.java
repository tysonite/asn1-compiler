package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTDefinedType;

public class IsDefinedType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isTypeFound = false;

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      if (VisitorUtils.visitNodeAndAccept(new CodeBuilder(), node, new DefinedTypeName())) {
         isTypeFound = true;
      }
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isTypeFound;
   }
}
