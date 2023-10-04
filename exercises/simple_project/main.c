#include <stdio.h>
#include <stdlib.h>
#include "headers.h"

int main(int argc, char const *argv[])
{
    int a, b, minimum, maximum;

    if (argc != 3)
        printf("provide two integers to get the minimum and maximum.\n");
    else {
        a = strtol(argv[1], NULL, 10);
        b = strtol(argv[2], NULL, 10);
        minimum = min(a, b);
        maximum = max(a, b);

        printf("minimum of (%d, %d) = %d\n", a, b, minimum);
        printf("maximum of (%d, %d) = %d\n", a, b, maximum);
    }    
    return 0;
}
