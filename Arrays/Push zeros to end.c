#include <stdio.h>
int main(void){
    int n, arr[100], i, j=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
            if (arr[i] != 0){
                arr[j] = arr[i];
                j++;
            }
    }
    while (j<n){
        arr[j] = 0;
        j++;
    }
    printf("Updated array is:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}