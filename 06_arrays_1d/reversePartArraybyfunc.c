#include<stdio.h>
void reverse(int arr[], int si, int ei){// si:starting index , ei:ending index
    for(int i=si,j=ei;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    reverse(arr,1,4);// passing array with the index of the array that is needed to be reversed
    // printing the array
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// note: so now by changing the values that are being passed to the fuction we can actually 
//       control the index of array that is to be rotated 