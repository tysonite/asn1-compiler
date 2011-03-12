package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class TypeGenerator extends DoNothingASTVisitor implements Generator {

   private ASTTypeAssignment node = null;
   private CodeBuilder builder = new CodeBuilder();

   public TypeGenerator(final ASTTypeAssignment node) {
      this.node = node;
   }

   public void generate(final GeneratorContext context) {
      final String typeName = node.getFirstToken().toString();

      // C++ class declaration
      builder.append("// TypeAssignment for ASN.1 type: ").append(typeName).newLine();
      builder.append("class ").append(typeName).append(" : public ");

      // base type of the class
      VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node, new SetOrSequenceTypeName(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new TaggedTypeName(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new DefinedTypeName());

      // body of the class
      builder.newLine();
      builder.append("{").newLine();
      builder.append("public:").newLine();
      builder.append(1, typeName).append("()");

      /* check whether it is needed to add " : public " */
      VisitorUtils.visitChildsAndAccept(builder, node, new AddColonIfNeeded());

      VisitorUtils.visitChildsAndAccept(builder, node,
              new SetOrSequenceConstructorDeclaration(context));
      VisitorUtils.visitChildsAndAccept(builder, node,
              new TaggedTypeConstructorDeclaration(context));

      // constructor body
      builder.newLine();
      builder.append(1, "{").newLine();

      VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeConstructorDefinition(context));
      VisitorUtils.visitChildsAndAccept(builder, node, new TaggedTypeConstructorDefinition(context));

      builder.append(1, "}").newLine();

      // body of the class
      VisitorUtils.visitChildsAndAccept(builder, node, new NamedIntegerValueType(typeName));

      builder.newLine();
      builder.append("};").newLine().newLine();
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return true;
   }
}
