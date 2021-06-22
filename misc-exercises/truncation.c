#include <stdio.h>

int main()
{
    unsigned char ch;
    int i = 321, n;
    float pi = 3.14159;

    ch = i;         // should truncate the int value to fit in a char
    n = pi;         // should truncate the decimal parts
    printf("%d\n", '\0');
    printf("int value = %d, char value = %d\n", i, ch - '\0');
    printf("float value = %f, int value = %d\n", pi, n);
}