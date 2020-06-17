#include "linked_list.h"

int main () {
  Node head = InitList();
  Insert (&head, 0, 5);
  Insert (&head, 1, 22);
  Insert (&head, 1, 222);
  Insert (&head, 3, 45);
  Insert (&head, 0, 245);
  Display (head);
  Search (head, 3);
  free (head);
  return 0;
}