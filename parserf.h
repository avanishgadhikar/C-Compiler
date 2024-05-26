#ifndef PARSER_H_
#define PARSER_H_

typedef struct Node{
    char* value;
    TokenType type;
    struct Node*left;
    struct Node* right;
}Node;

void print_tree(Node* node, int indent, char* identifier);
Node* init_node(Node* node, char* value, TokenType type);
void print_error(char* error_type);
Node* parser(Token* tokens);

#endif
