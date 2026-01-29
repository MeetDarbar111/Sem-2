//price pages publisher
// WAP to simulate library book record management using structure. where you will store information of Books. (Already Completed in Previous Lab)
struct Bookdetails;
#include <stdio.h>
#include <string.h>
struct Book {
    int bookID;
    char title[100];
    char author[50];
    float price;
};
int main() {
    int n, i;

    printf("Enter the number of books to add: ");
    scanf("%d", &n);
    struct Book library[n];
    for(i = 0; i < n; i++) {
        printf("\nEntering Details for Book %d \n", i + 1);
        printf("Enter Book ID: ");
        scanf("%d", &library[i].bookID);
        
        printf("Enter Title: ");
        scanf(" %s", library[i].title);
        
        printf("Enter Author: ");
        scanf(" %s", library[i].author);
        
        printf("Enter Price: ");
        scanf("%f", &library[i].price);
    }
    printf("\n%-10s %-25s %-20s %-10s\n", "ID", "Title", "Author", "Price");
    for(i = 0; i < n; i++) {
        printf("%-10d %-25s %-20s %-10.2f\n", 
               library[i].bookID, library[i].title, library[i].author, library[i].price);
    }

    return 0;
}