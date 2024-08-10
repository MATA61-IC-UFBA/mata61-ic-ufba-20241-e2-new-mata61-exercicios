/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include "token.h"

%}

%%
"\n" { return EOL; }
[0-9]+  { return NUMBER; }
"+" { return PLUS; }
"-" { return MINUS; }
"*" { return TIMES; }
"/" { return DIV; }
.  { return ERROR; }
%%