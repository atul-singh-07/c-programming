// Q: Writer programme to copy the contents of one array into another in reverse order.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    // Taking input by user
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
// note: This block of code is giving us our desired output, but not in a way what question
// asked us. As in this code, we are printing the array in reverse order. But in real we need
// to create a array in reverse order.