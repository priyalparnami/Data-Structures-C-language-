#include <stdio.h>
int main (void)
{
    int arr[] = {55, 79, 43, 74, 46, 19, 73, 15, 13, 64};
    int max, i, n;
    max = arr[0];
    n = sizeof(arr)/sizeof(arr[0]);
    for (i=1; i<n; i++)
    {
        if (arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Maximum value in array is %d.", max);
}