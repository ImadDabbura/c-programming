#include <stdio.h>

/* count number of digits, white spaces, and others */
int main()
{
    int c, i, nwhite, nother;
    int ndigit[10];             /* initialize array of integers of size 10 */

    for (i = 0; i <= 9; ++i)
        ndigit[i] = 0;          /* set all elements to zero */
    
    nwhite = nother = 0;
    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("digits = ");
    for (i = 0; i <= 9; ++i)
        printf(" %d", ndigit[i]);
    printf("\n");
    printf("number of white spaces = %d\n", nwhite);
    printf("number of other = %d\n", nother);
}
