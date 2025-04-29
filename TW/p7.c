#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp = fopen("pattern1.txt", "w");
    int n;
    printf("\n enter n number");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int st = 0; st < n - i; st++)
        {
            fprintf(fp, "* ");
        }
        for (int sp = 0; sp < 2 * i; sp++)
        {
            fprintf(fp, "  ");
        }
        for (int st = 0; st < n - i; st++)
        {
            fprintf(fp, "* ");
        }
        // insp += 2;
        fprintf(fp, "\n");
    }
    for (int i = 1; i <= n; i++)
    {
        for (int st = 1; st <= i; st++)
        {
            fprintf(fp, "* ");
        }
        for (int sp = 1; sp <= 2 * (n - i); sp++)
        {
            fprintf(fp, "  ");
        }
        for (int st = 1; st <= i; st++)
        {
            fprintf(fp, "* ");
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    fp = fopen("pattern1.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}
