#include <stdio.h>

/* swap values inplace */
void swap(int *a, int *b){
    int tmp;

    tmp = *a;       /* copy content of a */
    *a = *b;
    *b = tmp;
}

int main(){
    int x = 10, y = 20;

    printf("old x & y = %d, %d\n", x, y);
    swap(&x, &y);       /* provide pointers not the variables themselves */
    printf("new x & y = %d, %d\n", x, y);
}