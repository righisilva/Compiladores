

%{
  /* Aqui, pode-se inserir qualquer codigo C necessario ah compilacao
   * final do parser. Sera copiado tal como esta no inicio do y.tab.c
   * gerado por Yacc.
   */
	#include <stdio.h>
	#include <stdlib.h>
	#include <ctype.h>

	#include "node.h"
    #include "symbol_table.h"
    #include "lista.h"
    symbol_t symbol_table; // Declare a tabela de símbolos
    int tipo = 0; //int = 1, float = 2, char = 3, string = 4
    int tamanho = 4;    /**< numero de Bytes necessarios para armazenamento. */
    int desloc = 0;  /**< Endereco da proxima variavel. */
    char* func;
    char* op1;
    char* op2;
    int contador = 0;
    int temps_size_TMP = 0;
    int contaTemp = 0;
    char *tmp;
    //Alguma variáveis acima não foram usadas

    int hasNumber(const char* str) { //verifica se é variável (endereçável), ou constante (números)
        int hasDigit = 0;
        int hasDot = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (isdigit(str[i])) {
                hasDigit = 1;
            } else if (str[i] == ',' && !hasDot) {
                hasDot = 1;
                hasDigit = 1;
            } else {
                return 0; // Caractere não numérico encontrado
            }
        }

        return hasDigit;
    }


    char *gera_TMP (int type){ //Type não esta sendo usado, pois foram testados só int e floats (de tamanho 4)
        int size = 4;
        int end = contaTemp * size;
        char *ret = malloc(sizeof(char)*8);
        sprintf(ret, "%03d(Rx)", end);
        temps_size_TMP += size;
        return ret;
    }

    char *geraEnd (int endereco){ //pega o número do endereço e formata para o TAC
        char *ret = malloc(sizeof(char)*8);
        sprintf(ret, "%03d(SP)", endereco);
        return ret;
    }



    void operando (char *op1){ //se o lexema for uma variável, busca o endereço na tabela e formata para o TAC
        if (!hasNumber(op1))
            strcpy (op1, geraEnd (buscaDesloc(symbol_table, op1)));
    }

    char *operador (char *op){ //apenas muda o operador para o formato TAC
        if (op[0] == '+')
            return "ADD";
        if (op[0] == '-')
            return "SUB";
        if (op[0] == '*')
            return "MULT";
        if (op[0] == '/')
            return "DIV";
    }

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
%token <cadeia> INCLUI
%token <cadeia> IMPRIME
%token <cadeia> INTEIRO
%token <cadeia> QUEBRADO
%token <cadeia> EXPOENTE
%token <cadeia> IDENTIFICADOR
%token <cadeia> PALAVRA
%token <cadeia> LETRA
%token <cadeia> FRASE
%token <cadeia> ESPECIAL



%type<no> inicio
%type<no> cabecalhos
%type<no> cabecalho
%type<no> code
%type<no> acoes
%type<no> acao
%type<no> declaracoes
%type<no> declaracao
%type<no> tipo
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
%type<no> inclui
%type<no> parametros
%type<no> parametro
%type<no> atribuicao
%type<no> atr_oper
%type<no> funcao
%type<no> num
%type<no> operando
%type<no> s
%type<no> t
%type<no> f


 %start inicio


%%

inicio:      cabecalhos code {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, NULL); syntax_tree = $$; init_table(&symbol_table);}
           | code {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, NULL); syntax_tree = $$; init_table(&symbol_table);}
           ;

cabecalhos:  cabecalho {$$ = create_node(@1.first_line, declaracoes_node, NULL, NULL, $1, NULL);}
           | cabecalhos cabecalho {$$ = create_node(@1.first_line, declaracoes_node, NULL, NULL, $1, $2, NULL);}
           ;

cabecalho:   define id valor {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3, NULL);}
           | inclui id {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, NULL);}
           ;

code:        declaracoes acoes {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, NULL);}
           | acoes declaracoes {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, NULL);}
           | acoes {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, NULL);}
           | declaracoes {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, NULL);}
           ;

declaracoes: declaracao {$$ = create_node(@1.first_line, declaracoes_node, NULL, NULL, $1, NULL);}
           | declaracoes declaracao {$$ = create_node(@1.first_line, declaracoes_node, NULL, NULL, $1, $2, NULL);}
           ;

