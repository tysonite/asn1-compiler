// [The "BSD license"]
// Copyright (c) 2016, Mikhail Kulinich <tysonite@gmail.com>
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are permitted
// provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
// conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list of
// conditions and the following disclaimer in the documentation and/or other materials provided
// with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be used to
// endorse or promote products derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
// FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
// OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.

grammar ASN1;

// X.680: 12.1
moduleDefinition :
      (moduleIdentifier
      DEFINITIONS_WORD
      tagDefault
      extensionDefault
      ASSIGN
      BEGIN_WORD
            moduleBody
      END_WORD)+ EOF ;
moduleIdentifier : modulereference definitiveIdentifier ;
definitiveIdentifier : (L_BRACE definitiveObjIdComponentList R_BRACE)? ;
definitiveObjIdComponentList : definitiveObjIdComponent definitiveObjIdComponent* ;
definitiveObjIdComponent :
      nameForm
      | definitiveNumberForm
      | definitiveNameAndNumberForm ;
definitiveNumberForm : number ;
definitiveNameAndNumberForm : identifier L_PAREN definitiveNumberForm R_PAREN ;
tagDefault : ((EXPLICIT_WORD | IMPLICIT_WORD | AUTOMATIC_WORD) TAGS_WORD)? ;
extensionDefault : (EXTENSIBILITY_WORD IMPLIED_WORD)? ;
moduleBody : exports? imports? assignmentList? ;
exports :
      EXPORTS_WORD symbolsExported ';'
      | EXPORTS_WORD ALL_WORD ';' ;
symbolsExported : symbolList? ;
imports : IMPORTS_WORD symbolsImported ';' ;
symbolsImported : symbolsFromModuleList? ;
symbolsFromModuleList : symbolsFromModule symbolsFromModule* ;
symbolsFromModule : symbolList FROM_WORD globalModuleReference ;
globalModuleReference : modulereference assignedIdentifier ;
assignedIdentifier : (objectIdentifierValue | definedValue)? ;
symbolList : symbol (COMMA symbol)* ;
symbol : reference | parameterizedReference ;
reference :
      typereference
      | valuereference
      | objectclassreference
      | objectreference
      | objectsetreference ;
assignmentList : assignment assignment* ;
assignment :
      typeAssignment
      | valueAssignment
      | valueSetTypeAssignment
      | objectClassAssignment
      | objectAssignment
      | objectSetAssignment
      | parameterizedAssignment ;

// X.680: 13: Referencing type and value definitions
// X.680: 13.1
definedType : externalTypeReference | typereference | parameterizedType | parameterizedValueSetType;
definedValue : externalValueReference | valuereference | parameterizedValue ;
// X.680: 13.6
externalTypeReference : modulereference DOT typereference ;
externalValueReference : modulereference DOT valuereference ;

// X.680: 15: Assigning types and values
// X.680: 15.1
typeAssignment : typereference ASSIGN type ;
// X.680: 15.2
valueAssignment : valuereference type ASSIGN value ;
// X.680: 15.6
valueSetTypeAssignment : typereference type ASSIGN valueSet ;
// X.680: 15.7
valueSet : L_BRACE elementSetSpecs R_BRACE ;

// X.680: 16: Definition of types and values
// X.680: 16.1
type : builtinType | referencedType | constrainedType ;
// X.680: 16.2
builtinType :
      bitStringType
      | booleanType
      | characterStringType
      | choiceType
//      | embeddedPDVType
      | enumeratedType
//      | externalType
//      | instanceOfType
      | integerType
      | nullType
      | objectClassFieldType
      | objectIdentifierType
      | octetStringType
//      | realType
//      | relativeOIDType
      | sequenceType
      | sequenceOfType
      | setType
      | setOfType
      | taggedType
      | anyType // Deprecated since 1994
      ;
// X.680: 16.3
referencedType :
      definedType
      | usefulType
//      | selectionType
      | typeFromObject // X.681
      | valueSetFromObjects ; // X.681
// X.680: 16.5
namedType : identifier type ;
// X.680: 16.7
value : builtinValue | referencedValue | objectClassFieldValue ;
// X.680: 16.9:
builtinValue :
      bitStringValue
      | booleanValue
      | characterStringValue
//      | choiceValue
//      | embeddedPDVValue
      | enumeratedValue
