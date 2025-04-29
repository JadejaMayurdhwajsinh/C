#include <stdio.h>
int main()
{
    int m, n, sum = 0, i;
    printf("\n enter 2 number");
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        sum += n;
    }
    printf("\n multiplication is %d", sum);
    return 0;
}