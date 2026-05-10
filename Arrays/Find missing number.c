#include <stdio.h>
int main(void){
    int n, arr[100], i, sum=0, total, missing;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n",n-1);
    for (i=0; i<n-1; i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    total = n * (n+1)/2;
    missing = total - sum;
    printf("Missing number is %d\n", missing);
    return 0;
}