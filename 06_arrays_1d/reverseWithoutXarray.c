// Approach:02 with the help of swapping two number Concept

#include<stdio.h>
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        // looping two variables in one forloop with same swap code
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    // taking the input to the array by user
    for(int i=0;i<=n-1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);// passing array and the size of the array
    // printing the reversed array after function call
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}