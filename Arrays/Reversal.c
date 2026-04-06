#include <stdio.h>
void reverse(int arr[], int n)
{
    int l = 0, h = n-1;
    while (l<h)
    {
        int temp = arr[l];
        arr[l] = arr[h];
        arr[h] = temp;
        l++;
        h--;
    }
}
int main (void)
{
    int arr[] = {55, 79, 43, 74, 46, 19, 73, 15, 13, 64};
    int i, n;
    n = sizeof(arr)/sizeof(arr[0]);
    reverse (arr, n);
    printf("Reversed array: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}