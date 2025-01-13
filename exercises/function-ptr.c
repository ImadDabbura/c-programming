#include <stdarg.h>
#include <stdio.h>

int sum_all(int count, ...) {
  va_list ap;
  int sum = 0;

  va_start(ap, count);
  for (int i = 0; i < count; i++) {
    int n = va_arg(ap, int);
    sum += n;
  }
  va_end(ap);
  return sum;
}

int main(int argc, char *argv[]) {
  int (*sum)(int, ...) = sum_all;
  int value = sum(3, 1, 2, 3);
  printf("Sum = %d\n", value);
  return 0;
}
