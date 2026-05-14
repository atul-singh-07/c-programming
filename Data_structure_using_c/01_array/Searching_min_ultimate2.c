#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int min=INT_MAX;

    for(int i=0;i<=9;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("Min:%d",min);
    return 0;
}