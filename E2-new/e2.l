/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"
#include <stdio.h>

int yylex();
int yylval;
%}

%%

[0-9]+  { yylval = atoi(yytext); return NUMBER; }
"+"     { return PLUS; }
"-"     { return MINUS; }
"*"     { return TIMES; }
"/"     { return DIV; }
[ \t]   { /* ignore whitespace */ }
\n      { return EOL; }
.       { return ERROR; }

%%
