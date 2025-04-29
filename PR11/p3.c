#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num[10];
    printf("enter the number of elements");
    scanf("%d", &n);
    FILE *sort, *unsort;
    unsort = fopen("unsort.txt", "w");
    sort = fopen("sort.txt", "w");
    printf("\n enter %d elements", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        fprintf(unsort, "%d ", num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        fprintf(sort, "%d ", num[i]);
    }
    fclose(unsort);
    fclose(sort);
    return 0;
}