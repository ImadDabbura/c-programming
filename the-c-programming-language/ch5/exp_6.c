#include <stdio.h>

int main(int argc, char const *argv[])
{
    static char month[][15] = {
        "Illegal month", "January", "February", "March", "April", "June",
        "July", "August", "September", "October", "November", "December"
    };
    static char *monthp[] = {
        "Illegal month", "January", "February", "March", "April", "June",
        "July", "August", "September", "October", "November", "December"
    };
    printf("2d-array results : \n");
    printf("%c, %s\n", month[1][6], month[0]);
    printf("char array pointer results : \n");
    printf("%p, %s\n", monthp[0], month[0]);
    return 0;
}