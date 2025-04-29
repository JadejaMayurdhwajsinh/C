#include <stdio.h>
int main()
{
    float p, r, n, si;
    printf("Enter the value of p,r,n");
    scanf("%f %f %f", &p, &r, &n);
    si = (p * r * n) / 100;
    printf("The value of si is %f", si);
    return 0;
}
