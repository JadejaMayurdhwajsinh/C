#include <stdio.h>

int main()
{
    int no, unit;
    float amount;
    printf("enter customer number: ");
    scanf("%d", &no);
    printf("enter power consumed in units: ");
    scanf("%d", &unit);
    if (unit <= 100 && unit >= 1)
        amount = unit * 0.75;
    else if (unit <= 300 && unit > 100)
        amount = 75 + (unit * 1000);
    else if (unit <= 500 & unit > 300)
        amount = 275 + (unit * 1.50);
    else
        amount = 575 + (unit * 1.75);
    printf("\nInvoice");
    printf("\n In Customer. Number = %d", no);
    printf("\n In unit = %d ", unit);
    printf("\n In total amount to pay: %.3f", amount);

    return 0;
}