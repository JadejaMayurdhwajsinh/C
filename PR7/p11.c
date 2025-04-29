#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    int length, i, j = 0;
    char ch[] = "mko9012@wer43";
    length = strlen(ch);
    printf("entered string is \n %s ", ch);
    for (i = 0; i < length; i++)
    {
        if (isalpha(ch[i]))
        {
            ch[j] = ch[i];
            j++;
        }
        // if (isdigit(ch[i]))
        // {
        //     ch[j] = ch[i];
        //     j++;
        // }
    }
    ch[j] = '\0';
    printf("\n alphabetic string is %s", ch);
    return 0;
}
