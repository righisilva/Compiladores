

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
%type<no> aritmeticas
%type<no> aritmetica
%type<no> operador
%type<no> id
%type<no> pontuacao
%type<no> igualdade
%type<no> valor
%type<no> define
%type<no> abrep
%type<no> fechap
%type<no> ini
%type<no> term
%type<no> princ
%type<no> seentao
%type<no> se
%type<no> entao
%type<no> senao
%type<no> logicos
%type<no> logico
%type<no> operadorlog
%type<no> imprimir
%type<no> imprime
%type<no> frase
%type<no> para
%type<no> fazpara
%type<no> enquanto
%type<no> faz
%type<no> enq
%type<no> mmais
%type<no> mmenos
%type<no> incdec


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
           | ini princ abrep fechap code term  {$$ = create_node(@1.first_line, declaracao_node, NULL, $1, $2, $3, $4, $5, $6,NULL);}
             ;

acoes:     acao {$$ = create_node(@1.first_line, acoes_node, NULL, $1, NULL);}
         | acoes acao {$$ = create_node(@1.first_line, acoes_node, NULL, $1, $2, NULL);}
         ;

acao:      aritmeticas {$$ = create_node(@1.first_line, acao_node, NULL, $1, NULL);}
          | seentao {$$ = create_node(@1.first_line, acao_node, NULL, $1, NULL);}
          | fazpara {$$ = create_node(@1.first_line, acao_node, NULL, $1, NULL);}
          | enquanto {$$ = create_node(@1.first_line, acao_node, NULL, $1, NULL);}
          | imprimir  {$$ = create_node(@1.first_line, acao_node, NULL, $1, NULL);}
         ;

aritmeticas: aritmetica {$$ = create_node(@1.first_line, code_node, NULL, $1, NULL);}
          |  aritmetica pontuacao {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL);}
          | aritmeticas aritmetica {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL);}
          | abrep aritmeticas fechap {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, NULL);}
          ;

aritmetica: id operador id {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, NULL);}
        |  incdec {$$ = create_node(@1.first_line, code_node, NULL, $1, NULL);}
         ;

seentao: ini se abrep logicos fechap entao code senao code term {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, $4, $5, $6,$7, $8, $9, $10,NULL);}
       | ini se abrep logicos fechap entao code term {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, $4, $5, $6,$7, $8,NULL);}
       ;

fazpara:  ini para abrep declaracoes logicos pontuacao aritmeticas fechap code term {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, $4, $5, $6,$7, $8, $9, $10, NULL);}
        ;

enquanto:  ini enq abrep logicos fechap faz code term {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, $4, $5, $6,$7,$8, NULL);}
        ;

logicos : logico {$$ = create_node(@1.first_line, code_node, NULL, $1, NULL);}
          | logicos logico {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL);}
          | abrep logicos fechap {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, NULL);}
          ;

logico : id operadorlog id {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, NULL);}
         ;

imprimir: imprime frase pontuacao {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, $3, NULL);}
         ;

incdec: id mmais {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL);}
        | id mmenos {$$ = create_node(@1.first_line, code_node, NULL, $1, $2, NULL);}
         ;

se:  SE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         ;

entao:  ENTAO {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
         ;

senao:  SENAO {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
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
         ;

abrep:    ABREPARENTESE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
        ;

fechap:    FECHAPARENTESE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, NULL);}
        ;

igualdade: IGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

mmais: MAISMAIS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

mmenos: MENOSMENOS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

operador:  MAIS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | MENOS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | VEZES {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | DIVIDE {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         ;

operadorlog:  MENOR {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | MAIOR {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | IGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | MENORIGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | MAIORIGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | IGUALIGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | ECOMERCIAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | MENORIGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | DIFERENTE {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | NEGACAO {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         | OU {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
         ;

ini: INICIA {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

term: TERMINA {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

princ: PRINCIPAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

imprime: IMPRIME {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

frase: FRASE {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;


para: PARA {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;


faz: FAZ {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;

enq: ENQUANTO {$$ = create_node(@1.first_line, code_node, yylval.cadeia, NULL);}
           ;





%%
