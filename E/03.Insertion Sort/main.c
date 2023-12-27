#include <stdio.h>

int main(){
    int arr[] = {25,44,36,7,4,14,17,96,200,100};
    int size;
    size = sizeof(arr)/sizeof(arr[0]);
    printf("The original array element are: ");
    for ( int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }

   int i, j, temp;
    for(i=1; i < size; i++){
        j = arr[i];
        temp = i;
        while(temp > 0 && arr[temp-1] > j){
            arr[temp] = arr[temp-1];
            temp--;
        }
        arr[temp] = j;
    }
    printf("\nAfter sorting: ");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}