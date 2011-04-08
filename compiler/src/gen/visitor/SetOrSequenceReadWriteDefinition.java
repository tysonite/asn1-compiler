package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOrSequenceReadWriteDefinition extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SetOrSequenceReadWriteDefinition(final GeneratorContext context) {
      this.context = context;
   }

   protected static class ReadDefinition extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         VisitorUtils.visitNodeAndAccept(builder, node, new ReadOptionalDefinition());

         builder.append(1, "{").newLine();

         // write value type of the type
         builder.append(2, "");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(),
                 new DefinedCPPTypeName())) {
            final CodeBuilder uniqueName = new CodeBuilder();
            VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer());

            builder.append(uniqueName.toString());
         }
         builder.append("::ValueType v;").newLine();

         // write code for type reading
         builder.append(2, "_").append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append("_Type").append(".read(reader, v);").newLine();

         // write code for setting value
         builder.append(2, "value.set_").
                 append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).append("(v);").
                 newLine();

         builder.append(1, "}").newLine();
         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return true;
      }
   }

   protected class WriteDefinition extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         int indent = 1;
         if (VisitorUtils.visitNodeAndAccept(builder, node, new WriteOptionalDefinition())) {
            indent = 2;
         }

         // write code for type reading
         builder.append(indent, "_").append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append("_Type").
                 append(".write(writer, value.get_").
                 append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).append("());").
                 newLine();

         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return true;
      }
   }

   protected static class ReadOptionalDefinition extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         // write code for checking optional element
         builder.newLine();
         builder.append(1, "bool is_").append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append("_Present(false);").newLine();
         builder.append(1, "reader.isComponentPresent(_").
                 append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append("_Type, is_").
                 append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append("_Present);").newLine();
         builder.newLine();

         builder.append(1, "if (is_").
                 append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append("_Present)").newLine();

         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return !builder.toString().isEmpty();
      }
   }

   protected static class WriteOptionalDefinition extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         // write code for checking optional element
         builder.append(1, "if (value.is_").
                 append(GenerationUtils.asCPPToken(node.getFirstToken().toString())).
                 append("_Present())").newLine();

         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return !builder.toString().isEmpty();
      }
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTTaggedType node, Object data) {
      if (!VisitorUtils.visitChildsAndAccept(null, node, new SimpleTypeName(),
              new DefinedCPPTypeName())) {
         final CodeBuilder uniqueName = new CodeBuilder();
         VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer());

         context.setTypeName(uniqueName.toString());
      }

      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      builder.newLine();
      builder.append("void ").append(GenerationUtils.asCPPToken(context.getTypeName())).
              append("::read(ASN1ValueReader& reader, ").append("ValueType").
              append("& value) const").newLine();
      builder.append("{").newLine();
      builder.append(1, "reader.readSequenceBegin(*this);").newLine();
      builder.newLine();

      VisitorUtils.visitChildsAndAccept(builder, node, new ReadDefinition());

      builder.newLine();
      builder.append(1, "reader.readSequenceEnd(*this);").newLine();
      builder.append("}").newLine();
      builder.newLine();

      builder.append("void ").append(GenerationUtils.asCPPToken(context.getTypeName())).
              append("::write(ASN1ValueWriter& writer, const ").append("ValueType").
              append("& value) const").newLine();
      builder.append("{").newLine();
      builder.append(1, "writer.writeSequenceBegin(*this);").newLine();
      builder.newLine();

      VisitorUtils.visitChildsAndAccept(builder, node, new WriteDefinition());

      builder.newLine();
      builder.append(1, "writer.writeSequenceEnd(*this);").newLine();
      builder.append("}").newLine();

      builder.newLine();
      return node.childrenAccept(this, data);
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
