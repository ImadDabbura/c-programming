#include <stdio.h>

int main()
{
    int arr[10];
    int *ip;
    int i;

    for (i = 0; i < 10; i++) {
        arr[i] = i * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");
    ip = arr;
    /* ++ is unary operator so the expression gets executed right to left */
    printf("*++ip = %d\n", *++ip);          /* Increment the pointer then fetch the element */
    printf("++*ip = %d\n", ++*ip);          /* Increment the element that the pointer is pointing at */
    printf("*ip++ = %d\n", *ip++);          /* Fetch the element then increment the pointer */
    printf("(*ip)++ = %d\n", (*ip)++);      /* Increment the element that the pointer is pointing at */
    for (i = 0; i < 10; i++) {
        arr[i] = i * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");
}
