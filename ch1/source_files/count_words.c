#include <stdio.h>

/* count the number of words in input */
int main(int argc, char const *argv[])
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}
