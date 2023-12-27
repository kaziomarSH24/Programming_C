#include <stdio.h>

int main(){
    int arr[] = {10,13,14,9,7,3,0,1,18,17};
    int i,j,size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("The original array element are: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
      
    }
    printf("\nAfter sorting: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}