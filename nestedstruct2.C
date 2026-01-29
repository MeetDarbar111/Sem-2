//wap in c to demonstrate nested structure

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[100];
    int stdId;
    struct Address homeAddress;
    float per;
};
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()  {
    struct Student std;

    printf("Enter Student Name : \n");
    scanf("%s",std.name);

    printf("Enter Student ID : \n");
    scanf("%d",&std.stdId);

    printf("Enter Percentage : \n");
    scanf("%f",&std.per);

    printf("Enter Area : \n");
    scanf("%s",std.homeAddress.city);

    printf("Enter Pincode : \n");
    scanf("%d",&std.homeAddress.pincode);
    
    //Display
    printf("\nStudent Details Display\n");
    printf("Name : %s\n",std.name);
    printf("Student ID : %d\n",std.stdId);
    printf("Percentage : %f\n",std.per);
    printf(" Area : %s\n",std.homeAddress.city);
    printf("Pincode : %d\n",std.homeAddress.pincode);

    return 0;
}
