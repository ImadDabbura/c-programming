#include <stdio.h>
int main(int argc, char const *argv[]) {
    int arr[5] = {0, 1, 2, 3, 4};
    int *arrptr = arr;
    printf("%d\n", *arrptr++);
    printf("%d\n", *arrptr++);
}