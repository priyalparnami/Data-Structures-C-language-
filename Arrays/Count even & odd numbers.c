#include <stdio.h>
int main(void){
    int n, arr[100], i, even=0, odd=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Total number of even numbers in array are %d\n",even);
    printf("Total number of odd elements in array are %d\n",odd);
    return 0;
}