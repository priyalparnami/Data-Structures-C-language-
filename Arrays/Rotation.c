#include <stdio.h>
int main(void){
    int n, arr[100], i, choice, k, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("---Rotation Menu---\n");
    printf("(1) Left Rotation\n(2) Right Rotation\n");
    scanf("%d",&choice);
    printf("Enter k: ");
    scanf("%d",&k);
    for(i=0;i<k;i++){
        if (choice==1){
            temp = arr[0];
            for(j=0;j<n-1;j++){
                arr[j]=arr[j+1];
            }
            arr[n-1] = temp;
        }
        else if (choice==2){
            temp = arr[n-1];
            for(j=n-1;j>0;j--){
                arr[j]=arr[j-1];
            }
            arr[0] = temp;
        }
    }
    printf("Array after rotation:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}