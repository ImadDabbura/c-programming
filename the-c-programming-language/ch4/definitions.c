#include <stdio.h>
#include "headers.h"
#ifndef TEST
    #define TEST 20
#endif
#ifdef NUMBER
    #define NUMBER2 = 200
#endif

int main(){
    printf("Test = %d\n", TEST);
}
