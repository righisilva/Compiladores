%{
#include <stdio.h>
#include <stdlib.h>
%}

%token NUMBER
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS

%%
stmt_list   : stmt_list stmt '\n'  | /* empty */ ;
stmt        : expr                      { printf("%d\n", $1); }
            | /* empty */               { printf("0\n"); }
            ;
expr        : expr '+' expr         { $$ = $1 + $3; }
            | expr '-' expr         { $$ = $1 - $3; }
            | expr '*' expr         { $$ = $1 * $3; }
            | expr '/' expr         { $$ = $1 / $3; }
            | '-' expr %prec UMINUS  { $$ = -$2; }
            | NUMBER                { $$ = atoi($1); }
            | '(' expr ')'          { $$ = $2; }
            ;
%%

int main(void) {
    yyparse();
    return 0;
}

int yyerror(char *s) {
    printf("Error: %s\n", s);
    return 0;
}

