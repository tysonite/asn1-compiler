package gen.visitor;

import gen.*;
import gen.utils.*;
import parser.*;

public class ObjIdComponentList extends DoNothingASTVisitor implements ContentProvider {

   private CodeBuilder builder = new CodeBuilder();
   private final GeneratorContext context;
   private boolean firstOid = true;

   public ObjIdComponentList(final GeneratorContext context) {
      this.context = context;
   }

   @Override
   public Object visit(ASTBuiltinType node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTBuiltinValue node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTCompoundValue node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTObjIdComponentList node, Object data) {
      node.childrenAccept(this, data);
      return data;
   }

   @Override
   public Object visit(ASTObjIdComponent node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNumberForm node, Object data) {
      return node.childrenAccept(this, data);
   }

   @Override
   public Object visit(ASTNameAndNumberForm node, Object data) {
      ASTNumberForm number = _getNumberOfIdentifier(node);
      if (number == null) {
         ASTidentifier name = _getNameOfIdentifier(node);
         ASTValueAssignment parent = _getValueAssignmentByName(name.getFirstToken().toString());
         parent.childrenAccept(this, data);
      } else {
         number.childrenAccept(this, data);
      }
      return data;
   }

   @Override
   public Object visit(ASTnumber node, Object data) {
      if (firstOid) {
         firstOid = false;
      } else {
         builder.append(".");
      }
      builder.append(node.getFirstToken().toString());
      return data;
   }

   private ASTValueAssignment _getValueAssignmentByName(String name) {
      ASTAssignmentList typesList = context.getAssignmentList();
      for (int i = 0; i < typesList.jjtGetNumChildren(); ++i) {
         SimpleNode child = (SimpleNode) typesList.jjtGetChild(i);
         if (name.equals(child.getFirstToken().toString())) {
            if (!(child instanceof ASTValueAssignment)) {
               throw new GeneratorException("Child of ASTValueAssignment must have ASTTypeAssignment type");
            }
            return (ASTValueAssignment) child;
         }
      }
      throw new GeneratorException("Can't find ASTValueAssignment type with name: " + name);
   }

   private ASTNumberForm _getNumberOfIdentifier(ASTNameAndNumberForm node) {
      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         if (child instanceof ASTNumberForm) {
            return (ASTNumberForm) child;
         }
      }
      return null;
   }

   private ASTidentifier _getNameOfIdentifier(ASTNameAndNumberForm node) {
      for (int i = 0; i < node.jjtGetNumChildren(); ++i) {
         final SimpleNode child = (SimpleNode) node.jjtGetChild(i);
         if (child instanceof ASTidentifier) {
            return (ASTidentifier) child;
         }
      }
      return null;
   }

   public String getContent() {
      return builder.toString();
   }

   public boolean hasValuableContent() {
      return !builder.toString().isEmpty();
   }
}
