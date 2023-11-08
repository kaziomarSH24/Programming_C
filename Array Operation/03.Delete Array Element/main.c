#include <stdio.h>
int main(){
    int a[] = {10,20,30,40,50,60,70,80,90,100}, size;
    size = sizeof(a)/sizeof(a[0]);
    printf("The orginal array element are: \n");
    for ( int i = 0; i < size; i++)
    {
        printf("a[%d]= %d \n",i,a[i]);
    }
    int pos;
    printf("Enter the delete index: ");
    scanf("%d",&pos);
    for (int j = pos+1; j <= size; j++)
    {
        a[j-1] = a[j];
    }
    a[size-1]=0;
    size-= 1;
    printf("The  array element after deletion: \n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]= %d \n",i,a[i]);
    }
    return 0;
}




// int main(){
//     int a[] = {1,3,5,7,8};
//     int k = 3, n = 5;
//     int i,j;
//     printf("The orginal array element are: \n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("a[%d]= %d \n",i,a[i]);
//     }
//     j=k;
//     while (j<n)
//     {
//         a[j-1] = a[j];
//         j+=1;
//     }
//     n-=1;
//     printf("The  array element after deletion: \n");
//     for ( i = 0; i < n; i++)
//     {
//         printf("a[%d]= %d \n",i,a[i]);
//     }
//     return 0;
// }