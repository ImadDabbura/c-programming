#include <stdio.h>

int main(){
    enum flags {READ = 04, WRITE = 010};
    printf("Here is WRITE = %d\n", WRITE);
    printf("NULL terminated: %c\n", '\0');
    printf("NULL terminated: %d\n", '\0');
}
