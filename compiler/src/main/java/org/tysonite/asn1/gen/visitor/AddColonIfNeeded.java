package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTDefaultValue;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTSetOrSequenceOfType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;
import org.tysonite.asn1.parser.ASTTaggedType;
import org.tysonite.asn1.parser.SimpleNode;

public class AddColonIfNeeded extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private boolean isForDefault = false;
   private boolean isTagged = false;
   private final GeneratorContext context;

   public AddColonIfNeeded(final GeneratorContext context) {
      this.context = context;
   }

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
         if (!GenerationUtils.isNestedLevelOfSeqOrSetEqual(node,
                 (SimpleNode) context.getQueuedNode())) {
            return data;
         }

         builder.assign(" : ");
      }
      return data;
   }

   @Override
   public String getContent() {
      return builder.toString();
   }

   @Override
   public boolean hasValuableContent() {
      return true;
   }
}
