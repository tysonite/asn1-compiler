package gen.utils;

import gen.*;
import gen.visitor.*;
import parser.*;

public final class VisitorUtils {

   /**
    * Visits node and apply visitor to all childs.
    *
    * @param <T>
    * @param builder
    * @param node
    * @param visitor
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
    * Visits childs nodes of the node and apply visitor to all of them.
    *
    * @param <T>
    * @param builder
    * @param node
    * @param visitor
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
      newType.setFirstToken(new Token(0, typeName));

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
      newType.setFirstToken(new Token(0, typeName));

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
      VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer());

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
      VisitorUtils.visitChildsAndAccept(uniqueName, node, new UniqueNameProducer());

      if (!context.hasExternalized(uniqueName.toString())) {
         return queueGeneratedCode(node, context);
      } else {
         return GenerationUtils.asCPPToken(node.getFirstToken().toString()) + "_Type";
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
      } else {
         if (node.getFirstToken().toString().equals(name)) {
            return (ASTTypeAssignment) node;
         }
      }

      return null;
   }

   /**
    * Do not allow instantiation.
    */
   private VisitorUtils() {
   }
}
