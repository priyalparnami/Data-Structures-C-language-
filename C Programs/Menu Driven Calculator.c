#include <stdio.h>
int main (void)
{
	int x,y,z,a;
	printf("Enter two integers: ");
	scanf("%d %d", &x, &y);
	printf("-----Menu Driven Calculator-----\n");
	printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
	input:
		{
			printf("Enter a number: ");
	        scanf("%d", &a);
		}
	switch (a)
	{
		case 1:
			{
				z=x+y;
				printf("Addition of %d and %d is %d.", x, y, z);
				break;
			}
		case 2:
			{
				z=x-y;
				printf("Subtraction of %d and %d is %d.", x, y, z);
				break;
			}
		case 3:
			{
				z=x*y;
				printf("Multiplication of %d and %d is %d.", x, y, z);
				break;
			}
		case 4:
			{
				z=x/y;
				printf("Division of %d by %d is %d.", x, y, z);
				break;
			}
		default:
			{
				printf("Invalid Choice!\n");
				goto input;
			}
	}
}