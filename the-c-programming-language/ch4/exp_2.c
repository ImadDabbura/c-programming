#include <stdio.h>

int main()
{
    /* Since global variable is used before it was defined 
     * -> we need to declare it with `extern`*/
    extern int n;

    printf("n = %d\n", n);
    return 0;
}

int n = 20;
