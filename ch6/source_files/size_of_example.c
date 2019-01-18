#include <stdio.h>
#include <stddef.h>

int main(){
    int arr[10];
    char name[] = "imad";

    printf("int : %lu bytes\n", sizeof(int));
    printf("float : %lu bytes\n", sizeof(float));
    printf("char : %lu bytes\n", sizeof(char));
    printf("size of arr : %lu\n", sizeof(arr) / sizeof(int));
    printf("size of name : %lu\n", sizeof(name) / sizeof(char));

}