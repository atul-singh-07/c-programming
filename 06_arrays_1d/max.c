// Q: Find the maximum value out of the elements in the array.

#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int max=-1;// chota number that is always smaller to any Positive number
    for(int i=0;i<=6;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("Maximum value of the array is:%d",max);
}
// Note: This code is only valid for positive values of array.