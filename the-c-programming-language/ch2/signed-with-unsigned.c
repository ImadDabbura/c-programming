#include <stdio.h>

int main() {
    signed char i = -100;
    unsigned char j = 130;
    printf("%d, %d", i + j, (char) j);
    return 0;
}