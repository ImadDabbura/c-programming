#include <stddef.h>
#include <stdio.h>

int main() {
  char name[] = "imad";
  char *word = "imad";

  printf("char array: %lu bytes\n", sizeof name);
  printf("char pointer: %lu bytes\n", sizeof word);
  return 0;
}
