#include <stdio.h>

int main(){
    int arr[] = {10,8,23,53,15,13,25,14,32,11};
    int i,j,size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("The orginal array element are: \n");
    for ( i = 0; i < size; i++)
    {
        printf("arr[%d] = %d \n",i, arr[i]);
    }
    int counter = 0;
    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1; j++)
        {
            counter++;
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            
        }
        
    }
    printf("\nAfter sorting: \n");
    for ( i = 0; i < size; i++)
    {
        printf("arr[%d] = %d \n",i, arr[i]);
    }
    printf("Loop counter: %d\n",counter);

    return 0;
}