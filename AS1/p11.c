#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int y = 0;
    while (x > 0)
    {
        y = (y * 10) + (x % 10);
        x = x / 10;
    }
    printf("%d ", y);
}