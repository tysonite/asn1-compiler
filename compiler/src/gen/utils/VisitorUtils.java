package gen.utils;

import gen.*;
import parser.*;

public class VisitorUtils {

   public static <T extends AsnParserVisitor & ContentProvider> void visitNodeAndAccept(
           CodeBuilder builder, SimpleNode node, T visitor) {
      node.jjtAccept(visitor, null);
      if (visitor.hasValuableContent()) {
         builder.append(visitor.getContent());
      }
   }

   public static <T extends AsnParserVisitor & ContentProvider> void visitChildsAndAccept(
           CodeBuilder builder, SimpleNode node, T visitor) {
      node.childrenAccept(visitor, null);
      if (visitor.hasValuableContent()) {
         builder.append(visitor.getContent());
      }
   }

   private VisitorUtils() {
   }
}
