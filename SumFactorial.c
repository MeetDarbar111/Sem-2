//wap to sum of n numbers using factorial recursion.
#include<stdio.h>
int SumOfN(int n) {
    if(n == 0)
    return 0;
    else    { 
    return n+SumOfN(n-1);
    }
}
int main()
{
    int n;
    printf("Enter Integer : ");
    scanf("%d",&n);

    int result = SumOfN(n);
    printf("Total sum of n number is = %d",result);  
    return 0;
}