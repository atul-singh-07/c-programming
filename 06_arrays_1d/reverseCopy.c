// Q: Write a programme to copy the content of 1 array into another in the reverse order.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    // taking input from the user
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // Now, in this loop, we are creating a array brr with reverse value of Arr
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
    }
    // printing brr array
    printf("The New Array brr Contains:");
    for(int i=0;i<=n-1;i++){
        printf("%d ",brr[i]);
    }

    return 0;
}