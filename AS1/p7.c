#include <stdio.h>

int main()
{
    int num, i = 1, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("factorial is not possible");
        return 0;
    }
    while (i <= num)
    {
        fact *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
