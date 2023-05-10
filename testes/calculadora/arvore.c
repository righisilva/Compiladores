#include "arvore.h"
#include <stdlib.h>

Node* create_node(int type, int value, Node *left, Node *right) {
    Node *n = (Node*)malloc(sizeof(Node));
    n->type = type;
    n->value = value;
    n->left = left;
    n->right = right;
    return n;
}

void free_node(Node *n) {
    if (n == NULL) return;
    free_node(n->left);
    free_node(n->right);
    free(n);
}

int evaluate(Node *n) {
    if (n->type == 'L') {
        return n->value;
    } else if (n->type == '+') {
        return evaluate(n->left) + evaluate(n->right);
    } else if (n->type == '-') {
        return evaluate(n->left) - evaluate(n->right);
    } else if (n->type == '*') {
        return evaluate(n->left) * evaluate(n->right);
    } else if (n->type == '/') {
        return evaluate(n->left) / evaluate(n->right);
    } else {
        return 0;
    }
}

