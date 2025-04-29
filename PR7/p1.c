#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Not Binary !");
        return 0;
    }
    while (num != 0)
    {
        if (!(num % 10 == 0 || num % 10 == 1))
        {
            printf("Not Binary !");
            return 0;
        }
        num /= 10;
    }

    printf("Number is Binary !");
    return 0;
}