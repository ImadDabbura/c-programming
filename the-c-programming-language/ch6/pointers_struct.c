#include <stdio.h>

struct point {
    int x;
    int y;
};

int main()
{
    struct point pt = {10, 20};
    struct point *pp;

    pp = &pt;
    printf("point coordinates using shorthand ->: (%d, %d)\n", pp->x, pp->y);
    return 0;
}
