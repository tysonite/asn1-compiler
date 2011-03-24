package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class TaggedTypeConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean wasTagClass = false;
   private final GeneratorContext context;

   public TaggedTypeConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      if (!(node.jjtGetParent() instanceof ASTTaggedType)) {
         return node.childrenAccept(this, data);
      } else {
         VisitorUtils.visitNodeAndAccept(builder, node,
                 new SetOfOrSequenceOfConstructorDefinition());
         VisitorUtils.visitChildsAndAccept(builder, (SimpleNode) node.jjtGetParent(),
                 new IntegerConstructorDefinition());
         return data;
      }
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      if (node.isNoTagging()) {
         if (context.isExplicitModule()) {
            builder.append(2, "setTagging(Type::EXPLICIT_TAGGING);").newLine();
         } else if (context.isImplicitModule()) {
            builder.append(2, "setTagging(Type::IMPLICIT_TAGGING);").newLine();
         }
      } else if (node.isExplicitTagging()) {
         builder.append(2, "setTagging(Type::EXPLICIT_TAGGING);").newLine();
      } else if (node.isImplicitTagging()) {
         builder.append(2, "setTagging(Type::IMPLICIT_TAGGING);").newLine();
      }

      node.childrenAccept(this, data);

      if (!wasTagClass) {
         /* set type as context-specific if any of allowed modifiers was not set */
         builder.append(2, "setTagClass(Type::CONTEXT_SPECIFIC);").newLine();
      }

      VisitorUtils.visitChildsAndAccept(builder, node, new DefinedTypeConstructorDefinition(1));

      return data;
   }

   @Override
   public Object visit(ASTTag node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTClassNumber node, Object data) {
      builder.append(2, "setTagNumber(").
              append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).append(");").
              newLine();
      return data;
   }

   @Override
   public Object visit(ASTClass node, Object data) {
      builder.append(2, "setTagClass(");

      if (node.isApplication()) {
         builder.append("Type::APPLICATION");
         wasTagClass = true;
      } else if (node.isUniversal()) {
         builder.append("Type::UNIVERSAL");
         wasTagClass = true;
      } else if (node.isPrivate()) {
         builder.append("Type::PRIVATE");
         wasTagClass = true;
      } else if (node.isContext()) {
         builder.append("Type::CONTEXT_SPECIFIC");
         wasTagClass = true;
      }

      builder.append(");").newLine();
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
