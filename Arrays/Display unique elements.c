#include <stdio.h>
int main(void){
    int n, arr[100], i, j, count;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Unique elements are:\n");
    for(i=0;i<n;i++){
        count = 0;
        for(j=i+1;j<n;j++){
            if (arr[i] == arr[j]){
                count++;
            }
        }
        if (count == 0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}