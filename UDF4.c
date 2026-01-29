 //Write a C program to find the square of a number using a user defined function with no arguments but with return value.
#include <stdio.h>

// Function declaration
int findSquare();

int main() {
    int result;

    printf("Program to find the square of a number.\n");

    // Function call: it takes no arguments
    // The returned value is stored in the variable 'result'
    result = findSquare();

    printf("The square of the entered number is: %d\n", result);

    return 0;
}

// Function definition
int findSquare() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Returning the calculated value to the caller
    return (num * num);
}