#include <stdio.h>
int Collatz(int n)
{
    if (n <= 1)
        return 0;
    int total = 0;
    total += (n % 2 == 0) ? Collatz(n / 2) : Collatz(3 * n + 1);
    return 1 + total;
}
int main()
{
    int counter;
    int n;
    scanf("%d",&n);
    counter = Collatz(n);
    printf("%d", counter);
}