#include <stdio.h>

/* count lines of input */
int main(int argc, char const *argv[])
{
    int c, nl;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    printf("%d\n", nl);
}
