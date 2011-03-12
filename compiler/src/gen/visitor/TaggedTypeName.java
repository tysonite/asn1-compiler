package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class TaggedTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public TaggedTypeName(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      builder.append("TaggingType<");

      VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node, new SetOfOrSequenceOfTypeName(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new DefinedTypeName());


      builder.append(">");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
