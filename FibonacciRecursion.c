//wap to fibonacci series
#include<stdio.h>
int fibonacci(int n)    {
    if (n == 0){
        return 0;
    }   else if (n == 1)    {
        return 1;
    }   else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main()
{
    int n,i;
    printf("Enter the number of terms in Fibonacci series : ");
    scanf("%d",&n);
    if(n<=0){    
        printf("Please enter positive numbers \n");    
    }
    else{

    printf("Fibonacci series up to %d terms : ",n);
    
    }
    for(i=0;i<n;i++)
    
        printf("%d ",fibonacci(i));

    return 0;
}
