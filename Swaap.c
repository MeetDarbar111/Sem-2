//swap dwmo call by reference
#include<stdio.h>

void swapme(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
   }
   int main() {
    int x =10,y=20; 
    printf("Before Swaping values %d & %d\n",x,y);
    swapme(&x,&y);
    printf("After Swapping Values %d & %d",x,y);
    
    return 0;
}