//      | externalValue
//      | instanceOfValue
      | integerValue
      | nullValue
      | objectIdentifierValue
      | octetStringValue
//      | realValue
//      | relativeOIDValue
      | sequenceValue
      | sequenceOfValue
      | setValue
      | setOfValue
//      | taggedValue
      ;
// X.680: 16.11
referencedValue : definedValue | valueFromObject ;
// X.680: 16.13
namedValue : identifier value ;

// X.680: 17
// X.680: 17.1
booleanType : BOOLEAN_WORD ;
// X.680: 17.3
booleanValue : TRUE_WORD | FALSE_WORD ;

// X.680: 18: Notation for the integer type
// X.680: 18.1
integerType : INTEGER_WORD | INTEGER_WORD L_BRACE namedNumberList R_BRACE ;
namedNumberList : namedNumber (COMMA namedNumber)* ;
namedNumber : identifier L_PAREN signedNumber R_PAREN
      | identifier L_PAREN definedValue R_PAREN ;
signedNumber : number | MINUS number ;
// X.680: 18.9
integerValue : signedNumber | identifier ;

// X.680: 19: Notation for the enumerated type
// X.680: 19.1
enumeratedType : ENUMERATED_WORD L_BRACE enumerations R_BRACE ;
enumerations :
      rootEnumeration
      | rootEnumeration COMMA ELLIPSIS exceptionSpec
      | rootEnumeration COMMA ELLIPSIS exceptionSpec COMMA additionalEnumeration ;
rootEnumeration : enumeration ;
additionalEnumeration : enumeration ;
enumeration : enumerationItem (COMMA enumerationItem)* ;
enumerationItem : identifier | namedNumber ;
// X.680: 19.8
enumeratedValue : identifier ;

// X.680: 21: Notation for the bitstring type
// X.680: 21.1
bitStringType : (BIT_WORD STRING_WORD) | ((BIT_WORD STRING_WORD) L_BRACE namedBitList R_BRACE) ;
namedBitList : namedBit (COMMA namedBit)* ;
namedBit : identifier L_PAREN number R_PAREN | identifier L_PAREN definedValue R_PAREN ;
// X.680: 21.9
bitStringValue :
      bstring
      | hstring
      | L_BRACE identifierList R_BRACE
      | L_BRACE R_BRACE
      | CONTAINING_WORD value ;
identifierList : identifier (COMMA identifier)* ;

// X.680: 22: Notation for the octetstring type
// X.680: 22.1
octetStringType : OCTET_WORD STRING_WORD ;
// X.680: 22.3
octetStringValue : bstring | hstring | CONTAINING_WORD value ;

// X.680: 23: Notation for the null type
// X.680: 23.1
nullType : NULL_WORD ;
// X.680: 23.2
nullValue : NULL_WORD ;

// X.680: 24: Notation for sequence types
// X.680: 24.1
sequenceType :
      SEQUENCE_WORD L_BRACE R_BRACE
      | SEQUENCE_WORD L_BRACE extensionAndException R_BRACE
      | SEQUENCE_WORD L_BRACE componentTypeLists R_BRACE ;
componentTypeLists :
      rootComponentTypeList
      | rootComponentTypeList COMMA extensionAndException extensionAdditions optionalExtensionMarker
      | rootComponentTypeList COMMA extensionAndException extensionAdditions extensionEndMarker COMMA rootComponentTypeList
      | extensionAndException extensionAdditions extensionEndMarker COMMA rootComponentTypeList
      | extensionAndException extensionAdditions optionalExtensionMarker ;
rootComponentTypeList : componentTypeList ;
extensionEndMarker : (COMMA ELLIPSIS) ; 
extensionAdditions : (COMMA extensionAdditionList)? ;
extensionAdditionList : extensionAddition (COMMA extensionAddition)* ;
extensionAddition : componentType | extensionAdditionGroup ;
extensionAdditionGroup : LV_BRACKET versionNumber componentTypeList RV_BRACKET ;
versionNumber : (number COLON)? ;
componentTypeList : componentType (COMMA componentType)* ;
componentType : namedType | namedType OPTIONAL_WORD | namedType DEFAULT_WORD value
      | COMPONENTS_WORD OF_WORD type ;
// X.680: 24.17
sequenceValue : L_BRACE componentValueList R_BRACE
      | L_BRACE R_BRACE ;
