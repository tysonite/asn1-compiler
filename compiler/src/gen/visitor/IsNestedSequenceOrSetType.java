package gen.visitor;

import gen.*;
import parser.*;

public class IsNestedSequenceOrSetType extends DoNothingASTVisitor implements ContentProvider {

   private int nestedLevel = 0;

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      ++nestedLevel;
      return data;
   }

   @Override
   public String getContent() {
      return String.valueOf(nestedLevel);
   }

   @Override
   public boolean hasValuableContent() {
      return nestedLevel > 1;
   }
}
