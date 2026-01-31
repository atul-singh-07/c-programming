// Find the second largest element in the given array but solving this without limits.h
#include<stdio.h>
int main(){
    int arr[10]={1,23,45,34,35,67,89,6,87,56};
    int max=arr[0];
    int smax=arr[0];
    // calculating max
    for(int i=1;i<=9;i++){
        if(max<arr[i]) max=arr[i];
    }
    // yaha se smax mil jayega neglecting the value of max with condition arr[i]!=max 
    for(int i=1;i<=9;i++){
        if(arr[i]!=max && smax<arr[i]) smax=arr[i];
    }
    printf("The second largest element of the array is:%d",smax);
    return 0;
}