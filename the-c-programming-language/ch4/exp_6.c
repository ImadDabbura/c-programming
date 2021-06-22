#include <stdio.h>

int ndigit[10];         /* elements of int arrays will be initialized to 0 */

int main()
{
    int i;

    for (i = 0; i <= 9; i++)
        printf("%d ", ndigit[i]);
    return 0;
}