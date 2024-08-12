/* main.c */
#include <stdio.h>
#include "token.h"

extern int yylex();
extern int yylval;

int main() {
    int token;
    
    do {
        token = yylex();

        if (token == NUMBER) {
            printf("constante decimal: %d\n", yylval);
        } else{
            printf("código do token: %d\n", token);    
        }

    } while (token != EOL);

    return 0;
}