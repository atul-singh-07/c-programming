#include<stdio.h>
int main(){
    int arr[5]={1,3,6,8,9};
    int max=-1;// sabse chota number for comparing a array of positive values

    for(int i=0;i<=4;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("The maxinmum value of element in the array arr is:%d",max);
    return 0;
}
// Note: But this code is only valid for an array containing positive values.