componentValueList : namedValue (COMMA namedValue)* ;

// X.680: 25: Notation for sequence-of types
// X.680: 25.1
sequenceOfType : SEQUENCE_WORD OF_WORD type | SEQUENCE_WORD OF_WORD namedType ;
// X.680: 25.3
sequenceOfValue :
      L_BRACE valueList R_BRACE
      | L_BRACE namedValueList R_BRACE
      | L_BRACE R_BRACE ;
valueList : value (COMMA value)* ;
namedValueList : namedValue (COMMA namedValue)* ;

// X.680: 26: Notation for set types
// X.680: 26.1
setType :
      SET_WORD L_BRACE R_BRACE
      | SET_WORD L_BRACE extensionAndException optionalExtensionMarker R_BRACE
      | SET_WORD L_BRACE componentTypeLists R_BRACE ;
// X.680: 26.7
setValue : L_BRACE componentValueList R_BRACE
      | L_BRACE R_BRACE ;

// X.680: 27.1
setOfType : SET_WORD OF_WORD type
      | SET_WORD OF_WORD namedType ;
// X.680: 27.3
setOfValue : L_BRACE valueList R_BRACE
      | L_BRACE namedValueList R_BRACE
      | L_BRACE R_BRACE ;

// X.680: 28.1
choiceType : CHOICE_WORD L_BRACE alternativeTypeLists R_BRACE ;
alternativeTypeLists : rootAlternativeTypeList
      | rootAlternativeTypeList COMMA extensionAndException extensionAdditionAlternatives optionalExtensionMarker;
rootAlternativeTypeList : alternativeTypeList ;
extensionAdditionAlternatives : (COMMA extensionAdditionAlternativesList)* ;
extensionAdditionAlternativesList : extensionAdditionAlternative
      | extensionAdditionAlternativesList COMMA extensionAdditionAlternative ;
extensionAdditionAlternative : extensionAdditionAlternativesGroup | namedType ;
extensionAdditionAlternativesGroup : LV_BRACKET versionNumber alternativeTypeList RV_BRACKET ;
alternativeTypeList : namedType (COMMA namedType)* ;

// X.680: 30: Notation for tagged types
// X.680: 30.1
taggedType :
      tag type
      | tag IMPLICIT_WORD type
      | tag EXPLICIT_WORD type ;
tag : '[' classP classNumber ']' ;
classNumber : number | definedValue ;
classP :
      (
      UNIVERSAL_WORD
      | APPLICATION_WORD
      | PRIVATE_WORD
      )? ;

// X.680: 31.1
objectIdentifierType : OBJECT_WORD IDENTIFIER_WORD ;
// X.680: 31.3
objectIdentifierValue : L_BRACE objIdComponentsList R_BRACE
      | L_BRACE definedValue objIdComponentsList R_BRACE ;
objIdComponentsList : values+=objIdComponents (values+=objIdComponents)* ;
objIdComponents : nameForm | numberForm | nameAndNumberForm | definedValue ;
nameForm : identifier ;
numberForm : number | definedValue ;
nameAndNumberForm : identifier L_PAREN numberForm R_PAREN ;

extensionAndException : ELLIPSIS | ELLIPSIS exceptionSpec ;
exceptionSpec : ('!' exceptionIdentification)? ;
exceptionIdentification : signedNumber | definedValue | type COLON value ;
optionalExtensionMarker : (COMMA ELLIPSIS)? ;

// X.680: 36: Notation for character string types
// X.680: 36.1
characterStringType : restrictedCharacterStringType | unrestrictedCharacterStringType ;
// X.680: 36.3
characterStringValue : restrictedCharacterStringValue /* | unrestrictedCharacterStringValue */ ;

// X.680: 37: Definition of restricted character string types
// X.680: 37.0
restrictedCharacterStringType :
      BMPString_WORD
      | GeneralString_WORD
      | GraphicString_WORD
      | IA5String_WORD
      | ISO646String_WORD
      | NumericString_WORD
      | PrintableString_WORD
      | TeletexString_WORD
      | T61String_WORD
      | UniversalString_WORD
      | UTF8String_WORD
      | VideotexString_WORD
      | VisibleString_WORD ;
// X.680: 37.8
restrictedCharacterStringValue :
      cstring
      | characterStringList
      | quadruple
      | tuple ;
