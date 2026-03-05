// Q: Find the maximum value out of the element in the array. [Method 1]

#include<stdio.h>
int main(){
    int arr[7]={1,4,3,2,5,6,4};
    int max=arr[0];// storing the First element of the array
    for(int i=0;i<=6;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("The maximum value of Element from the array is:%d",max);
    return 0;
}
// Note: This code is valid to array containing any type of elements.

