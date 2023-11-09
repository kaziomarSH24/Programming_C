//Delete Duplicate Element from an Array
#include <stdio.h>

int main(){
    int a[] = {10,10,12,13,14,14,15,18,20,20}, size;
    size = sizeof(a)/sizeof(a[0]);
    printf("The orginal array element are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = %d \n",i, a[i]);
    }

    int i,j,k;
    for ( i = 0; i < size; i++)
    {
        for ( j = i+1; j < size; j++)
        {
            if(a[i] == a[j]){
                for ( k = j; k < size; k++)
                {
                    a[k] = a[k+1];
                }
                size--;
                j--;
            }
        }
        
    }
    printf("the final array is: \n");
    for ( i = 0; i < size; i++)
    {
        printf("a[%d] = %d \n",i, a[i]);
    }
    
    return 0;
}