characterStringList : L_BRACE charSyms R_BRACE ;
charSyms : charsDefn (COMMA charsDefn)* ;
charsDefn : cstring | quadruple | tuple | definedValue ;
quadruple : L_BRACE group COMMA plane COMMA row COMMA cell R_BRACE ;
group : number ;
plane : number ;
row : number ;
cell : number ;
tuple : L_BRACE tableColumn COMMA tableRow R_BRACE ;
tableColumn : number ;
tableRow : number ;

// X.680: 40.1
unrestrictedCharacterStringType : CHARACTER_WORD STRING_WORD ;

// X.680: 41.1
usefulType :
      GeneralizedTime_WORD # GeneralizedTimeType
      | UTCTime_WORD       # UTCTimeType
      ;

// X.680: 45: Constrained types
// X.680: 45.1
constrainedType : (builtinType | referencedType) constraint | typeWithConstraint ;
// X.680: 45.5
typeWithConstraint :
      SET_WORD constraint OF_WORD type
      | SET_WORD sizeConstraint OF_WORD type
      | SEQUENCE_WORD constraint OF_WORD type
      | SEQUENCE_WORD sizeConstraint OF_WORD type
      | SET_WORD constraint OF_WORD namedType
      | SET_WORD sizeConstraint OF_WORD namedType
      | SEQUENCE_WORD constraint OF_WORD namedType
      | SEQUENCE_WORD sizeConstraint OF_WORD namedType ;
// X.680: 45.6
constraint : L_PAREN constraintSpec exceptionSpec R_PAREN ;
constraintSpec : subtypeConstraint | generalConstraint ;
// X.680: 45.7
subtypeConstraint : elementSetSpecs ;

// X.682: 8: General constraint specification
// X.682: 8.1
generalConstraint :
      userDefinedConstraint
      |  tableConstraint
      |  contentsConstraint ;

// X.680: 46: Element set specification
// X.680: 46.1
elementSetSpecs :
      rootElementSetSpec
      | rootElementSetSpec COMMA ELLIPSIS
      | rootElementSetSpec COMMA ELLIPSIS COMMA additionalElementSetSpec ;
rootElementSetSpec : elementSetSpec ;
additionalElementSetSpec : elementSetSpec ;
elementSetSpec : unions | ALL_WORD exclusions ;
unions : intersections | unions unionMark intersections ;
uElems : unions ;
intersections : intersectionElements | intersections intersectionMark intersectionElements ;
iElems : intersections ;
intersectionElements : elements | elems exclusions ;
elems : elements ;
exclusions : EXCEPT_WORD elements ;
unionMark : '|' | UNION_WORD ;
intersectionMark : '^' | INTERSECTION_WORD ;
// X.680: 46.5
elements : subtypeElements | objectSetElements | L_PAREN elementSetSpec R_PAREN ;

// X.680: 47: Subtype elements
// X.680: 47.1
subtypeElements :
      singleValue
      | containedSubtype 
      | valueRange
      | permittedAlphabet
      | sizeConstraint
//      | typeConstraint
//      | innerTypeConstraints
/*      | patternConstraint */ ;
// X.680: 47.2.1
singleValue : value ;
// X.680: 47.3.1
containedSubtype : includes type ;
includes : INCLUDES_WORD? ;
// X.680: 47.4: Value range
// X.680: 47.4.1
valueRange : lowerEndpoint RANGE upperEndpoint ;
// X.680: 47.4.3
lowerEndpoint : lowerEndValue | lowerEndValue '<' ;
upperEndpoint : upperEndValue | '<' upperEndValue ;
// X.680: 47.4.4
lowerEndValue : value | MIN_WORD ;
upperEndValue : value | MAX_WORD ;
// X.680: 47.5.1
sizeConstraint : SIZE_WORD constraint ;
// X.680: 47.7.1
permittedAlphabet : FROM_WORD constraint ;

// X.682: 9: User-defined constraints
// X.682: 9.1
userDefinedConstraint : CONSTRAINED_WORD BY_WORD
      L_BRACE userDefinedConstraintParameter? (COMMA userDefinedConstraintParameter)* R_BRACE ;
userDefinedConstraintParameter :
      governor COLON value
      | governor COLON valueSet
      | governor COLON object
      | governor COLON objectSet
      | type
      | definedObjectClass ;

