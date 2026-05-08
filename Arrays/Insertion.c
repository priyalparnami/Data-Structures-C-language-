#include <stdio.h>
int main (void)
{
	int a[100],n,i,pos,element;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position to insert element: ");
	scanf("%d",&pos);
	printf("Enter element to insert: ");
	scanf("%d",&element);
	for (i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos-1]=element;
	n++;
	printf("Updated array: ");
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}