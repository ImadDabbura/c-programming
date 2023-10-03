#include <stdio.h>

#define ALLOCSIZE 1000

static char allocbuffer[ALLOCSIZE];
static char *allocp = allocbuffer;

char *alloc(int n){
    /* Allocating n contiguous memory from available space */
    if (allocp + n <= allocbuffer + ALLOCSIZE){
        allocp += n;
        return allocp - n;
    }
    else {
        return NULL;
    }
}

void afree(char *p){
    if (p >= allocbuffer && p <= allocbuffer + ALLOCSIZE){
        allocp = p;
    }
}
