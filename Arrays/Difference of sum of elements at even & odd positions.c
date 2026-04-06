#include <stdio.h>
int main (void)
{
	int a[50],n,i,odd=0,even=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
        scanf("%d",&a[i]);
        if ((i+1)%2==0){
            even+=a[i];
        }
        else{
            odd+=a[i];
        }
    }
    printf("Difference = %d",odd-even);
}