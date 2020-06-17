#include "sorting.h"

int * InitArray () {
  int * array = (int *)malloc(sizeof(int) * SIZE);
  srand(time(0));
  for (int i = 0; i < SIZE; i++) {
    array[i] = rand() % 100;
  }
  return array;
}

void Swap (int * a, int * b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void BubbleSort (int ** array) {
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE - i - 1; j++) {
      if ((*array)[j] > (*array)[j+1]) {
        Swap (&(*array)[j], &(*array)[j+1]);
      }
    }
  }
}

void InsertionSort (int ** array) {
  int * sub_array = (int *)malloc(sizeof(int) * SIZE);
  for (int i = 0; i < SIZE - 1; i++) {
    if ((*array)[i] > (*array)[i+1]) {
      Swap (&(*array)[i], &(*array)[i+1]);
      sub_array[i] = (*array)[i];
      for (int j = 0; j < i+1; j++) {
        
      }
    }
  }
}

void Display(int * array) {
  for (int i = 0; i < SIZE; i++) {
    printf ("%d ", array[i]);
  }
  printf ("\n");
}