// X.682: 10:
// X.682: 10.3
tableConstraint : simpleTableConstraint | componentRelationConstraint ;
simpleTableConstraint : objectSet ;
// X.682: 10.7
componentRelationConstraint : L_BRACE definedObjectSet R_BRACE L_BRACE atNotation (COMMA atNotation)* R_BRACE ;
atNotation : '@' componentIdList | '@.' level componentIdList ;
level : DOT level | ;
componentIdList : identifier (DOT identifier)* ;

// X.682: 11: Contents constraints
// X.682: 11.1
contentsConstraint :
      CONTAINING_WORD type
      | ENCODED_WORD BY_WORD value
      | CONTAINING_WORD type ENCODED_WORD BY_WORD value ;

// X.681: 8: Referencing definitions
// X.681: 8.1
definedObjectClass :
      externalObjectClassReference
      | objectclassreference
      | usefulObjectClassReference ;
definedObject : externalObjectReference | objectreference ;
definedObjectSet : externalObjectSetReference | objectsetreference ;
// X.681: 8.3
externalObjectClassReference : modulereference DOT objectclassreference ;
externalObjectReference : modulereference DOT objectreference ;
externalObjectSetReference : modulereference DOT objectsetreference ;
// X.681: 8.4
usefulObjectClassReference : TYPE_IDENTIFIER_WORD | ABSTRACT_SYNTAX_WORD ;

// X.681: 9: Information object class definition and assignment
// X.681: 9.1
objectClassAssignment : objectclassreference ASSIGN objectClass ;
// X.681: 9.2
objectClass : definedObjectClass | objectClassDefn | parameterizedObjectClass ;
// X.681: 9.3
objectClassDefn : CLASS_WORD L_BRACE fieldSpec (COMMA fieldSpec)* R_BRACE withSyntaxSpec? ;
withSyntaxSpec : WITH_WORD SYNTAX_WORD syntaxList ;
// X.681: 9.4
fieldSpec :
      typeFieldSpec
      | fixedTypeValueFieldSpec
      | variableTypeValueFieldSpec
      | fixedTypeValueSetFieldSpec
      | variableTypeValueSetFieldSpec
      | objectFieldSpec
      | objectSetFieldSpec ;
// X.681: 9.5
typeFieldSpec : typefieldreference typeOptionalitySpec? ;
typeOptionalitySpec : OPTIONAL_WORD | (DEFAULT_WORD type) ;
// X.681: 9.6
fixedTypeValueFieldSpec : valuefieldreference type UNIQUE_WORD? valueOptionalitySpec? ;
valueOptionalitySpec : OPTIONAL_WORD | (DEFAULT_WORD value) ;
// X.681: 9.8
variableTypeValueFieldSpec : valuefieldreference fieldName valueOptionalitySpec? ;
// X.681: 9.9
fixedTypeValueSetFieldSpec : valuesetfieldreference type valueSetOptionalitySpec? ;
valueSetOptionalitySpec : OPTIONAL_WORD | (DEFAULT_WORD valueSet) ;
// X.681: 9.10
variableTypeValueSetFieldSpec : valuesetfieldreference fieldName valueSetOptionalitySpec? ;
// X.681: 9.11
objectFieldSpec : objectfieldreference definedObjectClass objectOptionalitySpec? ;
objectOptionalitySpec : OPTIONAL_WORD | (DEFAULT_WORD object);
// X.681: 9.12
objectSetFieldSpec : objectsetfieldreference definedObjectClass objectSetOptionalitySpec? ;
objectSetOptionalitySpec : OPTIONAL_WORD | (DEFAULT_WORD objectSet) ;
// X.681: 9.13
primitiveFieldName :
      typefieldreference
      | valuefieldreference
      | valuesetfieldreference
      | objectfieldreference
      | objectsetfieldreference ;
// X.681: 9.14
fieldName : primitiveFieldName (DOT primitiveFieldName)* ;

// X.681: 10.5
syntaxList : L_BRACE tokenOrGroupSpec tokenOrGroupSpec* R_BRACE ;
tokenOrGroupSpec : requiredToken | optionalGroup ;
optionalGroup : '[' tokenOrGroupSpec tokenOrGroupSpec* ']' ;
requiredToken : literal | primitiveFieldName ;
// X.681: 10.7
literal : word | COMMA ;

