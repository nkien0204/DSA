#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct bst_Node {
  int data;
  struct bst_Node * left;
  struct bst_Node * right;
} * Node;

Node CreateNode (int data);
void Insert (Node * root, int data);
bool Search (Node root, int data);
void Delete (Node * root, int data);
void PreTraverse (Node root);
void InTraverse (Node root);
void PostTraverse (Node root);
// void Search (Node root);