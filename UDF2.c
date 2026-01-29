//“Write a C program to demonstrate a user defined function with no arguments and no return value to display a welcome message.
#include<stdio.h>
#include<stdlib.h>
void good(char name[100]);
int main()
{
    char name(100);
    system("cls");
    printf("\nEnter name :");
    scanf("%s",&name);
    good(name);
    return 0;
}
void good(char name [100])
{
    printf("Welcome %s ",name);

}