package gen.utils;

import gen.visitor.*;
import parser.*;

public final class GenerationUtils {

   public static String asCPPToken(final String token) {
      return token.replace('-', '_');
   }

   public static ASTAssignmentList findAssignmentList(SimpleNode node) {
      if (node == null) {
         return null;
      }

      if (node instanceof ASTAssignmentList) {
         return (ASTAssignmentList) node;
      }

      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         ASTAssignmentList assignmentList = findAssignmentList(child);
         if (assignmentList != null) {
            return assignmentList;
         }

      }
      return null;
   }

   public static boolean isNestedLevelOfSeqOrSetEqual(final SimpleNode node1, final SimpleNode node2) {
      final CodeBuilder currentNestedLevel = new CodeBuilder(),
              queuedNodeNestedLevel = new CodeBuilder();
      if (VisitorUtils.visitNodeAndParents(currentNestedLevel, node1,
              new IsNestedSequenceOrSetType())) {

         if (null != node2) {
            VisitorUtils.visitNodeAndParents(queuedNodeNestedLevel, node2,
                    new IsNestedSequenceOrSetType());
         } else {
            return false;
         }

         if (!queuedNodeNestedLevel.toString().isEmpty()
                 && (Integer.parseInt(currentNestedLevel.toString()) - 1
                 != Integer.parseInt(queuedNodeNestedLevel.toString()))) {
            return false;
         }
      }

      return true;
   }

   /**
    * Do not allow instantiation.
    */
   private GenerationUtils() {
   }
}
