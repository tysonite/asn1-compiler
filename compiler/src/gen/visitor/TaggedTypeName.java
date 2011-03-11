package gen.visitor;

import gen.*;
import parser.*;

public class TaggedTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      builder.append("TaggingType<");

      {
         final BuiltInTypeName visitor = new BuiltInTypeName();
         node.childrenAccept(visitor, data);
         builder.append(visitor.getContent());
      }

      {
         final SetOrSequenceTypeName visitor = new SetOrSequenceTypeName();
         node.childrenAccept(visitor, data);
         builder.append(visitor.getContent());
      }

      {
         final DefinedTypeName visitor = new DefinedTypeName();
         node.childrenAccept(visitor, data);
         builder.append(visitor.getContent());
      }

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
