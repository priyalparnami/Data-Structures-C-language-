#include <stdio.h>
int main (void)
{
	int n,i;
	float average=0;
	printf("Enter length of array: ");
	scanf("%d",&n);
	if (n<=0)
	{
		printf("Error: Array length must be greater than 0\n");
		return 1;
	}
	float arr[n];
	printf("Enter %d elements: ",n);
	for (i=0;i<n;i++)
	{
		scanf("%f",arr[i]);
		average+=arr[i];
	}
	average!=n;
	printf("Average: %.2f\n",average);
	for (i=0;i<n;i++)
	{
		arr[i]+=average;
	}
	printf("Incremented array: ");
	for (i=0;i<n;i++)
	{
		printf("%.2f",arr[i]);
	}
}