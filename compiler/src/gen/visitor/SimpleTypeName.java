package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class SimpleTypeName extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private CodeBuilder builder = new CodeBuilder();

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      if (!VisitorUtils.visitNodeAndAccept(builder, node, new IsNamedIntegerType())) {
         builder.append(asn1NameSpace).append("IntegerType");
      }
      return data;
   }

   @Override
   public Object visit(ASTBooleanType node, Object data) {
      builder.append(asn1NameSpace).append("BooleanType");
      return data;
   }

   @Override
   public Object visit(ASTNullType node, Object data) {
      builder.append(asn1NameSpace).append("NullType");
      return data;
   }

   @Override
   public Object visit(ASTObjectIdentifierType node, Object data) {
      builder.append(asn1NameSpace).append("ObjectIdentifierType");
      return data;
   }

   @Override
   public Object visit(ASTOctetStringType node, Object data) {
      builder.append(asn1NameSpace).append("OctetStringType");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
