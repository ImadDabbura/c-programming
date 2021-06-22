#include <stdio.h>

int main(int argc, char const *argv[])
{
    char arrmsg[] = "imad";
    char *ptrmsg = "imad";
    int arrint[] = {1, 2, 3};
    
    int n = 10;
    int *intptr;
    intptr = &n;

    printf("%d\n", *intptr);
    printf("accessing array message: first element = \"%c\"\n", arrmsg[0]);
    printf("accessing pointer message: first element = \"%c\"\n", ptrmsg[0]);
    return 0;
}
