#include <stdio.h>
int main(void){
    int n1, n2, arr1[100], arr2[100], i;
    printf("Enter number of elements for first array: ");
    scanf("%d", &n1);
    printf("Enter elements:\n");
    for (i=0; i<n1; i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter number of elements for second array: ");
    scanf("%d", &n2);
    printf("Enter elements:\n");
    for (i=0; i<n2; i++){
        scanf("%d",&arr2[i]);
    }
    int arr3[200], n3;
    n3 = n1 + n2;
    for (i=0;i<n1;i++){
        arr3[i] = arr1[i];
    }
    for (i=0;i<n2;i++){
        arr3[n1+i] = arr2[i];
    }
    printf("Merged array is:\n");
    for (i=0;i<n3;i++){
        printf("%d ",arr3[i]);
    }
    return 0;
}