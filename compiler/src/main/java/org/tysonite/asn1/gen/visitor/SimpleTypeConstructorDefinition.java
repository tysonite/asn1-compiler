package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.parser.ASTBuiltinType;

public class SimpleTypeConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;
   private String typeName = null;

   public SimpleTypeConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   public SimpleTypeConstructorDefinition(final GeneratorContext context, String typeName) {
      this.context = context;
      this.typeName = typeName;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (node.getType() != 8 /* not tagged type */
              && node.getType() != 6 /* not CHOICE type */ && context.isImplicitModule()) {

         builder.append(2, "");
         if (null != typeName) {
            builder.append(typeName).append(".");
         }
         builder.append("setTagging(Type::IMPLICIT_TAGGING);").newLine();
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
