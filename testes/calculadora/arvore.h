typedef struct node {
    int type;
    int value;
    struct node *left;
    struct node *right;
} Node;

Node* create_node(int type, int value, Node *left, Node *right);
void free_node(Node *n);
int evaluate(Node *n);

