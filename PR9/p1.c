#include <stdio.h>

int power(int n1, int n2)
{
    if (n2 == 0)
        return 1;
    return n1 * power(n1, n2 - 1);
}

int main()
{
    int n1 = 5, n2 = 5;
    printf("%d", power(n1, n2));
}