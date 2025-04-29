#include <stdio.h>
int main()
{
    int a = 20, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping values of a and b are %d and %d", a, b);
    return 0;
}