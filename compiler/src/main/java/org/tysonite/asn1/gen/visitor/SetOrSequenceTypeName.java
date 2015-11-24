package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorException;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;

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
