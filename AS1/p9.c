#include <stdio.h>
int main()
{
    int i, n, j;
    printf("\n enter number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= (n * 2) - i; j++)
        {
            if (j <= (n - 1) + i && j >= (n + 1) - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
