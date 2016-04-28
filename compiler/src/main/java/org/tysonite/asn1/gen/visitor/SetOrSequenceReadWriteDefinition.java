package org.tysonite.asn1.gen.visitor;

import java.util.SortedMap;
import java.util.TreeMap;
import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.GeneratorException;
import org.tysonite.asn1.gen.Main;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.UniqueNameProducer;
import org.tysonite.asn1.gen.utils.UniversalNumberTag;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBitStringType;
import org.tysonite.asn1.parser.ASTBooleanType;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTClass;
import org.tysonite.asn1.parser.ASTClassNumber;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTEnumeratedType;
import org.tysonite.asn1.parser.ASTIntegerType;
import org.tysonite.asn1.parser.ASTNullType;
import org.tysonite.asn1.parser.ASTObjectIdentifierType;
import org.tysonite.asn1.parser.ASTOctetStringType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;
import org.tysonite.asn1.parser.ASTTag;
import org.tysonite.asn1.parser.ASTTaggedType;

public class SetOrSequenceReadWriteDefinition extends DoNothingASTVisitor implements ContentProvider {

   private final CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SetOrSequenceReadWriteDefinition(final GeneratorContext context) {
      this.context = context;
   }

   protected static class ReadDefinition extends DoNothingASTVisitor implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();
      private final GeneratorContext context;

      public ReadDefinition(final GeneratorContext context) {
         this.context = context;
      }

