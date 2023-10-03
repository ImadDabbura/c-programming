#include <stdio.h>
#define MAXLINE 1000

int getline_(char [], int);
void copy(char [], char []);

int main(void)
{
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline_(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }

    if (max) {
        printf("%s\n", longest);
    }

    return 0;
}

int getline_(char s[], int lim)
{
    int c, i;

    for (i = 0; (i < lim - 1) && ((c = getchar()) != EOF) && (c != '\n'); i++) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i++] = '\n';
    }
    s[i] = '\0';
    return i;
}

void copy(char dst[], char src[])
{
    while ((*dst++ = *src++))
        ;
}
