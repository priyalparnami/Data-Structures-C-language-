#include <stdio.h>
int main(void){
    int n, arr[100], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    int sec_lar=arr[0];
    for (i=1;i<n;i++){
        if (arr[i] < max){
            if(sec_lar<arr[i]){
                sec_lar = arr[i];
            }
        }
    }
    printf("Second largest element is %d", sec_lar);
    return 0;
}