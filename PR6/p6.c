#include <stdio.h>
#include <math.h>
int main() 
{
    double M, S, F;

    printf("Enter the number: ");
    scanf("%lf", &M);
    if (M < 0)
    {
        printf("Negative value is not a valid input.\n");
        return 1; 
    }

    S = M / 2;
    Again:
    F = S;
    S = (F + M / F) / 2;
    if((F - S) >= 0.000001)
    {
        goto Again;
    }

    printf("The square root of %.6lf is %.6lf\n", M, S);

    return 0;
}
