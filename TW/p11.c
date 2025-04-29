#include <stdio.h>

int fib(int);
int main()
{
    int n, i;
    printf("\n enter the n terms ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("\n not possible");
        return 0;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", fib(i));
        }
    }
    return 0;
}

int fib(int n)
{
    if (n <= 2)
        return 1;
    else
        return ((fib(n - 1) + fib(n - 2)));
}