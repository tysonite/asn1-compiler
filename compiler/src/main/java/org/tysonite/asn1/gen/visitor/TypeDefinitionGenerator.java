package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.Generator;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTTypeAssignment;

public class TypeDefinitionGenerator extends DoNothingASTVisitor implements Generator {

   private ASTTypeAssignment node = null;
   private CodeBuilder builder = new CodeBuilder();

   public TypeDefinitionGenerator(final ASTTypeAssignment node) {
      this.node = node;
   }

   public void generate(GeneratorContext context) {
      final String typeName = node.jjtGetFirstToken().toString();
      context.setTypeName(typeName);

      VisitorUtils.visitChildsAndAccept(builder, node,
              new SetOrSequenceReadWriteDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node,
              new ChoiceTypeReadWriteDefinition(context));
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
