#include <stdio.h>
int main()
{
    int a, b, c;
    char reinput;
Reinput:
    printf("Enter 3 sides length:");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        if (a == b && b == c && a == c)
        {
            printf("\n equilateral triangle");
        }
        else if (a == b || b == c || c == a)
        {
            printf("\n isosceles triangle");
        }
        else
        {
            printf("\n scalene traingle");
        }
    }
    else
    {
        printf("\n Triangle not formed");
    }
    printf("\n Want to re-enter or not(y/n):");
    scanf("%c", &reinput);
    if (reinput == 'y' || reinput == 'Y')
    {
        goto Reinput;
    }
    else if (reinput == 'n' || reinput == 'N')
    {
        printf("program completed");
    }
    return 0;
}