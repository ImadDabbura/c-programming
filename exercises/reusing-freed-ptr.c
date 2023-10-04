#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *intptr;
    intptr = malloc(sizeof(int));
    *intptr = 10;

    printf("test pointer value = %d\n", *intptr);
    free(intptr);
    printf("test pointer value = %d\n", *intptr);
    return 0;
}