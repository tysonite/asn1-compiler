package org.tysonite.asn1.gen.utils;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.visitor.DefinedCPPTypeName;
import org.tysonite.asn1.gen.visitor.SimpleTypeName;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTChoiceType;
import org.tysonite.asn1.parser.ASTClass;
import org.tysonite.asn1.parser.ASTClassNumber;
import org.tysonite.asn1.parser.ASTDefinedType;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTEnumeratedType;
import org.tysonite.asn1.parser.ASTNamedNumber;
import org.tysonite.asn1.parser.ASTNamedNumberList;
import org.tysonite.asn1.parser.ASTSetOrSequenceOfType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;
import org.tysonite.asn1.parser.ASTSignedNumber;
import org.tysonite.asn1.parser.ASTTag;
import org.tysonite.asn1.parser.ASTTaggedType;
import org.tysonite.asn1.parser.ASTidentifier;

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
      VisitorUtils.visitNodeAndAccept(builder, node, new DefinedCPPTypeName());
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTEnumeratedType node, Object data) {
      builder.append("_EnumeratedType");
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTChoiceType node, Object data) {
      builder.append("_ChoiceType");
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      builder.append("_SequenceType");
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      builder.append("_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()));
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
      builder.append("_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()));
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

   @Override
   public Object visit(ASTNamedNumberList node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNamedNumber node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTidentifier node, Object data) {
      builder.append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()));
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSignedNumber node, Object data) {
      builder.append(node.getNumber());
      return node.childrenAccept(this, data);
   }

   public String getContent() {
      return builder.toString().replace(':', '_');
   }

   public boolean hasValuableContent() {
      return true;
   }
}
