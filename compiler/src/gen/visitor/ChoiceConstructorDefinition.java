package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class ChoiceConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public ChoiceConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTChoiceType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      final String elementTypeName = "_"
              + GenerationUtils.asCPPToken(node.getFirstToken().toString()) + "_Type";

      // choice
      builder.append(2, "_addChoice(&").append(elementTypeName).append(");").newLine();

      // internal types
      final CodeBuilder fieldType = new CodeBuilder();
      if (!VisitorUtils.visitChildsAndAccept(fieldType, node, new SimpleTypeName(),
                 new DefinedCPPTypeName())) {
            fieldType.append(GenerationUtils.asCPPToken(
                    VisitorUtils.queueGeneratedCode(node, context)));
      }
      // store context
      String prevTypeName = context.getTypeName();

      context.setTypeName(fieldType.toString());
      VisitorUtils.visitChildsAndAccept(builder, node,
              new IntegerConstructorDefinition(elementTypeName),
              new OctetStringConstructorDefinition(context, elementTypeName));

      if (VisitorUtils.visitChildsAndAccept(builder, node, new IsSimpleType())) {
         VisitorUtils.visitChildsAndAccept(builder, node,
                 new SimpleTypeConstructorDefinition(context, elementTypeName));
      }
      // restore context
      context.setTypeName(prevTypeName);
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
