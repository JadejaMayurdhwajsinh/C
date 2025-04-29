#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch[10];
    int i, alphabet, isalphabet = 0, ifdigit = 0, isvowel = 0, isconsonant = 0, isspecial = 0;
    printf("\n enter the string \n");
    scanf("%s", ch);
    // printf("%s", ch);
    for (i = 0; i < strlen(ch); i++)
    {

        if (isalpha(ch[i]))
        {
            isalphabet += 1;
        }
        // printf("%d", digit);
        if (isdigit(ch[i]))
        {

            ifdigit += 1;
        }
        if (ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
        {
            isvowel += 1;
        }
        else
        {
            isconsonant += 1;
        }
        if (!isalnum(ch[i]) && ch[i] != ' ' && ch[i] != '\n')
        {

            isspecial += 1;
        }
    }
    printf("\n no of alphabet in string is %d \n", isalphabet);
    printf("\n no of digit in string is %d \n", ifdigit);
    printf("\n no of vowel in string is %d \n", isvowel);
    printf("\n no of consonent in string is %d \n", isconsonant);
    printf("\n no of special in string is %d \n", isspecial);
    return 0;
}