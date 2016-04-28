package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.Main;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.GenerationUtils;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTChoiceType;
import org.tysonite.asn1.parser.ASTElementType;

public class ChoiceConstructorDefinition extends DoNothingASTVisitor implements ContentProvider {

   private final CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public ChoiceConstructorDefinition(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTChoiceType node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTElementType node, Object data) {
      final String elementTypeName = "_"
              + GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()) + "_Type";

      // choice
      builder.append(2, "_addChoice(&").append(elementTypeName).append(");").newLine();

      // internal types
      final CodeBuilder fieldType = new CodeBuilder();
      if (!VisitorUtils.visitChildsAndAccept(fieldType, node, new SimpleTypeName(context),
              new DefinedCPPTypeName())) {
         fieldType.append(GenerationUtils.asCPPToken(
                 VisitorUtils.queueGeneratedCode(node, context)));
      }
      // store context
      String prevTypeName = context.getTypeName();

      context.setTypeName(fieldType.toString());
      VisitorUtils.visitChildsAndAccept(builder, node,
              new IntegerConstructorDefinition(context, elementTypeName),
              new OctetStringConstructorDefinition(context, elementTypeName));

      if (VisitorUtils.visitChildsAndAccept(null, node, new IsSimpleType(context))) {
         VisitorUtils.visitChildsAndAccept(builder, node,
                 new SimpleTypeConstructorDefinition(context, elementTypeName));
      }

      // only for XER
      if (context.getCommandLine().hasOption(Main.METHOD_XER.getOpt())) {
         builder.append("#if defined(ASN1_ENABLE_XER)").newLine();
         builder.append(2, elementTypeName).append(".").append("setTypeName(\"")
                 .append(node.jjtGetFirstToken().toString()).append("\");");
         builder.newLine();
         builder.append("#endif // ASN1_ENABLE_XER");
         builder.newLine();
      }

      // restore context
      context.setTypeName(prevTypeName);
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
