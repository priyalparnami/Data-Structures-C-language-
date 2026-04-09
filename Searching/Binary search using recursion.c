#include <stdio.h>

int BinarySearch(int arr[], int low, int high, int key){
    if (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            return BinarySearch(arr, low, mid - 1, key);
        else
            return BinarySearch(arr, mid + 1, high, key);
    }
    return -1;
}

int main(void) {
    int arr[100], n, key, i, result;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter sorted elements: \n");
    for (i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = BinarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
}