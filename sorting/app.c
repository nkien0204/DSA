#include "sorting.h"

int main () {
  int * array = InitArray ();
  Display (array);
  BubbleSort (&array);
  Display (array);
  free (array);
  return 0;
}