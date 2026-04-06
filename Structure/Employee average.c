#include <stdio.h>
struct employee
{
	char name[50];
	char address[100];
	int age;
	float salary;
};
int main(void)
{
	int n;
	printf("Enter the number of employees: ");
	scanf("%d",&n);
	struct employee e[n];
	int i;
	for (i=0;i<n;i++)
	{
		printf("\nEnter details of employee %d:\n",i+1);
		printf("Enter name: ");
		scanf("%s",&e[i].name);
		printf("Enter address: ");
		scanf("%s",&e[i].address);
		printf("Enter age: ");
		scanf("%d",&e[i].age);
		printf("Enter salary: ");
		scanf("%f",&e[i].salary);
	}
	printf("\n--- Details of Employees ---\n");
	printf("Name\t\t\tAddress\t\t\tAge\t\t\tSalary\n");
	for (i=0;i<n;i++)
	{
		printf("%s\t\t\t%s\t\t\t%d\t\t\t%.2f\n",e[i].name,e[i].address,e[i].age,e[i].salary);
	}
}