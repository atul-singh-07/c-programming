
// Write a programme to copy the content of 1 array into another in the reverse order.
// The approach of this programme is to create a new array with reverse value.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    // in this loop we are enetering the array
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // now in this loop we are creating a array brr with reverse value of arr
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
    }
    // printing brr array
    for(int i=0;i<=n-1;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}