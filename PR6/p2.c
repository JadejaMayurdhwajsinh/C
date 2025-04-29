#include <stdio.h>

int main()
{
    int a, b, ans;
    char ch, input;

ReEnter:
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nEnter choice (+, -, *, /): ");
    scanf(" %c", &ch);  

    switch (ch)
    {
    case '+':
        ans = a + b;
        printf("\nAns: %d", ans);
        break;

    case '-':
        ans = a - b;
        printf("\nAns: %d", ans);
        break;

    case '*':
        ans = a * b;
        printf("\nAns: %d", ans);
        break;

    case '/':
        if (b != 0)
        {
            ans = a / b;
            printf("\nAns: %d", ans);
        }
        else
        {
            printf("\nError: Division by zero is not allowed.");
        }
        break;

    default:
        printf("\nInvalid input");
        break;
    }

    printf("\nWant to re-enter or not (y/n): ");
    scanf(" %c", &input);  

    if (input == 'y' || input == 'Y')
    {
        goto ReEnter;
    }
    else if (input == 'n' || input == 'N')
    {
        printf("Program completed");
    }

    return 0;
}
