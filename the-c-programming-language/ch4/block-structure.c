#include <stdio.h>

int main(){
    int i = 100;
    printf("First i = %d\n", i);

    if (0 == 0){
        /* the variable `i` in this block is different than the external `i`
         * It gets defined and initialized every time the block is entered
         * */
        int i = 0;
        printf("Inside if block i = %d\n", i);
    }
    printf("After if block i = %d\n", i);

}
