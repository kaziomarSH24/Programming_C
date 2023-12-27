#include <stdio.h>

int merge(int arr[], int low, int mid, int high){
int i, j, k;
int sl, sr;
sl = mid - low + 1;
sr = high - mid;  
int l[sl], r[sr];

for( i = 0; i < sl; i++){
    l[i] = arr[low+i];
}
for( j = 0; j < sr; j++){
    r[j] = arr[mid+j+1];
}
l[i] = 999;
r[j] = 999;
i = 0;
j = 0;

for(k = low; k <= high; k++){
    if(l[i] <= r[j]){
        arr[k] = l[i];
        i++;
    }else{
        arr[k] = r[j];
        j++;
    }
}
return 0;
}
void merge_st(int arr[], int low, int high){

    if(low < high){
        int mid;
        mid = low + (high-low) /2;
        merge_st(arr, low, mid);
        merge_st(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int n,i;
    printf("Enter Array size: ");
    scanf("%d",&n);
    
    int a[n];
    printf("Enter Array Element: ",n);
    for(i=0; i < n; i++){
        scanf("%d",&a[i]);
    }


    merge_st(a,0,n-1);
    printf("\nAfter sorting: ");
    for(int i = 0; i < n; i++)
        printf("%d ",a[i]);

}