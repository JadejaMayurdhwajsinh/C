#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("even");
    else
        printf("odd");
    return 0;
}