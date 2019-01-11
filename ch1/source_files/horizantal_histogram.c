#include <stdio.h>

#define MAXHIST 15      /* maximum length of histogram bars */
#define MAXWORD 11      /* maximum length of a word */
#define IN      1       /* inside a word */
#define OUT     0       /* outside a word */

/* print a horizontal histogram */
int main()
{
    int c, i, nc, state;
    int len;            /* length of word bar */
    int maxvalue;       /* maximum value of words length*/
    int ovflow;         /* number of words have length >= MAXWORD */
    int wl[MAXWORD]     /* array holding words length counters */
}