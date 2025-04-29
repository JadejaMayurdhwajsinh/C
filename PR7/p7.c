#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // char str1[100], str2[100];
    // int choice;

    // printf("\nMenu:\n");
    // printf("1. Find Length of String\n");
    // printf("2. Copy String\n");
    // printf("3. Compare Two Strings\n");
    // printf("4. Concatenate Two Strings\n");
    // printf("5. Convert to Uppercase\n");
    // printf("6. Convert to Lowercase\n");
    // printf("7. Exit\n");
    // printf("Enter your choice: ");
    // scanf("%d", &choice);

    // switch (choice)
    // {
    // case 1:
    //     printf("Enter a string: ");
    //     scanf("%s", str1);
    //     printf("Length of the string is: %ld\n", strlen(str1));
    //     break;

    // case 2:
    //     printf("Enter source string: ");
    //     scanf("%s", str1);
    //     strcpy(str2, str1);
    //     printf("Copied string: %s\n", str2);
    //     break;

    // case 3:
    //     printf("Enter first string: ");
    //     scanf("%s", str1);
    //     printf("Enter second string: ");
    //     scanf("%s", str2);
    //     if (strcmp(str1, str2) == 0)
    //         printf("The strings are equal.\n");
    //     else if (strcmp(str1, str2) > 0)
    //         printf("The first string is greater than the second.\n");
    //     else
    //         printf("The first string is less than the second.\n");
    //     break;

    // case 4:
    //     printf("Enter first string: ");
    //     scanf("%s", str1);
    //     printf("Enter second string: ");
    //     scanf("%s", str2);
    //     strcat(str1, str2);
    //     printf("Concatenated string: %s\n", str1);
    //     break;

    // case 5:
    //     printf("Enter a string: ");
    //     scanf("%s", str1);
    //     for (int i = 0; str1[i] != '\0'; i++)
    //         str1[i] = toupper(str1[i]);
    //     printf("Uppercase string: %s\n", str1);
    //     break;

    // case 6:
    //     printf("Enter a string: ");
    //     scanf("%s", str1);
    //     for (int i = 0; str1[i] != '\0'; i++)
    //         str1[i] = tolower(str1[i]);
    //     printf("Lowercase string: %s\n", str1);
    //     break;

    // case 7:
    //     printf("Exiting the program.\n");
    //     break;

    // default:
    //     printf("Invalid choice. Please try again.\n");
    // }

    // return 0;/

    char ch[20]="kris";
    printf("%s",ch);
    ch[0]='p';
    printf("%s",ch);
    }
