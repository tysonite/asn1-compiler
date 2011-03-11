package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class TypeGenerator extends DoNothingASTVisitor implements Generator {

   private ASTTypeAssignment node = null;
   private CodeBuilder builder = new CodeBuilder();

   public TypeGenerator(ASTTypeAssignment node) {
      this.node = node;
   }

   public void generate() {
      final String typeName = node.getFirstToken().toString();

      // C++ class declaration
      builder.append("class ").append(typeName).append(" : public ");

      // base type of the class
      VisitorUtils.visitChildsAndAccept(builder, node, new BuiltInTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node, new SetOrSequenceTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node, new TaggedTypeName());
      VisitorUtils.visitChildsAndAccept(builder, node, new DefinedTypeName());

      // body of the class
      builder.newLine();
      builder.append("{").newLine();
      builder.append("public:").newLine();
      builder.append(1, typeName).append("()");

      /* check whether it is needed to add " : public " */
      VisitorUtils.visitChildsAndAccept(builder, node, new AddColonIfNeeded());
      VisitorUtils.visitChildsAndAccept(builder, node, new SetOrSequenceConstructorDeclaration());
      VisitorUtils.visitChildsAndAccept(builder, node, new TaggedTypeConstructorDeclaration());

      // constructor body
      builder.newLine();
      builder.append(1, "{").newLine();

      VisitorUtils.visitChildsAndAccept(builder, node, new TaggedTypeConstructorDefinition());

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
