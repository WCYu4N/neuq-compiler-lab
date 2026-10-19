%token IDENFR INTCON STRCON 
%token MAINTK CONSTTK INTTK BREAKTK CONTINUETK IFTK ELSETK 
%token NOT AND OR 
%token WHILETK GETINTTK PRINTFTK RETURNTK 
%token PLUS MINU VOIDTK MULT DIV MOD LSS LEQ GRE GEQ EQL NEQ 
%token ASSIGN SEMICN COMMA LPARENT RPARENT LBRACK RBRACK LBRACE RBRACE

%start CompUnit

%%
/* 1 */
CompUnit
    : DeclList FuncDefList MainFuncDef
    ;

DeclList
    : %empty
    | DeclList Decl
    ;

FuncDefList
    : %empty
    | FuncDefList FuncDef
    ;

/* 2 */
Decl 
    : ConstDecl
    | VarDecl
    ;

/* 3 */
FuncDef 
    : FuncType Ident LPARENT OptionalFuncFParams RPARENT Block
    ;

OptionalFuncFParams 
    : %empty
    | FuncFParams
    ;

/* 4 */
MainFuncDef
    : INTTK MAINTK LPARENT RPARENT Block
    ;

/* 5 */
ConstDecl
    : CONSTTK BType ConstDefList SEMICN
    ;

ConstDefList
    : ConstDef
    | ConstDefList COMMA ConstDef
    ;

/* 6 */
VarDecl 
    : BType VarDefList SEMICN
    ;

VarDefList
    : VarDef
    | VarDefList COMMA VarDef
    ;

/* 7 */
FuncType
    : VOIDTK
    | INTTK
    ;

/* 8 */
Ident 
    : IDENFR
    ;

/* 9 */
FuncFParams
    : FuncFParam
    | FuncFParams COMMA FuncFParam
    ;

/* 10 */
Block
    : LBRACE BlockItemList RBRACE
    ;

BlockItemList 
    : %empty
    | BlockItemList BlockItem
    ;

/* 11 */
BType 
    : INTTK
    ;

/* 12 */
VarDef
    : Ident BrackConstExpList
    | Ident BrackConstExpList ASSIGN InitVal
    ;


/* 13 */
FuncFParam
    : BType Ident OptionalParamArray
    ;

OptionalParamArray
    : %empty
    | LBRACK RBRACK BrackConstExpList
    ;

/* 14 */
BlockItem
    : Decl
    | Stmt
    ;

/* 15 */
ConstExp
    : AddExp
    ;

/* 16 */
InitVal 
    : Exp
    | LBRACE OptionalInitVal RBRACE
    ;

OptionalInitVal
    : %empty
    | InitVal InitValList
    ;

InitValList 
    : %empty
    | InitValList COMMA InitVal
    ;

/* 17 */
Stmt
    : LVal ASSIGN Exp SEMICN
    | OptionalExp SEMICN
    | Block
    | IFTK LPARENT Cond RPARENT Stmt OptionalElseStmt
    | WHILETK LPARENT Cond RPARENT Stmt
    | BREAKTK SEMICN
    | CONTINUETK SEMICN
    | RETURNTK OptionalExp SEMICN
    | LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN
    | PRINTFTK LPARENT FormatString CommaExpList RPARENT SEMICN
    ;

OptionalExp
    : %empty
    | Exp
    ;

OptionalElseStmt
    : %empty
    | ELSETK Stmt
    ;

CommaExpList
    : %empty
    | CommaExpList COMMA Exp
    ;

/* 18 */
AddExp
    : MulExp
    | AddExp PLUS MulExp
    | AddExp MINU MulExp
    ;

/* 19 */
Exp : AddExp ;

/* 20 */
LVal
    : Ident BrackExpList
    ;

BrackExpList
    : %empty
    | BrackExpList LBRACK Exp RBRACK
    ;

/* 21 */
Cond : LOrExp ;

/* 22 */
FormatString : STRCON ;

/* 23 */
MulExp
    : UnaryExp
    | MulExp MULT UnaryExp
    | MulExp DIV UnaryExp
    | MulExp MOD UnaryExp
    ;

/* 24 */
LOrExp
    : LAndExp
    | LOrExp OR LAndExp
    ;

/* 25 */
LAndExp
    : EqExp
    | LAndExp AND EqExp
    ;

/* 26 */
EqExp 
    : RelExp
    | EqExp EQL RelExp
    | EqExp NEQ RelExp
    ;

/* 27 */
UnaryExp
    : PrimaryExp
    | Ident LPARENT OptionalFuncRParams RPARENT
    | UnaryOp UnaryExp
    ;

OptionalFuncRParams
    : %empty
    | FuncRParams
    ;

/* 28 */
RelExp
    : AddExp
    | RelExp LSS AddExp
    | RelExp GRE AddExp
    | RelExp LEQ AddExp
    | RelExp GEQ AddExp
    ;

/* 32 */
PrimaryExp 
    : LPARENT Exp RPARENT
    | LVal
    | Number
    ;

/* 33 */
FuncRParams 
    : Exp CommaExpList
    ;

/* 34 */
Number
    : IntConst
    ;

/* 35 */
IntConst
    : INTCON
    ;

/* 38 */
UnaryOp 
    : PLUS
    | MINU
    | NOT
    ;

/* 39 */
ConstInitVal
    : ConstExp
    | LBRACE OptionalConstInitVal RBRACE
    ;

OptionalConstInitVal
    : %empty
    | ConstInitVal CommaConstInitValList
    ;

CommaConstInitValList 
    : %empty
    | CommaConstInitValList COMMA ConstInitVal
    ;

/* 40 */
ConstDef 
    : Ident BrackConstExpList
    | Ident BrackConstExpList ASSIGN ConstInitVal
    ;

BrackConstExpList
    : %empty
    | BrackConstExpList LBRACK ConstExp RBRACK
    ;
