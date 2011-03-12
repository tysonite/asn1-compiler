package gen.utils;

import gen.*;
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
   public static <T extends AsnParserVisitor & ContentProvider> void visitChildsAndAccept(
           CodeBuilder builder, SimpleNode node, T visitor) {
      node.childrenAccept(visitor, null);
      if (visitor.hasValuableContent()) {
         builder.append(visitor.getContent());
      }
   }

   /*
    * Do not allow instantiation.
    */
   private VisitorUtils() {
   }
}