      @Override
      public Object visit(ASTElementType node, Object data) {
         VisitorUtils.visitNodeAndAccept(builder, node, new ReadOptionalDefinition());

         builder.append(1, "{").newLine();

         // write value type of the type
         builder.append(2, "");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())) {
            final CodeBuilder uniqueName = new CodeBuilder();
            VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer(context));

            builder.append(uniqueName.toString());
         }
         builder.append("::ValueType v;").newLine();

         // write code for type reading
         builder.append(2, "_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Type").append(".read(reader, v);").newLine();

         // write code for setting value
         builder.append(2, "value.set_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()));
         if (context.getCommandLine().hasOption(Main.CPP11_CODE.getOpt())) {
            builder.append("(std::move(v));");
         } else {
            builder.append("(v);");
         }
         builder.newLine();

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

      private final CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         int indent = 1;
         if (VisitorUtils.visitNodeAndAccept(builder, node, new WriteOptionalDefinition())) {
            indent = 2;
         }

         // write code for type reading
         builder.append(indent, "_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Type").
                 append(".write(writer, value.get_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).append("());").
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

   /**
    * X.680: 8.6 and X.690: 10.3. Write components of SET in specified order.
    */
   protected class ReadDefinitionForDER extends DoNothingASTVisitor implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();
      private SortedMap<Integer, ASTElementType> universal = new TreeMap<Integer, ASTElementType>();
      private SortedMap<Integer, ASTElementType> application = new TreeMap<Integer, ASTElementType>();
      private SortedMap<Integer, ASTElementType> context = new TreeMap<Integer, ASTElementType>();
      private SortedMap<Integer, ASTElementType> prvt = new TreeMap<Integer, ASTElementType>();

      @Override
      public Object visit(ASTElementType node, Object data) {
         ElementRecognizer recognizer = new ElementRecognizer();
         VisitorUtils.visitChildsAndAccept(null, node, recognizer);

         switch (recognizer.getTagClass()) {
            case ASTTaggedType.UNIVERSAL:
               universal.put(recognizer.getTagNumber(), node);
               break;
            case ASTTaggedType.APPLICATION:
               application.put(recognizer.getTagNumber(), node);
               break;
            case ASTTaggedType.CONTEXT:
               context.put(recognizer.getTagNumber(), node);
               break;
            case ASTTaggedType.PRIVATE:
               prvt.put(recognizer.getTagNumber(), node);
               break;
            default:
               throw new GeneratorException("Cannot determine tag class");
         }
         return data;
      }

      public String getContent() {
         // write components in specified order
         for (ASTElementType node : universal.values()) {
            writeComponent(node);
         }
         for (ASTElementType node : application.values()) {
            writeComponent(node);
         }
         for (ASTElementType node : context.values()) {
            writeComponent(node);
         }
         for (ASTElementType node : prvt.values()) {
            writeComponent(node);
         }
         return builder.toString();
      }

      private void writeComponent(ASTElementType node) {
         VisitorUtils.visitNodeAndAccept(builder, node,
                 new ReadDefinition(SetOrSequenceReadWriteDefinition.this.context));
      }

      public boolean hasValuableContent() {
         return true;
      }
   }

   protected class WriteDefinitionForDER extends DoNothingASTVisitor implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();
      private SortedMap<Integer, ASTElementType> universal = new TreeMap<Integer, ASTElementType>();
      private SortedMap<Integer, ASTElementType> application = new TreeMap<Integer, ASTElementType>();
      private SortedMap<Integer, ASTElementType> context = new TreeMap<Integer, ASTElementType>();
      private SortedMap<Integer, ASTElementType> prvt = new TreeMap<Integer, ASTElementType>();

      @Override
      public Object visit(ASTElementType node, Object data) {
         ElementRecognizer recognizer = new ElementRecognizer();
         VisitorUtils.visitChildsAndAccept(null, node, recognizer);

         switch (recognizer.getTagClass()) {
            case ASTTaggedType.UNIVERSAL:
               universal.put(recognizer.getTagNumber(), node);
               break;
            case ASTTaggedType.APPLICATION:
               application.put(recognizer.getTagNumber(), node);
               break;
            case ASTTaggedType.CONTEXT:
               context.put(recognizer.getTagNumber(), node);
               break;
            case ASTTaggedType.PRIVATE:
               prvt.put(recognizer.getTagNumber(), node);
               break;
            default:
               throw new GeneratorException("Cannot determine tag class");
         }
         return data;
      }

      public String getContent() {
         // write components in specified order
         for (ASTElementType node : universal.values()) {
            writeComponent(node);
         }
         for (ASTElementType node : application.values()) {
            writeComponent(node);
         }
         for (ASTElementType node : context.values()) {
            writeComponent(node);
         }
         for (ASTElementType node : prvt.values()) {
            writeComponent(node);
         }
         return builder.toString();
      }

      private void writeComponent(ASTElementType node) {
         VisitorUtils.visitNodeAndAccept(builder, node, new WriteDefinition());
      }

      public boolean hasValuableContent() {
         return true;
      }
   }

   protected class ElementRecognizer extends DoNothingASTVisitor implements ContentProvider {

      private class TagRecognizer extends DoNothingASTVisitor implements ContentProvider {

         private int tagClass = -1;
         private int tagNumber = -1;

         @Override
         public Object visit(ASTTag node, Object data) {
            node.childrenAccept(this, data);
            return data;
         }

         @Override
         public Object visit(ASTClassNumber node, Object data) {
            this.tagNumber = node.getTagNumber();
            return data;
         }

         @Override
         public Object visit(ASTClass node, Object data) {
            this.tagClass = node.getTagClass();
            return data;
         }

         public int getTagClass() {
            if (this.tagClass != -1) {
               return this.tagClass;
            } else {
               return this.tagClass = ASTTaggedType.CONTEXT;
            }
         }

         public int getTagNumber() {
            return this.tagNumber;
         }

         public String getContent() {
            throw new UnsupportedOperationException("Not supported yet.");
         }

         public boolean hasValuableContent() {
            return true;
         }
      }

      private class TagNumberRecognizer extends DoNothingASTVisitor implements ContentProvider {

         private int universalNumber = -1;

         @Override
         public Object visit(ASTBuiltinType node, Object data) {
            node.childrenAccept(this, data);
            return data;
         }

         @Override
         public Object visit(ASTBooleanType node, Object data) {
            this.universalNumber = UniversalNumberTag.BOOLEAN;
            return data;
         }

         @Override
         public Object visit(ASTIntegerType node, Object data) {
            this.universalNumber = UniversalNumberTag.INTEGER;
            return data;
         }

         @Override
         public Object visit(ASTBitStringType node, Object data) {
            this.universalNumber = UniversalNumberTag.BIT_STRING;
            return data;
         }

         @Override
         public Object visit(ASTNullType node, Object data) {
            this.universalNumber = UniversalNumberTag.NULL;
            return data;
         }

         @Override
         public Object visit(ASTOctetStringType node, Object data) {
            switch (node.getType()) {
               case OCTET_STRING:
                  this.universalNumber = UniversalNumberTag.OCTET_STRING;
                  break;
               case PRINTABLE_STRING:
                  this.universalNumber = UniversalNumberTag.PRINTABLE_STRING;
                  break;
               case GENERALIZED_TIME:
                  this.universalNumber = UniversalNumberTag.GENERALIZED_TIME;
                  break;
               case UTC_TIME:
                  this.universalNumber = UniversalNumberTag.UTC_TIME;
                  break;
               case GRAPHIC_STRING:
                  this.universalNumber = UniversalNumberTag.GRAPHIC_STRING;
                  break;
               case IA5_STRING:
                  this.universalNumber = UniversalNumberTag.IA5_STRING;
                  break;
               case NUMERIC_STRING:
                  this.universalNumber = UniversalNumberTag.NUMERIC_STRING;
                  break;
               case TELETEX_STRING:
                  this.universalNumber = UniversalNumberTag.TELETEX_STRING;
                  break;
            }
            return data;
         }

         @Override
         public Object visit(ASTEnumeratedType node, Object data) {
            this.universalNumber = UniversalNumberTag.ENUMERATED;
            return data;
         }

         @Override
         public Object visit(ASTObjectIdentifierType node, Object data) {
            this.universalNumber = UniversalNumberTag.OBJECT_IDENTIFIER;
            return data;
         }

         @Override
         public Object visit(ASTSetOrSequenceType node, Object data) {
            switch (node.getType()) {
               case ASTSetOrSequenceType.SEQUENCE:
                  this.universalNumber = UniversalNumberTag.SEQUENCE;
                  break;
               case ASTSetOrSequenceType.SET:
                  this.universalNumber = UniversalNumberTag.SET;
                  break;
            }
            return data;
         }

         public String getContent() {
            throw new UnsupportedOperationException("Not supported yet.");
         }

         public boolean hasValuableContent() {
            return false;
         }

         public int getTagNumber() {
            return this.universalNumber;
         }
      }
      private int tagClass = -1;
      private int tagNumber = -1;

      public int getTagClass() {
         return this.tagClass;
      }

      public int getTagNumber() {
         return this.tagNumber;
      }

      @Override
      public Object visit(ASTBuiltinType node, Object data) {
         if (VisitorUtils.visitNodeAndAccept(builder, node, new IsSimpleType(context))) {
            this.tagClass = ASTTaggedType.UNIVERSAL;
            TagNumberRecognizer recognizer = new TagNumberRecognizer();
            VisitorUtils.visitNodeAndAccept(null, node, recognizer);
            this.tagNumber = recognizer.getTagNumber();
         } else {
            TagRecognizer recognizer = new TagRecognizer();
            if (VisitorUtils.visitNodeAndAccept(builder, node, new IsTaggedType(recognizer))) {
               this.tagClass = recognizer.getTagClass();
               this.tagNumber = recognizer.getTagNumber();
            } else {
               TagNumberRecognizer compRecognizer = new TagNumberRecognizer();
               VisitorUtils.visitNodeAndAccept(builder, node, compRecognizer);
               this.tagClass = ASTTaggedType.UNIVERSAL;
               this.tagNumber = compRecognizer.getTagNumber();
            }
         }

         return data;
      }

      public String getContent() {
         throw new UnsupportedOperationException("Not supported yet.");
      }

      public boolean hasValuableContent() {
         return false;
      }
   }

   protected static class ReadOptionalDefinition extends DoNothingASTVisitor implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         // write code for checking optional element
         builder.newLine();
         builder.append(1, "if (reader.isComponentPresent(_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Type))").newLine();

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

      private final CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         // write code for checking optional element
         builder.append(1, "if (value.is_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
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
      if (!VisitorUtils.visitChildsAndAccept(null, node, new SimpleTypeName(context),
              new DefinedCPPTypeName())) {
         final CodeBuilder uniqueName = new CodeBuilder();
         VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer(context));

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
      if (node.isSequence()) {
         builder.append(1, "reader.readSequenceBegin(*this);").newLine();
      } else if (node.isSet()) {
         builder.append(1, "reader.readSetBegin(*this);").newLine();
      }
      builder.newLine();

      if (node.isSet() && context.getCommandLine().hasOption(Main.METHOD_DER.getOpt())) {
         VisitorUtils.visitChildsAndAccept(builder, node, new ReadDefinitionForDER());
      } else {
         VisitorUtils.visitChildsAndAccept(builder, node,
                 new ReadDefinition(SetOrSequenceReadWriteDefinition.this.context));
      }

      builder.newLine();
      if (node.isSequence()) {
         builder.append(1, "reader.readSequenceEnd(*this);").newLine();
      } else if (node.isSet()) {
         builder.append(1, "reader.readSetEnd(*this);").newLine();
      }
      builder.append("}").newLine();
      builder.newLine();

      builder.append("void ").append(GenerationUtils.asCPPToken(context.getTypeName())).
              append("::write(ASN1ValueWriter& writer, const ").append("ValueType").
              append("& value) const").newLine();
      builder.append("{").newLine();
      if (node.isSequence()) {
         builder.append(1, "writer.writeSequenceBegin(*this);").newLine();
      } else if (node.isSet()) {
         builder.append(1, "writer.writeSetBegin(*this);").newLine();
      }
      builder.newLine();

      if (node.isSet() && context.getCommandLine().hasOption(Main.METHOD_DER.getOpt())) {
         VisitorUtils.visitChildsAndAccept(builder, node, new WriteDefinitionForDER());
      } else {
         VisitorUtils.visitChildsAndAccept(builder, node, new WriteDefinition());
      }

      builder.newLine();
      if (node.isSequence()) {
         builder.append(1, "writer.writeSequenceEnd(*this);").newLine();
      } else if (node.isSet()) {
         builder.append(1, "writer.writeSetEnd(*this);").newLine();
      }
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
