#include <stdio.h>

int add_int(int x, int y) { return x + y; }
float add_float(float x, float y) { return x + y; }
double add_double(double x, double y) { return x + y; }

#define add(x, y)                                                              \
  _Generic((x),                                                                \
      int: add_int((x), (y)),                                                  \
      float: add_float((x), (y)),                                              \
      double: add_double((x), (y)),                                            \
      default: "Test", )

int main(int argc, char *argv[]) {
  int ai = 1, bi = 2;
  printf("%d\n", add(ai, bi));
  return 0;
}
