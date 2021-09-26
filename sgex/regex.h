#ifndef _regex_h_
#define _regex_h_

/*
** This header file will contain declaration to scan, parse, and then execute the regular expression.
** We wil only support a minimal subset of the full regex grammar.
*/


typedef enum{
    RIGHT_PAREN
}TokenType;

typedef struct{
    char *source;     /* This pointer points to the sgex code. */
    int   start;      /* Points to the start of the Token. */
    int   current;    /* Points to the current character being read from the source. */
    long  line;

}Scanner;

typedef struct{
    TokenType type;
    char *lexeme;     /* String of the token. */
    int line;         /* Line where the token is emitted. */
    int length;       /* Length of the lexeme. */
}Token;

extern Scanner sc;

/*
** Declarations for scannaing the .sgex file. .sgex will be used by the Scannar generator.
*/

void sc_init(Scanner* s, char *filePath);


/*
** Declarations for parsing the regex grammar.
*/


/*
** Declarations for walking the AST and generating the NFAs using the KLienne's constructions.
*/


#endif
