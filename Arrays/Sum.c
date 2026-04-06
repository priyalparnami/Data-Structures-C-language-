#include <stdio.h>
int main (void)
{
    int arr[] = {55, 79, 43, 74, 46, 19, 73, 15, 13, 64};
    int sum, i, n;
    sum = 0;
    n = sizeof(arr)/sizeof(arr[0]);
    for (i=0; i<n; i++)
    {
        sum += arr[i];
    }
    printf("Sum = %d", sum);
}