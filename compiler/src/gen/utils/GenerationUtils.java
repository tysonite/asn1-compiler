package gen.utils;

import parser.ASTAssignmentList;
import parser.SimpleNode;

public final class GenerationUtils {

   public static String asCPPToken(final String token) {
      return token.replace('-', '_');
   }

   public static ASTAssignmentList findAssignmentList(SimpleNode node) {
      if (node == null)
         return null;

      if (node instanceof ASTAssignmentList)
         return (ASTAssignmentList)node;

      for (int i = 0; i < node.jjtGetNumChildren(); ++i)
      {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         ASTAssignmentList assignmentList = findAssignmentList(child);
         if (assignmentList != null)
            return assignmentList;

      }
      return null;
   }
   /**
    * Do not allow instantiation.
    */
   private GenerationUtils() {
   }
}
