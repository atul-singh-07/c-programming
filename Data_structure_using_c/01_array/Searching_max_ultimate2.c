#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10]={1,2,3,4,999,6,7,8,9,100};
    int max=INT_MIN;// storing the smallest number possible on computers

    for(int i=0;i<=9;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("Max:%d",max);
    return 0;
}