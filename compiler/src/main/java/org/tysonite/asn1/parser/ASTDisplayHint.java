/* Generated By:JJTree: Do not edit this line. ASTDisplayHint.java Version 6.1 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
package org.tysonite.asn1.parser;

public
class ASTDisplayHint extends SimpleNode {
  public ASTDisplayHint(int id) {
    super(id);
  }

  public ASTDisplayHint(AsnParser p, int id) {
    super(p, id);
  }


  /** Accept the visitor. **/
  public Object jjtAccept(AsnParserVisitor visitor, Object data) {

    return
    visitor.visit(this, data);
  }
}
/* JavaCC - OriginalChecksum=ffe9f2000f7878832733df57498ac19c (do not edit this line) */
