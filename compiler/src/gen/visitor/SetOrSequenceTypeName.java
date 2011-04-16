package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SetOrSequenceTypeName extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceType node, Object data) {
      if (node.isSequence()) {
         builder.append(asn1NameSpace).append("SequenceType");
      } else if (node.isSet()) {
         builder.append(asn1NameSpace).append("SetType");
      } else {
         throw new GeneratorException("Expected SEQUENCE or SET type");
      }
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
