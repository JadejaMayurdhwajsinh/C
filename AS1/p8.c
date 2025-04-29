#include <stdio.h>

int main()
{
    int num, first, last, sum;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    first = num;
    while (first >= 10)
    {
        first = first / 10;
    }
    sum = first + last;
    printf("Sum of first and last digit: %d\n", sum);
    return 0;
}
