/* recognize tokens for the calculator */

%option noyywrap nodefault yylineno
%{
#include <stdio.h>
#include "token.h"

int num;
%}

%%
[0-9]+      { num = atoi(yytext); return NUMBER; }
.       { return ERROR; }
%%

int main() {


}




