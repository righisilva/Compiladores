#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "node.h"
#include <stdarg.h>


Node *syntax_tree;

Node* create_node(int nl, Node_type t, char* lexeme,  /* Node* children */ ...)
{

    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->line_num = nl;   /**< numero de linha. */
    new_node->lexeme = lexeme;   /**< o lexema retornado pelo analizador lexical. */
    new_node->type = t; /**< Um dos valores definidos acima pelos # defines. */

    //contar os filhos
    va_list ap;
    va_start(ap, lexeme);

    int n_args = 0;
    const struct _node* arg = va_arg(ap, const struct _node*);
    for (; arg != NULL; arg = va_arg(ap, const struct _node*)){
        n_args ++;
    }

    if (new_node->lexeme != NULL){
        printf ("Leu: %s\n", new_node->lexeme);
    }

    new_node->n_child = n_args;
    //aloquei
    new_node->children = calloc(n_args, sizeof(struct _node*));
    va_end(ap);
    //preencher
    va_start(ap, lexeme);
    n_args = 0;
    for (arg = va_arg(ap, const struct _node*); arg != NULL; arg = va_arg(ap, const struct _node*)){
        new_node->children[n_args] = (struct _node*) arg;
        // printf("%d\n", n_args);
        n_args ++;
    }

    va_end(ap);
    //Code ...

    return new_node;
}

int nb_of_children(Node* n)
{
    assert(n != NULL);
    return n->n_child;
}

int is_leaf(Node* n)
{
    assert(n != NULL);
    return n->n_child == 0;
}

Node* child(Node* n, int i)
{
    assert(n != NULL);
    assert((0 <= i) && ((unsigned int)i < n->n_child));
    return n->children[i];
}

int deep_free_node(Node* n)
{
    //TODO: Cant we set the original pointer to NULL?
    if(n != NULL)
    {
        for(int i = 0; i < n->n_child; i++)
        {
            deep_free_node(n->children[i]);
        }
        free(n->children);
        free(n->lexeme);
        free(n);
    }
    return 0;
}

int height(Node* n)
{
    if (n == NULL) {
        return 0;
    }
    int h = 0;
    int h_temp = 0;
    for (int i = 0; i < n->n_child; i++) {
        h_temp = height(n->children[i]);
        if (h_temp > h) {
            h = h_temp;
        }
    }
    return h + 1;
}

void uncompile2(FILE* outfile, Node *n){
    if (n == NULL) {
        return;
    }
    if (n->lexeme != NULL){
        fprintf(outfile, "%s\n", n->lexeme);
    }

    for (int i = 0; i < n->n_child; i++) {
        uncompile2(outfile, n->children[i]);
    }
}

void uncompile(Node *n){
    if (n == NULL) {
        return;
    }
    if (n->lexeme != NULL){
        printf("%s\n", n->lexeme);
    }

    for (int i = 0; i < n->n_child; i++) {
        uncompile(n->children[i]);
    }
}

// void uncompile(Node *n)
// {
//     if(n != NULL){
//         printf ("%s\n", n->lexeme);
//         for (int i = 0; i < n->n_child; i++) {
//         uncompile(n->children[i]);
//         }
//     }
// }

// int main (){
//     Node *n1, *n2, *n3, *pai;
//     n1 = create_node (1, 501, "filha1", NULL);
//     n2 = create_node (1, 502, "filha2",n1, NULL);
//     n3 = create_node (1, 503, "filha3", NULL);
//     pai = create_node (1, 504, "pai", n1, n2, n3, NULL);
//     // printf ("%d %s\n", n2->n_child, n2->children[1]->lexeme);
//     printf ("%d %s\n", pai->n_child, pai->children[2]->lexeme);
//     printf ("nb_of_children = %d \n", nb_of_children(pai));
//     printf ("is_leaf = %d \n", is_leaf(pai));
//     printf ("height = %d \n", height(pai));
//     uncompile(pai);

// }




// Node* create_node(int nl, Node_type t, char* lexeme,  /* Node* children */ ...)
// {

//     Node* new_node = (Node*) malloc(sizeof(Node));
//     new_node->line_num = nl;   /**< numero de linha. */
//     new_node->lexeme = lexeme;   /**< o lexema retornado pelo analizador lexical. */
//     new_node->type = t; /**< Um dos valores definidos acima pelos # defines. */

//     //contar os filhos
//     va_list ap;
//     va_start(ap, lexeme);
//
//     int n_args = 0;
//     Node* arg = va_arg(ap, Node*);
//     Node** children = NULL;
//     for (; arg != NULL; arg = va_arg(ap, Node*)){
//         n_args ++;
//         children = (Node**) realloc(children, n_args * sizeof(Node*));
//         children[n_args - 1] = arg;
//     }
//     new_node->n_child = n_args;
//     new_node->children = children;
//
//     va_end(ap);

//     return new_node;
// }


