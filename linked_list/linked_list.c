#include "linked_list.h"

Node InitList () {
  Node head = NULL;
  head = (Node) malloc(sizeof(Node));
  return head;
}

Node CreateNode (int data) {
  Node node = (Node) malloc(sizeof(Node));
  node->data = data;
  node->next = NULL;
  return node;
}

void Display (Node head) {
  for (Node node = head->next; node != NULL; node = node->next) {
    printf ("%d ", node->data);
  }
  printf("\n");
}

void Insert (Node * head, int location, int data) {
  Node new_node = CreateNode (data);
  int k = 1;
  if (location > Len (*head)) {
    printf ("INSERT ERROR: New node\'s location is greater than the length of list.\n");
    exit(0);
  }
  if (Len (*head) == 0) {
    (*head)->next = new_node;
    return;
  }
  if (location == 0) {
    new_node->next = (*head)->next;
    (*head)->next = new_node;
    return;
  }
  for (Node node = (*head)->next; node != NULL; node = node->next, k++) {
    if (k == location) {
      new_node->next = node->next;
      node->next = new_node;
      return;
    }
  }
}

void Delete (Node * head, int location) {
  int k = 0;
  if ((*head)->next == NULL) {
    printf ("DELETE ERROR: Cannot delete the empty list.\n");
    return;
  }
  if (location >= Len (*head)) {
    printf ("DELETE ERROR: Invalid location\n");
    return;
  }
  for (Node node = (*head); node != NULL; node = node->next, k++) {
    if (k == location) {
      Node node_del = node->next;
      node->next = node->next->next;
      node_del = NULL;
      return;
    }
  }
}

void Search (Node head, int location) {
  int k = 0;
  if (location >= Len (head)) {
    printf ("SEARCH ERROR: Invalid location.\n");
    return;
  }
  for (Node node = head->next; node != NULL; node = node->next, k++) {
    if (k == location) {
      printf ("Search result: Node[%d] = %d\n", location, node->data);
      return;
    }
  }
}

int Len (Node head) {
  int len = 0;
  for (Node node = head->next; node != NULL; node = node->next) {
    len++;
  }
  return len;
}