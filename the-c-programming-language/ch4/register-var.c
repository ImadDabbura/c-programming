#include <stdio.h>

int main(){
    register int x;
    register int y;
    int i;
    printf("Register value x = %d\n", x);
    printf("Register value y = %d\n", y);
    printf("Variable i = %d\n", i);
    /* Can't get address of a register variable */
    /* printf("Address of x = 0x%lx\n", (unsigned long)&x); */
}
