// # Approach:01 using extra array
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    // Taking input by the user in array arr
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // reversing the array in another array brr
    for(int i=0;i<=n-1;i++){
        brr[i]=arr[(n-1)-i];
    }
    // now entering the reversed array in array arr
    for(int i=0;i<=n-1;i++){
        arr[i]=brr[i];
    }
    // printing the array arr
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}