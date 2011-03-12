package gen.utils;

import gen.*;
import gen.visitor.DefinedTypeName;
import gen.visitor.SimpleTypeName;
import parser.*;

public class UniqueNameProducer extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      builder.append("_INTERNAL_");
      VisitorUtils.visitNodeAndAccept(builder, node, new SimpleTypeName());
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      builder.append("_INTERNAL_");
      VisitorUtils.visitNodeAndAccept(builder, node, new DefinedTypeName());
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      builder.append("_SequenceType");
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      builder.append("_").append(node.getFirstToken().toString());
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      builder.append("_SequenceOfType");
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      if (node.isExplicitTagging()) {
         builder.append("_EXPLICIT");
      } else if (node.isImplicitTagging()) {
         builder.append("_IMPLICIT");
      } else if (node.isNoTagging()) {
         builder.append("_NOTAG");
      }
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTag node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTClassNumber node, Object data) {
      builder.append("_").append(node.getFirstToken().toString());
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTClass node, Object data) {
      if (node.isApplication()) {
         builder.append("_APPLICATION");
      } else if (node.isUniversal()) {
         builder.append("_UNIVERSAL");
      } else if (node.isPrivate()) {
         builder.append("_PRIVATE");
      } else if (node.isContext()) {
         builder.append("_CONTEXT_SPECIFIC");
      }
      return node.childrenAccept(this, data);
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
