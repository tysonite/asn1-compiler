package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class TypeDeclarationGenerator extends DoNothingASTVisitor implements Generator {

   private ASTTypeAssignment node = null;
   private final CodeBuilder builder = new CodeBuilder();

   public TypeDeclarationGenerator(final ASTTypeAssignment node) {
      this.node = node;
   }

   private void generateConstructorBody(final GeneratorContext context) {
      // constructor body
      builder.newLine();
      builder.append(1, "{").newLine();

      VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeConstructorDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new TaggedTypeConstructorDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new SetOfOrSequenceOfConstructorDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new SequenceConstructorDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new ChoiceConstructorDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new EnumeratedConstructorDefinition());
      VisitorUtils.visitChildsAndAccept(builder, node, new IntegerConstructorDefinition());
      VisitorUtils.visitChildsAndAccept(builder, node, new OctetStringConstructorDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new DefinedTypeConstructorDefinition());

      builder.append(1, "}").newLine();
   }

   private void generateConstructorInitializers(final GeneratorContext context) {
      /* check whether it is needed to add " : " */
      VisitorUtils.visitChildsAndAccept(builder, node, new AddColonIfNeeded(context));

      VisitorUtils.visitChildsAndAccept(builder, node,
              new SetOfOrSequenceOfConstructorDeclaration(context));
      VisitorUtils.visitChildsAndAccept(builder, node,
              new TaggedTypeConstructorDeclaration(context));
      VisitorUtils.visitChildsAndAccept(builder, node,
              new DefaultValueConstructorDefinition(context));
   }

   @Override
   public void generate(final GeneratorContext context) {
      if (node.isProcessed()) {
         return;
      }

      final String typeName = node.getFirstToken().toString();

      // C++ class declaration
      builder.append("// TypeAssignment for ASN.1 type: ").append(typeName).newLine();
      builder.append("class ").append(GenerationUtils.asCPPToken(typeName)).append(" : public ");

      // base type of the class
      final CodeBuilder baseTypeName = new CodeBuilder();
      if (VisitorUtils.visitChildsAndAccept(baseTypeName, node, new SimpleTypeName(),
              new SetOfOrSequenceOfTypeName(context), new TaggedTypeName(context),
              new DefinedCPPTypeName(), new SetOrSequenceTypeName(), new ChoiceTypeName(),
              new EnumeratedTypeName(), new NamedIntegerType())) {

         VisitorUtils.prependDefinedGeneratedNode(node, context);
      }
      builder.append(baseTypeName.toString());
      context.setBaseTypeName(baseTypeName.toString());

      // body of the class
      builder.newLine();
      builder.append("{").newLine();
      builder.append("public:").newLine().newLine();

      // default constructor
      builder.append(1, "explicit ").append(GenerationUtils.asCPPToken(typeName)).append("()");

      generateConstructorInitializers(context);
      generateConstructorBody(context);

      // constructor with default values for simple types
      if ((VisitorUtils.visitChildsAndAccept(null, node, new IsSimpleType())
              || VisitorUtils.visitChildsAndAccept(null, node, new IsNamedIntegerType())
              || VisitorUtils.visitChildsAndAccept(null, node, new IsEnumeratedType()))
              && !VisitorUtils.visitChildsAndAccept(null, node, new IsNullType())
              && !VisitorUtils.visitChildsAndAccept(null, node, new IsAnyType())) {
         builder.newLine();
         builder.append(1, "explicit ").append(GenerationUtils.asCPPToken(typeName)).
                 append("(").append("const ValueType& defaultValue, bool hasDefault").append(") : ").
                 append(baseTypeName.toString()).append("(defaultValue, hasDefault)");

         generateConstructorInitializers(context);
         generateConstructorBody(context);
      }

      // body of the class
      VisitorUtils.visitChildsAndAccept(builder, node, new NamedIntegerOrBitStringValueType(typeName),
              new SetOrSequenceTypeBody(context), new ChoiceTypeBody(context),
              new EnumeratedTypeBody(context));

      // protected methods
      // (only for XER)
      if (false) {
         builder.newLine();
         builder.append("#if defined(ASN1_ENABLE_XER)").newLine();
         builder.append("protected:").newLine();
         builder.newLine();

         builder.append(1, "const char* _doTypeName() const { return \"");
         builder.append(typeName);
         builder.append("\"; }").newLine();
         builder.append("#endif // ASN1_ENABLE_XER").newLine();
      }

      builder.newLine();
      builder.append("};").newLine().newLine();

      node.markAsProcessed();
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
