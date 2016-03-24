package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;

public class IsSimpleType extends DoNothingASTVisitor implements ContentProvider {

   private boolean isSimple = false;
   private final GeneratorContext context;

   public IsSimpleType(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (VisitorUtils.visitNodeAndAccept(new CodeBuilder(), node, new SimpleTypeName(context))) {
         isSimple = true;
      }
      return data;
   }

   public String getContent() {
      return "";
   }

   public boolean hasValuableContent() {
      return isSimple;
   }
}
