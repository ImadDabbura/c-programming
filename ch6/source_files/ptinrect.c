#include <stdio.h>

struct point {
    int x;
    int y;
};

struct rec {
    struct point pt1;
    struct point pt2;
};

/* check if a point is in rectangle */
int ptinrect(struct point p, struct rec r)
{
    return r.pt1.x <= p.x && r.pt2.x > p.x
        && r.pt1.y <= p.y && r.pt2.y > p.y; 
}

int main()
{
    struct rec rec1 = {
        {10, 20},
        {20, 30},
    };
    struct point pt = {10, 23};
    printf("the point is in rectangle : %d\n", ptinrect(pt, rec1));
    return 0;
}
