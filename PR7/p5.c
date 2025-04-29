#include <stdio.h>

int main()
{
    int num, i, ans= 1;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num==1)
    {
        printf("%d\n",ans);
    }
    else
    {
        for (i = 1; i <= num; i++)
        {
            ans *= i; 
        }

        printf("Factorial of %d is %llu\n", num, ans);
    }

    return 0;
}
