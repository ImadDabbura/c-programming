#include <stdio.h>

/* name of month */
char *month_name(int n)     /* return a pointer for corresponding characters of month name */
{
    /* We need month to be static to be able to use pointer to month name
     * Otherwise, month will be on the stack and destroyed upon return from
     * the function
     */
    static char *month[] = {        /* array of character pointers */
        "Illegal month", "January", "February", "March", "April", "June",
        "July", "August", "September", "October", "November", "December"
    };
    return (n >= 1 && n <= 12) ? month[n]: month[0];
}

int main(int argc, char const *argv[])
{
    int n = 1;
    printf("The month name of %d is %s\n", n, month_name(n));
    return 0;
}
