#include <stdio.h>

int main()
{
    int v;          // numbers read from stdin
    int sum = 0;

    // Adding numbers from stdin
    while (scanf("%d", &v))
        printf("%d\n", sum += v);    
    return 0;
}
