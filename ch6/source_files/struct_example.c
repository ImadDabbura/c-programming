#include <stdio.h>

struct point {
    int x;
    int y;
};

int main()
{
    struct point pt = {10, 20};

    printf("point coordinates : (%d, %d)\n", pt.x, pt.y);
    return 0;
}
