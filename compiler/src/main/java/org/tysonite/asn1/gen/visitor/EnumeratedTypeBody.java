package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTEnumeratedType;
import org.tysonite.asn1.parser.ASTNamedNumber;
import org.tysonite.asn1.parser.ASTNamedNumberList;
import org.tysonite.asn1.parser.ASTSignedNumber;
import org.tysonite.asn1.parser.ASTidentifier;

public class EnumeratedTypeBody extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public EnumeratedTypeBody(final GeneratorContext context) {
      this.context = context;
   }

   protected class EnumConstantsDeclaration extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();
      private boolean wasSignedNumber = false;

      @Override
      public Object visit(ASTNamedNumberList node, Object data) {
         return node.childrenAccept(this, data);
      }

      @Override
      public Object visit(ASTNamedNumber node, Object data) {
         wasSignedNumber = false;
         node.childrenAccept(this, data);
         if (!wasSignedNumber) {
            builder.append(",").newLine();
         }
         return data;
      }

      @Override
      public Object visit(ASTidentifier node, Object data) {
         builder.append(2, "k_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()));
         return data;
      }

      @Override
      public Object visit(ASTSignedNumber node, Object data) {
         builder.append(" = ").append(node.getNumber()).append(",").newLine();
         wasSignedNumber = true;
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

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTEnumeratedType node, Object data) {
      // write value type
      builder.newLine();
      builder.append(1, "enum EnumeratedValue_Type").newLine();
      builder.append(1, "{").newLine();

      // write constants
      VisitorUtils.visitChildsAndAccept(builder, node, new EnumConstantsDeclaration());

      builder.append(1, "};").newLine();

      // write sequence value typedef
      builder.newLine();
      builder.append(1, "typedef EnumeratedValue_Type ValueType;").newLine();

      builder.newLine();
      builder.append(1, "void read(ASN1ValueReader& reader, ").append("ValueType").
              append("& value) const").newLine();
      builder.append(1, "{").newLine();
      builder.append(2, context.getBaseTypeName()).append("::ValueType v;").newLine();
      builder.append(2, context.getBaseTypeName()).append("::read(reader, v);").newLine();
      builder.append(2, "value = static_cast<ValueType>(v);").newLine();
      builder.append(1, "}").newLine();
      builder.newLine();

      builder.append(1, "void write(ASN1ValueWriter& writer, const ").append("ValueType").
              append("& value) const").newLine();
      builder.append(1, "{").newLine();
      builder.append(2, context.getBaseTypeName()).append("::write(writer, value);").newLine();
      builder.append(1, "}").newLine();

      return data;
   }

   @Override
   public String getContent() {
      return builder.toString();
   }

   @Override
   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
