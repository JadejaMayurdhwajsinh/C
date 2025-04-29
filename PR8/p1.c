#include <stdio.h>
#include <math.h>
int isPrime(int num)
{
    if (num == 2)
        return 1;
    for (int i = 2; i <= num/2 ; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
void primeNumber(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i) == 1)
            printf(" %d", i);
    }
}

int isArmstrong(int num)
{
    int sum = 0;
    int n = num;
    int size = 0;
    while (n != 0)
    {
        size++;
        n /= 10;
    }
    n = num;
    while (n != 0)
    {
        int dig = n % 10;
        sum += (int)pow(dig, size);
        n /= 10;
    }
    if (sum == num)
        return 1;
    return 0;
}
void armstrongNumber(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i) == 1)
            printf(" %d", i);
    }
}

int isPerfect(int num)
{
    int count = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            count += i;
    }

    if (count == num)
        return 1;
    return 0;
}
void perfectNumber(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPerfect(i) == 1)
            printf(" %d", i);
    }
}
int isPerfect(int);
int isPrime(int);
int isArmstrong(int);

int main()
{
    int start = 1;
    int end = 200;
    printf("\nPrime Number :");
    primeNumber(start, end);
    printf("\nArmstrong Number :");
    armstrongNumber(start, end);
    printf("\nPerfect Number :");
    perfectNumber(start, end);
}