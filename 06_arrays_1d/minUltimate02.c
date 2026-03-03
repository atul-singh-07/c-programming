#include<stdio.h>
#include<limits.h>
int main(){
    int arr[10]={16,2,3,14,50,6,7,8,9,1};
    int min=INT_MAX;// Storingthe sabse bada number available on the computers System
    for(int i=0;i<=9;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("The minimum value of element of the array is:%d",min);
    return 0;
}