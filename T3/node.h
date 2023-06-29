/** @file node.h
 *  @version 1.2
 */

#ifndef _NODE_H_
#define _NODE_H_

#ifdef __GNUC__
    /* If using gcc, warn about missing sentinel NULLs */
    #define NULL_TERMINATED __attribute__((sentinel))
#else
    #define NULL_TERMINATED
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


typedef int Node_type;

/* Serie de constantes que servirao para definir tipos de nos (na arvore).
 * Essa serie pode ser completada ou alterada a vontade.
 */
#define code_node 298
#define declaracoes_node 299
#define declaracao_node 300
#define tipo_node 301
#define int_node 501
#define idf_node 502
#define double_node 503
#define real_node 504
#define char_node 505
#define tipolista_node 506
#define listadupla_node 507
#define acoes_node 508
#define acao_node 564
#define atribuicao_node 509
#define swap_node 510
#define if_node 511
#define while_node 512
#define lvalue 513
#define lvalue_node 514
#define listaexp_node 515
#define soma_node 516
#define sub_node 517
#define multi_node 518
#define div_node 519
#define float_node 520
#define true_node 521
#define and_node 522
#define or_node 523
#define maior_node 524
#define menor_node 525
#define menorigual_node 526
#define maiorigual_node 527
#define igual_node 528
#define diferente_node 529
#define listadeclaracao_node 529
#define pontoevirgula_node 530
#define abrepar_node 532
#define fechapar_node 533
#define doispontos_node 534
#define virgula_node 535
#define swaplex_node 536
#define expr_node 537
#define iflex_node 538
#define then_node 539
#define abrechaves_node 540
#define fechachaves_node 541
#define whilelex_node 542
#define end_node 543
#define elselex_node 544
#define fiminstcontrole_node 545
#define abrecol_node 546
#define fechacol_node 547
#define abre_colchete 548
#define fecha_colchete 549
#define mais_node 550
#define menos_node 551
#define vezes_node 552
#define dividido_node 553
#define andlex_node 554
#define orlex_node 555
#define notlex_node 556
#define not_node 557
#define maiorlex_node 558
#define menorlex_node 559
#define menoriguallex_node 560
#define maioriguallex_node 561
#define igualex_node 562
#define diferentelex_node 563


typedef struct expr_attr{
            struct node_tac *code;
            char *local;
            int size;
    } EXPR_ATTR;

/** Estrutura de dados parcial para o no da arvore. */
typedef struct _node {
   int line_num;   /**< numero de linha. */
   char* lexeme;   /**< o lexema retornado pelo analizador lexical. */
   Node_type type; /**< Um dos valores definidos acima pelos # defines. */
   EXPR_ATTR* attribute;/**< Qualquer coisa por enquanto. */

   struct _node** children;
   unsigned int n_child;

} Node;

extern Node * syntax_tree;


/**
 *  * Node constructor.
 *
 * @param nl: line number where this token was found in the source code.
 * @param t: node type (one of the values #define'd above). Must abort
 *             the program if the type is not correct.
 * @param lexeme: whatever string you want associated to this node.
 * @param attr: a semantical attribute.
 * @param children: NULL-terminated list of pointers to children Node*'s.
 *     See the extra file 'exemplo_func_var_arg.c' for an example.
 *     Callers are expected to pass *only Node pointers* as arguments.
 *     To create a leaf, use just NULL.
 * @return a pointer to a new Node.
 */
NULL_TERMINATED
Node* create_node(int nl, Node_type t,
        char* lexeme,  /* Node* children */ ...);

/** Accessor to the number of children of a Node.
 *  Must abort the program if 'n' is NULL.
 */
int nb_of_children(Node* n);

/** Tests if a Node is a leaf.
 *  Must abort the program if 'n' is NULL.
 *  @return 1 if n is a leaf, 0 else.
 */
int is_leaf(Node* n);

/** accessor to the i'th child of a Node.
 * @param n : the node to be consulted. Must abort the program if 'n' is NULL.
 * @param i : the number of the child that one wants. Given a node degree d,
 *       valid values for i are: 0 <= i < d.
 *       Must abort the program if i is not correct.
 * @return a pointer to a Node.
 */
Node* child(Node* n, int i) ;

/** Destructor of a Node. Deallocates
 * (recursively) all of the tree rooted at 'n'.
 */
int deep_free_node(Node* n) ;

/** returns the height of the tree rooted by 'n'.
 *  The height of a leaf is 1.
 */
int height(Node *n) ;

/** Prints into a file the lexemes contained in the node rooted by 'n'.
 *  Lexemes must be printed in a depth-first order.
 *  @param outfile : the file to which the lexemes are printed.
 *  @param n : the root node of the tree. Must abort the program if 'n' is NULL.
 *
 */
void uncompile2(FILE* outfile, Node *n) ;
void uncompile(Node *n) ;


#endif
