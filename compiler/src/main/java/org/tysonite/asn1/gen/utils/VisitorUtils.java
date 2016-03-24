package org.tysonite.asn1.gen.utils;

import org.tysonite.asn1.gen.ContentProvider;
import org.tysonite.asn1.gen.GeneratorContext;
import org.tysonite.asn1.gen.visitor.DefinedTypeName;
import org.tysonite.asn1.gen.visitor.TypeDeclarationGenerator;
import org.tysonite.asn1.gen.visitor.TypeDefinitionGenerator;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTInput;
import org.tysonite.asn1.parser.ASTSetOrSequenceOfType;
import org.tysonite.asn1.parser.ASTTaggedType;
import org.tysonite.asn1.parser.ASTTypeAssignment;
import org.tysonite.asn1.parser.AsnParserVisitor;
import org.tysonite.asn1.parser.Node;
import org.tysonite.asn1.parser.SimpleNode;
import org.tysonite.asn1.parser.Token;

public final class VisitorUtils {

   /**
    * Visits node and apply visitor to all childs.
    *
    * @param <T>
    * @param builder
    * @param node
    * @param visitor
    * @return
    */
   public static <T extends AsnParserVisitor & ContentProvider> boolean visitNodeAndAccept(
           CodeBuilder builder, SimpleNode node, T visitor) {
      node.jjtAccept(visitor, null);
      if (visitor.hasValuableContent()) {
         builder.append(visitor.getContent());
         return true;
      }
      return false;
   }

   /**
    *
    * @param <T>
    * @param builder
    * @param node
    * @param visitor
    * @return
    */
   public static <T extends AsnParserVisitor & ContentProvider> boolean visitNodeAndParents(
           CodeBuilder builder, SimpleNode node, T visitor) {
      Node parent = node;
      do {
         parent.jjtAccept(visitor, null);
         parent = parent.jjtGetParent();
      } while (null != parent);

      if (null != builder) {
         builder.append(visitor.getContent());
      }
      return visitor.hasValuableContent();
   }

   /**
    * Visits child nodes of the node and apply visitor to all of them.
    *
    * @param <T>
    * @param builder
    * @param node
    * @param visitor
    * @return
    */
   public static <T extends AsnParserVisitor & ContentProvider> boolean visitChildsAndAccept(
           CodeBuilder builder, SimpleNode node, T visitor) {
      node.childrenAccept(visitor, null);
      if (visitor.hasValuableContent()) {
         if (null != builder) {
            builder.append(visitor.getContent());
         }
         return true;
      }
      return false;
   }

   public static <T extends AsnParserVisitor & ContentProvider> boolean visitChildsAndAccept(
           CodeBuilder builder, SimpleNode node, T... visitors) {
      boolean hasValuableContent = false;
      for (T visitor : visitors) {
         if (visitChildsAndAccept(builder, node, visitor)) {
            hasValuableContent = true;
         }
      }
      return hasValuableContent;
   }

   public static CodeBuilder generateCodeAsForTypeAssignment(final SimpleNode node,
           final String typeName, final GeneratorContext context) {
      final CodeBuilder builder = new CodeBuilder();
      final ASTTypeAssignment newType = new ASTTypeAssignment(0);
      newType.jjtSetFirstToken(new Token(0, typeName));

      if (node instanceof ASTTaggedType || node instanceof ASTSetOrSequenceOfType
              || node instanceof ASTElementType) {
         for (int i = 0, j = 0; i < node.jjtGetNumChildren(); ++i, ++j) {
            if (!(node.jjtGetChild(i) instanceof ASTBuiltinType)) {
               --j;
               continue;
            }
            newType.jjtAddChild(node.jjtGetChild(i), j);
         }
      } else {
         for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
            newType.jjtAddChild(node.jjtGetChild(i), i);
         }
      }

      final TypeDeclarationGenerator gen = new TypeDeclarationGenerator(newType);
      gen.generate(context);

