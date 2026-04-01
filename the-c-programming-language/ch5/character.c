#include <stdio.h>

void func(char *sp, char sa[]){
    // Size of sp == Size of sa because they are both passed as argv-pointers
    // In other words, sa will be decayed as pointers
    // Bottom line: We can treat array and point of same type as the same thing 
    // inside functions. It is kinda more common to use pointer notation
    printf("Inside functions, both are treated as pointers, which means "
           "would have the size of the machine word\n");
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
