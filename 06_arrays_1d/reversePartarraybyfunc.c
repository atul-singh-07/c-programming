#include<stdio.h>
void reverse(int arr[],int a,int b){
    for(int i=a,j=b;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}
int main(){// reverse part of array from index 1 to index 4 resulting in {1,5,4,3,2,6,7}
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,1,4);// passing array with the index of the array that is needed to be reversed

    // printing array with recersed part in accoradmce to the index during function call
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Note: So now, by changing the values that are being passed to the function during 
//       function call, we can actually control the index of array that is to be rotated.