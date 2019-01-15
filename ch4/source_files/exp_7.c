#include <stdio.h>

char chars[4] = "Imad";

int main()
{
    int i;
    char e;

    for (i = 0; i <= 3; i++)
        printf("%c = %d\n", putchar(chars[i]), chars[i]);
    return 0;
}