/* This file is used as an exercise to see how static
 * variable in C work and where it gets stored as well
 * as how it gets initialized and persist across different
 * calls of the function. Its address will be on the heap 
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
                "same across all functions invokatiobs = 0x%lX\n", (unsigned long) &b
              );
        b += 1;
        return a + b;
}

int main(int argc, char *argv[])
{
        printf("%d\n", natural_generator());
        printf("%d\n", natural_generator());
        printf("%d\n", natural_generator());

        return 0;
}
