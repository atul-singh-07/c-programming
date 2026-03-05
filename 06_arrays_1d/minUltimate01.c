// Q: Find the minimum value out of the all elements in the array.
// Method:01
#include<stdio.h>
int main(){
    int arr[5]={1,3,-1,5,8};
    int min=arr[0];
    for(int i=0;i<=4;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("The min value of the array is:%d",min);
    return 0;
}
// note: the code is valid for all type of array inputs