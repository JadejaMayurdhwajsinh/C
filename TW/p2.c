#include <stdio.h>
void str()
{
    char ch = getchar();
    if (ch != '\n' && ch != EOF)
    {
        str();
        printf("%c", ch);
    }
}
int main()
{
    printf("enter the string you want to reverse");
    printf("the reverse string is \n");
    str();
    return 0;
}
