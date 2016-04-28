package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.Main;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTChoiceType;
import org.tysonite.asn1.parser.ASTElementType;

public class ChoiceTypeBody extends DoNothingASTVisitor implements ContentProvider {

   private final CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;
   private int nextId = 0;

   protected class SetGetHasChooseDeclaration extends DoNothingASTVisitor
           implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         builder.append(2, "// Alternative: ").append(node.jjtGetFirstToken().toString()).newLine();

         // setter
         builder.append(2, "void set_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("(const ");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }

         builder.append("::ValueType& v) { _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append(" = v;");
         builder.append(" _id = ").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).append("_ID;").
                 append(" }");
         builder.newLine();

         // setter (move semantics)
         if (context.getCommandLine().hasOption(Main.CPP11_CODE.getOpt())) {
            builder.append(2, "void set_").
                    append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                    append("(");
            if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                    new DefinedCPPTypeName())) {
               builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
            }

            builder.append("::ValueType&& v) { _").
                    append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                    append(" = std::move(v);");
            builder.append(" _id = ").
                    append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).append("_ID;").
                    append(" }");
            builder.newLine();
         }

         // getter (const)
         builder.append(2, "const ");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }
         builder.append("::ValueType& get_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("() const { assert(_id == ").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_ID); ").
                 append("return _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("; }");
         builder.newLine();

         // getter (non-const)
         builder.append(2, "");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }
         builder.append("::ValueType& get_").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("() { assert(_id == ").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_ID); ").
                 append("return _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("; }");
         builder.newLine();

         // has
         builder.append(2, "bool has_");
         builder.append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_Choosen() const { return _id == ").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_ID").
                 append("; }");
         builder.newLine();

         // choose
         builder.append(2, "void choose_");
         builder.append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("() { _id = ").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_ID").
                 append("; }");
         builder.newLine();

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

   protected class ValueDeclaration extends DoNothingASTVisitor implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         // member
         builder.append(2, "");
         if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(context),
                 new DefinedCPPTypeName())) {
            builder.append(VisitorUtils.queueGeneratedCodeForTypes(node, context));
         }
         builder.append("::ValueType _").
                 append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append(";");
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

   protected class IdentifierValueDeclaration extends DoNothingASTVisitor implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();

      @Override
      public Object visit(ASTElementType node, Object data) {
         // member
         builder.append(3, "");
         builder.append(GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())).
                 append("_ID = ").append(String.valueOf(++nextId)).append(",");
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

   protected class EqualityOperatorDeclaration extends DoNothingASTVisitor
           implements ContentProvider {

      private final CodeBuilder builder = new CodeBuilder();

      protected class CompareComponentDeclaration extends DoNothingASTVisitor
              implements ContentProvider {

         private final CodeBuilder builder = new CodeBuilder();

         @Override
         public Object visit(ASTElementType node, Object data) {
            final String componentName = "_"
                    + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString());
            final String componentID = GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString())
                    + "_ID";

            builder.append(3, "case ").append(componentID).append(":").newLine();
            builder.append(4, "if (").append(componentName).append(" != other.").
                    append(componentName).append(")").newLine();
            builder.append(5, "return false;").newLine();
            builder.append(4, "break;").newLine();

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
      public Object visit(ASTChoiceType node, Object data) {
         builder.append(2, "bool operator==(const ChoiceValue_Type& other) const").newLine();
         builder.append(2, "{").newLine();
         builder.append(3, "if (this == &other)").newLine();
         builder.append(4, "return true;").newLine();
         builder.newLine();

         builder.append(3, "switch (_id)").newLine();
         builder.append(3, "{").newLine();

         VisitorUtils.visitChildsAndAccept(builder, node, new CompareComponentDeclaration());

         builder.append(3, "default:").newLine();
         builder.append(4, "return false;").newLine();
         builder.append(3, "}").newLine();

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

   public ChoiceTypeBody(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTChoiceType node, Object data) {
      // typedefs
      VisitorUtils.visitChildsAndAccept(builder, node,
              new SetOrSequenceTypeBody.ComplexTypeDefsDeclaration(context));

      // write sequence value definition
      builder.newLine();
      builder.append(1, "class ChoiceValue_Type").newLine();
      builder.append(1, "{").newLine();
      builder.append(1, "public:").newLine();
      builder.newLine();

      builder.append(2, "explicit ChoiceValue_Type() : _id(__VALUE_NOT_DEFINED__) {}").newLine();
      builder.newLine();

      // write setters/getters
      VisitorUtils.visitChildsAndAccept(builder, node, new SetGetHasChooseDeclaration());

      // operator==
      VisitorUtils.visitNodeAndAccept(builder, node, new EqualityOperatorDeclaration());
      builder.newLine();

      // operator!=
      builder.append(2, "bool operator!=(const ChoiceValue_Type& other) const").newLine();
      builder.append(2, "{").newLine();
      builder.append(3, "return !(*this == other);").newLine();
      builder.append(2, "}").newLine();
      builder.newLine();

      builder.append(1, "private:").newLine();
      builder.newLine();

      builder.append(2, "enum ChoiceValue_identifier").newLine();
      builder.append(2, "{").newLine();

      VisitorUtils.visitChildsAndAccept(builder, node, new IdentifierValueDeclaration());

      builder.append(3, "__VALUE_NOT_DEFINED__ = -1").newLine();
      builder.append(2, "};").newLine();
      builder.newLine();

      // values
      VisitorUtils.visitChildsAndAccept(builder, node, new ValueDeclaration());

      builder.newLine();

      builder.append(2, "ChoiceValue_identifier _id;").newLine();

      builder.append(1, "};").newLine();

      // write sequence value typedef
      builder.newLine();
      builder.append(1, "typedef ChoiceValue_Type ValueType;").newLine();

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
              new DefinedCPPTypeName())) {
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
