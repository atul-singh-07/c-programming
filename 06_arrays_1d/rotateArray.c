#include<stdio.h>
// function used to rotate array by passing si:starting index ei:ending index
void reverse(int arr[], int si, int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k=3;
    k=k%7;// for handling large number of k where it is [k=k%n]
    reverse(arr,0,6);//  first:complete array will get rotated
    reverse(arr,0,k-1);// second:then fist 3 element of array will get rotated
    reverse(arr,k,6);// third:then the last remaining element of the array will get rotated
    // printing array
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}