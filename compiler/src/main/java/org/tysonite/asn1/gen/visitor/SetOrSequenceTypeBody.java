package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.Main;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;
import org.tysonite.asn1.parser.Node;

public class SetOrSequenceTypeBody extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   protected class SetGetDeclaration extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         builder.append(2, "// Component: ").append(node.jjtGetFirstToken().toString()).newLine();

         // setter
         builder.append(2, "void set_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("(const ");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())
                 || VisitorUtils.visitChildsAndAccept(builder, node, new IsNamedIntegerType())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }

         builder.append("::ValueType& v) { _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append(" = v; ");
         VisitorUtils.visitNodeAndAccept(builder, node, new SetAsPresent());
         builder.append(" }");
         builder.newLine();

         // setter (move semantics)
         if (context.getCommandLine().hasOption(Main.CPP11_CODE.getOpt())) {
            builder.append(2, "void set_").
                    append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                    append("(");
            if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                    new DefinedCPPTypeName())
                    || VisitorUtils.visitChildsAndAccept(builder, node, new IsNamedIntegerType())) {
               builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
            }

            builder.append("::ValueType&& v) { _").
                    append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                    append(" = std::move(v); ");
            VisitorUtils.visitNodeAndAccept(builder, node, new SetAsPresent());
            builder.append(" }");
            builder.newLine();
         }

         // getter (const)
         builder.append(2, "const ");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())
                 || VisitorUtils.visitChildsAndAccept(builder, node, new IsNamedIntegerType())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }
         builder.append("::ValueType& get_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("() const { return _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("; }");
         builder.newLine();

         // getter (non-const)
         builder.append(2, "");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())
                 || VisitorUtils.visitChildsAndAccept(builder, node, new IsNamedIntegerType())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }
         builder.append("::ValueType& get_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("() { return _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("; }");
         builder.newLine();

         // presence
         VisitorUtils.visitNodeAndAccept(builder, node, new SetIsPresentDeclaration());

         builder.newLine();
         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return true;
      }
   }

   protected class SetAsPresent extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         builder.append("_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Present = true;");

         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return !builder.toString().isEmpty();
      }
   }

   protected class SetIsPresentDeclaration extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         builder.append(2, "void set_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Present(bool present = true) { ");
         builder.append("_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Present = present; }").newLine();

         builder.append(2, "bool is_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Present() const { return ");
         builder.append("_").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Present; }").newLine();

         builder.newLine();
         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return !builder.toString().isEmpty();
      }
   }

   protected class SetupInitialPresence extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         builder.append(3, "_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Present = false;").newLine();
         return data;

      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return !builder.toString().isEmpty();
      }
   }

   protected class ValuePresenceDeclaration extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!node.isOptional()) {
            return data;
         }

         builder.append(2, "bool _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Present;").newLine();
         return data;

      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return !builder.toString().isEmpty();
      }
   }

   protected class HasOptionalElements extends DoNothingASTVisitor implements ContentProvider {

      private boolean hasOptionalElements = false;

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (node.isOptional()) {
            hasOptionalElements = true;
            return data;
         } else {
            return data;
         }
      }

      public String getContent() {
         return null;
      }

      public boolean hasValuableContent() {
         return hasOptionalElements;
      }
   }

   protected class ValueDeclaration extends DoNothingASTVisitor implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         // member
         builder.append(2, "");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())
                 || VisitorUtils.visitChildsAndAccept(builder, node, new IsNamedIntegerType())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }
         builder.append("::ValueType _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append(";");
         builder.newLine();

         // presence
         VisitorUtils.visitNodeAndAccept(builder, node, new ValuePresenceDeclaration());

         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return true;
      }
   }

   protected class EqualityOperatorDeclaration extends DoNothingASTVisitor
           implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();

      protected class CompareComponentDeclaration extends DoNothingASTVisitor
              implements ContentProvider {

         private CodeBuilder builder = new CodeBuilder();

         @Override
         public Object visit(ASTElementType node, Object data) {
            final String componentName = "_"
                    + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString());
            final String componentNamePresent = componentName + "_Present";

            if (node.isOptional()) {
               builder.append(3, "if (").append(componentNamePresent).append(" != ").
                       append("other.").append(componentNamePresent).append(")").newLine();
               builder.append(4, "return false;").newLine();
            }

            builder.append(3, "if (");
            if (node.isOptional()) {
               builder.append(componentNamePresent).append(" && ").
                       append("other.").append(componentNamePresent).append(" && ");
            }
            builder.append(componentName).append(" != other.").
                    append(componentName).append(")").newLine();
            builder.append(4, "return false;").newLine();

            return data;
         }

         public String getContent() {
            return builder.toString();
         }

         public boolean hasValuableContent() {
            return true;
         }
      }

      @Override
      public Object visit(ASTSetOrSequenceType node, Object data) {
         builder.append(2, "bool operator==(const SequenceValue_Type& other) const").newLine();
         builder.append(2, "{").newLine();
         builder.append(3, "if (this == &other)").newLine();
         builder.append(4, "return true;").newLine();
         builder.newLine();

         VisitorUtils.visitChildsAndAccept(builder, node, new CompareComponentDeclaration());

         builder.newLine();
         builder.append(3, "return true;").newLine();
         builder.append(2, "}").newLine();
         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return true;
      }
   }

   protected static class ComplexTypeDefsDeclaration extends DoNothingASTVisitor
           implements ContentProvider {

      private CodeBuilder builder = new CodeBuilder();
      private final GeneratorContext context;
      private boolean atLeastOneTypeDef = false;

      public ComplexTypeDefsDeclaration(final GeneratorContext context) {
         this.context = context;
         builder.newLine();
         builder.append(1, "// Complex types").newLine();
      }

      @Override
      public Object visit(ASTElementType node, Object data) {
         if (!VisitorUtils.visitChildsAndAccept(null, node, new IsSimpleType(context),
                 new IsDefinedType())
                 || VisitorUtils.visitChildsAndAccept(builder, node, new IsNamedIntegerType())) {

            Node prevQueuedNode = context.getQueuedNode();
            context.setQueuedNode(node);

            builder.append(1, "typedef ").append(GenerationUtils.asCPPToken(
                    VisitorUtils.queueGeneratedCode(node, context))).
                    append(" ").
                    append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                    append("_Type;").newLine();
            atLeastOneTypeDef = true;

            context.setQueuedNode(prevQueuedNode);
         }

         return data;
      }

      public String getContent() {
         return builder.toString();
      }

      public boolean hasValuableContent() {
         return !builder.toString().isEmpty() && atLeastOneTypeDef;
      }
   }

   public SetOrSequenceTypeBody(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      // typedefs
      VisitorUtils.visitChildsAndAccept(builder, node, new ComplexTypeDefsDeclaration(context));

      // write sequence value definition
      builder.newLine();
      builder.append(1, "class SequenceValue_Type").newLine();
      builder.append(1, "{").newLine();
      builder.append(1, "public:").newLine();
      builder.newLine();

      // constructor
      if (VisitorUtils.visitChildsAndAccept(null, node, new HasOptionalElements())) {
         builder.append(2, "explicit SequenceValue_Type()").newLine();
         builder.append(2, "{").newLine();

         VisitorUtils.visitChildsAndAccept(builder, node, new SetupInitialPresence());

         builder.append(2, "}").newLine();
         builder.newLine();
      }

      // write setters/getters
      VisitorUtils.visitChildsAndAccept(builder, node, new SetGetDeclaration());

      // operator==
      VisitorUtils.visitNodeAndAccept(builder, node, new EqualityOperatorDeclaration());
      builder.newLine();

      // operator!=
      builder.append(2, "bool operator!=(const SequenceValue_Type& other) const").newLine();
      builder.append(2, "{").newLine();
      builder.append(3, "return !(*this == other);").newLine();
      builder.append(2, "}").newLine();
      builder.newLine();

      builder.append(1, "private:").newLine();
      builder.newLine();

      VisitorUtils.visitChildsAndAccept(builder, node, new ValueDeclaration());

      builder.append(1, "};").newLine();

      // write sequence value typedef
      builder.newLine();
      builder.append(1, "typedef SequenceValue_Type ValueType;").newLine();

      builder.newLine();
      builder.append(1, "void read(ASN1ValueReader& reader, ").append("ValueType").
              append("& value) const;").newLine();
      builder.append(1, "void write(ASN1ValueWriter& writer, const ").append("ValueType").
              append("& value) const;").newLine();
      builder.newLine();

      builder.append("private:").newLine();
      builder.newLine();

      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      builder.append(1, "");

      if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
              new DefinedCPPTypeName())
              || VisitorUtils.visitChildsAndAccept(builder, node, new IsNamedIntegerType())) {
         builder.append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Type");
      } else {
         VisitorUtils.prependDefinedGeneratedNode(node, context);
      }

      builder.append(" _").append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
              append("_Type;");
      builder.newLine();

      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
