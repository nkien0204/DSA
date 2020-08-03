#include <stdio.h>
#include <stdlib.h>
#include "../../sorting/sorting.h"
#include "../binary_search_tree/bst.h"

typedef struct bst_HeapNode {
  int data;
  struct bst_HeapNode * left;
  struct bst_HeapNode * right;
  struct bst_HeapNode * up;
} * HeapNode;

HeapNode InitRootNode (int data);
HeapNode InitChildNode (HeapNode up_node, int data);
void InsertNodeHeap (HeapNode * heap, int data);
void Display ();