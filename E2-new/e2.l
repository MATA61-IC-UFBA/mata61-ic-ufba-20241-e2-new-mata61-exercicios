/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"
int yylval;
%}

%%
"+"       { return PLUS; }
"-"       { return MINUS; }
"*"       { return TIMES; }
"/"       { return DIV; }
[0-9]+       { yylval = atoi(yytext); return NUMBER; }
\n       { return EOL; }
.       { return ERROR; }
%%
