// array Updated
#include <stdio.h>
int main(){
    int a[] = {10,20,30,40,50,60,70,80,90,100}, size;
    size = sizeof(a)/sizeof(a[0]);
    printf("The orginal array element are: \n");
    for ( int i = 0; i < size; i++)
    {
        printf("a[%d]= %d \n",i,a[i]);
    }
    int position, updateValue;
    printf("Enter the position to be update: ");
    scanf("%d",&position);
    printf("\nEnter the value to be update: ");
    scanf("%d",&updateValue);
    for (int j = 0; j <= size; j++)
    {
        if(j==position){
            a[j] = updateValue;
        }
    }
    printf("The  array element after updated: \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]= %d \n",i,a[i]);
    }
    return 0;
}