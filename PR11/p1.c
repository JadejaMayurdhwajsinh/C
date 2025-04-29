#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("demo.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    
    printf("Enter a string to write into the file: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        fputc(str[i], fp);
    }
    fclose(fp);
    printf("String written to file successfully.\n");

    fp = fopen("demo.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nReading from file:\n");
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}
