#include <stdio.h>

int main(){
    int ndigits[10];
    int i;
    int *pa, *pa_2, *iq;

    for (i = 0; i <= 9; i++)
        ndigits[i] = i;
    
    pa = &ndigits[0];
    pa_2 = ndigits;         /* since ndigits hold the address of the first element */
    iq = ndigits + 4;
    printf("%d, %d, %d, %d, %d\n", *pa, *pa_2, *(pa + 4), pa[4], *iq);
}