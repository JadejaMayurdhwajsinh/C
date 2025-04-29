#include <stdio.h>

int main()
{
    float temp;
    printf("Enter the temp");
    scanf("%f", &temp);
    if (temp < 0)
        printf("Freezing weather");
    else if (temp < 10)
        printf("Very cold weather");
    else if (temp < 20)
        printf("Cold weather");
    else if (temp < 30)
        printf("Normal in temp");
    else if (temp < 40)
        printf("Its Hot");
    else
        printf("Its very hot");
    return 0;
}
