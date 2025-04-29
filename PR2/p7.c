#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of a,b");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("The value of a,b is %d,%d", a, b);
    return 0;
}
