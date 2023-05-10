%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

%token NUMBER
%left '+' '-'
%left '*' '/'

%%
expr: expr '+' expr    { printf("%d\n", $1 + $3); }
    | expr '-' expr    { printf("%d\n", $1 - $3); }
    | expr '*' expr    { printf("%d\n", $1 * $3); }
    | expr '/' expr    { printf("%d\n", $1 / $3); }
    | NUMBER           { $$ = atoi($1); }
    ;

%%

int main()
{
    yyparse();
    return 0;
}

