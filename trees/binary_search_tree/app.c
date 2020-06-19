#include "bst.h"

int main () {
  Node root = CreateNode(27);
  Insert (&root, 14);
  Insert (&root, 35);
  Insert (&root, 10);
  Insert (&root, 19);
  Insert (&root, 31);
  Insert (&root, 42);
  PreTraverse(root);
  printf ("\n");
  Delete (&root, 35);
  PreTraverse(root);
  Insert (&root, 40);
  printf ("\n");
  PreTraverse(root);
  printf ("\n");
  return 0;
}