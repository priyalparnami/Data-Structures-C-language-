#include <stdio.h>
int main (void){
    int arr[100], i, n, low=0, mid, high, key, found=0;
    printf("Enter number of elemnts in array: ");
    scanf("%d", &n);
    printf("Enter elements in sorted order: ");
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element you want to find: ");
    scanf("%d", &key);
    high = n-1;
    while (low <= high){
        mid = (low + high)/2;
        for (i = 0; i<n; i++){
            if (arr[i] == key){
                printf("Element found at position %d\n", i+1);
                found = 1;
                return 0;
            }
            else if (key < arr[i]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
    }
    if (found == 0){
        printf("Element not found\n");
    }
}