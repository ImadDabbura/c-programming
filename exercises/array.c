#include <stdio.h>
#define ARRAY_LEN(a, type) sizeof a / sizeof(type)

int main(int argc, char *argv[]) {
  int a[10] = {[5] = 100};
  int len = ARRAY_LEN(a, int);
  for (int i = 0; i < len; i++) {
    printf("a[%d] = %d\n", i, a[i]);
  }
  return 0;
}
