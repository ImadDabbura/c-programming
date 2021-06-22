#include <stdio.h>
#include "headers.h"

int main()
{
    int a = 10;
    int b = 20;

    printf("number = %d\n", NUMBER);
    printf("max of (%d, %d) is %d\n", a, b, max(a, b));
    return 0;
}