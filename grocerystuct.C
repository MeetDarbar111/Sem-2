/*
WAP to store product details and calculate total bill in a Grocery Store using Structure.
*/
#include <stdio.h>
#include<conio.h>

struct product
{
    char pname[20];
    int qty;
    float price;
};

int main()
{
    struct product p[10];
    int i, n;
    float total = 0, bill = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter product %d details\n", i + 1);

        printf("Product Name: ");
        scanf("%s", p[i].pname);

        printf("Quantity: ");
        scanf("%d", &p[i].qty);

        printf("Price: ");
        scanf("%f", &p[i].price);

        total = p[i].qty * p[i].price;
        bill = bill + total;
    }

    printf("\nTotal Bill = %.2f\n", bill);

    return 0;
}
