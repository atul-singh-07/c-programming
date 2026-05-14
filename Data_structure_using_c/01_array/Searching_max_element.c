#include<stdio.h>
int main(){
    int arr[8]={1,2,3,10,5,6,7,8};
    int max=-1;// this is always smaller for positives arrays

    for(int i=0;i<=7;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("Max:%d",max);
    return 0;
}