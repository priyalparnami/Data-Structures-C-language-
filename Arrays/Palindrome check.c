#include <stdio.h>
int main(void){
    int n, arr[100], i, j, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0, j=n-1;i<j;i++, j--){
        if (arr[i] != arr[j]){
            printf("Array is not palindrome\n");
            return 0;
        }
        else{
            printf("Array is palindrome\n");
        }
    }
}