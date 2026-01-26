#include<stdio.h>
// note: this code is only valid for positive values array
int main(){
    int arr[8]={9,2,11,13,3,4,8,7};
    int max=-1;// initializing max with negative integer---> sabse chota number
    for(int i=0;i<=7;i++){
        if(max<arr[i]){// comparing the max with arr[i] where the value of max get changed
            max=arr[i];// till the condition get valid
        }
    }
    printf("The maximum value of the array is:%d",max);
    return 0;
}