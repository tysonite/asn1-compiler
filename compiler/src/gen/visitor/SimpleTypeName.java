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
         if (!VisitorUtils.visitChildsAndAccept(builder, (SimpleNode) node.jjtGetParent().
                 jjtGetParent(), new IsUnsignedIntegerType())) {
            builder.append(asn1NameSpace).append("IntegerType");
         } else {
            builder.append(asn1NameSpace).append("UnsignedIntegerType");
         }
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
      if (node.getType() == ASTOctetStringType.StringType.OCTET_STRING) {
         builder.append(asn1NameSpace).append("OctetStringType");
      } else if (node.getType() == ASTOctetStringType.StringType.PRINTABLE_STRING) {
         builder.append(asn1NameSpace).append("PrintableStringType");
      } else if (node.getType() == ASTOctetStringType.StringType.GENERALIZED_TIME) {
         builder.append(asn1NameSpace).append("GeneralizedTimeType");
      } else if (node.getType() == ASTOctetStringType.StringType.UTC_TIME) {
         builder.append(asn1NameSpace).append("UTCTimeType");
      } else if (node.getType() == ASTOctetStringType.StringType.GRAPHIC_STRING) {
         builder.append(asn1NameSpace).append("GraphicStringType");
      } else if (node.getType() == ASTOctetStringType.StringType.IA5_STRING) {
         builder.append(asn1NameSpace).append("IA5StringType");
      } else if (node.getType() == ASTOctetStringType.StringType.NUMERIC_STRING) {
         builder.append(asn1NameSpace).append("NumericStringType");
      } else if (node.getType() == ASTOctetStringType.StringType.TELETEX_STRING) {
         builder.append(asn1NameSpace).append("TeletexStringType");
      } else {
         throw new GeneratorException("Octet string subtype " + node.getFirstToken().toString()
                 + " is unknown");
      }
      return data;
   }

   @Override
   public Object visit(ASTBitStringType node, Object data) {
      builder.append(asn1NameSpace).append("BitStringType");
      return data;
   }

   @Override
   public Object visit(ASTAnyType node, Object data) {
      builder.append(asn1NameSpace).append("AnyType");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
