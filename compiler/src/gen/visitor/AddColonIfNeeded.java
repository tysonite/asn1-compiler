package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class AddColonIfNeeded extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean isForDefault = false;
   private boolean isTagged = false;

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      if (!isForDefault) {
         builder.assign(" : ");
      }
      isTagged = true;
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      if (!isForDefault) {
         builder.assign(" : ");
      }
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      isForDefault = true;
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTDefaultValue node, Object data) {
      if (!isTagged) {
         builder.assign(" : ");
      }
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
