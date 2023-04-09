#include <stdio.h>

void func(char *sp, char sa[]){
    printf("Size of sp = %ld\n", sizeof(sp));
    printf("Size of sa = %ld\n", sizeof(sa));
}

int main(){
    char *sp = "imad"; /* Character pointer */
    char sa[] = "imad"; /* Character array */

    printf("Size of sp = %ld\n", sizeof(sp));
    printf("Size of sa = %ld\n", sizeof(sa));
    func(sp, sa);
}
