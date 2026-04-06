#include <stdio.h>
int main(void)
{
	int choice;
	float n1,n2;
	float *p1,*p2;
	p1=&n1;
	p2=&n2;
	printf("Enter first and second number: ");
	scanf("%f",p1);
	scanf("%f",p2);
	printf("Choose: ");
	printf("1. Add");
	printf("2. Subtract");
	printf("3. Multiply");
	printf("4. Divide");
	printf("Enter choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("Result=%.2f",*p1+*p2);
				break;
			}
		case 2:
			{
				printf("Result=%.2f",*p1-*p2);
				break;
			}
		case 3:
			{
				printf("Result=%.2f",*p1 * *p2);
				break;
			}
		case 4:
			{
				if (*p2!=0)
				{
				   printf("Result=%.2f",*p1 / *p2);	
				}
				else
				   printf("Division by zero not allowed");
				
				break;
			}
		default:
			{
				printf("Invalid Choice!");
			}
	}
}