#include<stdio.h>

typedef struct {
    char category[50];
    char code[20];
    char title[100];
    char author[50];
    float price;
    int edition;
    int copies;
} Book;

Book inputBook() {
    Book b;
    printf("Enter book category: ");
    scanf("%s", b.category);
    printf("Enter book code: ");
    scanf("%s", b.code);
    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Enter author name: ");
    scanf("%s", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);
    printf("Enter edition: ");
    scanf("%d", &b.edition);
    printf("Enter number of copies: ");
    scanf("%d", &b.copies);

    return b;
}

void displayBook(Book b) {
    printf("Category: %s, Code: %s, Title: %s, Author: %s, Price: %.2f, Edition: %d, Copies: %d, Total: %.2f\n",
           b.category, b.code, b.title, b.author, b.price, b.edition, b.copies, b.price * b.copies);
}

int main() {
    Book books[10];

    for (int i = 0; i < 1; i++) {
        printf("\nBook %d:\n", i + 1);
        books[i] = inputBook();
    }

    printf("\nBook Data:\n");
    for (int i = 0; i < 1; i++) {
        displayBook(books[i]);
    }

    return 0;
}