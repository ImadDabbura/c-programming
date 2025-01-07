#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        fprintf(stderr, "Please provide a number to convert from string to int\n");
        exit(EXIT_FAILURE);
    }
    int n = 0;
    char *s = argv[1];

    while (*s != '\0'){
        n = 10 * n + *s++ - '0';
    }
    printf("Here is the number: %d\n", n);
    return 0;
}
