#include <stdio.h>

void test(int *n)
{
    *n = 10;
    int i = 100;
    n = &i;
}

int main(int argc, char const *argv[])
{
    int *ptr;
    int i = 0;

    ptr = &i;
    test(ptr);

    printf("%d\n", i);
    printf("%d\n", *ptr);
    return 0;
}
