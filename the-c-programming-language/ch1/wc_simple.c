#include <stdio.h>

#define IN  1       /* inside a word */
#define OUT 0       /* outside a word */

/* count number of lines, words, and characters */
int main()
{
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;           /* increment number of characters */
        if (c == '\n')
            ++nl;       /* increment number of newlines */
        if (c == '\n' || c == '\t' || c == ' ')
            state = OUT;
        else if (state == OUT)
            state = IN;
            ++nw;
    }
    printf("%d %d %d\n", nl, nw, nc);
}
