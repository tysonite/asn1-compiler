/* Generated By:JJTree: Do not edit this line. ASTDefinedType.java Version 4.3 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=false,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
package parser;

public
class ASTDefinedType extends SimpleNode {
  public ASTDefinedType(int id) {
    super(id);
  }

  public ASTDefinedType(AsnParser p, int id) {
    super(p, id);
  }


  /** Accept the visitor. **/
  public Object jjtAccept(AsnParserVisitor visitor, Object data) {
    return visitor.visit(this, data);
  }
}
/* JavaCC - OriginalChecksum=efe0372498a35d3fa5a2e208bae1668f (do not edit this line) */