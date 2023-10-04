#include <stdio.h>

int main(void)
{
    printf("Line number = %d\n", __LINE__);
    printf("File name = %s\n", __FILE__);
    printf("Date = %s\n", __DATE__);
    printf("Time = %s\n", __TIME__);
    return 0;
}
