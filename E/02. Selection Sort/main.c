#include <stdio.h>
int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];

    printf("Enter the array element: ");
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("The original array element are: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    int i,j, low;
    for ( i = 0; i < n-1; i++)
    {
        low = i;
        for ( j = i+1; j < n; j++)
        {
            if(a[j] < a[low]){
                low = j;
            }
            
        }
        int tamp = a[i];
            a[i] = a[low];
            a[low] = tamp;
    }
    printf("\nAfter sorting: ");
   for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}