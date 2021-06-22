#include <stdio.h>

int main()
{
    int arr[10];
    int *ip;
    int i;

    for (i = 0; i < 10; i++)
        if (i == 1)
            arr[i] = 100;
        arr[i] = i;
    
    ip = arr;
    printf("ip = %d, *++p = %d\n", *ip, *++ip);
    ip -= 1;
    printf("++(*p) = %d\n", ++(*ip));
}