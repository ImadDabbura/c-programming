#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int *ip = arr;

    printf("pointer address : %p\n", ip--);
    printf("pointer address -1: %p\n", ip++);
    printf("pointer address +1: %p\n", ++ip);
    return 0;
}
