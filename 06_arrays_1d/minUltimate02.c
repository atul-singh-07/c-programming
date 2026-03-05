// Q: Find the minimum value out of the all elements in the array.
// Method:02

#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={-2,-4,-6,4,9,5,4};
    int min=INT_MAX;
    for(int i=0;i<=6;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("The min value of array is:%d",min);
    return 0;
}
// note: this code is always valid for all type of array inputs