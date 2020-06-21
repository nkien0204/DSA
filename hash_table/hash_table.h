#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define SIZE 10000000

typedef struct DataItem {
  char * data;
  char * key;
} DataItem;

DataItem list[SIZE];

DataItem * InitItem ();
int HashFunc (char * key);
void Insert (char * key, char * data);
void Delete (char * key);
bool Search (char * key, char ** data);
int Len(char * key);