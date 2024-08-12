/* main.c */
#include "stdio.h"
#include "token.h"

extern int yylex();
extern int yylval;

int main(int argc, char **argv) {
    int tok;
    while((tok = yylex())) {
        printf("código do token: %d \n", tok);
        if(tok == NUMBER) printf("constante decimal: %d \n", yylval);
        else printf("\n");
    }
    return 0;
}