#include<stdio.h>
int main(){
    int arr[8]={-1,-6,5,-8,9,7,5,-9};
    // initializing max with the first element of the array
    int max=arr[0];
    for(int i=1;i<=7;i++){// here we can run the loop fron index one as we have already stored the 0index value 
        if(max<arr[i]) max=arr[i];
    }
    printf("The maximum value is:%d",max);
    return 0;
}