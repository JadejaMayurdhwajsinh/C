#include <stdio.h>

int main()
{
    int num1, num2, digit1, digit2, result = 0;

    printf("Enter the first 4-digit positive integer: ");
    scanf("%d", &num1);
    printf("Enter the second 4-digit positive integer: ");
    scanf("%d", &num2);

    if (num1 < 1000 || num1 > 9999 || num2 < 1000 || num2 > 9999)
    {
        printf("Please enter valid 4-digit positive integers.\n");
        return 1;
    }

    while (num1 > 0 && num2 > 0)
    {
        digit1 = num1 % 10;
        digit2 = num2 % 10; 

        result += digit1 * digit2; 

        num1 /= 10; 
        num2 /= 10; 
    }

    printf("The result is: %d\n", result);

    return 0;
}
