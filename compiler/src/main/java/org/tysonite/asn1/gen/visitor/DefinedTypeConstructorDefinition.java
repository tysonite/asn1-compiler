package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorException;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTDefinedType;
import org.tysonite.asn1.parser.ASTSubtypeSpec;
import org.tysonite.asn1.parser.ASTTypeAssignment;
import org.tysonite.asn1.parser.ASTtypereference;

public class DefinedTypeConstructorDefinition extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean isReference = false;
   private String referencedType = null;
   private int innerLevelInc = 0;

   public DefinedTypeConstructorDefinition() {
   }

   public DefinedTypeConstructorDefinition(int innerLevelIncrement) {
      this.innerLevelInc = innerLevelIncrement;
   }

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      referencedType = node.jjtGetFirstToken().toString();
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTtypereference node, Object data) {
      if (node.jjtGetParent() instanceof ASTDefinedType) {
         isReference = true;
      }
      return data;
   }

   @Override
   public Object visit(ASTSubtypeSpec node, Object data) {
      if (!isReference) {
         return data;
      }

      ASTTypeAssignment refAssignment = VisitorUtils.searchForAssignmentNodeByName(node,
              referencedType);
      if (null == refAssignment) {
         throw new GeneratorException("Unable to resolve node " + referencedType);
      } else if (VisitorUtils.visitChildsAndAccept(builder, refAssignment, new IsIntegerType())) {
         VisitorUtils.visitChildsAndAccept(builder, node,
                 new IntegerConstructorDefinition(true, innerLevelInc));
      } else if (VisitorUtils.visitChildsAndAccept(builder, refAssignment,
              new IsTaggedType(new IsIntegerType()))) {
         final GetTaggedTypeInnerLevel innerLevel = new GetTaggedTypeInnerLevel();
         if (VisitorUtils.visitChildsAndAccept(builder, refAssignment, innerLevel)) {
            VisitorUtils.visitChildsAndAccept(builder, node,
                    new IntegerConstructorDefinition(true,
                            innerLevel.getInnerLevel() + innerLevelInc));
         }
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
