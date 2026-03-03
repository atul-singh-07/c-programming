#include<stdio.h>
int main(){
    int arr[10]={16,2,3,14,50,6,7,8,9,10};
    int min=arr[0];// Storing the first element of the array
    for(int i=0;i<=9;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("The minimum value of the array is:%d",min);

    return 0;
}