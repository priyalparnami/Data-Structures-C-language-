#include <stdio.h>
int main (void)
{
	int a[100],n,i,element,found=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element to search: ");
	scanf("%d",&element);
	for (i=0;i<n;i++)
	{
		if (a[i]==element)
		{
			printf("Element found at position %d",i+1);
			found=1;
			break;
		}
	}
	if (found == 0){
        printf("Element not found\n");
    }
}