      builder.append(gen.getContent());
      return builder;
   }

   public static CodeBuilder generateDefCodeAsForTypeAssignment(final SimpleNode node,
           final String typeName, final GeneratorContext context) {
      final CodeBuilder builder = new CodeBuilder();
      final ASTTypeAssignment newType = new ASTTypeAssignment(0);
      newType.jjtSetFirstToken(new Token(0, typeName));

      if (node instanceof ASTTaggedType || node instanceof ASTSetOrSequenceOfType
              || node instanceof ASTElementType) {
         for (int i = 0, j = 0; i < node.jjtGetNumChildren(); ++i, ++j) {
            if (!(node.jjtGetChild(i) instanceof ASTBuiltinType)) {
               --j;
               continue;
            }
            newType.jjtAddChild(node.jjtGetChild(i), j);
         }
      } else {
         for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
            newType.jjtAddChild(node.jjtGetChild(i), i);
         }
      }

      final TypeDefinitionGenerator gen = new TypeDefinitionGenerator(newType);
      gen.generate(context);

      builder.append(gen.getContent());
      return builder;
   }

   /**
    *
    * @param node
    * @param context
    * @return unique name of the node
    */
   public static String queueGeneratedCode(final SimpleNode node, final GeneratorContext context) {
      final CodeBuilder uniqueName = new CodeBuilder();
      VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer(context));

      if (!context.hasExternalized(uniqueName.toString())) {
         /* indicate that generator know this type */
         context.addExternalTypeName(uniqueName.toString());

         /* generate code for a new type */
         context.addExternalContent(VisitorUtils.generateCodeAsForTypeAssignment(node,
                 uniqueName.toString(), context));

         context.addExternalDefContent(VisitorUtils.generateDefCodeAsForTypeAssignment(node,
                 uniqueName.toString(), context));
      }

      return uniqueName.toString();
   }

   public static String queueGeneratedCodeForTypes(final ASTElementType node,
           final GeneratorContext context) {
      final CodeBuilder uniqueName = new CodeBuilder();
      VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer(context));

      if (!context.hasExternalized(uniqueName.toString())) {
         return queueGeneratedCode(node, context);
      } else {
         return GenerationUtils.asCPPToken(node.jjtGetFirstToken().toString()) + "_Type";
      }
   }

   public static void prependDefinedGeneratedNode(final SimpleNode node,
           final GeneratorContext context) {
      final CodeBuilder definedTypeName = new CodeBuilder();
      if (VisitorUtils.visitChildsAndAccept(definedTypeName, node, new DefinedTypeName())) {
         ASTTypeAssignment assignment = VisitorUtils.searchForAssignmentNodeByName(node,
                 definedTypeName.toString());

         if (assignment != null && !assignment.isProcessed()) {
            TypeDeclarationGenerator generator = new TypeDeclarationGenerator(assignment);
            generator.generate(context);

            final CodeBuilder externalBuilder = new CodeBuilder();
            externalBuilder.append(generator.getContent());
            context.addExternalContent(externalBuilder);
         }
      }
   }

   public static ASTTypeAssignment searchForAssignmentNodeByName(final SimpleNode node,
           final String name) {
      if (!(node instanceof ASTInput)) {
         return searchForAssignmentNodeByName((SimpleNode) node.jjtGetParent(), name);
      }

      return searchNode(node, name);
   }

   protected static ASTTypeAssignment searchNode(final SimpleNode node, final String name) {
      if (!(node instanceof ASTTypeAssignment)) {
         for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
            ASTTypeAssignment typeAss;
            typeAss = searchNode((SimpleNode) node.jjtGetChild(i), name);
            if (null != typeAss) {
               return typeAss;
            }
         }
      } else if (node.jjtGetFirstToken().toString().equals(name)) {
         return (ASTTypeAssignment) node;
      }

      return null;
   }

   /**
    * Do not allow instantiation.
    */
   private VisitorUtils() {
   }
}
