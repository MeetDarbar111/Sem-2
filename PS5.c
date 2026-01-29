//wap to create structure of employee salary compare 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct employee {
    char name[50];
    int id;
    float salary;
} e[3];

int main() {
    int i;
    for(i = 0; i < 3; i++) {
        printf("--- Enter details for Employee %d ---\n", i + 1);
        printf("Name: ");
        scanf("%s", e[i].name);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Salary: ");
        scanf("%f", &e[i].salary);
        printf("\n");
    }

       struct employee maxSalaryEmp = e[0];

    for(i = 1; i < 3; i++) {
        if(e[i].salary > maxSalaryEmp.salary) { 
            maxSalaryEmp = e[i]; 
        }
    }

    printf("--- Employee with Maximum Salary ---\n");
    printf("Name   : %s\n", maxSalaryEmp.name);
    printf("ID     : %d\n", maxSalaryEmp.id);
    printf("Salary : %.2f\n", maxSalaryEmp.salary);

    
    return 0;
}