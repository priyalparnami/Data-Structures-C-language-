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
    int n, arr[100], i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    reverse (arr, n);
    printf("Reversed array: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
}