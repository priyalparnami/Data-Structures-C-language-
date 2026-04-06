#include <stdio.h>
#include <string.h>
struct employee
{
	char name[50];
	char address[100];
	float salary;
};
int main(void)
{
	struct employee e[5], temp;
	int i,j;
	for (i=0;i<5;i++)
	{
		printf("\nEnter details of employee %d:\n",i+1);
		printf("Enter name: ");
		scanf("%s",&e[i].name);
		printf("Enter address: ");
		scanf("%s",&e[i].address);
		printf("Enter salary: ");
		scanf("%f",&e[i].salary);
	}
	for (i=0;i<5;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if (strcmp(e[i].name,e[j].name)>0)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	printf("\nEmployee details in alphabetical order:\n");
	for (i=0;i<5;i++)
	{
		printf("\nEmployee %d\n",i+1);
		printf("Name: %s\n",e[i].name);
		printf("Address: %s\n",e[i].address);
		printf("Salary: %.2f\n",e[i].salary);
	}
}