#include "heaps.h"

int main () {
  int input[] = {35, 33, 42, 100/*, 14, 19, 27, 44, 26, 31*/};
  HeapNode heap = InitRootNode(35);

  for (int i = 1; i < 4; i++) {
    InsertNodeHeap (&heap, input[i]);
  }
  PreTraverse ((Node)heap);
  printf ("\n");
  return 0;
}