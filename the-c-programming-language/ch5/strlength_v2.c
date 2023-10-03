#include <stdio.h>

/* compute the length of a string */
int strlength(char *s){
    char *p = s;    /* assigning a pointer to another pointer of the same type */
    while (*p++)
        ;
    return (p - 1) - s;   /* we can do arithmetic on pointers */
}

int main(int argc, char *argv[]){
    if (argc < 2) {
        fprintf(stderr, "Please provide a string\n");
        return -1;
    }
    printf("length of \"%s\" : %d\n", argv[1], strlength(argv[1]));
    return 0;
}
