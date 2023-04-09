#include <stdio.h>

int main(void){
    extern char *p;
    printf("Address of p = %p\n", p);
    printf("Address of p[3] = %c\n", p[3]);
    /* printf("Pointer %c\n", p[3]); */
    return 0;
}
