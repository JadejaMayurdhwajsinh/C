#include <stdio.h>
int main()
{
    int a, b, c, avg;
    printf("Enter the value of a,b,c");
    scanf("%d %d %d", &a, &b, &c);
    avg = (a + b + c) / 3;
    printf("The value of avg is %d", avg);
    return 0;
}
