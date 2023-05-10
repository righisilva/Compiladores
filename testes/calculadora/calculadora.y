%{
#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"
#include "y.tab.h"
extern FILE* yyin;
extern int yylex();
extern int yyparse();
extern Node* root;
%}

%token NUMBER

%%

input:
    /* empty */ { root = create_node(0, "EMPTY", NULL); }
    | input line
    ;

line:
    '\n' { printf("Resultado: %d\n", root->value); }
    | exp '\n' { printf("Resultado: %d\n", root->value); }
    ;

exp:
    exp '+' exp { root = create_node(PLUS, "+", $1, $3); }
    | exp '-' exp { root = create_node(MINUS, "-", $1, $3); }
    | exp '*' exp { root = create_node(TIMES, "*", $1, $3); }
    | exp '/' exp { root = create_node(DIVIDE, "/", $1, $3); }
    | '(' exp ')' { root = create_node(PAREN, "()", $2, NULL); }
    | NUMBER { root = create_node(NUM, "NUM", NULL); root->value = $1; }
    ;

%%

int main() {
    printf("Digite a expressao: ");
    yyparse();
    return 0;
}

