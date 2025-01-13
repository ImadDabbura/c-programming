#include <stdio.h>

/* We need to put the statements in {} to create a scope
 * so objects will be destroyed upon exit of the block
 * and won't have conflicts with other identifiers*/
#define SUM_RANGE(start, end)                                                  \
  {                                                                            \
    int sum = 0;                                                               \
    for (int i = (start); i < (end); i++)                                      \
      sum += i;                                                                \
    printf("sum: %d\n", sum);                                                  \
  }

int main(int argc, char *argv[]) {
  SUM_RANGE(2, 10);
  return 0;
}
