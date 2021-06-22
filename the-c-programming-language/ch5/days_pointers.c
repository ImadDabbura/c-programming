#include <stdio.h>

static int daytable[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

/* day of year */
int day_of_year(int year, int month, int day){
    int leap;
    int *p;

    leap = (year % 4 == 0 && year % 100 != 0) || year % 400 != 0;
    p = daytable[leap] + 1;         /* pointer to the first element of the array */
    while (--month)
        day += *p++ ;
    return day;
}

int main(){
    char date[] = "1/15/2019";
    printf("%s is %d day of the year\n", date, day_of_year(2019, 1, 15));
}
