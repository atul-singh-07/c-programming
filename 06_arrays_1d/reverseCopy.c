// Write a programme to copy the content of 1 array into another in the reverse order.
// The approach of this programme is to display array in reverse order.
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    // entering the array by user
    for(int i=0;i<=n-1;i++){
        printf("Enter element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    // printing the arr array in reverse flow using reverse condition in for loop
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
//OUTPUT

// Enter the size of the array:5
// Enter element1:1
// Enter element2:2
// Enter element3:3
// Enter element4:4
// Enter element5:5
// 5 4 3 2 1 