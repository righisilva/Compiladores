#include "lista.h"

int vars_size = 0;
int temps_size = 0;

struct tac* create_inst_tac(const char* res, const char* arg1, const char* op, const char* arg2) {
    struct tac* inst = (struct tac*)malloc(sizeof(struct tac));
    inst->op = strdup(op);
    inst->res = strdup(res);
    inst->arg1 = strdup(arg1);
    inst->arg2 = strdup(arg2);
    return inst;
}

// inst->op = (char*)malloc((strlen(op) + 1) * sizeof(char)); // Aloca memória para inst->op
// strcpy(inst->op, op); // Copia a string op para inst->op

void print_inst_tac(FILE* out, struct tac i) {
    fprintf(out, "%s %s %s %s\n", i.op, i.res, i.arg1, i.arg2);
}

void print_tac(FILE* out, struct node_tac* code) {
    struct node_tac* current = code;
    int line_number = 1;
    while (current != NULL) {
        fprintf(out, "%03d: ", line_number++);
        print_inst_tac(out, *(current->inst));
        current = current->next;
    }
}

void append_inst_tac(struct node_tac** code, struct tac* inst) {
    struct node_tac* new_node = (struct node_tac*)malloc(sizeof(struct node_tac));
    new_node->number = vars_size++;
    new_node->inst = inst;
    new_node->next = NULL;
    
    if (*code == NULL) {
        *code = new_node;
        (*code)->prev = NULL;
    } else {
        struct node_tac* current = *code;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
    }
}

void cat_tac(struct node_tac** code_a, struct node_tac** code_b) {
    if (*code_a == NULL) {
        *code_a = *code_b;
    } else {
        struct node_tac* current = *code_a;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = *code_b;
        if (*code_b != NULL) {
            (*code_b)->prev = current;
        }
    }
}
