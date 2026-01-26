#include<stdio.h>
#include<limits.h>// here with the help of this header file we can use sabse chota number
int main(){//        existing on computers
    int arr[8]={-1,-6,5,-8,9,7,5,-9};
    int max=INT_MIN;
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The max value of the array is:%d",max);
    return 0;
}