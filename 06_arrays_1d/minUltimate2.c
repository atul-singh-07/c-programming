#include<stdio.h>
#include<limits.h>// using limits.h header file
int main(){
    int arr[5]={1,2,3,4,5};
    int min=INT_MAX;// and the largest number avilable on computers
    for(int i=0;i<=4;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("the minimum value of the array is:%d",min);
    return 0;
}