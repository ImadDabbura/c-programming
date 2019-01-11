#include <stdio.h>

#define   LOWER   0      /* lower limit of the temperature table */
#define   UPPER   300    /* upper limit */
#define   STEP    20     /* step size */

/* print Fahrenheit-Celsius table */
int main(){
        float fahr;

        printf("Fahrenheit-Celsius table:\n");
        printf("-------------------------\n");
        for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
            printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
    }