#include <stdio.h>
int main()
{
    int a, b;
    printf("enter a and b");
    scanf("%d %d", &a, &b);
    if (a > 0 && b > 0)
        printf("1st quadrant");
    else if (a < 0 && b > 0)
        printf("2nd quadrant");
    else if (a < 0 && b < 0)
        printf("3rd quadrant");
    else if (a > 0 && b < 0)
        printf("4th quadrant");
    else
        printf("invalid");
}
