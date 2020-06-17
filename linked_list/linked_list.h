#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node * next;
} * Node;

Node InitList ();
Node CreateNode (int data);
void Insert (Node * head, int location, int data);
void Delete (Node * head, int location);
void Display (Node head);
void Search (Node head, int location);
int Len (Node head);