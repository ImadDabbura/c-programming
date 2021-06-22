#include <stdio.h>

int main()
{
    /* signed short has Tmin = - 2 ** 15 = 32,767; Tmax = (2 ** 15) - 1 = 32,767.
    / Therefore, 3000 * 2000 will be positive overflow and the
    / result will be 3000 * 2000 % 2 ** 16 - 2 ** 16
    */
    short n = 3000, m = 2000, ans;
    unsigned short un = (unsigned short) n;
    unsigned short um = (unsigned short) m;
    printf("n = %d, un = %d\n", n, un);
    // ans = n * m;
    unsigned short uans = un * um;
    printf("%d\n", uans);
}