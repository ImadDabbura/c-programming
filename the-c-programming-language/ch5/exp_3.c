#include <stdio.h>

int main()
{
    int x = 0;
    int *ip, *iq;                     /* ip is a pointer to integer */

    ip = &x;                            /* ip is a pointer to x */
    iq = ip;
    *ip += 1;
    printf("%d, %d\n", *ip, *iq);   
    return 0;
}
