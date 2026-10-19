%{
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

extern FILE *yyin;
extern int yylineno;
int yylex(void);
int yylex_destroy(void);
void yyerror(const char *message);
%}

/* 此声明也进入生成的头文件，供 Flex 使用节点指针。 */
%code requires {
    typedef struct SyntaxNode SyntaxNode;
}

%code provides {
    SyntaxNode *make_token(const char *category, const char *lexeme);
    void yyerror(const char *message);
}

%code {
    static SyntaxNode *make_node(const char *label, int count, ...);
    static SyntaxNode *syntax_root = NULL;
}

/* 每个 token 和非终结符携带一个节点指针。 */
%define api.value.type {SyntaxNode *}
%define parse.error detailed

%token IDENFR INTCON STRCON
%token MAINTK CONSTTK INTTK BREAKTK CONTINUETK IFTK ELSETK
%token NOT AND OR
%token WHILETK GETINTTK PRINTFTK RETURNTK
%token PLUS MINU VOIDTK MULT DIV MOD LSS LEQ GRE GEQ EQL NEQ
%token ASSIGN SEMICN COMMA LPARENT RPARENT LBRACK RBRACK LBRACE RBRACE

/* else 匹配最近的未匹配 if。 */
%precedence IF_WITHOUT_ELSE
%precedence ELSETK

%start CompUnit

%%

/* 1 */

CompUnit
    : DeclAndFuncPart
      { $$ = make_node("CompUnit", 1, $1); syntax_root = $$; }
    ;

DeclAndFuncPart
    : Decl DeclAndFuncPart
      { $$ = make_node(NULL, 2, $1, $2); }
    | FuncAndMainPart
      { $$ = $1; }
    ;

FuncAndMainPart
    : FuncDef FuncAndMainPart
      { $$ = make_node(NULL, 2, $1, $2); }
    | MainFuncDef
      { $$ = $1; }
    ;

/* 2 */
Decl
    : ConstDecl
      { $$ = $1; }
    | VarDecl
      { $$ = $1; }
    ;

/* 3 */
FuncDef
    : BType Ident LPARENT OptionalFuncFParams RPARENT Block
      { $$ = make_node("FuncDef", 6, make_node("FuncType", 1, $1), $2, $3, $4, $5, $6); }
    | VOIDTK Ident LPARENT OptionalFuncFParams RPARENT Block
      { $$ = make_node("FuncDef", 6, make_node("FuncType", 1, $1), $2, $3, $4, $5, $6); }
    ;

OptionalFuncFParams
    : %empty
      { $$ = NULL; }
    | FuncFParams
      { $$ = $1; }
    ;

/* 4 */
MainFuncDef
    : INTTK MAINTK LPARENT RPARENT Block
      { $$ = make_node("MainFuncDef", 5, $1, $2, $3, $4, $5); }
    ;

/* 5 */
ConstDecl
    : CONSTTK BType ConstDefList SEMICN
      { $$ = make_node("ConstDecl", 4, $1, $2, $3, $4); }
    ;

ConstDefList
    : ConstDef
      { $$ = $1; }
    | ConstDefList COMMA ConstDef
      { $$ = make_node(NULL, 3, $1, $2, $3); }
    ;

/* 6 */
VarDecl
    : BType VarDefList SEMICN
      { $$ = make_node("VarDecl", 3, $1, $2, $3); }
    ;

VarDefList
    : VarDef
      { $$ = $1; }
    | VarDefList COMMA VarDef
      { $$ = make_node(NULL, 3, $1, $2, $3); }
    ;

/* 7. 函数类型已合入 FuncDef：整数类型与变量声明共享 BType，
 * 避免看到 INTTK 时提前区分 BType 和 FuncType。
 * FuncDef 的语义动作已在函数类型外包装 FuncType 节点，保留输出标签。
 */

/* 8 */
Ident
    : IDENFR
      { $$ = $1; }
    ;

/* 9 */
FuncFParams
    : FuncFParamList
      { $$ = make_node("FuncFParams", 1, $1); }
    ;

/* 列表只负责收集形参，整张形参表只输出一次标签。 */
FuncFParamList
    : FuncFParam
      { $$ = $1; }
    | FuncFParamList COMMA FuncFParam
      { $$ = make_node(NULL, 3, $1, $2, $3); }
    ;

/* 10 */
Block
    : LBRACE BlockItemList RBRACE
      { $$ = make_node("Block", 3, $1, $2, $3); }
    ;

