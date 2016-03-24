package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.GeneratorException;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTClass;
import org.tysonite.asn1.parser.ASTClassNumber;
import org.tysonite.asn1.parser.ASTDefinedValue;
import org.tysonite.asn1.parser.ASTTag;
import org.tysonite.asn1.parser.ASTTaggedType;
import org.tysonite.asn1.parser.ASTTypeAssignment;
import org.tysonite.asn1.parser.ASTidentifier;
import org.tysonite.asn1.parser.ASTnumber;
import org.tysonite.asn1.parser.SimpleNode;

public class TaggedTypeConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private final CodeBuilder builder = new CodeBuilder();
   private boolean wasTagClass = false;
   private String identifier = null;
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
                 new SetOfOrSequenceOfConstructorDefinition(context));
         VisitorUtils.visitChildsAndAccept(builder, (SimpleNode) node.jjtGetParent(),
                 new IntegerConstructorDefinition(context),
                 new OctetStringConstructorDefinition(context));
         return data;
      }
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      if (node.isNoTagging()) {
         if (context.isExplicitModule()) {
            builder.append(2, "setTagging(Type::EXPLICIT_TAGGING);").newLine();
         } else if (context.isImplicitModule()) {
            CodeBuilder dtname = new CodeBuilder();
            if (VisitorUtils.visitChildsAndAccept(dtname, node, new DefinedTypeName())) {
               ASTTypeAssignment ta = VisitorUtils.searchForAssignmentNodeByName(node,
                       dtname.toString());

               if (null != ta) {
                  boolean isChoice = VisitorUtils.visitChildsAndAccept(null, ta, new IsChoiceType());
                  boolean isTaggedChoice = VisitorUtils.visitChildsAndAccept(null, ta,
                          new IsTaggedType(new IsChoiceType()));

                  if (!isChoice && !isTaggedChoice) {
                     builder.append(2, "setTagging(Type::IMPLICIT_TAGGING);").newLine();
                  }
               } else {
                  throw new GeneratorException("Tagged type reference unexisting type");
               }
            } else if (VisitorUtils.visitChildsAndAccept(null, node, new IsChoiceType())) {
               // do not set tagging method
            } else {
               builder.append(2, "setTagging(Type::IMPLICIT_TAGGING);").newLine();
            }
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

      VisitorUtils.visitChildsAndAccept(builder, node,
              new DefinedTypeConstructorDefinition(context, 1));

      return data;
   }

   @Override
   public Object visit(ASTTag node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTClassNumber node, Object data) {
      identifier = null;

      node.childrenAccept(this, data);

      if (null != identifier) {
         builder.append(2, "setTagNumber(").append(identifier).append(");").newLine();
      }

      return data;
   }

   @Override
   public Object visit(ASTDefinedValue node, Object data) {
      if (node.jjtGetParent() instanceof ASTClassNumber) {
         return node.childrenAccept(this, data);
      }
      return data;
   }

   @Override
   public Object visit(ASTidentifier node, Object data) {
      if (!(node.jjtGetParent() instanceof ASTDefinedValue)) {
         return data;
      }
      identifier = "k_" + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString());
      return data;
   }

   @Override
   public Object visit(ASTnumber node, Object data) {
      if (!(node.jjtGetParent() instanceof ASTClassNumber)) {
         return data;
      }
      identifier = GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString());
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

   @Override
   public String getContent() {
      return builder.toString();
   }

   @Override
   public boolean hasValuableContent() {
      return true;
   }
}
