#include <stdio.h>
int main(void){
    int n, arr[100], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(i=1;i<n;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }
    printf("Minimum element is %d", min);
    return 0;
}