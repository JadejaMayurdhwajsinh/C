#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three angles");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    if (sum == 180)
        printf("Triangle is valid");
    else
        printf("Triangle is not valid");
    return 0;
}
