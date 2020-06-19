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
void Delete (char * key, char * data);
bool Search (char * key);
int Len(char * key);