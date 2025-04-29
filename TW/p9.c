#include <stdio.h>

void main()
{
    int n;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &n);

    int arr[n][n];
    FILE *fp;
    fp = fopen("pattern3.txt", "w");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            fprintf(fp, "  ");
        }
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
            fprintf(fp, "%d   ", arr[i][j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    fp = fopen("pattern3.txt", "r");
    char ch;
    while ((ch = getc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
}