#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 lengths: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("triangle is possible\n");
        if (a == b && b == c)
        {
            printf("equilateral triangle\n");
        }
        else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            printf("right angled triangle\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("isosceles triangle\n");
        }
        else
        {
            printf("scalene triangle\n");
        }
    }
    else
    {
        printf("triangle is not possible\n");
    }
    return 0;
}
