#include "heaps.h"

HeapNode InitRootNode (int data) {
  HeapNode node = (HeapNode)malloc(sizeof(struct bst_HeapNode));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  node->up = NULL;
  return node;
}

HeapNode InitChildNode (HeapNode up_node, int data) {
  HeapNode node = (HeapNode)malloc(sizeof(struct bst_HeapNode));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  node->up = up_node;
  return node;
}

void InsertNodeHeap (HeapNode * heap, int data) {
  HeapNode new_node = InitChildNode (*heap, data);
  if ((*heap)->left == NULL) {
    (*heap)->left = new_node;
    if ((*heap)->data < new_node->data) {
      Swap (&((*heap)->data), &(new_node->data));           //TODO: try recursiving swap func
      if ((*heap)->up == NULL) {
        return;
      } else if ((*heap)->data > (*heap)->up->data) {
        InsertNodeHeap (&((*heap)->up), data);
      }                                                     
    }
    return;
  } else if ((*heap)->right == NULL) {
    (*heap)->right = new_node;
    if ((*heap)->data < new_node->data) {
      Swap (&((*heap)->data), &(new_node->data));           //TODO: try recursiving swap func
      if ((*heap)->up == NULL) {
        return;
      } else if ((*heap)->data > (*heap)->up->data) {
        InsertNodeHeap (&((*heap)->up), data);
      }
    }
    return;
  } else {
    if ((*heap)->left->left != NULL && (*heap)->left->right != NULL) {
      InsertNodeHeap (&((*heap)->right), data);
    } else {
      InsertNodeHeap (&((*heap)->left), data);
    }
  }
}