#include <stdio.h>
int main()
{
    int n;
    printf("Enter num of elements:");
    scanf("%d", &n);
    int arr[n], r[n], c = 0, d = 0;
    printf("\nenter element:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int isd = 0;
        for (int j = 0; j < c; j++)
        {
            if (arr[i] == r[j])
            {
                isd = 1;
                d++;
                break;
            }
        }
        if (!isd)
        {
            r[c] = arr[i];
            c++;
        }
    }
    printf("\narray after removing duplicates:");
    for (int i = 0; i < c; i++)
    {
        printf("\n %d", r[i]);
    }
    printf("\n");
    printf("\n number of duplicates: %d", d);
    return 0;
    // char c='a';

    // char a=c-32;
    // printf("%c",a);
    // return 0;
    
}