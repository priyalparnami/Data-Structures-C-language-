#include <stdio.h>
int main(void){
    int n, arr[100], i, j, sum;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter sum: ");
    scanf("%d", &sum);
    printf("Pairs with sum %d are:\n", sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i] + arr[j] == sum){
                printf("(%d, %d)",arr[i], arr[j]);
            }
        }
    }
    return 0;
}