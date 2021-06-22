#include <stdio.h>

int main()
{
    int x = 0, y = 1;
    int *ip;                            /* ip is a pointer to integer */

    printf("x = %d, y = %d\n", x, y);
    ip = &x;                            /* ip is a pointer to x */
    y = *ip;                            /* y is now 0 */
    printf("x = %d, y = %d\n", x, y);   
    *ip = 1;                            /* x is now 1 */
    printf("x = %d, y = %d\n", x, y);
    return 0;
}
