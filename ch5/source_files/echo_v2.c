#include <stdio.h>

/* echo command line arguments */
int main(int argc, char const *argv[])
{
    while (--argc)
        printf("%s%s", *++argv, (argc > 1) ? " ": "");
    printf("\n");
    return 0;
}
