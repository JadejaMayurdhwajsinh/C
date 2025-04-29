#include <stdio.h>

int main()
{
    int num, temp, digit;
    int largestDigit = 0;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }
    temp = num;

    while (temp > 0)
    {
        digit = temp % 10;      
        if (digit > largestDigit)
            largestDigit = digit; 
        temp /= 10;             
    }

    printf("The largest digit is: %d\n", largestDigit);

    return 0;
}
