#include <stdlib.h>
#include <stdio.h>

struct node {
    int x;           // store data
    double y; 
    struct node *next;  // pointer to the next node
};

int main(int argc, char const *argv[])
{
    struct node s;
    printf("%p\n", &s);
    printf("%p\n", &s.x);
    printf("%p\n", &s.y);
    printf("%p\n", &s.next);

    printf("\n%d\n", s.x);
    printf("%f\n", s.y);
    printf("%p\n", s.next);
    return 0;
}
