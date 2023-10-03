#include <stdio.h>

/* replace blanks with a single blank*/
int main(int argc, char const *argv[])
{
    int c, lastc;

    lastc = 'a';            /* any arbitrary nonblank character */
    while ((c = getchar()) != EOF) {
        if (c != ' ')
            putchar(c);
        else if (lastc != ' ')
            putchar(c);
        lastc = c;
    }
}
