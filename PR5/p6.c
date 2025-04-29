#include <stdio.h>

int main()
{
    int month;
    printf("Enter the month");
    scanf("%d", &month);
    if (month >= 1 && month <= 12)
    {
        if (month == 2)
            printf("28 days");
        else if (month == 4 || month == 6 || month == 9 || month == 11)
            printf("30 days");
        else
            printf("31 days");
    }
    else
        printf("Invalid month");
    return 0;
}
