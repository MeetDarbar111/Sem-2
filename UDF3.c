//Write a C program to calculate and display the area of a circle using a user defined function with arguments but no return value
#include <stdio.h>

void CA(float r);
int main()
{
    float r;
    printf("Enter the radius : ");
    scanf("%f",r);
    
    CA(r);
    return 0;
}
void CA(float r){
    float area;
    area = 3.14159*r*r;
    printf("Area of circle = %.2f",area);
}