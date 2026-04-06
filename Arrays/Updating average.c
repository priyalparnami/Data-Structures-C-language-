#include <stdio.h>
int main(void)
{
	int n;
	float avg=0;
	printf("Enter the number of elements in the array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	int arr[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		avg+=arr[i];
	}
	avg/=n;
	printf("The average of the elements is %.2f\n",avg);
	printf("Enter correct value for index 3: ");
	int old3=arr[3];
	scanf("%d",&arr[3]);
	int old5=arr[5];
	printf("Enter the correct value for index 5: ");
	scanf("%d",&arr[5]);
	float newavg=avg+(arr[3]-old3+arr[5]-old5)/n;
	printf("The new average after correction is %.2f\n",newavg);
}