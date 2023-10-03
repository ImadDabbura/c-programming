#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main()
{
    printf("####################\n");
    printf("signed char min = %d\n", CHAR_MIN);
    printf("signed char max = %d\n", CHAR_MAX);
    printf("unsigned char max = %u\n", UCHAR_MAX);
    printf("signed short min = %d\n", SHRT_MIN);
    printf("signed short max = %d\n", SHRT_MAX);
    printf("unsigned short max = %u\n", USHRT_MAX);
    printf("signed integer min = %d\n", INT_MIN);
    printf("signed integer max = %d\n", INT_MAX);
    printf("unsigned integer max = %u\n", UINT_MAX);
    printf("signed long min = %ld\n", LONG_MIN);
    printf("signed long max = %ld\n", LONG_MAX);
    printf("unsigned long max = %lu\n", ULONG_MAX);
    printf("####################\n");
    printf("Fixed size integer 8 min = %d\n", INT8_MIN);
    printf("Fixed size integer 8 max = %d\n", INT8_MAX);
    printf("Fixed size unsigned integer 8 max = %d\n", UINT8_MAX);
    printf("Fixed size integer 16 min = %d\n", INT16_MIN);
    printf("Fixed size integer 16 max = %d\n", INT16_MAX);
    printf("Fixed size unsigned integer 16 max = %u\n", UINT16_MAX);
    printf("Fixed size integer 32 min = %d\n", INT32_MIN);
    printf("Fixed size integer 32 max = %d\n", INT32_MAX);
    printf("Fixed size unsigned integer 32 max = %u\n", UINT32_MAX);
    printf("Fixed size integer 64 min = %lld\n", INT64_MIN);
    printf("Fixed size integer 64 max = %lld\n", INT64_MAX);
    printf("Fixed size unsigned integer 64 max = %llu\n", UINT64_MAX);
    printf("####################\n");
    printf("Float min = %f\n", FLT_MIN);
    printf("Float max = %f\n", FLT_MAX);
    printf("Double min = %f\n", DBL_MIN);
    printf("Double max = %f\n", DBL_MAX);
    printf("Long Double min = %Lf\n", LDBL_MIN);
    /* printf("Long Double max = %Lf\n", LDBL_MAX); */
}
