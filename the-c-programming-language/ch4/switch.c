#include <stdio.h>

/* if we don't have break in case block -> execution falls through
 * Note: It only falls through if one of the cases evaluates to true
 * Otherwise it won't execute any code block even if there is no break
 * in any of the cases. This means it will start executing after the first
 * case evaluates to true
 * */
int main() {
  switch (10) {
  case 10:
    printf("Case 10\n");
  case 1:
    printf("Case 1\n");
  case 2:
    printf("Case 2\n");
  }
}
