#include <stdio.h>

char chars[4] = "Imad";

int main()
{
    int i;

    for (i = 0; i < sizeof(chars) / sizeof(chars[0]); i++)
        printf("%c = %d\n", chars[i], chars[i]);
    return 0;
}
