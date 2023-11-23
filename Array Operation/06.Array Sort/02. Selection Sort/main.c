#include <stdio.h>

void selection(int arr[], int n){
    int i,j, min_index;
    for ( i = 0; i < n-1; i++)
    {
        min_index = i;
        for ( j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
            
        }
        int tamp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = tamp;
    }
    
}

void print(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

int main(){
    int n;
    printf("Enter number size of array: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the %d array element: ",n);
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("The orginal array element are: ");
    print(a,n); 
    selection(a,n);
    printf("\nAfter sorting: ");
    print(a,n);
    
}