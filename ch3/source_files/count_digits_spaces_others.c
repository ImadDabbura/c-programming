#include <stdio.h>

/* count digits, white spaces, and others */
int main()
{
    int c, i, nwhite, nother;
    int ndigits[10];

    nwhite = nother = 0;
    for (i = 0; i <= 9; i++)
        ndigits[i] = 0;
    
    while((c = getchar()) != EOF){
        switch (c){
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                ++ndigits[c - '0'];
                break;
            case ' ': case '\t': case '\n':
                ++nwhite;
            default:
                ++nother;
                break;
        }
    }
    printf("digits =");
    for (i = 0; i <= 9; ++i)
        printf(" %d", ndigits[i]);
    printf("white space = %d", nwhite);
    printf("other = %d", nother);
    return 0;
}
