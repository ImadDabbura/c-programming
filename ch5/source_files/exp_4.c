#include <stdio.h>

int main(){
    int ndigits[10];
    int i;
    int *pa;

    for (i = 0; i <= 9; i++)
        ndigits[i] = i;
    
    pa = &ndigits[5];
    printf("%d, %d, %d\n", *(pa - 1), *pa, *(pa + 1));
}