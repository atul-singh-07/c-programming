#include<stdio.h>
int main(){
    int arr[7]={-10,-40,4,7,3,9,10};
    int max=arr[0];// storing the first element of the array in the max variable

    for(int i=0;i<=6;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("The maximum element of the array is:%d",max);
    return 0;
}
// note: this code is completely valid to all forms of arrays.