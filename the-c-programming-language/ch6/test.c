#include <stdio.h>

int main(int argc, char const *argv[]) {
    char name[] = "imad";
    char *name2 = "imad";
    int arr[] = {1, 2, 3, 4, 5};
    int arr2d[1][4] = {{1, 2, 3, 4}};
    printf("%s\n", name);
    printf("%s\n", name2);
    printf("%p\n", arr2d[0]);
}