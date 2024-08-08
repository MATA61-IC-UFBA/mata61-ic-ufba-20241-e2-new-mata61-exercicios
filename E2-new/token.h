/* token.h */

typedef enum
{
    EOL = 0, // Final de linha
    NUMBER,
    PLUS,
    MINUS,
    TIMES,
    DIV,
    ERROR
} token_t;