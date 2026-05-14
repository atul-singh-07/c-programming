#include<stdio.h>
int main(){
    int arr[8]={1,4,5,6,8,6,43,6};
    int max=arr[0];// storing the first element of Array

    for(int i=0;i<=7;i++){
        if(max<arr[i]) max=arr[i];
    }

    printf("Max:%d",max);
    return 0;
}