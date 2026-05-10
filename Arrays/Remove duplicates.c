#include <stdio.h>
int main(void){
    int n, arr[100], i, j, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        for(j=i+1;j<n;j++){
            if (arr[i] == arr[j]){
                for(k=j;k<n-1;k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
            
            arr[j] = arr[j+1];
        }
    }
    printf("Array after removing duplicates:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}