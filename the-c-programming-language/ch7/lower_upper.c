#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* convert to lowercase if called with lower */
/* convert to uppercase if called with upper */
int main(int argc, char const *argv[])
{
    int c;

    if (strcmp(argv[0], "./lower") == 0)
        while ((c = getchar()) != EOF)
            putchar(tolower(c));    

    else if (strcmp(argv[0], "./upper") == 0)
        while ((c = getchar()) != EOF)
            putchar(toupper(c));
    return 0;
}
