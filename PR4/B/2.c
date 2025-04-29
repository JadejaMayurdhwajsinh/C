#include <stdio.h>
int main()
{
    int a, b, c, sum;
    printf("Enter the three angles");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    if (sum == 180)
    {
        if (a == b && b == c)
            printf("Triangle is equilateral");
        else if (a == b || b == c || c == a)
            printf("Triangle is isosceles");
        else
            printf("Triangle is scalene");
    }
    else
        printf("Triangle is not valid");
    return 0;
}
