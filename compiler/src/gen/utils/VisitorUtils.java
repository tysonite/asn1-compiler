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
         builder.append(visitor.getContent());
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
      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         newType.jjtAddChild(node.jjtGetChild(i), i);
      }

      TypeGenerator gen = new TypeGenerator(newType);
      gen.generate(context);

      builder.append(gen.getContent());
      return builder;
   }

   /*
    * Do not allow instantiation.
    */
   private VisitorUtils() {
   }
}
