// Q: There is a array  arr[5] take input of all the values and print those values in reverse order.

#include<stdio.h>
int main(){
    // Taking input to the array 
    int arr[5];
    for(int i=0;i<=4;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    // printing the array in reverse by applying loop in reverse iteration
    for(int i=4;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}