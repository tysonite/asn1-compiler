package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SimpleTypeConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SimpleTypeConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (node.getType() != 8 /* not tagged type */
              && node.getType() != 6 /* not CHOICE type */ && context.isImplicitModule()) {
         builder.append(2, "setTagging(Type::IMPLICIT_TAGGING);").newLine();
      }

      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
