#include <stdio.h>
#include <stdlib.h>
// typedef enum {
//   FLAG_A = 1 << 0,
//   FLAG_B = 1 << 1,
//   FLAG_C = 1 << 2,
// } flags;
//
int main(int argc, char *argv[]) {
  //   printf("%lu\n", sizeof(FLAG_A));
  //   printf("%d\n", FLAG_B);
  //   printf("%lu\n", sizeof(flags));
  //   printf("%lu\n", sizeof(unsigned long));
  struct S {
    int x;
    double A[];
  };
  struct S *s = malloc(sizeof(struct S) + 64);
  printf("%lu\n", sizeof(struct S));
  printf("%d\n", s->x);
  s->x = 10;
  s->d = {1.0};
  return 0;
}
