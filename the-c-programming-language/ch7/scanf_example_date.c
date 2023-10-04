#include <stdio.h>

// read date in the form day month year and print it out as mm/dd/yyyy
int main()
{
    int day, month, year;

    // Adding numbers from stdin
    scanf("%d %d %d", &day, &month, &year);
    printf("%d/%d/%d\n", month, day, year);
    return 0;
}
