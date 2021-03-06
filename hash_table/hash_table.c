#include "hash_table.h"

DataItem * InitItem (char * key, char * data) {
  DataItem * item = (DataItem *) malloc (sizeof (DataItem));
  (*item).data = data;
  (*item).key = key;
  return item;
}

int HashFunc (char * key) {
  int hash_code = 0;
  int k = 1;
  for (char * ch = key; *ch != '\0'; ch++, k++) {
    hash_code += (int)*ch * k;
  }
  hash_code %= SIZE;
  return hash_code;
}

void Insert (char * key, char * data) {
  char * buff;
  if (Search (key, &buff)) {
    printf ("Key already in use, try another one.\n");
    return;
  }
  DataItem * item = InitItem (key, data);
  int index = HashFunc ((*item).key);
  while (list[index].data != NULL) {
    index++;
  }
  printf ("index: %d\n", index);
  list[index] = *item;
  free(item);
}

bool Search (char * key, char ** buff) {
  int index = HashFunc (key);
  if (list[index].key == NULL) {
    *buff == NULL;
    return false;
  }
  while (strcmp (list[index].key, key) != 0 && index < SIZE - 1) {
    index++;
  }
  if (strcmp (list[index].key, key) == 0) {
    *buff = list[index].data;
    return true;
  } else {
    *buff = NULL;
    return false;
  }
}

void Delete (char * key) {
  int index = HashFunc (key);
  if (list[index].key == NULL) {
    return;
  }
  while (strcmp (list[index].key, key) != 0 && index < SIZE - 1) {
    index++;
  }
  if (strcmp (list[index].key, key) == 0) {
    list[index].key = NULL;
    list[index].data = NULL;
    return;
  }
}

int Len (char * key) {
  int len = 0;
  char ch = key[0];
  while (ch != '\0') {
    len++;
    ch = key[len];
  }
  return len;
}