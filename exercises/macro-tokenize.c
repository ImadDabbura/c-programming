#include <stdio.h>

#define GENERIC_ADD_TYPE(type)                                                 \
  type add_##type(type x, type y) { return x + y; }

GENERIC_ADD_TYPE(int)
GENERIC_ADD_TYPE(float)
GENERIC_ADD_TYPE(long)

int main(int argc, char *argv[]) {
  printf("%d\n", add_int(2, 3));
  printf("%f\n", add_float(2.0, 3.2));
  printf("%ld\n", add_long(2L, 3L));
  return 0;
}
