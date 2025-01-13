#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;
  printf("Original address of i: %p\n", &i);
  i++;
  printf("Original address of i: %p\n", &i);
  ++i;
  printf("Original address of i: %p\n", &i);
  return 0;
}
