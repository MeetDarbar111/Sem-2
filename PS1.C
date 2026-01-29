//WAP TO CREATE STRUCTURE OF AMROLI STUDENT WHERE WE WILL STORE DATALINE SNAME SROLLNO SDIVISION SPER SGRADE
#include<stdio.h>
#include<conio.h>

struct amroli {
    char sname[20];
    int rollno;
    int sdivision;
    float sper;
    char sgrade;
} s[3]; 

int main() {
    int i;

    
    for(i = 0; i < 3; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%s", s[i].sname);
        
        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollno);
        
        printf("Enter Division (1, 2, etc.): ");
        scanf("%d", &s[i].sdivision);
        
        printf("Enter Percentage: ");
        scanf("%f", &s[i].sper);
        
        printf("Enter Grade: ");
             scanf(" %c", &s[i].sgrade); 
    }

       printf("\n\n--- Displaying Student Records ---\n");
    for(i = 0; i < 3; i++) {
        printf("\nStudent %d Details:", i + 1);
        printf("\nName       : %s", s[i].sname);
        printf("\nRoll No    : %d", s[i].rollno);
        printf("\nDivision   : %d", s[i].sdivision);
        printf("\nPercentage : %.2f%%", s[i].sper);
        printf("\nGrade      : %c\n", s[i].sgrade);
    }

    return 0;
}