#include <stdio.h>

int main(int argc, char *argv[]) {
  struct s {
    int a : 10;
    int b : 2;
    int : 0;
    int c : 10;
  } s;
  printf("Size of the struct: %lu\n", sizeof(s));
  return 0;
}
