/* Generated By:JJTree: Do not edit this line. ASTSubtypeValueSetList.java Version 4.3 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
package parser;

public
class ASTSubtypeValueSetList extends SimpleNode {
  public ASTSubtypeValueSetList(int id) {
    super(id);
  }

  public ASTSubtypeValueSetList(AsnParser p, int id) {
    super(p, id);
  }


  /** Accept the visitor. **/
  public Object jjtAccept(AsnParserVisitor visitor, Object data) {
    return visitor.visit(this, data);
  }
}
/* JavaCC - OriginalChecksum=b8a45d541737bd4332464a652592267f (do not edit this line) */