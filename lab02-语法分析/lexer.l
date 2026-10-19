%option noyywrap noinput nounput
%option yylineno
%x COMMENT

%{
  #include <stdio.h>
  #include "parser-fixed.tab.h"

  /* 返回种别，同时把包含单词原文的节点交给 Bison。 */
  #define RETURN_TOKEN(kind) do { \
      yylval = make_token(#kind, yytext); \
      return kind; \
  } while (0)
%}
Ident [a-zA-Z_][a-zA-Z0-9_]*
IntConst (0|[1-9][0-9]*)
FormatChar %d
NormalChar ([\x20\x21\x28-\x5B\x5D-\x7E]|\\n)
Char ({FormatChar}|{NormalChar})
FormatString \"{Char}*\"
%%
"//"[^\n]* ;
"/*" {BEGIN(COMMENT);}
<COMMENT>[^*\n]+ ;
<COMMENT>\n ;
<COMMENT>"*"+"/" {BEGIN(INITIAL);}
<COMMENT>"*"+[^*/\n]* ;
<COMMENT><<EOF>> { BEGIN(INITIAL); yyerror("块注释未结束"); return YYerror; }

[ \t\r\n]+ ;

{IntConst} { RETURN_TOKEN(INTCON); }
{FormatString} { RETURN_TOKEN(STRCON); }
"main" { RETURN_TOKEN(MAINTK); }
"const" { RETURN_TOKEN(CONSTTK); }
"int" { RETURN_TOKEN(INTTK); }
"break" { RETURN_TOKEN(BREAKTK); }
"continue" { RETURN_TOKEN(CONTINUETK); }
"if" { RETURN_TOKEN(IFTK); }
"else" { RETURN_TOKEN(ELSETK); }
"!" { RETURN_TOKEN(NOT); }
"&&" { RETURN_TOKEN(AND); }
"||" { RETURN_TOKEN(OR); }
"while" { RETURN_TOKEN(WHILETK); }
"getint" { RETURN_TOKEN(GETINTTK); }
"printf" { RETURN_TOKEN(PRINTFTK); }
"return" { RETURN_TOKEN(RETURNTK); }
"+" { RETURN_TOKEN(PLUS); }
"-" { RETURN_TOKEN(MINU); }
"void" { RETURN_TOKEN(VOIDTK); }
"*" { RETURN_TOKEN(MULT); }
"/" { RETURN_TOKEN(DIV); }
"%" { RETURN_TOKEN(MOD); }
"<=" { RETURN_TOKEN(LEQ); }
"<" { RETURN_TOKEN(LSS); }
">=" { RETURN_TOKEN(GEQ); }
">" { RETURN_TOKEN(GRE); }
"==" { RETURN_TOKEN(EQL); }
"!=" { RETURN_TOKEN(NEQ); }
"=" { RETURN_TOKEN(ASSIGN); }
";" { RETURN_TOKEN(SEMICN); }
"," { RETURN_TOKEN(COMMA); }
"(" { RETURN_TOKEN(LPARENT); }
")" { RETURN_TOKEN(RPARENT); }
"[" { RETURN_TOKEN(LBRACK); }
"]" { RETURN_TOKEN(RBRACK); }
"{" { RETURN_TOKEN(LBRACE); }
"}" { RETURN_TOKEN(RBRACE); }

{Ident} { RETURN_TOKEN(IDENFR); }

 /* 不让非法字符通过 Flex 的默认 ECHO 被忽略。 */
. { yyerror("非法字符或无效词法单元"); return YYerror; }
%%
