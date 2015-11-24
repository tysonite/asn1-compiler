package org.tysonite.asn1.gen;

import org.tysonite.asn1.parser.ASTAnyType;
import org.tysonite.asn1.parser.ASTAssignedIdentifier;
import org.tysonite.asn1.parser.ASTAssignmentList;
import org.tysonite.asn1.parser.ASTBinaryString;
import org.tysonite.asn1.parser.ASTBitStringType;
import org.tysonite.asn1.parser.ASTBooleanType;
import org.tysonite.asn1.parser.ASTBooleanValue;
import org.tysonite.asn1.parser.ASTBuiltinType;
import org.tysonite.asn1.parser.ASTBuiltinValue;
import org.tysonite.asn1.parser.ASTCharString;
import org.tysonite.asn1.parser.ASTChoiceType;
import org.tysonite.asn1.parser.ASTClass;
import org.tysonite.asn1.parser.ASTClassNumber;
import org.tysonite.asn1.parser.ASTComponentsType;
import org.tysonite.asn1.parser.ASTCompoundValue;
import org.tysonite.asn1.parser.ASTConstraint;
import org.tysonite.asn1.parser.ASTContainedSubtype;
import org.tysonite.asn1.parser.ASTDefaultValue;
import org.tysonite.asn1.parser.ASTDefinedMacroName;
import org.tysonite.asn1.parser.ASTDefinedMacroType;
import org.tysonite.asn1.parser.ASTDefinedType;
import org.tysonite.asn1.parser.ASTDefinedValue;
import org.tysonite.asn1.parser.ASTDisplayHint;
import org.tysonite.asn1.parser.ASTElementType;
import org.tysonite.asn1.parser.ASTEnumeratedType;
import org.tysonite.asn1.parser.ASTExportSymbolList;
import org.tysonite.asn1.parser.ASTExports;
import org.tysonite.asn1.parser.ASTHexString;
import org.tysonite.asn1.parser.ASTImports;
import org.tysonite.asn1.parser.ASTInnerTypeConstraints;
import org.tysonite.asn1.parser.ASTInput;
import org.tysonite.asn1.parser.ASTIntegerType;
import org.tysonite.asn1.parser.ASTMacroBody;
import org.tysonite.asn1.parser.ASTMacroDefinition;
import org.tysonite.asn1.parser.ASTMacroReference;
import org.tysonite.asn1.parser.ASTModuleBody;
import org.tysonite.asn1.parser.ASTModuleDefinition;
import org.tysonite.asn1.parser.ASTModuleIdentifier;
import org.tysonite.asn1.parser.ASTMultipleTypeConstraints;
import org.tysonite.asn1.parser.ASTNameAndNumberForm;
import org.tysonite.asn1.parser.ASTNamedConstraint;
import org.tysonite.asn1.parser.ASTNamedNumber;
import org.tysonite.asn1.parser.ASTNamedNumberList;
import org.tysonite.asn1.parser.ASTNamedValue;
import org.tysonite.asn1.parser.ASTNullType;
import org.tysonite.asn1.parser.ASTNullValue;
import org.tysonite.asn1.parser.ASTNumberForm;
import org.tysonite.asn1.parser.ASTObjIdComponent;
import org.tysonite.asn1.parser.ASTObjIdComponentList;
import org.tysonite.asn1.parser.ASTObjectIdentifierType;
import org.tysonite.asn1.parser.ASTObjectIdentifierValue;
import org.tysonite.asn1.parser.ASTOctetStringType;
import org.tysonite.asn1.parser.ASTPermittedAlphabet;
import org.tysonite.asn1.parser.ASTPresenceConstraint;
import org.tysonite.asn1.parser.ASTSelectionType;
import org.tysonite.asn1.parser.ASTSetOrSequenceOfType;
import org.tysonite.asn1.parser.ASTSetOrSequenceType;
import org.tysonite.asn1.parser.ASTSignedNumber;
import org.tysonite.asn1.parser.ASTSingleTypeConstraint;
import org.tysonite.asn1.parser.ASTSingleValue;
import org.tysonite.asn1.parser.ASTSizeConstraint;
import org.tysonite.asn1.parser.ASTSnmpAccess;
import org.tysonite.asn1.parser.ASTSnmpDefValPart;
import org.tysonite.asn1.parser.ASTSnmpDescrPart;
import org.tysonite.asn1.parser.ASTSnmpIndexPart;
import org.tysonite.asn1.parser.ASTSnmpObjectTypeMacroType;
import org.tysonite.asn1.parser.ASTSnmpReferPart;
import org.tysonite.asn1.parser.ASTSnmpStatus;
import org.tysonite.asn1.parser.ASTSpecialRealValue;
import org.tysonite.asn1.parser.ASTSubtypeSpec;
import org.tysonite.asn1.parser.ASTSubtypeValueSet;
import org.tysonite.asn1.parser.ASTSubtypeValueSetList;
import org.tysonite.asn1.parser.ASTSymbol;
import org.tysonite.asn1.parser.ASTSymbolList;
import org.tysonite.asn1.parser.ASTSymbolsExported;
import org.tysonite.asn1.parser.ASTSymbolsFromModule;
import org.tysonite.asn1.parser.ASTSymbolsFromModuleList;
import org.tysonite.asn1.parser.ASTSymbolsImported;
import org.tysonite.asn1.parser.ASTTag;
import org.tysonite.asn1.parser.ASTTagDefault;
import org.tysonite.asn1.parser.ASTTaggedType;
import org.tysonite.asn1.parser.ASTTextualConventionMacroType;
import org.tysonite.asn1.parser.ASTTypeAssignment;
import org.tysonite.asn1.parser.ASTTypeConstraints;
import org.tysonite.asn1.parser.ASTTypeOrValue;
import org.tysonite.asn1.parser.ASTTypeOrValueList;
import org.tysonite.asn1.parser.ASTValue;
import org.tysonite.asn1.parser.ASTValueAssignment;
import org.tysonite.asn1.parser.ASTValueConstraint;
import org.tysonite.asn1.parser.ASTValueRange;
import org.tysonite.asn1.parser.ASTidentifier;
import org.tysonite.asn1.parser.ASTmodulereference;
import org.tysonite.asn1.parser.ASTnumber;
import org.tysonite.asn1.parser.ASTskip_to_matching_brace;
import org.tysonite.asn1.parser.ASTtypereference;
import org.tysonite.asn1.parser.AsnParserVisitor;
import org.tysonite.asn1.parser.SimpleNode;

