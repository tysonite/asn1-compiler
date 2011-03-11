package gen.visitor;

import gen.*;
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
      {
         final BuiltInTypeName builtInTypeVisitor = new BuiltInTypeName();
         node.childrenAccept(builtInTypeVisitor, null);
         builder.append(builtInTypeVisitor.getContent());

         final SetOrSequenceTypeName setOrSequenceTypeVisitor = new SetOrSequenceTypeName();
         node.childrenAccept(setOrSequenceTypeVisitor, null);
         builder.append(setOrSequenceTypeVisitor.getContent());

         final DefinedOrTaggedTypeName taggedTypeVisitor = new DefinedOrTaggedTypeName();
         node.childrenAccept(taggedTypeVisitor, null);
         builder.append(taggedTypeVisitor.getContent());
      }

      // body of the class
      builder.newLine();
      builder.append("{").newLine();
      builder.append("public:").newLine();
      builder.append(1, typeName).append("()");

      /* check whether it is needed to add " : public " */
      {
         final AddColonIfNeeded visitor = new AddColonIfNeeded();
         node.childrenAccept(visitor, null);
         builder.append(visitor.getContent());
      }

      {
         final SetOrSequenceConstructorDeclaration visitor =
                 new SetOrSequenceConstructorDeclaration();
         node.childrenAccept(visitor, null);
         builder.append(visitor.getContent());
      }

      {
         final TaggedTypeConstructorDeclaration visitor = new TaggedTypeConstructorDeclaration();
         node.childrenAccept(visitor, null);
         builder.append(visitor.getContent());
      }

      builder.newLine();
      builder.append(1, "{").newLine();

      {
         TaggedTypeConstructorDefinition visitor = new TaggedTypeConstructorDefinition();
         node.childrenAccept(visitor, null);
         builder.append(visitor.getContent());
      }

      builder.append(1, "}").newLine();

      {
         NamedIntegerValueType visitor = new NamedIntegerValueType(typeName);
         node.childrenAccept(visitor, null);

         if (visitor.hasValuableContent()) {
            builder.append(visitor.getContent());
         }
      }

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
