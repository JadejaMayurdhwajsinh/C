#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a three Numbers:");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a != b && b != c && a != c)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    return 0;
}
