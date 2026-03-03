#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,2,3,-5,-7,9,5};
    int max=INT_MIN;// sabse chota number available on computers system
    for(int i=0;i<=6;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("The maximum value of element of array is:%d",max);
    return 0;
}