// WAP to store bank account details like Account NO,Account Name, Account Type, Account Balance,using structure.
#include <stdio.h>
#include<conio.h>
struct Bankaccount {
    int aNo;
    char aName[50];
    char aType[20];
    float balance;
};

int main() {
    struct Bankaccount acc;

    printf("Enter Account Number: ");
    scanf("%d", &acc.aNo);

    printf("Enter Account Holder Name: ");
    scanf(" %s", acc.aName);

    printf("Enter Account Type (Savings/Current): ");
    scanf("%s", acc.aType);

    printf("Enter Account Balance: ");
    scanf("%f", &acc.balance);

    printf("\n--- Bank Account Details ---\n");
    printf("Account No   : %d\n", acc.aNo);
    printf("Account Name : %s\n", acc.aName);
    printf("Account Type : %s\n", acc.aType);
    printf("Balance      : $%.2f\n", acc.balance);

    return 0;
}