#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "node.h"
#include "symbol_table.h"
#include "lista.h"

/* Programa principal. */
char* progname;
int lineno;

extern FILE* yyin;
extern int yyparse();
extern Node *syntax_tree;
extern symbol_t symbol_table; // Declare a tabela de símbolos

int main(int argc, char* argv[])
{
	if (argc < 2) {
		printf("uso: %s <input_file>. Try again!\n", argv[0]);
		exit(-1);
	}
	yyin = fopen(argv[1], "r");
	if (!yyin) {
		printf("Uso: %s <input_file>. Could not find %s. Try again!\n",
				argv[0], argv[1]);
		exit(-1);
	}
	FILE* file = fopen("tac.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    fclose(file);
	progname = argv[0];



	int result = yyparse();

	if(!result)
		printf("\nOKAY. :)\n\n");
	else
		printf("\nERROR. %d\n", result);


	FILE* saida = fopen("uncompile.txt", "w");
	if (saida != NULL){
    	uncompile2(saida, syntax_tree);
    	fclose(saida);
    	printf("\nUncompile salvo no arquivo uncompile.txt.\n");
	}else {
    	printf("Erro ao abrir o arquivo de saída.\n");
	}
	printf("Tabela de símbolos salva no arquivo tabela.txt.\n");
	printf("Código TAC salvo no arquivo tac.txt.\n\n");

	// FILE* tab = fopen("tabela.txt", "w");
	// if (tab != NULL){
 //    	print_file_table(tab, symbol_table);
 //    	fclose(saida);
 //    	printf("\nTabela de símbolos salva no arquivo tabela.txt.\n\n");
	// }else {
 //    	printf("Erro ao abrir o arquivo de tabela.\n");
	// }

	// uncompile(syntax_tree);

	return 0;
}

void yyerror(char* s) {
	fprintf(stderr, "%s: %s\n", progname, s);
	fprintf(stderr, "line %d\n", lineno);
}
