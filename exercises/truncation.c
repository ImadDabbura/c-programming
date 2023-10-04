#include <stdio.h>

int main()
{
    unsigned char ch;
    int i = 321, n;
    float pi = 3.14159;

    ch = i;         // should truncate the int value to fit in a char which
                    // will be 65
    n = pi;         // should truncate the decimal parts
    printf("int value = %d, char value = %d\n", i, ch);
    printf("float value = %f, int value = %d\n", pi, n);
}
