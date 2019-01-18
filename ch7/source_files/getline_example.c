#include <stdio.h>
#include <string.h>

#define MAXLINE 100

/* read a line and return its length */
int getline_example(char *line, int max)
{
    if (fgets(line, max, stdin) == NULL)
        return 0;
    else
        return strlen(line);
}

int main(int argc, char const *argv[])
{
    int length;
    char line[MAXLINE];
    int getline_example(char *, int);

    length = getline_example(line, MAXLINE);
    printf("line length = %d\n", length);
    return 0;
}
