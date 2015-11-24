package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.parser.ASTBitStringType;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTDefinedValue;
import org.tysonite.asn1.parser.ASTIntegerType;
import org.tysonite.asn1.parser.ASTNamedNumber;
import org.tysonite.asn1.parser.ASTNamedNumberList;
import org.tysonite.asn1.parser.ASTSignedNumber;
import org.tysonite.asn1.parser.ASTidentifier;

public class NamedIntegerOrBitStringValueType extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private String assignmentTypeName = null;
   private boolean isValueAble = false;

   public NamedIntegerOrBitStringValueType(String assignmentTypeName) {
      this.assignmentTypeName = assignmentTypeName;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      builder.newLine();

      final String typeValueName = GenerationUtils.asCPPToken(assignmentTypeName) + "_Value";
      builder.append(1, "enum ").append(typeValueName).newLine();
      builder.append(1, "{").newLine();

      node.childrenAccept(this, data);

      builder.append(1, "};").newLine();

      builder.newLine();
      return data;
   }

   @Override
   public Object visit(ASTBitStringType node, Object data) {
      builder.newLine();

      final String typeValueName = GenerationUtils.asCPPToken(assignmentTypeName) + "_Value";
      builder.append(1, "enum ").append(typeValueName).newLine();
      builder.append(1, "{").newLine();

      node.childrenAccept(this, data);

      builder.append(1, "};").newLine();

      builder.newLine();
      return data;
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
      builder.append(2, "k_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
              append(" = ");
      return data;
   }

   @Override
   public Object visit(ASTDefinedValue node, Object data) {
      if (node.jjtGetParent() instanceof ASTNamedNumber) {
         builder.append("k_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append(",");
         builder.newLine();

         isValueAble = true;
      }
      return data;
   }

   @Override
   public Object visit(ASTSignedNumber node, Object data) {
      builder.append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).append(",");
      builder.newLine();

      isValueAble = true;
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return isValueAble;
   }
}