declaracao:  tipo id atribuicao {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3, NULL);

            $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
            cat_tac(&($$->attribute->code), &($3->attribute->code));
            strcpy($$->attribute->code->inst->op, geraEnd (buscaDesloc(symbol_table, $2->retorno)));
            // append_inst_tac(&($$->attribute->code), new_tac);
            FILE* file = fopen("tac.txt", "a");
                if (file == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    exit(1);
                }
                print_tac(file, $$->attribute->code);
                fclose(file);
            }
           | tipo id pontuacao {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3, NULL);
            }
           | ini princ abrep parametros fechap code term  {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3, $4, $5, $6, $7, NULL);}
           | ini princ abrep fechap code term  {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3, $4, $5, $6, NULL);}
           | ini id abrep parametros fechap code term  {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3, $4, $5, $6,$7,NULL);}
           | ini id abrep fechap code term  {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3, $4, $5, $6,NULL);}
           ;

parametros:  parametro {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, NULL);}
           | parametros parametro  {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, NULL);}
           ;

parametro:   tipo id {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2,  NULL);}
           | tipo id pontuacao {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3,  NULL);}
           ;

atribuicao:  igualdade valor pontuacao {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2,  NULL);

           $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
           cat_tac(&($$->attribute->code), &($2->attribute->code));

            }
           | igualdade s {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2,  NULL);

           $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
           cat_tac(&($$->attribute->code), &($2->attribute->code));

           }
           | igualdade funcao {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2,  NULL);}
           ;

atr_oper:    id igualdade s {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3,  NULL);


            $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
            cat_tac(&($$->attribute->code), &($3->attribute->code));
            strcpy($$->attribute->code->inst->op, geraEnd (buscaDesloc(symbol_table, $1->retorno)));
            // append_inst_tac(&($$->attribute->code), new_tac);
            FILE* file = fopen("tac.txt", "a");
                if (file == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    exit(1);
                }
                print_tac(file, $$->attribute->code);
                fclose(file);
            }
           | id igualdade funcao {$$ = create_node(@1.first_line, declaracao_node, NULL, NULL, $1, $2, $3,  NULL);}
           ;

acoes:       acao {$$ = create_node(@1.first_line, acoes_node, NULL, NULL, $1, NULL);}
           | acoes acao {$$ = create_node(@1.first_line, acoes_node, NULL, NULL, $1, $2, NULL);}
           ;

acao:        s {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           | incdec {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           | seentao {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           | fazpara {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           | enquanto {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           | imprimir  {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           | funcao  {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           | atr_oper  {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, NULL);}
           ;

funcao:      id abrep fechap pontuacao {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, $2, $3, $4, NULL);}
           | id abrep parametros fechap pontuacao {$$ = create_node(@1.first_line, acao_node, NULL, NULL, $1, $2, $3, $4, $5, NULL);}
           ;


s:           t {$$ = create_node(@1.first_line, code_node, NULL, $1->retorno, $1, NULL);

           $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
           cat_tac(&($$->attribute->code), &($1->attribute->code));
            }
           | t pontuacao {$$ = create_node(@1.first_line, code_node, NULL, $1->retorno, $1, $2, NULL);


           $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
           cat_tac(&($$->attribute->code), &($1->attribute->code));
           //TODO aqui retorna a operação completa
           }
           ;

t:           f {$$ = create_node(@1.first_line, code_node, NULL, $1->retorno, $1, NULL);

            struct tac* new_tac = create_inst_tac ($1->retorno, "", "", ""); //op arg2 arg1 NULL
            $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
            $1->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
            cat_tac(&($$->attribute->code), &($1->attribute->code));
            append_inst_tac(&($$->attribute->code), new_tac);
            }
           | t operador f {$$ = create_node(@1.first_line, code_node, NULL, tmp, $1, $2, $3, NULL);
           //TODO aqui forma o operando operador operando, o f pode seguir
           // printf("\n%s %s %s\n", $1->retorno,$2->retorno,$3->retorno);

                    // int x = hasNumber ($3->retorno);
                    // operando ($3->retorno);
                    char *nomeOperador = operador($2->retorno);
                    struct tac* new_tac = create_inst_tac ($1->retorno, nomeOperador, "", $3->retorno); //op arg2 arg1 NULL
                    $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
                    $1->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
                    $3->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
                    cat_tac(&($$->attribute->code), &($1->attribute->code));
                    cat_tac(&($$->attribute->code), &($3->attribute->code));
                    append_inst_tac(&($$->attribute->code), new_tac);
           }
           ;

f:           operando  {$$ = create_node(@1.first_line, code_node, NULL, $1->retorno, $1, NULL);
            //TODO aqui recebe o id
            }
           | abrep t fechap {$$ = create_node(@1.first_line, code_node, NULL, gera_TMP(tipo), $1, $2, $3, NULL);
            char *temporario = gera_TMP(tipo);

            $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
            cat_tac(&($$->attribute->code), &($2->attribute->code));
            strcpy($$->attribute->code->inst->op, temporario);
            FILE* file = fopen("tac.txt", "a");
                if (file == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    exit(1);
                }
                print_tac(file, $$->attribute->code);
                fclose(file);
            contaTemp++;

           }
           | incdec {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1,  NULL);}
           ;


operando:    id {$$ = create_node(@1.first_line, code_node, NULL, $1->retorno, $1, NULL);
            operando ($1->retorno);
             $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
            // operando ($1->retorno);
             // strcpy($$->attribute->code->inst->op, geraEnd (buscaDesloc(symbol_table, $1->retorno)));

            }
           | num {$$ = create_node(@1.first_line, code_node, NULL, $1->retorno, $1, NULL);

            $$->attribute = (EXPR_ATTR*) malloc(sizeof(EXPR_ATTR));
            operando ($1->retorno);

            // strcpy($$->attribute->code->inst->op, $1->retorno);
            }
           ;

seentao:     ini se abrep logicos fechap entao code senao code term {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3, $4, $5, $6,$7, $8, $9, $10,NULL);}
           | ini se abrep logicos fechap entao code term {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3, $4, $5, $6,$7, $8,NULL);}
           ;

fazpara:     ini para abrep declaracoes logicos pontuacao s fechap code term {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3, $4, $5, $6,$7, $8, $9, $10, NULL);}
           ;

enquanto:    ini enq abrep logicos fechap faz code term {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3, $4, $5, $6,$7,$8, NULL);}
           ;

