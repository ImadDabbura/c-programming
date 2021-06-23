#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rec {
    struct point pt1;
    struct point pt2;
};

int main()
{
    struct rec rec1 = {
        {10, 20},
        {20, 30},
    };
    struct rec *recp;

    recp = &rec1;
    printf("rectangle coordinates :\n");
    printf("{(%d, %d), (%d, %d)}\n", recp->pt1.x, recp->pt1.y,
            recp->pt2.x, recp->pt2.y);
    return 0;
}
