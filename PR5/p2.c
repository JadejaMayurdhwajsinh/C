#include <stdio.h>

int main()
{
    int salesmanno;
    char name[30], type;
    float saleamount, commision, rate;

    printf("Enter salesman number: ");
    scanf("%d", &salesmanno);

    printf("Enter salesman name: ");
    scanf("%s", name);

    printf("Enter sale amount: ");
    scanf("%f", &saleamount);

    printf("Enter salesman Type (P/D/H): ");
    getchar(); // Consume the newline character left in the buffer
    scanf("%c", &type);

    if (type == 'P' || type == 'p')
        rate = 9.00;
    else if (type == 'D' || type == 'd')
        rate = 5.0;
    else if (type == 'H' || type == 'h')
        rate = 2.0;
    else
    {
        printf("Invalid option\n");
        return 1; // Exit the program for invalid input
    }

    commision = saleamount * (rate / 100);
    float netamount = saleamount + commision;

    printf("\nSalesman Report ----\n");
    printf("Salesman Number: %d\n", salesmanno);
    printf("Salesman Name: %s\n", name);
    printf("Sale Amount: Rs. %.2f\n", saleamount);
    printf("Rate: %.2f%%\n", rate);
    printf("Commission: Rs. %.2f\n", commision);
    printf("Net Amount: Rs. %.2f\n", netamount);

    return 0;
}