logicos :    logico {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, NULL);}
           | logicos logico {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, NULL);}
           | abrep logicos fechap {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3, NULL);}
           ;

logico :     id operadorlog id {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3, NULL);}
           ;

imprimir:    imprime frase pontuacao {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, $3, NULL);}
           ;

incdec:      id mmais {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, NULL);}
           | id mmenos {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, NULL);}
           | incdec pontuacao {$$ = create_node(@1.first_line, code_node, NULL, NULL, $1, $2, NULL);}
           ;



se:          SE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

entao:       ENTAO {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

senao:       SENAO {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

define:      DEFINE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

tipo:        DEF_INT {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL); tipo = 1;}
           | DEF_FLOAT {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL); tipo = 2;}
           | DEF_CHAR {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL); tipo = 3;}
           | DEF_STRING {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL); tipo = 4;}
           ;

id:          IDENTIFICADOR  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);
                entry_t* new_entry = (entry_t*) malloc(sizeof(entry_t));
                new_entry->name = yylval.cadeia;
                new_entry->type = tipo;
                new_entry->size = tamanho;
                new_entry->desloc = desloc;
                new_entry->extra = NULL;
                if(lookup(symbol_table, new_entry->name) == NULL){
                    insert(&symbol_table, new_entry);
                    desloc += tamanho;
                }
                FILE* file = fopen("tabela.txt", "w");
                if (file == NULL) {
                    printf("Erro ao abrir o arquivo.\n");
                    exit(1);
                }
                print_file_table(file, symbol_table);
                fclose(file);
                // printf ("\t\t%s\n\n", geraEnd (buscaDesloc(symbol_table, yylval.cadeia)));
                }
           ;

valor:       INTEIRO  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           | QUEBRADO  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           | LETRA  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           | FRASE  {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

pontuacao:   PONTOVIRGULA {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

abrep:       ABREPARENTESE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

fechap:      FECHAPARENTESE {$$ = create_node(@1.first_line, tipo_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

igualdade:   IGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

mmais:       MAISMAIS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

mmenos:      MENOSMENOS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

operador:    MAIS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | MENOS {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | VEZES {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | DIVIDE {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

operadorlog: MENOR {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | MAIOR {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | IGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | MENORIGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | MAIORIGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | IGUALIGUAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | ECOMERCIAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | DIFERENTE {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | NEGACAO {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | OU {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

ini:         INICIA {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

term:        TERMINA {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

princ:       PRINCIPAL {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

imprime:     IMPRIME {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

frase:       FRASE {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

para:        PARA {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

faz:         FAZ {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

enq:         ENQUANTO {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

inclui:      INCLUI {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

num:         INTEIRO {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           | QUEBRADO {$$ = create_node(@1.first_line, code_node, yylval.cadeia, yylval.cadeia, NULL);}
           ;

%%
