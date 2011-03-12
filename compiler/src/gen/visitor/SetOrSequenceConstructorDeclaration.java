package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOrSequenceConstructorDeclaration extends DoNothingASTVisitor
        implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SetOrSequenceConstructorDeclaration(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      VisitorUtils.visitNodeAndAccept(builder, node, new SetOfOrSequenceOfTypeName(context));

      builder.append("(new ");

      final boolean isTypeFound = VisitorUtils.visitChildsAndAccept(builder, node,
              new SetOrSequenceConstructorDeclaration(context), new SimpleTypeName(),
              new DefinedTypeName());

      if (!isTypeFound) {
         final CodeBuilder uniqueName = new CodeBuilder();
         VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer());

         if (context.hasExternalized(uniqueName.toString())) {
            builder.append(uniqueName.toString());
         }
      }

      builder.append(")");

      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