BlockItemList
    : %empty
      { $$ = NULL; }
    | BlockItemList BlockItem
      { $$ = make_node(NULL, 2, $1, $2); }
    ;

/* 11 */
BType
    : INTTK
      { $$ = $1; }
    ;

/* 12 */
VarDef
    : Ident BrackConstExpList
      { $$ = make_node("VarDef", 2, $1, $2); }
    | Ident BrackConstExpList ASSIGN InitVal
      { $$ = make_node("VarDef", 4, $1, $2, $3, $4); }
    ;


/* 13 */
FuncFParam
    : BType Ident OptionalParamArray
      { $$ = make_node("FuncFParam", 3, $1, $2, $3); }
    ;

OptionalParamArray
    : %empty
      { $$ = NULL; }
    | LBRACK RBRACK BrackConstExpList
      { $$ = make_node(NULL, 3, $1, $2, $3); }
    ;

/* 14 */
BlockItem
    : Decl
      { $$ = $1; }
    | Stmt
      { $$ = $1; }
    ;

/* 15 */
ConstExp
    : AddExp
      { $$ = make_node("ConstExp", 1, $1); }
    ;

/* 16 */
InitVal
    : Exp
      { $$ = make_node("InitVal", 1, $1); }
    | LBRACE OptionalInitVal RBRACE
      { $$ = make_node("InitVal", 3, $1, $2, $3); }
    ;

OptionalInitVal
    : %empty
      { $$ = NULL; }
    | InitVal InitValList
      { $$ = make_node(NULL, 2, $1, $2); }
    ;

InitValList
    : %empty
      { $$ = NULL; }
    | InitValList COMMA InitVal
      { $$ = make_node(NULL, 3, $1, $2, $3); }
    ;

/* 17 */
Stmt
    : LVal ASSIGN Exp SEMICN
      { $$ = make_node("Stmt", 4, $1, $2, $3, $4); }
    | OptionalExp SEMICN
      { $$ = make_node("Stmt", 2, $1, $2); }
    | Block
      { $$ = make_node("Stmt", 1, $1); }
    | IFTK LPARENT Cond RPARENT Stmt OptionalElseStmt
      { $$ = make_node("Stmt", 6, $1, $2, $3, $4, $5, $6); }
    | WHILETK LPARENT Cond RPARENT Stmt
      { $$ = make_node("Stmt", 5, $1, $2, $3, $4, $5); }
    | BREAKTK SEMICN
      { $$ = make_node("Stmt", 2, $1, $2); }
    | CONTINUETK SEMICN
      { $$ = make_node("Stmt", 2, $1, $2); }
    | RETURNTK OptionalExp SEMICN
      { $$ = make_node("Stmt", 3, $1, $2, $3); }
    | LVal ASSIGN GETINTTK LPARENT RPARENT SEMICN
      { $$ = make_node("Stmt", 6, $1, $2, $3, $4, $5, $6); }
    | PRINTFTK LPARENT FormatString CommaExpList RPARENT SEMICN
      { $$ = make_node("Stmt", 6, $1, $2, $3, $4, $5, $6); }
    ;

OptionalExp
    : %empty
      { $$ = NULL; }
    | Exp
      { $$ = $1; }
    ;

OptionalElseStmt
    : %empty %prec IF_WITHOUT_ELSE
      { $$ = NULL; }
    | ELSETK Stmt
      { $$ = make_node(NULL, 2, $1, $2); }
    ;

CommaExpList
    : %empty
      { $$ = NULL; }
    | CommaExpList COMMA Exp
      { $$ = make_node(NULL, 3, $1, $2, $3); }
    ;

/* 18 */
AddExp
    : MulExp
      { $$ = make_node("AddExp", 1, $1); }
    | AddExp PLUS MulExp
      { $$ = make_node("AddExp", 3, $1, $2, $3); }
    | AddExp MINU MulExp
      { $$ = make_node("AddExp", 3, $1, $2, $3); }
    ;

/* 19 */
Exp
    : AddExp
      { $$ = make_node("Exp", 1, $1); }
    ;

/* 20 */
LVal
    : Ident BrackExpList
      { $$ = make_node("LVal", 2, $1, $2); }
    ;

BrackExpList
    : %empty
      { $$ = NULL; }
    | BrackExpList LBRACK Exp RBRACK
      { $$ = make_node(NULL, 4, $1, $2, $3, $4); }
    ;

/* 21 */
Cond
    : LOrExp
      { $$ = make_node("Cond", 1, $1); }
    ;

/* 22 */
FormatString
    : STRCON
      { $$ = $1; }
    ;

