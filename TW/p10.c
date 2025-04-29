#include <stdio.h>
int gcd(int, int);
int main()
{
    int a, b;
    printf("enter a and b");
    scanf("%d %d", &a, &b);
    printf("gcd of %d and %d is %d", a, b, gcd(a, b));
    return 0;
}

int gcd(int a, int b)
{
    int rem;
    rem = a % b;
    if (rem == 0)
        return b;
    else
        return gcd(b, rem);
}