#include <stdio.h>

struct employee {
	char name[20];
	char date[15];
	float salary;
};

int main()
{
	struct employee e = {"employee1","03/08/2018",2500.88};
	
	printf(" Name: %s\n Hire Date: %s\n Salary: %.2f\n",e.name,e.date,e.salary);
	
	printf("Enter employee info \n");
	printf("\nEnter employee name: ");
	scanf("%s",e.name);
	
	printf("\nEnter hire date: ");
	scanf("%s",e.date);
	
	printf("\nEnter salary: ");
	scanf("%f",&e.salary);
	
	printf("\n Name: %s\n Hire Date: %s\n Salary: %.2f\n",e.name,e.date,e.salary);
	
	return 0;
}
