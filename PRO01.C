#include<stdio.h>
#include<conio.h>
int main() ;
{
char name[10][30];
int i;
system("cls");
{
printf("enter names of 10 student ");

	for(i=0;i<10;i++)
	{
	  printf("\nstudent %d:- ",i+1);
	  scanf("%s",name[i]);
	}
printf("\n	 list of students:\n");
       for(i=0;i<10;i++)
	{
	  printf("student %d:- %s\n ",i+1,name[i]);

	}

printf("\n program sucessful");
}
return 0;

}
