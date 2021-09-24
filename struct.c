#include<stdio.h>
struct Employee
{
    int Pn;
    char Name[25];
    int Age;
    long Salary;
};

void main()
{
	struct Employee E;
	printf("\nEnter Employee Name : ");
    scanf("%s",&E.Name);
	printf("\nEnter Employee Age : ");
    scanf("%d",&E.Age);
    printf("\nEnter Employee Phone Number : ");
    scanf("%d",&E.Pn);
	printf("\nEnter Employee Salary : ");
    scanf("%ld",&E.Salary);

    printf("\n\nEmployee Id : %d",E.Pn);
    printf("\nEmployee Name : %s",E.Name);
    printf("\nEmployee Age : %d",E.Age);
    printf("\nEmployee Salary : %ld",E.Salary);
}
