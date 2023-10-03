#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    static char month[][15] = {
        "Illegal month", "January", "February", "March",
        "April", "May", "June", "July", "August", "September",
        "October", "November", "December"
    };
    static char *monthp[] = {
        "Illegal month", "January", "February", "March",
        "April", "May", "June", "July", "August", "September",
        "October", "November", "December"
    };
    printf("2d-array results : \n");
    printf("%c, %s\n", month[1][6], month[0]);
    printf("char array pointer results : \n");
    printf("%p, %s\n", monthp[0], month[0]);

    int sz = 0;
    for (int i = 0; i < 13; sz += strlen(monthp[i]), i++)
        ;
    printf("Size of char array = %lu\n", sizeof(month));
    printf("Size of char pointer array = %lu\n", sizeof(monthp) + sz);
    return 0;
}