// X.681: 11: Information object definition and assignment
// X.681: 11.1
objectAssignment : objectreference definedObjectClass ASSIGN object ;
// X.681: 11.3
object :
      definedObject
      | objectDefn
      | objectFromObject
      | parameterizedObject ;
// X.681: 11.4
objectDefn : defaultSyntax | definedSyntax ;
// X.681: 11.5
defaultSyntax : L_BRACE fieldSetting? (COMMA fieldSetting)* R_BRACE ;
fieldSetting : primitiveFieldName setting ;
// X.681: 11.6
definedSyntax : L_BRACE definedSyntaxToken* R_BRACE ;
definedSyntaxToken : literal | setting ;
// X.681: 11.7
setting :
      type
      | value
      | valueSet
      | object
      | objectSet ;

// X.681: 12: Information object set definition and assignment
// X.681: 12.1
objectSetAssignment : objectsetreference definedObjectClass ASSIGN objectSet ;
// X.681: 12.3
objectSet : L_BRACE objectSetSpec R_BRACE ;
objectSetSpec :
      rootElementSetSpec
      | rootElementSetSpec COMMA ELLIPSIS
      | ELLIPSIS
      | ELLIPSIS COMMA additionalElementSetSpec
      | rootElementSetSpec COMMA ELLIPSIS COMMA additionalElementSetSpec ;
// X.681: 12.10
objectSetElements :
      object
      | definedObjectSet
      | objectSetFromObjects
      | parameterizedObjectSet ;

// X.681: 14: Notation for the object class field type
// X.681: 14.1
objectClassFieldType : definedObjectClass DOT fieldName ;
// X.681: 14.6
objectClassFieldValue : openTypeFieldVal | fixedTypeFieldVal ;
openTypeFieldVal : type COLON value ;
fixedTypeFieldVal : builtinValue | referencedValue ;

// X.681: 15: Information from objects
// X.681: 15.1
valueFromObject : referencedObjects DOT fieldName ;
valueSetFromObjects : referencedObjects DOT fieldName ;
typeFromObject : referencedObjects DOT fieldName ;
objectFromObject : referencedObjects DOT fieldName ;
objectSetFromObjects : referencedObjects DOT fieldName ;
referencedObjects :
      definedObject
      | parameterizedObject
      | definedObjectSet
      | parameterizedObjectSet ;

// Deprecated types
anyType : ANY_WORD (DEFINED_WORD BY_WORD)? identifier? ;

// X.681: 7: ASN.1 lexical items
// X.681: 7.1
objectclassreference : { !_input.LT(1).getText().matches(".*[a-z]+.*") }? ReferenceItem ;
// X.681: 7.2
objectreference : IdentifierOrValueItem ;
// X.681: 7.3
objectsetreference : ReferenceItem ;
// X.681: 7.4
typefieldreference : '&' ReferenceItem ;
// X.681: 7.5
valuefieldreference : '&' IdentifierOrValueItem ;
// X.681: 7.6
valuesetfieldreference : '&' ReferenceItem ;
// X.681: 7.7
objectfieldreference : '&' IdentifierOrValueItem ;
// X.681: 7.8
objectsetfieldreference : '&' ReferenceItem ;
// X.681: 7.9
word : { !_input.LT(1).getText().matches(".*[a-z]+.*") && !_input.LT(1).getText().matches(".*[0-9]+.*") }? ReferenceItem ;

// X.683: 8: Parameterized assignments
// X.683: 8.1
parameterizedAssignment :
      parameterizedTypeAssignment
      | parameterizedValueAssignment
      | parameterizedValueSetTypeAssignment
      | parameterizedObjectClassAssignment
      | parameterizedObjectAssignment
      | parameterizedObjectSetAssignment ;
// X.683: 8.2
parameterizedTypeAssignment : typereference parameterList ASSIGN type ;
parameterizedValueAssignment : valuereference parameterList type ASSIGN value ;
parameterizedValueSetTypeAssignment : typereference parameterList type ASSIGN valueSet ;
parameterizedObjectClassAssignment : objectclassreference parameterList ASSIGN objectClass ;
parameterizedObjectAssignment : objectreference parameterList definedObjectClass ASSIGN object ;
parameterizedObjectSetAssignment : objectsetreference parameterList definedObjectClass ASSIGN objectSet ;
// X.683: 8.3
parameterList : L_BRACE parameter (COMMA parameter)* R_BRACE ;
parameter : (paramGovernor COLON dummyReference) | dummyReference ;
paramGovernor : governor | dummyGovernor ;
governor : type | definedObjectClass ;
dummyGovernor : dummyReference ;
dummyReference : reference ;

