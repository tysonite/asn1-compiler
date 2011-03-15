package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class TypeDefinitionGenerator extends DoNothingASTVisitor implements Generator {

   private ASTTypeAssignment node = null;
   private CodeBuilder builder = new CodeBuilder();

   public TypeDefinitionGenerator(final ASTTypeAssignment node) {
      this.node = node;
   }

   public void generate(GeneratorContext context) {
      final String typeName = node.getFirstToken().toString();
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

   public String typeName() {
      return node.getFirstToken().toString();
   }
}
