package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.GeneratorException;
import org.tysonite.asn1.gen.Main;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTAnyType;
import org.tysonite.asn1.parser.ASTBitStringType;
import org.tysonite.asn1.parser.ASTBooleanType;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTIntegerType;
import org.tysonite.asn1.parser.ASTNullType;
import org.tysonite.asn1.parser.ASTObjectIdentifierType;
import org.tysonite.asn1.parser.ASTOctetStringType;
import org.tysonite.asn1.parser.SimpleNode;

public class SimpleTypeName extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private final CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SimpleTypeName(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTIntegerType node, Object data) {
      if (!VisitorUtils.visitNodeAndAccept(builder, node, new IsNamedIntegerType())) {
         if (context.getCommandLine().hasOption(Main.BIG_INTEGER.getOpt())) {
            builder.append(asn1NameSpace).append("BigIntegerType");
         } else if (!VisitorUtils.visitChildsAndAccept(builder, (SimpleNode) node.jjtGetParent().
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
         throw new GeneratorException("Octet string subtype " + node.jjtGetFirstToken().toString()
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
