//Write a C program to define and call a user defined function to find the sum of two integers.
#include<stdio.h>
int add(int,int);   //function declaration
int main()  {
    int result;
    result = add(5,7);  //function call
    printf("sum = %d",result);
    return 0;
}
int add(int a,int b)     //function defination
    {
       return a+b;
}