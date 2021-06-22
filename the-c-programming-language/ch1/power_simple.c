#include <stdio.h>

int power(int m, int n);        /* function prototype */

/* test power function*/
int main()
{
    int i;

    for (i = 0; i <= 9; ++i)
        printf("%d % d %d", i, power(2, i), power(-3, i));
    return 0;
}

/* raise base to the n-th power */
int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}