#include <stdio.h>

int main()
{
    extern int n;

    printf("n = %d\n", n);
    return 0;
}

int n = 20;