#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int *ip = arr;

    printf("pointer address -1: %p\n", ip);
    ip -= 1;
    printf("pointer address : %p\n", ip);
    ip += 2;
    printf("pointer address +1: %p\n", ip);
    
    return 0;
}
