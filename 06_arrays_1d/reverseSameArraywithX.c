// Write a programme to reverse the same entered array with allowance of using xarray 
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int xarr[n];
    // input the arr array by user
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // storing the reverse of arr in xarr
    for(int i=0;i<=n-1;i++){
        xarr[i]=arr[(n-1)-i];
    }
    // now updating the arr array with the reversed values in xarr array
    for(int i=0;i<=n-1;i++){
        arr[i]=xarr[i];
    }
    // now printing array arr
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}