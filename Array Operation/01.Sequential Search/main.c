//Sequential search
#include <stdio.h>

int main(){
    int ary[] = {2,3,5,7,9}, item,n,i,j;

        n = sizeof(ary)/sizeof(ary[0]);
        printf("The orginal array element are: \n");

    for ( i = 0; i < n; i++)
    {
        printf("ary[%d]= %d \n",i,ary[i]);
    }
    printf("What number you want to search: ");
    scanf("%d",&item);
    for (j = 0; j < n; j++)
    {
        if(ary[j] == item){}
            break;
    }
    printf("Found Element %d  at position %d", item, j+1);
    return 0;
}