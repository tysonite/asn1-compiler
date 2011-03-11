package gen.visitor;

import gen.*;
import parser.*;

public class DefinedOrTaggedTypeName extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      builder.append(node.getFirstToken().toString());
      return data;
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      builder.append("TaggingType<");

      BuiltInTypeName visitor = new BuiltInTypeName();
      node.childrenAccept(visitor, data);
      builder.append(visitor.getContent());

      node.childrenAccept(this, data);

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
