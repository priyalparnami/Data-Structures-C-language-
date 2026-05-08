#include <stdio.h>
int main (void)
{
	int a[100],n,i,pos;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position to delete element: ");
	scanf("%d",&pos);
	for (i=pos-1;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("Updated array: ");
	for (i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}