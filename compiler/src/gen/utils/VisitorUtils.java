package gen.utils;

import gen.*;
import gen.visitor.*;
import parser.*;

public final class VisitorUtils {

   /**
    * Visits node and apply visitor to all childs.
    *
    * @param <T>
    * @param builder
    * @param node
    * @param visitor
    */
   public static <T extends AsnParserVisitor & ContentProvider> void visitNodeAndAccept(
           CodeBuilder builder, SimpleNode node, T visitor) {
      node.jjtAccept(visitor, null);
      if (visitor.hasValuableContent()) {
         builder.append(visitor.getContent());
      }
   }

   /**
    * Visits childs nodes of the node and apply visitor to all of them.
    *
    * @param <T>
    * @param builder
    * @param node
    * @param visitor
    */
   public static <T extends AsnParserVisitor & ContentProvider> boolean visitChildsAndAccept(
           CodeBuilder builder, SimpleNode node, T visitor) {
      node.childrenAccept(visitor, null);
      if (visitor.hasValuableContent()) {
         if (null != builder) {
            builder.append(visitor.getContent());
         }
         return true;
      }
      return false;
   }

   public static <T extends AsnParserVisitor & ContentProvider> boolean visitChildsAndAccept(
           CodeBuilder builder, SimpleNode node, T... visitors) {
      boolean hasValuableContent = false;
      for (T visitor : visitors) {
         if (visitChildsAndAccept(builder, node, visitor)) {
            hasValuableContent = true;
         }
      }
      return hasValuableContent;
   }

   public static CodeBuilder generateCodeAsForTypeAssignment(final SimpleNode node,
           final String typeName, final GeneratorContext context) {
      final CodeBuilder builder = new CodeBuilder();
      final ASTTypeAssignment newType = new ASTTypeAssignment(0);
      newType.setFirstToken(new Token(0, typeName));

      if (node instanceof ASTTaggedType || node instanceof ASTSetOrSequenceOfType) {
         for (int i = 0, j = 0; i < node.jjtGetNumChildren(); ++i, ++j) {
            if (!(node.jjtGetChild(i) instanceof ASTBuiltinType)) {
               --j;
               continue;
            }
            newType.jjtAddChild(node.jjtGetChild(i), j);
         }
      } else {
         for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
            newType.jjtAddChild(node.jjtGetChild(i), i);
         }
      }

      final TypeDeclarationGenerator gen = new TypeDeclarationGenerator(newType);
      gen.generate(context);

      builder.append(gen.getContent());
      return builder;
   }

   public static String queueGeneratedCode(final SimpleNode node, final GeneratorContext context) {
      final CodeBuilder uniqueName = new CodeBuilder();
      VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer());

      if (!context.hasExternalized(uniqueName.toString())) {
         /* indicate that generator know this type */
         context.addExternalTypeName(uniqueName.toString());

         /* generate code for a new type */
         context.addExternalContent(VisitorUtils.generateCodeAsForTypeAssignment(node,
                 uniqueName.toString(), context));
      }

      return uniqueName.toString();
   }

   /**
    * Do not allow instantiation.
    */
   private VisitorUtils() {
   }
}