public class DoNothingASTVisitor implements AsnParserVisitor {

   public Object visit(SimpleNode node, Object data) {
      return data;
   }

   public Object visit(ASTInput node, Object data) {
      return data;
   }

   public Object visit(ASTModuleDefinition node, Object data) {
      return data;
   }

   public Object visit(ASTTagDefault node, Object data) {
      return data;
   }

   public Object visit(ASTModuleIdentifier node, Object data) {
      return data;
   }

   public Object visit(ASTAssignedIdentifier node, Object data) {
      return data;
   }

   public Object visit(ASTModuleBody node, Object data) {
      return data;
   }

   public Object visit(ASTExports node, Object data) {
      return data;
   }

   public Object visit(ASTSymbolsExported node, Object data) {
      return data;
   }

   public Object visit(ASTExportSymbolList node, Object data) {
      return data;
   }

   public Object visit(ASTImports node, Object data) {
      return data;
   }

   public Object visit(ASTSymbolsImported node, Object data) {
      return data;
   }

   public Object visit(ASTSymbolsFromModuleList node, Object data) {
      return data;
   }

   public Object visit(ASTSymbolsFromModule node, Object data) {
      return data;
   }

   public Object visit(ASTSymbolList node, Object data) {
      return data;
   }

   public Object visit(ASTSymbol node, Object data) {
      return data;
   }

   public Object visit(ASTAssignmentList node, Object data) {
      return data;
   }

   public Object visit(ASTMacroDefinition node, Object data) {
      return data;
   }

   public Object visit(ASTMacroBody node, Object data) {
      return data;
   }

   public Object visit(ASTMacroReference node, Object data) {
      return data;
   }

   public Object visit(ASTTypeAssignment node, Object data) {
      return data;
   }

   public Object visit(ASTDefinedType node, Object data) {
      return data;
   }

   public Object visit(ASTBuiltinType node, Object data) {
      return data;
   }

   public Object visit(ASTNullType node, Object data) {
      return data;
   }

   public Object visit(ASTBooleanType node, Object data) {
      return data;
   }

   public Object visit(ASTObjectIdentifierType node, Object data) {
      return data;
   }

   public Object visit(ASTOctetStringType node, Object data) {
      return data;
   }

   public Object visit(ASTEnumeratedType node, Object data) {
      return data;
   }

   public Object visit(ASTIntegerType node, Object data) {
      return data;
   }

   public Object visit(ASTBitStringType node, Object data) {
      return data;
   }

   public Object visit(ASTNamedNumberList node, Object data) {
      return data;
   }

   public Object visit(ASTNamedNumber node, Object data) {
      return data;
   }

   public Object visit(ASTSignedNumber node, Object data) {
      return data;
   }

   public Object visit(ASTSetOrSequenceOfType node, Object data) {
      return data;
   }

   public Object visit(ASTSetOrSequenceType node, Object data) {
      return data;
   }

   public Object visit(ASTChoiceType node, Object data) {
      return data;
   }

   public Object visit(ASTElementType node, Object data) {
      return data;
   }

   public Object visit(ASTComponentsType node, Object data) {
      return data;
   }

