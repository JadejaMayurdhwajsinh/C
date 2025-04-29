#include <stdio.h>
#include <math.h>

void toBinary(int num)
{
    if (num == 0)
        printf("0");
    int ans[10] = {0};
    int n = num;
    int idx = 0;
    while (n != 0)
    {
        ans[idx++] = n % 2;
        n /= 2;
    }
    for (int i = idx - 1; i >= 0; i--)
        printf(" %d", ans[i]);
}
void toOctal(int num)
{
    if (num == 0)
        printf("0");
    int ans[10] = {0};
    int n = num;
    int idx = 0;
    while (n != 0)
    {
        ans[idx++] = n % 8;
        n /= 8;
    }
    for (int i = idx - 1; i >= 0; i--)
        printf(" %d", ans[i]);
}
void toHexa(int num)
{
    if (num == 0)
        printf("0");
    char ans[10];
    int n = num;
    int idx = 0;
    while (n != 0)
    {
        int val = n % 16;
        switch (val)
        {
        case 1:
            ans[idx++] = '1';
            break;
        case 2:
            ans[idx++] = '2';
            break;
        case 3:
            ans[idx++] = '3';
            break;
        case 4:
            ans[idx++] = '4';
            break;
        case 5:
            ans[idx++] = '5';
            break;
        case 6:
            ans[idx++] = '6';
            break;
        case 7:
            ans[idx++] = '7';
            break;
        case 8:
            ans[idx++] = '8';
            break;
        case 9:
            ans[idx++] = '9';
            break;
        case 10:
            ans[idx++] = 'A';
            break;
        case 11:
            ans[idx++] = 'B';
            break;
        case 12:
            ans[idx++] = 'C';
            break;
        case 13:
            ans[idx++] = 'D';
            break;
        case 14:
            ans[idx++] = 'E';
            break;
        case 15:
            ans[idx++] = 'F';
            break;
        }
        n /= 16;
    }
    for (int i = idx - 1; i >= 0; i--)
        printf(" %c", ans[i]);
}
int main()
{
    int num = 100;
    printf("\nBinary Is ");
    toBinary(num);
    printf("\nHexa Is ");
    toHexa(num);
    printf("\nOctal Is ");
    toOctal(num);
}