#include <stdio.h>

/* count blanks, tabs, and new lines */
int main()
{
    int c, nb, nt, nl;

    nb = 0;             /* number of blanks */
    nt = 0;             /* number of tabs */
    nl = 0;             /* number of newlines */
    while ((c = getchar()) != EOF){
        if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++nl;
        else if (c == ' ')
            ++nb;    
    }
    printf("Number of blanks : %d\n", nb);
    printf("Number of tabs : %d\n", nt);
    printf("Number of newlines : %d\n", nl);
}
