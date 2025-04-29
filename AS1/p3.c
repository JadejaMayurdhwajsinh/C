
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter 3 Numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b > c)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}