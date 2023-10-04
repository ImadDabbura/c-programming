#include <stdio.h>
int x1;
int x2;
int x3;

int main(void)
{
    extern int x2;
    int x3;
    static int x4;

    printf("x1 = %d\n", x1);   /* should be zero using x1 from surrounding block */
    printf("x2 = %d\n", x2);   /* Same as above but we're explicit here. should be zero using x2 from surrounding block */
    printf("x3 = %d\n", x3);   /* x3 is unique to main so it has no linkage and x3 from surrounding blocks will be suspended */
    printf("x4 = %d\n", x4);   /* should be zero and x4 has internal linkage to main */
    
    return 0;
}
