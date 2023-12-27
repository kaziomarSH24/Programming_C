#include <stdio.h>

int part(int a[], int low, int high){
    int pv, i,j;
    pv = a[high];
    i = (low - 1);
    for(j=low; j<= high - 1; j++){
        if(a[j] < pv){
            i++;
            int temp;
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i+1];
    a[i+1] = a[high];
    a[high] = temp;
    return (i+1);

}
void quick(int a[], int low, int high){
    if(low < high){
        int p = part(a, low, high);
        quick(a,low,p-1);
        quick(a,p+1,high);
    }
}

void printa(int a[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ",a[i]);
}
int main(){
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter array element: ");
    for(i=0; i < n; i++){
        scanf("%d",&a[i]);
    }

    quick(a, 0, n-1);
    printf("\nAfter sorting: ");
    for(int i = 0; i < n; i++)
        printf("%d ",a[i]);
}



