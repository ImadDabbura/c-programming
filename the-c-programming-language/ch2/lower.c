#include <stdio.h>
#include <string.h>

/* convert c to lower case; ASCII only */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';        /* since ASCII alphabets are contiguous */
    else
        return c;
}

int main(int argc, char *argv[], char *envp[]){
    char s[strlen(argv[1])];
    strcpy(s, argv[1]);
    int i = 0;
    while (s[i] != '\0') {
        s[i] = lower(s[i]);
        i++;
    }
    printf("Original string: %s\n", argv[1]);
    printf("Lower string: %s\n", s);
}
