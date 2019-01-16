#include <stdio.h>

/* compute the length of a string */
int strlength(char *s){

    char *p = s;    /* assigning a pointer to another pointer of the same type */

    while (*p != '\0')
        ++p;        /* increment the pointer to the next element */
    return p - s;   /* we can do arithmetic on pointers */
}

int main(){
    char s[] = "imad dabbura";
    
    printf("length of \"%s\" : %d\n", s, strlength(s));
}