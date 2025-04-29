#include <stdio.h>

int main()
{
    int width, precision;
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Enter the field width: ");
    scanf("%d", &width);

    printf("Enter the precision: ");
    scanf("%d", &precision);

    printf("\nFormatted output with field width %d and precision %d:\n", width, precision);
    printf("%*.*f\n", width, precision, num);

    return 0;
}
