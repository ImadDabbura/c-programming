#include <stdio.h>
/* copy t to s */
void strcpy_v2(char *s, char *t){
    while (*s++ = *t++)
        ;
}

int main(int argc, char const *argv[]) {
    char *s = argv[1];
    // char *t;
    // strcpy_v2(s, t);
    // printf("%s, %t\n", s, t);
    printf("%s", s);
    return 0;
}