// X.683: 9: Referencing parameterized definitions
// X.683: 9.1
parameterizedReference : reference | reference L_BRACE R_BRACE ;
// X.683: 9.2
parameterizedType : simpleDefinedType actualParameterList ;
simpleDefinedType : externalTypeReference | typereference ;
parameterizedValue : simpleDefinedValue actualParameterList ;
simpleDefinedValue : externalValueReference | valuereference ;
parameterizedValueSetType : simpleDefinedType actualParameterList ;
parameterizedObjectClass : definedObjectClass actualParameterList ;
parameterizedObjectSet : definedObjectSet actualParameterList ;
parameterizedObject : definedObject actualParameterList ;
// X.683: 9.5
actualParameterList : L_BRACE actualParameter (COMMA actualParameter)* R_BRACE ;
actualParameter :
      type
      | value
      | valueSet
      | definedObjectClass
      | object
      | objectSet ;

// X.680: 11: ASN.1 lexical items
// X.680: 11.2
typereference : ReferenceItem ;
// X.680: 11.3
identifier : IdentifierOrValueItem ;
// X.680: 11.4
valuereference : IdentifierOrValueItem ;
// X.680: 11.5
modulereference : ReferenceItem ;
// X.680: 11.8
number : NumberItem ;
// X.680: 11.10: Binary strings
bstring : BStringItem ;
// X.680: 11.12: Hexadecimal strings
hstring : HStringItem ;
// X.680: 11.14: Character strings
cstring : CStringItem ;

//
// LEXER
//

// X.680, X.681: Reserved words
ABSENT_WORD : 'ABSENT' ;
ENCODED_WORD : 'ENCODED' ; // X.681
INTEGER_WORD : 'INTEGER' ;
RELATIVE_OID_WORD : 'RELATIVE-OID' ;
ABSTRACT_SYNTAX_WORD : 'ABSTRACT-SYNTAX' ;
END_WORD : 'END' ;
INTERSECTION_WORD : 'INTERSECTION' ;
SEQUENCE_WORD : 'SEQUENCE' ;
ALL_WORD : 'ALL' ;
ENUMERATED_WORD : 'ENUMERATED' ;
ISO646String_WORD : 'ISO646String' ;
SET_WORD : 'SET' ;
APPLICATION_WORD : 'APPLICATION' ;
EXCEPT_WORD : 'EXCEPT' ;
MAX_WORD : 'MAX' ;
SIZE_WORD : 'SIZE' ;
AUTOMATIC_WORD : 'AUTOMATIC' ;
EXPLICIT_WORD : 'EXPLICIT' ;
MIN_WORD : 'MIN' ;
STRING_WORD : 'STRING' ;
BEGIN_WORD : 'BEGIN' ;
EXPORTS_WORD : 'EXPORTS' ;
MINUS_INFINITY_WORD : 'MINUS-INFINITY' ;
SYNTAX_WORD : 'SYNTAX' ; // X.681
BIT_WORD : 'BIT' ;
EXTENSIBILITY_WORD : 'EXTENSIBILITY' ;
NULL_WORD : 'NULL' ;
T61String_WORD : 'T61String' ;
BMPString_WORD : 'BMPString' ;
EXTERNAL_WORD : 'EXTERNAL' ;
NumericString_WORD : 'NumericString' ;
TAGS_WORD : 'TAGS' ;
BOOLEAN_WORD : 'BOOLEAN' ;
FALSE_WORD : 'FALSE' ;
OBJECT_WORD : 'OBJECT' ;
TeletexString_WORD : 'TeletexString' ;
BY_WORD : 'BY' ;
FROM_WORD : 'FROM' ;
ObjectDescriptor_WORD : 'ObjectDescriptor' ;
TRUE_WORD : 'TRUE' ;
CHARACTER_WORD : 'CHARACTER' ;
GeneralizedTime_WORD : 'GeneralizedTime' ;
OCTET_WORD : 'OCTET' ;
TYPE_IDENTIFIER_WORD : 'TYPE-IDENTIFIER' ;
CHOICE_WORD : 'CHOICE' ;
GeneralString_WORD : 'GeneralString' ;
OF_WORD : 'OF' ;
UNION_WORD : 'UNION' ;
CLASS_WORD : 'CLASS' ; // X.681
GraphicString_WORD : 'GraphicString' ;
OPTIONAL_WORD : 'OPTIONAL' ;
UNIQUE_WORD : 'UNIQUE' ; // X.681
COMPONENT_WORD : 'COMPONENT' ;
IA5String_WORD : 'IA5String' ;
PATTERN_WORD : 'PATTERN' ;
UNIVERSAL_WORD : 'UNIVERSAL' ;
COMPONENTS_WORD : 'COMPONENTS' ;
IDENTIFIER_WORD : 'IDENTIFIER' ;
PDV_WORD : 'PDV' ;
UniversalString_WORD : 'UniversalString' ;
CONSTRAINED_WORD : 'CONSTRAINED' ; // X.681
IMPLICIT_WORD : 'IMPLICIT' ;
PLUS_INFINITY_WORD : 'PLUS-INFINITY' ;
UTCTime_WORD : 'UTCTime' ;
CONTAINING_WORD : 'CONTAINING' ; // X.681
IMPLIED_WORD : 'IMPLIED' ;
PRESENT_WORD : 'PRESENT' ;
UTF8String_WORD : 'UTF8String' ;
DEFAULT_WORD : 'DEFAULT' ;
IMPORTS_WORD : 'IMPORTS' ;
PrintableString_WORD : 'PrintableString' ;
VideotexString_WORD : 'VideotexString' ;
DEFINITIONS_WORD : 'DEFINITIONS' ;
INCLUDES_WORD : 'INCLUDES' ;
PRIVATE_WORD : 'PRIVATE' ;
VisibleString_WORD : 'VisibleString' ;
EMBEDDED_WORD : 'EMBEDDED' ;
INSTANCE_WORD : 'INSTANCE' ; // X.681
REAL_WORD : 'REAL' ;
WITH_WORD : 'WITH' ;
// Deprecated reserved words
ANY_WORD : 'ANY' ;
DEFINED_WORD : 'DEFINED' ;