   public Object visit(ASTSelectionType node, Object data) {
      return data;
   }

   public Object visit(ASTTaggedType node, Object data) {
      return data;
   }

   public Object visit(ASTTag node, Object data) {
      return data;
   }

   public Object visit(ASTClassNumber node, Object data) {
      return data;
   }

   public Object visit(ASTClass node, Object data) {
      return data;
   }

   public Object visit(ASTAnyType node, Object data) {
      return data;
   }

   public Object visit(ASTSubtypeSpec node, Object data) {
      return data;
   }

   public Object visit(ASTSubtypeValueSetList node, Object data) {
      return data;
   }

   public Object visit(ASTSubtypeValueSet node, Object data) {
      return data;
   }

   public Object visit(ASTContainedSubtype node, Object data) {
      return data;
   }

   public Object visit(ASTSingleValue node, Object data) {
      return data;
   }

   public Object visit(ASTValueRange node, Object data) {
      return data;
   }

   public Object visit(ASTSizeConstraint node, Object data) {
      return data;
   }

   public Object visit(ASTPermittedAlphabet node, Object data) {
      return data;
   }

   public Object visit(ASTInnerTypeConstraints node, Object data) {
      return data;
   }

   public Object visit(ASTSingleTypeConstraint node, Object data) {
      return data;
   }

   public Object visit(ASTMultipleTypeConstraints node, Object data) {
      return data;
   }

   public Object visit(ASTTypeConstraints node, Object data) {
      return data;
   }

   public Object visit(ASTNamedConstraint node, Object data) {
      return data;
   }

   public Object visit(ASTConstraint node, Object data) {
      return data;
   }

   public Object visit(ASTValueConstraint node, Object data) {
      return data;
   }

   public Object visit(ASTPresenceConstraint node, Object data) {
      return data;
   }

   public Object visit(ASTValueAssignment node, Object data) {
      return data;
   }

   public Object visit(ASTValue node, Object data) {
      return data;
   }

   public Object visit(ASTDefinedValue node, Object data) {
      return data;
   }

   public Object visit(ASTBuiltinValue node, Object data) {
      return data;
   }

   public Object visit(ASTCompoundValue node, Object data) {
      return data;
   }

   public Object visit(ASTskip_to_matching_brace node, Object data) {
      return data;
   }

   public Object visit(ASTBooleanValue node, Object data) {
      return data;
   }

   public Object visit(ASTSpecialRealValue node, Object data) {
      return data;
   }

   public Object visit(ASTNullValue node, Object data) {
      return data;
   }

   public Object visit(ASTNamedValue node, Object data) {
      return data;
   }

   public Object visit(ASTObjectIdentifierValue node, Object data) {
      return data;
   }

   public Object visit(ASTObjIdComponentList node, Object data) {
      return data;
   }

   public Object visit(ASTObjIdComponent node, Object data) {
      return data;
   }

   public Object visit(ASTNumberForm node, Object data) {
      return data;
   }

   public Object visit(ASTNameAndNumberForm node, Object data) {
      return data;
   }

   public Object visit(ASTBinaryString node, Object data) {
      return data;
   }

   public Object visit(ASTHexString node, Object data) {
      return data;
   }

   public Object visit(ASTCharString node, Object data) {
      return data;
   }

   public Object visit(ASTnumber node, Object data) {
      return data;
   }

   public Object visit(ASTidentifier node, Object data) {
      return data;
   }

   public Object visit(ASTmodulereference node, Object data) {
      return data;
   }

   public Object visit(ASTtypereference node, Object data) {
      return data;
   }

   public Object visit(ASTDefinedMacroType node, Object data) {
      return data;
   }

   public Object visit(ASTDefinedMacroName node, Object data) {
      return data;
   }

   public Object visit(ASTSnmpObjectTypeMacroType node, Object data) {
      return data;
   }

   public Object visit(ASTSnmpAccess node, Object data) {
      return data;
   }

   public Object visit(ASTSnmpStatus node, Object data) {
      return data;
   }

   public Object visit(ASTSnmpDescrPart node, Object data) {
      return data;
   }

   public Object visit(ASTSnmpReferPart node, Object data) {
      return data;
   }

   public Object visit(ASTSnmpIndexPart node, Object data) {
      return data;
   }

   public Object visit(ASTTypeOrValueList node, Object data) {
      return data;
   }

   public Object visit(ASTTypeOrValue node, Object data) {
      return data;
   }

   public Object visit(ASTSnmpDefValPart node, Object data) {
      return data;
   }

   public Object visit(ASTTextualConventionMacroType node, Object data) {
      return data;
   }

   public Object visit(ASTDisplayHint node, Object data) {
      return data;
   }

   public Object visit(ASTDefaultValue node, Object data) {
      return data;
   }
}
