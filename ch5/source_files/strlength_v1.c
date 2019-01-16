#include <stdio.h>

/* compute the length of a string */
int strlength(char *s){
    int n;

    for (n = 0; *s != '\0'; s++)
        ++n;
    return n;
}

int main(){
    char s[] = "imad dabbura";
    
    printf("length of \"%s\" : %d\n", s, strlength(s));
}