#include <stdio.h>

/* simple representation of a date structure */
struct date_v1 {
    unsigned int month;
    unsigned int day;
    unsigned int year;
};

/* space optimized version of date */
struct date_v2 {
    /* month range between 1 and 12 so 4 bit is good */
    unsigned int month: 4;
    /* day range between 1 and 31 so 5 bit is good */
    unsigned int day: 5;
    unsigned int year;
};
int main()
{
    /* before optimization */
    struct date_v1 dt = {12, 31, 2018};
    printf("before optimization :\n");
    printf("size of date structure in bytes : %lu\n", sizeof(struct date_v1));
    printf("date is : %d/%d/%d\n\n", dt.day, dt.month, dt.year);
    
    /* after optimization */
    struct date_v2 dt_2 = {12, 31, 2018};
    printf("after optimization :\n");
    printf("size of date structure in bytes : %lu\n", sizeof(struct date_v2));
    printf("date is : %d/%d/%d\n", dt_2.day, dt_2.month, dt_2.year);
    return 0;
}
