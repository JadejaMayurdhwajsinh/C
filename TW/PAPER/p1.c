#include<stdio.h>
int main()
{
    int a=5;
    int b=10;
    a=a ^ b;
    b=a ^ b;
    a=a ^ b;
    printf("After swapping:-");
    printf("a= %d\n",a);
    printf("b= %d\n",b);
    return 0;
}