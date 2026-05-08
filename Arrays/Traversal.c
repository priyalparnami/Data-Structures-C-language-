#include <stdio.h>
int main(void){
    int n, arr[100], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Elements of array are:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}