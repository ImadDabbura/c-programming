#include <stdio.h>

// read date in the form day month year and print it out as mm/dd/yyyy
int main()
{
    int day, month, year;

    // Adding numbers from stdin
    while (scanf("%d %d %d", &day, &month, &year)){
        printf("%d/%d/%d\n", month, day, year);
        break;
    }
    return 0;
}
