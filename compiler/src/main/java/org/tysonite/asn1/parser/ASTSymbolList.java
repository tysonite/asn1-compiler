/* Generated By:JJTree: Do not edit this line. ASTSymbolList.java Version 6.1 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
package org.tysonite.asn1.parser;

public
class ASTSymbolList extends SimpleNode {
  public ASTSymbolList(int id) {
    super(id);
  }

  public ASTSymbolList(AsnParser p, int id) {
    super(p, id);
  }


  /** Accept the visitor. **/
  public Object jjtAccept(AsnParserVisitor visitor, Object data) {

    return
    visitor.visit(this, data);
  }
}
/* JavaCC - OriginalChecksum=ce5b90b1b64a8411bd48effaee0b15c2 (do not edit this line) */