/* 23 */
MulExp
    : UnaryExp
      { $$ = make_node("MulExp", 1, $1); }
    | MulExp MULT UnaryExp
      { $$ = make_node("MulExp", 3, $1, $2, $3); }
    | MulExp DIV UnaryExp
      { $$ = make_node("MulExp", 3, $1, $2, $3); }
    | MulExp MOD UnaryExp
      { $$ = make_node("MulExp", 3, $1, $2, $3); }
    ;

/* 24 */
LOrExp
    : LAndExp
      { $$ = make_node("LOrExp", 1, $1); }
    | LOrExp OR LAndExp
      { $$ = make_node("LOrExp", 3, $1, $2, $3); }
    ;

/* 25 */
LAndExp
    : EqExp
      { $$ = make_node("LAndExp", 1, $1); }
    | LAndExp AND EqExp
      { $$ = make_node("LAndExp", 3, $1, $2, $3); }
    ;

/* 26 */
EqExp
    : RelExp
      { $$ = make_node("EqExp", 1, $1); }
    | EqExp EQL RelExp
      { $$ = make_node("EqExp", 3, $1, $2, $3); }
    | EqExp NEQ RelExp
      { $$ = make_node("EqExp", 3, $1, $2, $3); }
    ;

/* 27 */
UnaryExp
    : PrimaryExp
      { $$ = make_node("UnaryExp", 1, $1); }
    | Ident LPARENT OptionalFuncRParams RPARENT
      { $$ = make_node("UnaryExp", 4, $1, $2, $3, $4); }
    | UnaryOp UnaryExp
      { $$ = make_node("UnaryExp", 2, $1, $2); }
    ;

OptionalFuncRParams
    : %empty
      { $$ = NULL; }
    | FuncRParams
      { $$ = $1; }
    ;

/* 28 */
RelExp
    : AddExp
      { $$ = make_node("RelExp", 1, $1); }
    | RelExp LSS AddExp
      { $$ = make_node("RelExp", 3, $1, $2, $3); }
    | RelExp GRE AddExp
      { $$ = make_node("RelExp", 3, $1, $2, $3); }
    | RelExp LEQ AddExp
      { $$ = make_node("RelExp", 3, $1, $2, $3); }
    | RelExp GEQ AddExp
      { $$ = make_node("RelExp", 3, $1, $2, $3); }
    ;

/* 32 */
PrimaryExp
    : LPARENT Exp RPARENT
      { $$ = make_node("PrimaryExp", 3, $1, $2, $3); }
    | LVal
      { $$ = make_node("PrimaryExp", 1, $1); }
    | Number
      { $$ = make_node("PrimaryExp", 1, $1); }
    ;

/* 33 */
FuncRParams
    : Exp CommaExpList
      { $$ = make_node("FuncRParams", 2, $1, $2); }
    ;

/* 34 */
Number
    : IntConst
      { $$ = make_node("Number", 1, $1); }
    ;

/* 35 */
IntConst
    : INTCON
      { $$ = $1; }
    ;

/* 38 */
UnaryOp
    : PLUS
      { $$ = make_node("UnaryOp", 1, $1); }
    | MINU
      { $$ = make_node("UnaryOp", 1, $1); }
    | NOT
      { $$ = make_node("UnaryOp", 1, $1); }
    ;

/* 39 */
ConstInitVal
    : ConstExp
      { $$ = make_node("ConstInitVal", 1, $1); }
    | LBRACE OptionalConstInitVal RBRACE
      { $$ = make_node("ConstInitVal", 3, $1, $2, $3); }
    ;

OptionalConstInitVal
    : %empty
      { $$ = NULL; }
    | ConstInitVal CommaConstInitValList
      { $$ = make_node(NULL, 2, $1, $2); }
    ;

CommaConstInitValList
    : %empty
      { $$ = NULL; }
    | CommaConstInitValList COMMA ConstInitVal
      { $$ = make_node(NULL, 3, $1, $2, $3); }
    ;

/* 40 */
ConstDef
    : Ident BrackConstExpList
      { $$ = make_node("ConstDef", 2, $1, $2); }
    | Ident BrackConstExpList ASSIGN ConstInitVal
      { $$ = make_node("ConstDef", 4, $1, $2, $3, $4); }
    ;

BrackConstExpList
    : %empty
      { $$ = NULL; }
    | BrackConstExpList LBRACK ConstExp RBRACK
      { $$ = make_node(NULL, 4, $1, $2, $3, $4); }
    ;


%%

