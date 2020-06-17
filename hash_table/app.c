#include "hash_table.h"

int main () {
  char * buff = "0327274166b";
  Insert ("catdog", "0327274166");
  Insert ("catdoga", "0327274166a");
  Insert ("catdogb", "0327274166b");
  Insert ("catdogc", "0327274166c");
  if (!Search ("catdogb", &buff)) {
    printf ("Key not found.\n");
  } else {
    printf ("data: %s\n", buff);
  }

  return 0;
}