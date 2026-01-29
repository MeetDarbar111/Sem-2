//WAP to maintain mobile contact list using structure where user will store Contact Name , Contact Number. Contact Email.
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Cont {
    char name[50];
    char phone[15];
    char email[50];
};
int main() {
    int n, i;

    printf("Enter How many Contact Store Number:  ");
    scanf("%d", &n);
    struct Cont pb[n];
    for(i = 0; i < n; i++) {
        printf("\nContact %d \n", i + 1);
        
        printf("Enter Name: ");
        scanf(" %s", pb[i].name);
        
        printf("Enter Phone Number: ");
        scanf("%s", pb[i].phone);
        
        printf("Enter Email ID: ");
        scanf("%s", pb[i].email);
    }

    printf("\nDisplay the contact List :\n");
    for(i=0;i<n;i++){
    printf("\n%d-----",i+1);
    printf("\nName : %s",pb[i].name);
    printf("\nPhone Number : %s",pb[i].phone);
    printf("\nEmail ID : %s\n",pb[i].email);
    }
    return 0;
}