L_BRACE : '{' ;
R_BRACE : '}' ;
L_PAREN : '(' ;
R_PAREN : ')' ;

ASSIGN : '::=' ;
RANGE : '..' ;
ELLIPSIS : '...' ;
LV_BRACKET : '[[' ;
RV_BRACKET : ']]' ;
COLON : ':' ;
DOT : '.' ;
COMMA : ',' ;
MINUS : '-' ;

// Common rules
fragment UC_LETTER : 'A'..'Z' ;
fragment LC_LETTER : 'a'..'z' ;
fragment DIGIT : '0'..'9' ;
fragment NON_ZERO_DIGIT : '1'..'9' ;

fragment BINARY_DIGITS : BINARY_DIGIT+ ;
fragment BINARY_DIGIT : '0'..'1' ;

fragment HEX_DIGITS : HEX_DIGIT+ ;
fragment HEX_DIGIT : DIGIT | 'A'..'F' ;

fragment HYPHEN : '-' ;

fragment STRING_CHARACTERS : STRING_CHARACTER+ ;
fragment STRING_CHARACTER : ~["\\] ;

NumberItem : '0' | NON_ZERO_DIGIT DIGIT* ;
BStringItem : '\'' BINARY_DIGITS? '\'B' ;
HStringItem : '\'' HEX_DIGITS? '\'H' ;
CStringItem : '"' STRING_CHARACTERS? '"' ;

IdentifierOrValueItem : (LC_LETTER) (LC_LETTER | UC_LETTER | DIGIT | HYPHEN)* ;
ReferenceItem : (UC_LETTER) (LC_LETTER | UC_LETTER | DIGIT | HYPHEN)* ;

// X.680: 11.1.6
WHITESPACE : [ \t\r\n\f]+ -> channel(HIDDEN) ;

// X.680: 11.6: Comments
// X.680: 11.6.3
HYPHENS_COMMENT : '--' (.*? ('--' | EOF | '\r'? '\n')) -> channel(HIDDEN) ;
// X.680: 11.6.4
BLOCK_COMMENT : '/*' (BLOCK_COMMENT | .)*? '*/' -> channel(HIDDEN) ;
