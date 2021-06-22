#include <stdio.h>
#define IN  0            /* inside a word */
#define OUT 0           /* outside a word */

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            if (state == IN){
                putchar(c);     /* outside of word */
                state = OUT;
            }
        else if (state == OUT){
            state = IN;         /* beginning of word */
            putchar(c);
        }
        else
            putchar(c);         /* inside of word */
        }
    }
}