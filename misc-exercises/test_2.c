#include <stdio.h>
#include <stddef.h>

int main(){
    char name[] = "imad";
    // char *name = "imad";
    char *word;

    printf("char array: %lu bytes\n", sizeof(name));
    printf("char pointer: %lu bytes\n", sizeof(word));
    return 0;

}