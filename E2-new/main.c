#include "token.h"
#include <stdio.h>

extern FILE *yyin;
extern int yylex();
extern char *yytext;

int main()
{
  if (!yyin)
    yyin = stdin;
  int inputEnded = 0;

  while (inputEnded != 1)
  {
    token_t t = yylex();

    switch (t)
    {
    case EOL:
      printf("código do token: %d\n", t);
      inputEnded = 1;
      break;
    case NUMBER:
      printf("constante decimal: %s\n", yytext);
      break;
    default:
      printf("código do token: %d\n", t);
      break;
    }
  }
}