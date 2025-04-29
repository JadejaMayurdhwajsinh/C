#include <stdio.h>
#include <limits.h>
int main()
{
    printf("byte %d\n", CHAR_BIT);
    printf("SIGNED CHAR = %d\n", CHAR_MIN);
    printf("SIGNED CHAR = %d\n", CHAR_MAX);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("LONG_MIN = %ld\n", LONG_MIN);
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("SCHAR_MAX = %d\n", SCHAR_MAX);
    printf("SCHAR_MIN = %d\n", SCHAR_MIN);
    printf("SHRT_MIN = %d\n", SHRT_MIN);
    printf("SHRT_MAX = %d\n", SHRT_MAX);
    printf("UCHAR_MAX = %d\n", UCHAR_MAX);
    printf("UINT_MAX = %d\n", UINT_MAX);
    printf("USHRT_MAX = %d\n", USHRT_MAX);

    return (0);
}