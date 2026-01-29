//wap in c to demonstrate recursen by calculating factorial 1 to 20
#include<stdio.h>
int factorial(int i) {
    if(i == 0)
    return 1;
    else    { 
    return i*factorial(i-1);
    }
}
int main()
{
    int i=1;
    for(i=1;i<=12;i++)
    {
        int result = factorial(i);
        printf("Factorial = %d is %d\n",i,result);
    }   
    return 0;
}