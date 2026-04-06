#include <stdio.h>
#include <string.h>
struct student
{
	int roll;
	char fname[20];
	char lname[20];
};
int main(void)
{
	struct student s[5], temp;
	int i,j;
	for (i=0;i<5;i++)
	{
		printf("\nEnter details of student %d:\n",i+1);
		printf("Enter roll no.: ");
		scanf("%d",&s[i].roll);
		printf("Enter first name: ");
		scanf("%s",&s[i].fname);
		printf("Enter last name: ");
		scanf("%s",&s[i].lname);
	}
	for (i=0;i<4;i++)
	{
		for (j=i+1;j<5;j++)
		{
			if(s[i].roll>s[j].roll)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\n--- Student Records in Ascending Order of Roll Number ---\n");
	printf("Roll No.\t\tFirst Name\t\tLast Name\n");
	for (i=0;i<5;i++)
	{
		printf("%d\t\t\t%s\t\t\t%s\n",s[i].roll,s[i].fname,s[i].lname);
	}
}