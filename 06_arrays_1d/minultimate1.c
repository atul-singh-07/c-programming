#include<stdio.h>
int main(){
    int arr[5]={6,7,3,4,5};
    int min=arr[0];
    for(int i=1;i<=4;i++){
        if(min>arr[i]) min=arr[i];// the min variable value is changing as per the condition
    }
    printf("The minimum value of the array is:%d",min);
    return 0;
}// note: here we can start the loop from one because we have already stored the first
//        integer of the array