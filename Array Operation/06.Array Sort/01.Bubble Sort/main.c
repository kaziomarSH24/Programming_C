#include <stdio.h>

int main(){
    int arr[] = {5,6,4,8,9,3,2,4,3,5};
    int i,j,size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("The orginal array element are: \n");
    for ( i = 0; i < size; i++)
    {
        printf("arr[%d] = %d \n",i, arr[i]);
    }
    int swap, counter = 0;
    for ( i = 0; i < size-1; i++)
    {
        swap = 0;
        for ( j = 0; j < size-1-i; j++)
        {
            counter++;
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
            
        }
        if (swap == 0)
        {
            break;
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