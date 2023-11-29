#include <stdio.h>
int bubble(int arr[], int size){
    int i,j;
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
}
int printArr(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = %d \n",i, arr[i]);
    }
}

int main(){
    int size,i;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the %d Array Element: ",size);
    for(i=0; i < size; i++){
        scanf("%d",&arr[i]);
    }

    printf("The original array element are: \n");
    printArr(arr,size);

    bubble(arr,size);
    
    printf("\nAfter sorting: \n");
    printArr(arr,size);
    
    return 0;
}