#include <stdio.h>
int main()
{
    int i, n, j, k, mid;
    printf("\n enter number");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = i;
        for (j = 1; j <= (n * 2) - i; j++)
        {
            if (j <= (n - 1) + i && j >= (n + 1) - i)
            {
                printf("%d ", k);
                mid = (((n * 2) - 1) / 2) + 1;
                j < mid ? k++ : k--;
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
