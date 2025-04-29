#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int max(int n1, int n2)
{
    if (n1 > n2)
        return n1;
    else
        return n2;
}

int main()
{
    char str[100];
    scanf("%s", str);
    int n = strlen(str);
    int maxRep = 1, r = 1;
    for (int i = 1; i <= n; i++)
    {
        if (str[i] != str[i - 1])
        {
            maxRep = max(maxRep, r);
            r = 0;
        }
        r++;
    }
    printf(" %d ", maxRep);
}