#include<stdio.h>
int main(){
    int arr[10]={10,2,3,4,5,6,7,8,91,80};
    int min=arr[0];// storing the first element in the min variable

    for(int i=0;i<=9;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("Min:%d",min);
    return 0;
}