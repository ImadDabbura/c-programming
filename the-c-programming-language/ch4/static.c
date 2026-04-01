/* This file is used as an exercise to see how static
 * variable in C work and where it gets stored as well
 * and how it gets initialized and persist across different
 * calls of the function. Its address will be on the data/BSS 
 * segment of the process address space.
 */
#include <stdio.h>

/* similar to Python generator */
int natural_generator()
{
        int a = 1;
        static int b = -1;
        printf(
                "The address of the static variable; which should stay the "
                "same across all functions invokations = %p\n", &b
              );
        b += 1;
        return a + b;
}

int main(int argc, char *argv[])
{
        printf("b = %d\n", natural_generator());
        printf("b = %d\n", natural_generator());
        printf("b = %d\n", natural_generator());

        return 0;
}
