package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

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
