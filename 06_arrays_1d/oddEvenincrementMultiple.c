// Given an array of integers, change the value of all odd indexed elements to its second
// multiple and increment all the even index value by 10
#include<stdio.h>
void incrementmultiple(int arr[]){
    for(int i=0;i<=7;i++){
        if(i%2==0) arr[i]=arr[i]+10;// even indexed value are incremented by 10
        else arr[i]=arr[i]*2;//        odd indexed element are multipled by 2
    }
    return;
}
int main(){
    int arr[8]={1,2,3,4,5,6,7,8};
    incrementmultiple(arr);
    // updated array printing
    for(int i=0;i<=7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// note: we have done this question with the help of function and in lecture it is without
//       function now in array question we will try to do question using fuction or simple