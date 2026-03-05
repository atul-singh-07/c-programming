// # Method:02

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={10,-20,30,-40,50,-60,70};
    int max=INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("The max Value from the array is:%d",max);
    return 0;
}// Note: This code is valid for all types of array inputs