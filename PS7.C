//ADDITION OF TWO STRUCTURE VARIABLE
#include<stdio.h>
#include<conio.h>
struct distance {
    int feet;
    int inches;
}   d1,d2,d3;
int main()
{
        printf("Enter First Distance : \n");
        printf("Feet: ");
        scanf("%d",&d1.feet);
        printf("Inch: ");
        scanf("%d",&d1.inches);

        printf("Enter second distance : \n");
        printf("Feet : ");
        scanf("%d",&d2.feet);
        printf("Inch : ");
        scanf("%d",&d2.inches);
        
        d3.feet = d1.feet + d2.feet;
        d3.inches = d1.inches + d2.inches;

        printf("\n Sum of Distance : \n");
        printf("feet  %d\n",d3.feet);
        printf("Inches %d\n",d3.inches);

        return 0;
}