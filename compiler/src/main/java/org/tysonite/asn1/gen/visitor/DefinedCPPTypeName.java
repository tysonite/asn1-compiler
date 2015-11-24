package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTDefinedType;

public class DefinedCPPTypeName extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTDefinedType node, Object data) {
      final CodeBuilder definedTypeName = new CodeBuilder();
      VisitorUtils.visitNodeAndAccept(definedTypeName, node, new DefinedTypeName());

      builder.append(asn1GeneratedNameSpace).
              append(GenerationUtils.asCPPToken(definedTypeName.toString()));
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
