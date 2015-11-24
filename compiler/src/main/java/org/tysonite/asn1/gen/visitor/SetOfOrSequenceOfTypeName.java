package org.tysonite.asn1.gen.visitor;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.DoNothingASTVisitor;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.utils.CodeBuilder;
import org.tysonite.asn1.gen.utils.VisitorUtils;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTSetOrSequenceOfType;

public class SetOfOrSequenceOfTypeName extends DoNothingASTVisitor implements ContentProvider,
        ConstantsForGeneration {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;

   public SetOfOrSequenceOfTypeName(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      if (node.isSequence()) {
         builder.append(asn1NameSpace).append("SequenceOfType<");
      } else if (node.isSet()) {
         builder.append(asn1NameSpace).append("SetOfType<");
      }

      if (!VisitorUtils.visitChildsAndAccept(builder, node, new SimpleTypeName(),
              new DefinedCPPTypeName(),
              new SetOfOrSequenceOfTypeName(context))) {
         builder.append(VisitorUtils.queueGeneratedCode(node, context));
      } else {
         VisitorUtils.prependDefinedGeneratedNode(node, context);
      }

      builder.append(">");
      return data;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
