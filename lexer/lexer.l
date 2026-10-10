%option noyywrap
%option yylineno
%x COMMENT

%{
  #include<stdio.h>
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

[ \t\r\n]+ ;

{IntConst} {fprintf(yyout, "INTCON %s\n", yytext);}
{FormatString} {fprintf(yyout, "STRCON %s\n", yytext);}
"main" {fprintf(yyout, "MAINTK %s\n", yytext);}
"const" {fprintf(yyout, "CONSTTK %s\n", yytext);}
"int" {fprintf(yyout, "INTTK %s\n", yytext);}
"break" {fprintf(yyout, "BREAKTK %s\n", yytext);}
"continue" {fprintf(yyout, "CONTINUETK %s\n", yytext);}
"if" {fprintf(yyout, "IFTK %s\n", yytext);}
"else" {fprintf(yyout, "ELSETK %s\n", yytext);}
"!" {fprintf(yyout, "NOT %s\n", yytext);}
"&&" {fprintf(yyout, "AND %s\n", yytext);}
"||" {fprintf(yyout, "OR %s\n", yytext);}
"while" {fprintf(yyout, "WHILETK %s\n", yytext);}
"getint" {fprintf(yyout, "GETINTTK %s\n", yytext);}
"printf" {fprintf(yyout, "PRINTFTK %s\n", yytext);}
"return" {fprintf(yyout, "RETURNTK %s\n", yytext);}
"+" {fprintf(yyout, "PLUS %s\n", yytext);}
"-" {fprintf(yyout, "MINU %s\n", yytext);}
"void" {fprintf(yyout, "VOIDTK %s\n", yytext);}
"*" {fprintf(yyout, "MULT %s\n", yytext);}
"/" {fprintf(yyout, "DIV %s\n", yytext);}
"%" {fprintf(yyout, "MOD %s\n", yytext);}
"<=" {fprintf(yyout, "LEQ %s\n", yytext);}
"<" {fprintf(yyout, "LSS %s\n", yytext);}
">=" {fprintf(yyout, "GEQ %s\n", yytext);}
">" {fprintf(yyout, "GRE %s\n", yytext);}
"==" {fprintf(yyout, "EQL %s\n", yytext);}
"!=" {fprintf(yyout, "NEQ %s\n", yytext);}
"=" {fprintf(yyout, "ASSIGN %s\n", yytext);}
";" {fprintf(yyout, "SEMICN %s\n", yytext);}
"," {fprintf(yyout, "COMMA %s\n", yytext);}
"(" {fprintf(yyout, "LPARENT %s\n", yytext);}
")" {fprintf(yyout, "RPARENT %s\n", yytext);}
"[" {fprintf(yyout, "LBRACK %s\n", yytext);}
"]" {fprintf(yyout, "RBRACK %s\n", yytext);}
"{" {fprintf(yyout, "LBRACE %s\n", yytext);}
"}" {fprintf(yyout, "RBRACE %s\n", yytext);}

{Ident} {fprintf(yyout, "IDENFR %s\n", yytext);}

%%
int main() {
  yyin = fopen("testfile.txt", "r");
  if(yyin == NULL) {
    perror("testfile.txt");
    return 1;
  }
  yyout = fopen("output.txt", "w");
  if(yyout == NULL) {
    perror("output.txt");
    fclose(yyin);
    return 1;
  }

  yylex();

  fclose(yyin);
  fclose(yyout);

  return 0;
}