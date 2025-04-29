#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num[10];
    FILE *oddeven, *odd, *even;
    oddeven = fopen("oddeven.txt", "w");
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");
    printf("enter the number of element ");
    scanf("%d", &n);
    printf("enter the %d elements ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        fprintf(oddeven, "%d ", num[i]);
    }
    fclose(oddeven);
    oddeven = fopen("oddeven.txt", "r");
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 2 == 0)
        {
            fprintf(even, "%d ", num[i]);
        }
        else
        {
            fprintf(odd, "%d ", num[i]);
        }
    }
    fclose(oddeven);
    fclose(odd);
    fclose(even);
    return 0;
}