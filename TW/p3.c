#include<stdio.h>
#include<string.h>

void swapChar(char *to, char *from)
{
    char temp = *to;
    *to = *from;
    *from = temp;
}

int compareChar(char ch1, int ch2)
{
    return (ch1 == ch2);
}

int isAnagram(char *str1, char *str2, int n)
{
    for (int i = 0; i < n; i++)
    {
        int minStr1 = i;
        int minStr2 = i;
        for (int j = i + 1; j < n; j++)
        {
            if (str1[j] < str1[minStr1])
                minStr1 = j;
            if (str2[j] < str2[minStr2])
                minStr2 = j;
        }
        swapChar(&str1[i], &str1[minStr1]);
        swapChar(&str2[i], &str2[minStr2]);
        if (!compareChar(str1[i], str2[i]))
            return -1;
    }
    return 1;
}

int checkString(char *str1, char *str2)
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    if (n1 != n2)
        return -1;
    int n = n1;
    char newStr1[n], newStr2[n];
    for (int i = 0; i < n; i++)
    {
        newStr1[i] = str1[i];
        newStr2[i] = str2[i];
    }
    return isAnagram(newStr1, newStr2, n);
}
int main()
{
    char s[100], t[100];
    scanf("\n%s", s);
    scanf("\n%s", t);
    if (checkString(s, t))
    {
        int count = 0;
        for (int i = 0; i < strlen(s); i++)
            if (compareChar(s[i], t[i]))
                count++;
        printf("%d", count);
    }
    else
    {
        printf("-1");
    }
}