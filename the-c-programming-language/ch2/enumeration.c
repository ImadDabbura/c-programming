#include <stdio.h>

int main(){
    enum values {NO = 1, YES, MAYBE = 100, FINAL};
    const int i = 10;
    printf("%d, %d, %d, %d\n", NO, YES, MAYBE, FINAL);
    printf("%d\n", -3/2);
    printf("%d\n", 3/-2);
}