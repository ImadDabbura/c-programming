#include <stdio.h>

int main(int argc, char *argv[]) {
  int A[] = {['a'] = 10, ['b'] = 20, ['c'] = 30, ['z'] = 40, [1000] = 0};
  printf("Size of the array = %lu\n", sizeof A);
  printf("Number of elements in the array = %lu\n", sizeof A / sizeof(int));
  return 0;
}
