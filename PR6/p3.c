#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch, choice;

ReEnter:
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("%c is a vowel.\n", ch);
        }
        else
        {
            printf("%c is a consonant.\n", ch);
        }
    }
    else
    {
        printf("%c is not an alphabet.\n", ch);
    }

    printf("\nWant to re-enter (y/n): ");
    scanf(" %c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        goto ReEnter;
    }
    else if (choice == 'n' || choice == 'N')
    {
        printf("Program completed.\n");
    }

    return 0;
}
