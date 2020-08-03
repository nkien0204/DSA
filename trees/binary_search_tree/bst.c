#include "bst.h"

Node CreateNode (int data) {
  Node node = (Node)malloc(sizeof(struct bst_Node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void Insert (Node * root, int data) {
  if ((*root) == NULL) {
    Node new_node = CreateNode (data);
    (*root) = new_node;
    return;
  } else {
    if (data < (*root)->data) {
      Insert (&(*root)->left, data);
    } else if (data >= (*root)->data) {
      Insert (&(*root)->right, data);
    }
  }
}

bool Search (Node root, int data) {
  if (root == NULL) {
    return false;
  }
  if (root->data == data) {
    return true;
  } else if (data < root->data) {
    Search (root->left, data);
  } else if (data > root->data) {
    Search (root->right, data);
  }
}

void Delete (Node * root, int data) {
  if (*root == NULL) {
    printf ("Nothing to delete\n");
    return;
  }
  if ((*root)->data == data) {
    *root = NULL;
    return;
  } else if (data < (*root)->data) {
    Delete (&(*root)->left, data);
  } else if (data > (*root)->data) {
    Delete (&(*root)->right, data);
  }
}

void PreTraverse (Node root) {
  if (root != NULL) {
    printf ("%d ", root->data);
    PreTraverse (root->left);
    PreTraverse (root->right);
  }
}

void InTraverse (Node root) {
  if (root != NULL) {
    InTraverse (root->left);
    printf ("%d ", root->data);
    InTraverse (root->right);
  }
}

void PostTraverse (Node root) {
  if (root != NULL) {
    PostTraverse (root->left);
    PostTraverse (root->right);
    printf ("%d ", root->data);
  }
}