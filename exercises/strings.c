#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char s_array[2][4] = {
        // We need null-terminated character so string functions can tell when
        // end of string is reached
        "abc\0",
        "def\0"
    };
    char *s_ptr[] = {
        "abc",
        "def"
    };
    printf("%s\n", s_array[0]);
    printf("%c\n", s_array[1][0]);
    printf("%s\n", s_ptr[0]);
    printf("Length of 'abc' in s_ptr = %lu\n", sizeof(*s_ptr[0]));
    printf("%c\n", s_ptr[1][0]);
    return 0;
}
