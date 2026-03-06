// Here we have developed a code which is used to input two numbers and swap those numbers 
// using swap function.
#include<stdio.h>
void swap(int arr[]){
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main(){
    int arr[2];
    // Taking input to swap Array
    for(int i=0;i<=1;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Previous Array: %d %d\n",arr[0],arr[1]);
    swap(arr);// Function call

    // Printing Swapped Array
    printf("New Array: %d %d",arr[0],arr[1]);
    return 0;
}