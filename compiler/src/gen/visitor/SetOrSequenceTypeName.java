package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOrSequenceTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SetOrSequenceTypeName(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      if (node.jjtGetParent() instanceof ASTSetOrSequenceOfType) {
         builder.append(node.getFirstToken().toString());
      }
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      builder.append("SequenceOfType<");

      boolean isTypeFound = VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(),
              new SetOrSequenceTypeName(context));

      if (!isTypeFound) {
         final CodeBuilder uniqueName = new CodeBuilder();
         VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer());

         if (!context.hasExternalized(uniqueName.toString())) {
            builder.append(uniqueName.toString());

            /* indicate that generator know this type */
            context.addExternalTypeName(uniqueName.toString());

            /* generate code for a new type */
            context.addExternalContent(VisitorUtils.generateCodeAsForTypeAssignment(node,
                    uniqueName.toString(), context));
         } else {
            builder.append(uniqueName.toString());
         }
      }

      builder.append(">");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
