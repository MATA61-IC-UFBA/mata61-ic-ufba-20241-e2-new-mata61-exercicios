/* main.c */

#include "token.h"
#include <stdio.h>

extern int yylex();
extern char *yytext;

int main() {
    token_t token = -1;
    while (token != EOL){
        token = yylex();               //chama o yylex
        if (token==ERROR){
            printf("ERRO LÉXICO: %s\n", yytext);
        }
        else if (token==NUMBER) {
            printf("constante decimal: %s\n", yytext);
        }
        else{
            printf("código do token: %d\n", token);
        }
        
    }
}