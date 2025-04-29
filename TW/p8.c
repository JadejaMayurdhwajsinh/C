#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("pattern2.txt", "w");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    fprintf(fp, "* \n");
    // upper part of the pattern
    for (int i = 1; i <= n; i++)
    {
        fprintf(fp, "* ");
        for (int j = 1; j <= i; j++)
        {
            fprintf(fp, "%d ", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            fprintf(fp, "%d ", j);
        }

        fprintf(fp, "*\n");
    }
    // lower part
    for (int i = n - 1; i >= 1; i--)
    {
        fprintf(fp, "* ");
        for (int j = 1; j <= i; j++)
        {
            fprintf(fp, "%d ", j);
        }
        for (int j = i - 1; j >= 1; j--)
        {
            fprintf(fp, "%d ", j);
        }

        fprintf(fp, "*\n");
    }
    fprintf(fp, "*\n");
    fclose(fp);
    fp = fopen("pattern2.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}