/* label 为空的辅助节点只输出子节点；lexeme 非空表示 token。 */
struct SyntaxNode {
    const char *label;
    char *lexeme;
    SyntaxNode *first_child;
    SyntaxNode *last_child;
    SyntaxNode *next_sibling;
    SyntaxNode *parent;
    SyntaxNode *next_allocated;
};

/* 统一记录分配，语法出错时也能释放尚未组成完整树的节点。 */
static SyntaxNode *allocated_nodes = NULL;

static void free_nodes(void)
{
    while (allocated_nodes != NULL) {
        SyntaxNode *next = allocated_nodes->next_allocated;
        free(allocated_nodes->lexeme);
        free(allocated_nodes);
        allocated_nodes = next;
    }
    syntax_root = NULL;
}

static void *checked_alloc(size_t size)
{
    void *memory = calloc(1, size);
    if (memory == NULL) {
        fprintf(stderr, "语法分析失败：内存不足\n");
        exit(EXIT_FAILURE);
    }
    return memory;
}

static SyntaxNode *new_node(const char *label)
{
    SyntaxNode *node = checked_alloc(sizeof(*node));
    node->label = label;
    node->next_allocated = allocated_nodes;
    allocated_nodes = node;
    return node;
}

SyntaxNode *make_token(const char *category, const char *lexeme)
{
    SyntaxNode *node = new_node(category);
    /* 必须复制 yytext，后续扫描会修改 Flex 的缓冲区。 */
    size_t length = strlen(lexeme);
    node->lexeme = checked_alloc(length + 1);
    memcpy(node->lexeme, lexeme, length + 1);
    return node;
}

static SyntaxNode *make_node(const char *label, int count, ...)
{
    SyntaxNode *node = new_node(label);
    va_list children;
    va_start(children, count);
    for (int i = 0; i < count; ++i) {
        SyntaxNode *child = va_arg(children, SyntaxNode *);
        if (child == NULL) {
            continue; /* 空产生式没有子节点。 */
        }
        child->parent = node;
        if (node->last_child != NULL) {
            node->last_child->next_sibling = child;
        } else {
            node->first_child = child;
        }
        node->last_child = child;
    }
    va_end(children);
    return node;
}

/* 后序遍历：按源代码顺序输出子节点，最后输出当前语法成分。
 * 使用父节点和兄弟指针，避免长列表导致递归遍历栈溢出。
 */
static int write_tree(FILE *output, const SyntaxNode *root)
{
    const SyntaxNode *node = root;
    while (node != NULL && node->first_child != NULL) {
        node = node->first_child;
    }
    while (node != NULL) {
        if (node->lexeme != NULL) {
            if (fprintf(output, "%s %s\n", node->label, node->lexeme) < 0) {
                return -1;
            }
        } else if (node->label != NULL) {
            if (fprintf(output, "<%s>\n", node->label) < 0) {
                return -1;
            }
        }
        if (node->next_sibling != NULL) {
            node = node->next_sibling;
            while (node->first_child != NULL) {
                node = node->first_child;
            }
        } else {
            node = node->parent;
        }
    }
    return 0;
}

void yyerror(const char *message)
{
    fprintf(stderr, "第 %d 行：%s\n", yylineno, message);
}

int main(int argc, char **argv)
{
    if (argc > 3) {
        fprintf(stderr, "用法：%s [输入文件 [输出文件]]\n", argv[0]);
        return EXIT_FAILURE;
    }
    const char *input_path = argc > 1 ? argv[1] : "testfile.txt";
    const char *output_path = argc > 2 ? argv[2] : "output.txt";
    yyin = fopen(input_path, "r");
    if (yyin == NULL) {
        perror(input_path);
        return EXIT_FAILURE;
    }
    if (atexit(free_nodes) != 0) {
        fprintf(stderr, "无法注册内存清理函数\n");
        fclose(yyin);
        return EXIT_FAILURE;
    }

    int result = yyparse();
    fclose(yyin);
    yylex_destroy();
    if (result != 0) {
        return result;
    }

    /* 只有语法分析成功后才写结果，错误信息始终发往 stderr。 */
    FILE *output = fopen(output_path, "w");
    if (output == NULL) {
        perror(output_path);
        return EXIT_FAILURE;
    }
    int write_result = write_tree(output, syntax_root);
    int close_result = fclose(output);
    if (write_result != 0 || close_result == EOF) {
        fprintf(stderr, "写入 %s 失败\n", output_path);
        return EXIT_FAILURE;
    }

    printf("202411221 王程远\n");
    return EXIT_SUCCESS;
}
