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

    // ptr should still be pointing to `i` in main since we all args are passed
    // by value and no function change what a pointer points to but it only can
    // change the pointee; i.e. the object that the pointer points to
    printf("%d\n", i);
    printf("%d\n", *ptr);
    return 0;
}
