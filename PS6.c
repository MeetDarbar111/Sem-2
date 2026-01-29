/*
NAME: StructureDemoBook.C
DESCRIPTION: Create a array of structure named Book to 
store book details like title, author, and price. 
Write a C program to input details for three books, 
find the most expensive and the lowest priced books, 
and display their information.
DEVELOPER: Amroli BCA Depatment
Date: 30/12/2025
*/
#include <stdio.h>
#include <string.h> 
struct Book {
    char title[100];
    char author[50];
    float price;
};
int main() {
    struct Book books[3];

    // Input book details
    for(int i = 0; i < 3; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title); // Read string with spaces
        printf("Author: ");
        scanf(" %[^\n]", books[i].author); // Read string with spaces
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("\n");
    }

    // Finding the most expensive and lowest priced books
    struct Book maxPriceBook = books[0];
    struct Book minPriceBook = books[0];

    for(int i = 1; i < 3; i++) {
        if(books[i].price > maxPriceBook.price) {
            maxPriceBook = books[i];
        }
        if(books[i].price < minPriceBook.price) {
            minPriceBook = books[i];
        }
    }

    // Displaying the most expensive book details
    printf("Most Expensive Book:\n");
    printf("Title: %s\n", maxPriceBook.title);
    printf("Author: %s\n", maxPriceBook.author);
    printf("Price: %.2f\n\n", maxPriceBook.price);

    // Displaying the lowest priced book details
    printf("Lowest Priced Book:\n");
    printf("Title: %s\n", minPriceBook.title);
    printf("Author: %s\n", minPriceBook.author);
    printf("Price: %.2f\n", minPriceBook.price);

    return 0;
}   