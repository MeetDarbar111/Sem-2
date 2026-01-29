//wap to create a structure of student and store and retreive  information
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct student sobj[3];
    int i;

    
    for(i = 0; i < 3; i++) {
        printf("Entering details for student %d\n", i + 1);
        
        printf("Enter Roll no: ");
        scanf("%d", &sobj[i].rollno); 
        
        printf("Enter Name: ");
        scanf("%s", sobj[i].name);    
        printf("Enter Marks: ");
        scanf("%f", &sobj[i].marks);  
        printf("\n");
    }

    
    printf("\n--- Displaying Student Details ---");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d:", i + 1);
        printf("\nRoll no : %d", sobj[i].rollno);
        printf("\nName    : %s", sobj[i].name);
        printf("\nMarks   : %.2f\n", sobj[i].marks);
    
     }

    return 0;
}