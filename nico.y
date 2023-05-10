

%{
  /* Aqui, pode-se inserir qualquer codigo C necessario ah compilacao
   * final do parser. Sera copiado tal como esta no inicio do y.tab.c
   * gerado por Yacc.
   */
	#include <stdio.h>
	#include <stdlib.h>
	#include "node.h"


/*    extern int yyparse();*/

	extern int yyerror(const char* msg );
	extern int yylex();

	extern Node *syntax_tree;

%}

%union {
	int num;
	char *cadeia;
	struct _node *no;
};

%left MAIS MENOS
%left VEZES DIVIDE
%left OU
%right NEGACAO




%token <cadeia> DEF_INT
%token <cadeia> DEF_FLOAT
%token <cadeia> DEF_CHAR
%token <cadeia> DEF_STRING
%token <cadeia> MAIS
%token <cadeia> MENOS
%token <cadeia> VEZES
%token <cadeia> DIVIDE
%token <cadeia> MAISMAIS
%token <cadeia> MENOSMENOS
%token <cadeia> VIRGULA
%token <cadeia> DOISPONTOS
%token <cadeia> PONTOVIRGULA
%token <cadeia> ASPASIMPLES
%token <cadeia> ABREPARENTESE
%token <cadeia> FECHAPARENTESE
%token <cadeia> ABRECOLCHETE
%token <cadeia> FECHACOLCHETE
%token <cadeia> ABRECHAVE
%token <cadeia> FECHACHAVE
%token <cadeia> MENOR
%token <cadeia> MAIOR
%token <cadeia> IGUAL
%token <cadeia> MENORIGUAL
%token <cadeia> MAIORIGUAL
%token <cadeia> IGUALIGUAL
%token <cadeia> ECOMERCIAL
%token <cadeia> DIFERENTE
%token <cadeia> NEGACAO
%token <cadeia> OU
%token <cadeia> PORCENTO
%token <cadeia> SUSTENIDO
%token <cadeia> TABULACAO
%token <cadeia> ASPADUPLA
%token <cadeia> VERDADEIRO
%token <cadeia> FALSO
%token <cadeia> SE
%token <cadeia> ENTAO
%token <cadeia> SENAO
%token <cadeia> ENQUANTO
%token <cadeia> FAZ
%token <cadeia> PARA
%token <cadeia> INICIA
%token <cadeia> TERMINA
%token <cadeia> DEFINE
%token <cadeia> PRINCIPAL
%token <cadeia> RETORNA
%token <cadeia> INCLUE
%token <cadeia> IMPRIME
%token <cadeia> INTEIRO
%token <cadeia> QUEBRADO
%token <cadeia> EXPOENTE
%token <cadeia> IDENTIFICADOR
%token <cadeia> PALAVRA
%token <cadeia> LETRA
%token <cadeia> FRASE
%token <cadeia> ESPECIAL



%type<no> code
%type<no> acoes
%type<no> acao
%type<no> declaracoes
%type<no> declaracao
%type<no> tipo
%type<no> expressoes
%type<no> expressao
%type<no> operador
%type<no> id
%type<no> pontuacao
%type<no> igualdade
%type<no> valor
%type<no> define


/* demais types ... */

 %start code

 /* A completar com seus tokens - compilar com 'yacc -d' */

%%


/*
code: declaracoes acoes {  $$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL); syntax_tree = $$;}
    | acoes { $$ = $1; syntax_tree = $$;  }
    ;*/

code:       declaracoes acoes {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL); syntax_tree = $$;}
          | acoes {$$ = create_node(@1.first_line, code_node, NULL, $1, NULL); syntax_tree = $$;}
          ;

declaracoes: declaracao {$$ = create_node(@1.first_line, declaracoes_node, NULL, $1, NULL);}
           | declaracoes declaracao {$$ = create_node(@1.first_line, declaracoes_node, NULL, $1, $2, NULL);}
           ;

declaracao:  tipo id igualdade valor pontuacao {$$ = create_node(@1.first_line, declaracao_node, NULL, $1, $2, $3, $4, $5, NULL);}
           | define id valor {$$ = create_node(@1.first_line, declaracao_node, NULL, $1, $2, $3, NULL);}
             ;

acoes:     acao {$$ = create_node(@1.first_line, acoes_node, NULL, $1, NULL);}
         | acoes acao {$$ = create_node(@1.first_line, acoes_node, NULL, $1, $2, NULL);}
         ;

acao:      expressoes {$$ = create_node(@1.first_line, acao_node, NULL, $1, NULL);}
         ;

expressoes: expressao {$$ = create_node(@1.first_line, code_node, NULL, $1, NULL);}
          | expressoes expressao {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL);}
          | pontuacao expressao pontuacao {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, NULL);}
          ;

expressao: id operador id {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, NULL);}
         ;

define:  DEFINE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         ;

tipo:       DEF_INT {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
          | DEF_FLOAT {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
          | DEF_CHAR {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
          | DEF_STRING {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
          ;

id:         IDENTIFICADOR  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
          ;

valor:     INTEIRO  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         | QUEBRADO  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         | FRASE  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         | LETRA  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         ;

pontuacao: PONTOVIRGULA {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         | ABREPARENTESE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         | FECHAPARENTESE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         ;

igualdade: IGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

operador:  MAIS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | MENOS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | VEZES {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | DIVIDE {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         ;

%%
